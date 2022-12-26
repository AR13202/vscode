//1. express installed
//2. bcrypt installed

// const express = require('express');
// const app = express();
// const bcrypt = require('bcrypt');
// const saltRounds = 10;

// const myPass = 'd@ivy01A';
// const inCorrect = 'Man@vGoyal'

// app.get('/', async(req,res)=>{
//     // const salt = await bcrypt.genSalt(saltRounds);
//     // //res.send(salt);
//     // console.log(salt);

//     // const hashedPwd = await bcrypt.hash(myPass,salt);
//     // res.json(hashedPwd);
//     // console.log(hashedPwd);


//     const hashedPwd = await bcrypt.hash(myPass,saltRounds);
//     res.send(hashedPwd);
//     console.log(hashedPwd);

//     const result = await bcrypt.compare(myPass,hashedPwd);
//     console.log(result);
// })
// app.listen(3000);


// //1. Generate salt 2. Generate hashed password
// // Generate salt and Hashed pass together

// app.use(express.json());

// const users = [];
// app.get('/',(req,res)=>{
//     res.send(users);
// })

// app.post('/register',async(req,res)=>{

//     const hashedPwd = await bcrypt.hash(req.body.pwd,saltRounds);
//     const user={
//         myid:req.body.myId,
//         myPass:hashedPwd
//     }
//     users.push(user);
//     res.send('User Registered')
// })
// app.get('/register',(req,res)=>{
//     res.json(users);
// })

// app.post('/login',async(req,res)=>{
//     const result = await bcrypt.compare(req.body.pwd,users[0].myPass);
//     console.log(result);
//     if(result) res.send('Acess Granted');
//     else res.status(404).send('Access Denied');
    
// })

// app.listen(3000);





//import express, jsonwebtoken, dotenv
require('dotenv').config();
const express = require('express');
const app = express();
const jwt = require('jsonwebtoken');

app.use(express.json());

const blogs = [
    {
        id:'tony',
        title:'Post 1'
    },
    {
        id:'neha',
        title:'Post 2'
    }
]
app.get('/blogs',authMiddleware,(req,res)=>{
    console.log(req.user);
    res.json(blogs.filter(blog=>blog.id === req.user.id));
});

app.post('/login',(req,res)=>{
    //Authentication

    
    const id = req.body.id;
    const user={id:id};

    const accessToken = jwt.sign(user,process.env.ACCESS_SECURITY_KEY);
    res.send({accessToken:accessToken});

})

function authMiddleware(req,res,next){
    const authHeaders = req.headers['authorization'];
    //authHeaders = Bearer Token
    const token = authHeaders && authHeaders.split(' ')[1];
    if(token === null) res.sendStatus(401);

    jwt.verify(token,process.env.ACCESS_SECURITY_KEY,(err,user)=>{
        if (err) res.sendStatus(403);
        req.user=user;
        next();
    })
}


app.listen(3000);

































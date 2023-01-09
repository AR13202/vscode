//1. express installed
//2. bcrypt installed

const express = require('express');
const app = express();
const bcrypt = require('bcrypt');
const saltRounds = 10;

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

app.use(express.json());

const users = [];
app.get('/',(req,res)=>{
    res.send(users);
})

app.post('/register',async(req,res)=>{

    const hashedPwd = await bcrypt.hash(req.body.pwd,saltRounds);
    const user={
        myid:req.body.myId,
        myPass:hashedPwd
    }
    users.push(user);
    res.send('User Registered')
})
app.get('/register',(req,res)=>{
    res.json(users);
})

app.post('/login',async(req,res)=>{
    const result = await bcrypt.compare(req.body.pwd,users[0].myPass);
    console.log(result);
    if(result) res.send('Acess Granted');
    else res.status(404).send('Access Denied');
    
})

app.listen(3000);
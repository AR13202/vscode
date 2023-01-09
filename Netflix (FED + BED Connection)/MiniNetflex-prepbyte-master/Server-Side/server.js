const express = require('express');
const { movie_Data } = require('./data');
const app = express();
const cors = require('cors');

app.use(cors());
app.get('/',(req,res)=>{
    res.send('Server has started, check movies on "movie" path');
});

app.get('/movie',(req,res)=>{
    res.send(movie_Data)
});

app.listen(4001,()=>{
    console.log('Sever running on port no - 4001');
})
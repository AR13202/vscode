const strings='Welcome user';

const stringsList = ['Aman','Ashu','Aarti','Bhavish'];

const stringsObj = {
    id:58,
    exp:'2 years'
}
const stringsObjArr = [
    {
        mvie:'WAR',
        img:'' 
    },
    {
        age:48,
        gender:'female' 
    },
    {
        age:18,
        gender:'female' 
    }
]

const stringMethod = (name)=>{
    let list = ['Arun','Bhavika','Kirti'];
    list.push(name);
    return list;
}

const m1=(req,res,next)=>{
    console.log('M1 is called...');
    next();
}
const m2=(req,res,next)=>{
    console.log('M2 is called...');
    next()
}

module.exports = {m1,m2,strings};


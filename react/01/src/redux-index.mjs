import {createStore} from "redux";

const initialState = 0
const rootReducer = (state = initialState,action)=>{
    switch(action.type){
        case 'inc': return state+1;
        case 'dec': return state-1;
        default: return state;
    }
}
const mystore = createStore(rootReducer);
console.log(mystore.getState());

mystore.dispatch({
    type:'inc'
})
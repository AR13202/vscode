import React,{Component} from 'react';
import { CardList } from './components/card-list/card-list.component';
import './App.css';

class App extends Component {
  // constructor(){
  //   super();
  //   this.state={
  //     monsters: []
  //   };
  // }

  // componentDidMount() {
  //   fetch('https://jsonplaceholder.typicode.com/users')
  //   .then(response => response.json())
  //   .then(users => this.setState({monsters:users}));
  // }
  state={
    asd:"",
    asdf:"",
    asdg:"",
    qwe:false
  }
  isSubmit(e){
    e.preventDefault()
    this.setState({
      qwe:true
    })
  }
  change(e){
    console.log(e);
    this.setState({asd:e.target.value})
  }
  change1(e){
    console.log(e);
    this.setState({asdf:e.target.value})
  }
  change2(e){
    console.log(e);
    this.setState({asdg:e.target.value})
  }
  render(){
    return (
      <div className="App">
        {/* <CardList name="aryan">
        {
          this.state.monsters.map(
            monsters => <h1 key={monsters.id}>{monsters.name}</h1>
            )
        }
        </CardList> */}
        <div>
          <form>
            <input id='asd' onChange={(event)=>this.change(event)}/>
            <input id='asdf' onChange={(event)=>this.change1(event)}/>
            <input id='asdg' onChange={(event)=>this.change2(event)}/>
            <button onClick={(e)=>this.isSubmit(e)}>submit</button>
          </form>
          {this.state.qwe?<h2>
            {this.state.asd}
            {this.state.asdf}
            {this.state.asdg}
          </h2>:null}
          </div>
      </div>
    );
  }
}

export default App;

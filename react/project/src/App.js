import './App.css';
import Header from'./components/header/header';
import Tabs from'./components/tabs/tabs';
import Main from './components/main-page/main-page';
import Latest from './components/latest/latest';
import Articles from './components/latest-articles/latest-articles';
import Stories from './components/latest-stories/latest-stories';
function App() {
  return (
    <div className="App">
        <div className="grid-head">
          <Header />
        </div>
        <div className="grid-tab">
          <Tabs />
        </div>
        <div className="grid-main">
          <Main />
        </div>
        <div className="grid-latest">
          <Latest />
        </div>
        <div className="grid-content">
          <Articles />
        </div>
        <div className="grid-stories">
          <Stories />
        </div>
    </div>
  );
}

export default App;

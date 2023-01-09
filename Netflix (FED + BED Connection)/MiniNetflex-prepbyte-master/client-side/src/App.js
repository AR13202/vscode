import 'bootstrap/dist/css/bootstrap.min.css';
import NavScrollExample from './component/Navbar1';
import Home from './Pages/Home';
import Player from './Pages/Player';
import {Routes, Route, BrowserRouter} from 'react-router-dom';
import Notfound from './Pages/Notfound';



function App() {
  return (
    <BrowserRouter>
    <NavScrollExample/>
    <Routes>
      <Route path='/' element={ <Home/> } />
      <Route path='/player/:moviename' element={<Player/>} />
      <Route path='*' element={<Notfound/>} />
    </Routes>
    </BrowserRouter>
  );
}

export default App;

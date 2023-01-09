import React from 'react';
import {NavLink} from 'react-router-dom';
const Notfound = () => {
    return (
        <div className='d-flex align-items-center justify-content-center'>
                <h1> Page Not found 😥</h1>
                <NavLink to='/' className='text-dark text-decoration-none' > Let me guide you to Home page </NavLink>
        </div>
    );
}

export default Notfound;

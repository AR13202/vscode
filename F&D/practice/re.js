import React from 'react';
import ReactDOM from 'react-dom/client';

export default function Football() {
    const shoot = () => {
        alert("Great Shot!");
    }

    return (
        <button onClick={shoot}>Take the shot!</button>
    );
}
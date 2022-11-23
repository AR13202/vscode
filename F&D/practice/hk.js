import { useState, useEffect } from "react";

export default function Timer() {
    const [count, setCount] = useState(100);

    useEffect(() => {
        setTimeout(() => {
            setCount((count) => count + 1);
        },1000);
    },[]);

    return <h1>I have rendered {count} times!</h1>;
}




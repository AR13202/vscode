import React from 'react';
import {CssBaseline, Grid} from '@material-ui/core';
import Header from './components/header/header';
import List from './components/list/list';
import Map from './components/Map/Map';

const App = () => {
    return ( 
        <>
            <CssBaseline />
            <Header />
            <Grid container spaceing={3} style={{width: '100%'}}>
                <Grid item xs={12} md={4}>
                    <List />
                </Grid>
                <Grid item xs={12} md={6}>
                    <Map />
                </Grid>
            </Grid>
        </>
    );
}

export default App;
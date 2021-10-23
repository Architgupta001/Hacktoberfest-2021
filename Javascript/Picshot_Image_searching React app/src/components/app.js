import React from 'react';
import unsplash from '../api/unsplash';
import SearchBar from './searchbar'
import ImageList from '../components/images';
import "./images.css"

class App extends React.Component {

    state = {images : []};

    componentDidMount() {
        this.onSearchSubmit("cars");
    }

   onSearchSubmit =  async (term) =>{
  
      const response = await unsplash.get("/search/photos",{
            params : {query : term},
        })

        this.setState({images : response.data.results});

    }

    render()
    {
    return(
        <div className=" ui container" >
            <SearchBar onSubmit = {this.onSearchSubmit}  />
            <ImageList images = {this.state.images} />
        </div>
    
    );

    }
}

export default App;
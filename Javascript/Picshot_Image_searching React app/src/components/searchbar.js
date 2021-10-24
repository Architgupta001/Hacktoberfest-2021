import React from 'react';
import "./images.css"



class SearchBar extends React.Component {


    state = {term : 'cars'};

    /* onInputChange(event){
        console.log(event.target.value);
     }
    onInputClicked()
    {
        console.log("Input is clicked");
    }
    */
  
    onFormSubmit = event =>{    // arrow function automatically binds 
        event.preventDefault();
        this.props.onSubmit(this.state.term);
    }

    render()
    {
        return (
        <div id="top" className=" ui  segment" >
            <div  className="logo"></div>
            <form onSubmit={this.onFormSubmit} className="ui form">
                <div className="field ms-auto" >
                <input style={{borderRadius:"20px"}} type ="text" value= {this.state.term} onChange={e => this.setState({term : e.target.value})}></input>
                </div>
            </form>
        </div>);
    }
}

export default SearchBar;
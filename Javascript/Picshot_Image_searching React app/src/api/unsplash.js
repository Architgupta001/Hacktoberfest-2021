import axios from "axios";

export default axios.create({
    baseURL : "https://api.unsplash.com",
    headers : {
        Authorization: "Client-ID O-mT_OsSnkFPUNX3Nbop-OitInGwKr_N2VxpNL24vCs"
    }
});
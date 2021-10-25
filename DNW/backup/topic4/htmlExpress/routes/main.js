// The main.js file of your application
module.exports = function (app) {
    app.get("/", function (req, res) {
        res.render("index.html", {
            title: "Dynamic title Bro"
        });
    });
    app.get("/search", function (req, res) {
        res.render("search.html");
    });
    app.get("/search-result", function (req, res) {
    //searching in the database
        res.send("This is the keyword you entered: " + req.query.keyword + "<br>" + "This is the result of the search: "); 
    });
    app.get("/register", function (req,res) {
        res.render("register.html");
    });
    app.post("/registered", function (req,res) {
        // saving data in database
     res.send(req.body)
    });
}
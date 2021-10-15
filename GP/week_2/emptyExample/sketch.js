
var lines = [];
function setup() {
    createCanvas(900, 600);
    background(0);
    for(var i = 0; i < 100;i++){
        lines[i] = new MouseTracer();
    }
}

function draw() {
    for(var i = 0; i < 100;i++){
        lines[i].run();
    }
}

class MouseTracer{
    constructor(){
        this.velocity = new createVector(random(-2, 2),random(-2, 2));
        this.location = new createVector(width/2, height/2);
        this.prevLocation = new createVector(width/2, height/2);
        this.acceleration = new createVector(0, 0);
        this.maxLimit = random(4.5, 5);
        }
    run(){
        this.draw();
        this.move();
    }
    draw(){
        stroke(random(100,255),random(100,255),random(100,255));
        line(this.location.x, this.location.y,this.prevLocation.x, this.prevLocation.y);
        this.prevLocation = this.location.copy();
    }
    move(){
        var mouse = createVector(mouseX, mouseY);
        var dir = p5.Vector.sub(mouse, this.location);
        dir.normalize()
        dir.mult(0.5)
        this.acceleration = dir;
        this.velocity.add(this.acceleration);
        this.velocity.limit(this.maxLimit);
        this.location.add(this.velocity);
    }
}
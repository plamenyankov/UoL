var speed;

function setup() {
    createCanvas(900, 700);
}

function draw() {
    background(0);
    speed = frameCount;

    push();
    translate(width/2, height/2);

    celestialObj(color(255,150,0), 200); // SUN


    pop();

    push();
    translate(500, 500);
    rotate(radians(speed))
    celestialObj(color(0,0,255), 80); // SUN


    pop();
}

function celestialObj(c, size){
    strokeWeight(5);
    fill(c);
    stroke(0);
    ellipse(0, 0, size, size);
    line(0, 0, size/2, 0);
}


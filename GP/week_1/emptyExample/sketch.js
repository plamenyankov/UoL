function setup() {
    createCanvas(900, 600);
    background(0);
}

function draw() {
    background(0);
    fill(255);
    rect(0, 0, 50, 50);

    fill(125);
    translate(200,100);
    rotate(radians(45));
    rect(0,0,50,50);
}

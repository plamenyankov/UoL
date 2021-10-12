function setup() {
    createCanvas(900, 600);
    background(0);
}

function draw() {
    background(0);
    fill(255);
    translate(mouseX, mouseY);
    ellipse(0, 0, 50, 50);
}

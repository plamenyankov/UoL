var distance;

function setup() {
    createCanvas(900, 800, WEBGL);
    randomSeed(1);
}

function draw() {
    background(125);
    camera(800, -600, 800,0,0,0,0,1,0)
    angleMode(DEGREES);
    fill(255);
    normalMaterial();
    noStroke();
    strokeWeight(2);
    for(var j = -400; j <= 400; j+= 50){
        for(var i = -400; i <= 400; i+= 50){

            push();
            translate(j,0,i);
            box(50);
            pop();
        }
    }

}

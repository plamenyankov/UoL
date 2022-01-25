var video;

function setup() {
    createCanvas(640 * 2, 480);
    pixelDensity(1);
    video = createCapture(VIDEO);
    video.hide();
    noStroke();
    angleMode(DEGREES);
}

function draw() {
    background(0);
    image(video, 0, 0);

    video.loadPixels();

    translate(640, 0);
    var arcSize = 20;
    translate(arcSize / 2, arcSize / 2);
    var p = video.pixels;
    for (var x = 0; x < video.width; x++) {
        for (var y =0; y < video.height;y++) {

            // your code here
            var pixelBrightness = p[(x*video.width + y)*4]
            push();
            translate(x, y);
            var theta = map(pixelBrightness, 0, 255, 0, 360);
            rotate((180 - theta) / 2);
            arc(0, 0, arcSize, arcSize, 0, theta);
            pop();
        }
    }
}

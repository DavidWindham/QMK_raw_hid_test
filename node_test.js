var HID = require('node-hid');

var keyboard = new HID.HID(61166, 1);

let bufferedContent = Buffer.from('testthis');
const outputLength = 32;
const bufferedOutput = Buffer.concat([buf], outputLength);
console.log("Buffered output:", bufferedOutput);

//let uint_test = Uint32Array.from("test");
//console.log("uint_test:", uint_test);


function writeToHID(){
	//console.log("Writing [1, 1]");
	//keyboard.write([0, 0]);

	console.log("Writing concat buffer");
	keyboard.write(bufferedOutput);

	//console.log("Writing uint_test");
	//keyboard.write(uint_test);

	//console.log("Writing array[32]);
	//keyboard.write([74, 65, 73, 74, 79, 74, 68, 69, 73, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00]);
	
	console.log("Written");
	setTimeout(() => {writeToHID()}, 1000);
}

writeToHID();
console.log("Setup complete");

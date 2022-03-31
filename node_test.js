var HID = require('node-hid');

var keyboard = new HID.HID(61166, 1);

function writeToHID(){
	keyboard.write([0, 0]);
	console.log("Written");
	setTimeout(() => {writeToHID()}, 1000);
}

writeToHID();

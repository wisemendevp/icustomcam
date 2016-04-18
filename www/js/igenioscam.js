var igenioscam = {
getPicture: function(success, failure){
    cordova.exec(success, failure, "igenioscam", "openCamera", []);
}
};
module.exports = igenioscam;

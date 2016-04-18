

#import <Cordova/CDV.h>

// Import the CustomCameraViewController class
#import "igenioscamController.h"

@interface igenioscam : CDVPlugin

// Cordova command method
-(void) openCamera:(CDVInvokedUrlCommand*)command;

// Create and override some properties and methods (these will be explained later)
-(void) capturedImageWithPath:(NSString*)imagePath;
@property (strong, nonatomic) igenioscamController* overlay;
@property (strong, nonatomic) CDVInvokedUrlCommand* latestCommand;
@property (readwrite, assign) BOOL hasPendingOperation;

@end
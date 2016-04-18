//
//  igenioscamController.h
//  igenioscam
//
//  Created by Wisemen on 18/04/2016.
//
//

#import <UIKit/UIKit.h>

// We can't import the CustomCamera class because it would make a circular reference, so "fake" the existence of the class like this:
@class igenioscam;

@interface igenioscamController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (strong, nonatomic) IBOutlet UIView *header;

// Action method
-(IBAction) takePhotoButtonPressed:(id)sender forEvent:(UIEvent*)event;

-(IBAction) cancel:(id)sender forEvent:(UIEvent*)event;

// Declare some properties (to be explained soon)
@property (strong, nonatomic) igenioscam* plugin;
@property (strong, nonatomic) UIImagePickerController* picker;

@end
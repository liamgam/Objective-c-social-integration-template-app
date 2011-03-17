//
//  facebookDemo1ViewController.h
//  facebookDemo1
//
//  Created by Wes Duff on 3/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Facebook.h"
#import "facebookDemo1AppDelegate.h"

/**
 DIALOG info
*/
#define IMAGEURLFORDIALOG @"http://www.wesduff.com/facebook_apps/demo/graffitie.png"
#define URLFORDIALOGIMAGELINK @"http://www.wesduff.com/p/"
#define NAMEFORDIALOG @"DIALOG name goes here"
#define DIALOGCAPTION @"Dialog caption text goes here"
#define DIALOGDESCRIPTION @"Dialog description goes here"
#define DIALOGDESCRIPTIONHREF @"http://www.wesduff.com/p"

@interface facebookDemo1ViewController : UIViewController <FBRequestDelegate, FBDialogDelegate>{
    
    UIButton *getUserInfoButton;
    UIButton *getFriendsCheckinButton;
    facebookDemo1AppDelegate *appDelegate;
    Facebook *facebook;
}
- (IBAction)getUserInfo:(id)sender;
- (IBAction)getFriendsCheckins:(id)sender;
@property (nonatomic, retain) IBOutlet UIButton *getUserInfoButton;
@property (nonatomic, retain) IBOutlet UIButton *getFriendsCheckinButton;
@property (nonatomic, retain) facebookDemo1AppDelegate *appDelegate;
@property (nonatomic, retain) Facebook *facebook;


@end

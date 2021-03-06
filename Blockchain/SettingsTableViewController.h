//
//  SettingsTableViewController.h
//  Blockchain
//
//  Created by Kevin Wu on 7/13/15.
//  Copyright (c) 2015 Qkos Services Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SettingsTableViewController : UITableViewController
@property (weak, nonatomic) UIViewController *alertTargetViewController;

- (void)reload;

- (void)verifyEmailTapped;
- (void)linkMobileTapped;
- (void)storeHintTapped;
- (void)changeTwoStepTapped;
- (void)blockTorTapped;

@end

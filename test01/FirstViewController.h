//
//  FirstViewController.h
//  test01
//
//  Created by Patsicha Tongteeka on 7/12/56 BE.
//  Copyright (c) 2556 Patsicha Tongteeka. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
- (IBAction)login:(id)sender;
@property (weak, nonatomic) IBOutlet UINavigationItem *Navigate;

@end

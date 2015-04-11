//
//  MessageTableViewController.h
//  iPhoneXMPP
//
//  Created by Justin Murphy on 4/7/15.
//  Copyright (c) 2015 XMPPFramework. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MessageTableViewController : UITableViewController

@property (strong, nonatomic) IBOutlet UILabel *LabelMessage;

@property (strong, nonatomic) IBOutlet UITextField *TextboxMessage;

@property (strong, nonatomic) IBOutlet UIButton *SubmitMessageButton;

@end

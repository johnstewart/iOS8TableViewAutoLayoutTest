//
//  MyTableViewController.h
//  iOS8TableViewAutoLayoutTest
//
//  Created by John Stewart on 8/13/15.
//  Copyright © 2015 John Stewart. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyTableViewController : UITableViewController
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *myLabelHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *myImageViewHeightConstraint;

@end

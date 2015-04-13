//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Jovan Stankovic on 4/13/15.
//  Copyright (c) 2015 JS Softworks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


//
//  DetailViewController.h
//  anonymous
//
//  Created by PaPer Li on 2014/7/3.
//  Copyright (c) 2014年 PaPer Li. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

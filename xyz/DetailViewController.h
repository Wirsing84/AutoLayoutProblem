//
//  DetailViewController.h
//  xyz
//
//  Created by Chris Chard on 26.09.13.
//  Copyright (c) 2013 Chris Chard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

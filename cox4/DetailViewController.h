//
//  DetailViewController.h
//  cox4
//
//  Created by Student on 3/26/15.
//  Copyright (c) 2015 sdsu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

//
//  DetailViewController.h
//  jenkinsiostest
//
//  Created by ntotani on 2014/03/10.
//  Copyright (c) 2014年 uracon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

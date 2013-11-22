//
//  PostPad_DetailViewController.h
//  PostPad
//
//  Created by Dilwoar Hussain on 22/11/2013.
//  Copyright (c) 2013 MoreThan90. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PostPad_DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

//
//  PostPad_MasterViewController.h
//  PostPad
//
//  Created by Dilwoar Hussain on 22/11/2013.
//  Copyright (c) 2013 MoreThan90. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PostPad_DetailViewController;

#import <CoreData/CoreData.h>

@interface PostPad_MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) PostPad_DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

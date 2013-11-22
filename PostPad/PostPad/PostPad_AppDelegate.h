//
//  PostPad_AppDelegate.h
//  PostPad
//
//  Created by Dilwoar Hussain on 22/11/2013.
//  Copyright (c) 2013 MoreThan90. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PostPad_AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

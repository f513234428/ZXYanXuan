//
//  AppDelegate.h
//  ZXYanXuan
//
//  Created by Dison on 17/10/25.
//  Copyright © 2017年 Dison. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


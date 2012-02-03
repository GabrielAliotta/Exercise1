//
//  Exercise1AppDelegate.h
//  Exercise1
//
//  Created by Gabriel Aliotta on 2/3/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Exercise1ViewController;

@interface Exercise1AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Exercise1ViewController *viewController;

@end

#import <UIKit/UIKit.h>

@class samplemapViewController;

@interface samplemapAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    samplemapViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet samplemapViewController *viewController;

@end



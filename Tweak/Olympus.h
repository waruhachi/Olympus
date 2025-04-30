#import <UIKit/UIKit.h>
#import <Cephei/HBPreferences.h>
#import <QuartzCore/QuartzCore.h>
#import <Foundation/Foundation.h>

#import "Headers/CSBehavior.h"
#import "Headers/CSComponent.h"

HBPreferences *preferences = nil;

BOOL enabled;
BOOL appLabels;
BOOL allowTodayView;

double launchTime;
NSTimer *launchTimer;
NSArray *appBundleIds;

@interface SBLockScreenManager

+ (id)sharedInstance;
- (BOOL)unlockUIFromSource:(int)arg1 withOptions:(id)arg2;

@end

@interface UIApplication ()

- (BOOL)launchApplicationWithIdentifier:(NSString *)arg0 suspended:(BOOL)arg1;

@end

@interface CSAppearance

- (void)addComponent:(id)arg0;

@end

@interface CSPageViewController : UIViewController

- (BOOL)authenticated;
- (id)requestedDismissalSettings;
- (NSInteger)requestedDismissalType;
- (void)willTransitionToVisible:(BOOL)arg0;
- (void)didTransitionToVisible:(BOOL)arg0;

@end

@interface CSCoverSheetViewController : UIViewController
@end

@interface OlympusPageViewController : CSPageViewController

@property(nonatomic, retain) UILabel *appLabel;
@property(nonatomic, retain) NSString *bundleID;
@property(nonatomic, retain) UIImageView *appIconView;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;

- (void)launchApp;
- (void)setColor:(UIColor *)arg0;

@end

@interface LSApplicationProxy : NSObject

+ (id)applicationProxyForIdentifier:(id)arg1;
- (NSString *)localizedNameForContext:(id)arg1;

@end


@interface UIImage (Olympus)

+ (instancetype)_applicationIconImageForBundleIdentifier:(NSString *)bundleID format:(int)formate scale:(CGFloat)scale;

@end

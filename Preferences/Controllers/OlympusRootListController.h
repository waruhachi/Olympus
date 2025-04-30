@import Cephei;
@import CepheiPrefs;

#import <roothide.h>
#import <Preferences/PSListController.h>

@interface OlympusRootListController : PSListController

@property (nonatomic, retain) UIView *headerView;
@property(nonatomic, retain) UIBarButtonItem *respringButton;

- (void)discord;
- (void)website;
- (void)respring;
- (void)sourceCode;

@end

#ifndef CSCOMPONENT_H
#define CSCOMPONENT_H

@class UIColor, NSString, _UILegibilitySettings, NSNumber, UIView;

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface CSComponent : NSObject <NSCopying>

@property(nonatomic) CGFloat alpha;
@property(retain, nonatomic) UIColor *color;
@property(nonatomic) NSInteger flag;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(copy, nonatomic) NSString *identifier;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) CGPoint offset;
@property(nonatomic) NSInteger priority;
@property(nonatomic) NSUInteger properties;
@property(copy, nonatomic) NSString *string;
@property(nonatomic) NSInteger type;
@property(retain, nonatomic) NSNumber *value;
@property(retain, nonatomic) UIView *view;

+ (id)background;
+ (id)componentWithType:(NSInteger)arg0;
+ (id)controlCenterGrabber;
+ (id)dateView;
+ (id)footerCallToActionLabel;
+ (id)footerStatusLabel;
+ (id)homeAffordance;
+ (id)pageContent;
+ (id)pageControl;
+ (id)poseidon;
+ (id)proudLock;
+ (id)quickActions;
+ (id)scalableContent;
+ (id)slideableContent;
+ (id)statusBar;
+ (id)statusBarBackground;
+ (id)statusBarGradient;
+ (id)tinting;
+ (id)wallpaper;
+ (id)whitePoint;
- (BOOL)hasValueForProperty:(NSUInteger)arg0;
- (BOOL)isEqual:(id)arg0;
- (NSUInteger)hash;
- (id)color:(id)arg0;
- (id)copyWithZone:(struct _NSZone *)arg0;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg0;
- (id)descriptionWithMultilinePrefix:(id)arg0;
- (id)flag:(NSInteger)arg0;
- (id)hidden:(BOOL)arg0;
- (id)identifier:(id)arg0;
- (id)init;
- (id)legibilitySettings:(id)arg0;
- (id)offset:(struct CGPoint)arg0;
- (id)priority:(NSInteger)arg0;
- (id)string:(id)arg0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)value:(id)arg0;
- (id)view:(id)arg0;
- (void)resetAllProperties;

@end

#endif

#ifndef CSBEHAVIOR_H
#define CSBEHAVIOR_H

@class NSString;

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface CSBehavior : NSObject

@property(readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property(readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(nonatomic) NSInteger idleTimerDuration;
@property(nonatomic) NSInteger idleTimerMode;
@property(nonatomic) NSInteger idleWarnMode;
@property(nonatomic) NSInteger notificationBehavior;
@property(nonatomic) NSInteger proximityDetectionMode;
@property(nonatomic) NSUInteger restrictedCapabilities;
@property(nonatomic) NSInteger scrollingStrategy;
@property(readonly) Class superclass;

+ (id)behavior;
+ (id)behaviorForProvider:(id)arg0;
- (BOOL)areRestrictedCapabilities:(NSUInteger)arg0;
- (BOOL)isEqual:(id)arg0;
- (BOOL)isEqualToBehavior:(id)arg0;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg0;
- (id)descriptionWithMultilinePrefix:(id)arg0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)addRestrictedCapabilities:(NSUInteger)arg0;
- (void)conformsToCSBehaviorProviding;
- (void)removeRestrictedCapabilities:(NSUInteger)arg0;
- (void)reset;
- (void)unionBehavior:(id)arg0;

@end

#endif

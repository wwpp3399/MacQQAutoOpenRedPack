//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXPopoverController.h"

#import "TXPopoverControllerDelegate.h"

@class NSString, NSTextField, TXHoverButton;

@interface ScheduleCreatedTipsPopController : TXPopoverController <TXPopoverControllerDelegate>
{
    NSTextField *_tipText;
    TXHoverButton *_closeBtn;
    int _type;
}

+ (id)sharedScreenShareButtonPop;
+ (id)sharedVoiceInputMovedPop;
+ (id)sharedOATemplatePop;
+ (id)sharedOATabPop;
+ (id)sharedGroupOAAlertPop;
+ (id)sharedOAPop;
+ (id)sharedWidgetPop;
+ (id)sharedTabPop;
- (void).cxx_destruct;
- (void)closeIfNeeded;
- (void)addNotificationObserverIfNeeded;
- (void)showBelowView:(id)arg1 yOffset:(int)arg2;
- (void)showBelowView:(id)arg1;
- (void)showAboveView:(id)arg1;
- (void)closeMe;
- (void)updateSizeofContent:(id)arg1;
- (void)setTips:(id)arg1;
- (void)setTips:(id)arg1 contentView:(id)arg2;
- (void)onCloseButtonClicked:(id)arg1;
- (id)createTipsLeabel:(int)arg1;
- (id)initWithType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


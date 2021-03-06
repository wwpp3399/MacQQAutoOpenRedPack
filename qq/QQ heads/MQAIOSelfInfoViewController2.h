//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSMenuDelegate.h"

@class NSButton, NSPopUpButton, NSString;

@interface MQAIOSelfInfoViewController2 : NSViewController <NSMenuDelegate>
{
    unsigned long long _status;
    NSButton *_avatarButton;
    NSPopUpButton *_statusPopUpButton;
}

- (void).cxx_destruct;
- (void)showSelfProfile:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)handleContactEvent:(id)arg1;
- (void)handleSelfIMStatusDidChange:(id)arg1;
- (void)refreshSelfAvatar;
- (void)refreshSelfAvatarRefresh:(BOOL)arg1;
- (void)handleSelfAvatarChanged:(id)arg1;
- (id)getAvtarImageRefresh:(BOOL)arg1;
- (void)refreshSelfStatus;
- (void)setStatus:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


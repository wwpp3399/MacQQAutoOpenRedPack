//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSProgressIndicator, NSTextField;

@interface NewVersionCheck : NSWindowController
{
    NSButton *leftButton;
    NSButton *rightButton;
    int m_CheckResult;
    NSTextField *headLabel;
    NSTextField *detailLabel;
    NSProgressIndicator *progressIndicator;
}

+ (id)sharedInstance;
@property(nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic) NSTextField *detailLabel; // @synthesize detailLabel;
@property(nonatomic) NSTextField *headLabel; // @synthesize headLabel;
- (void).cxx_destruct;
- (void)setStatus:(int)arg1;
- (void)onRightButtonClicked:(id)arg1;
- (void)onLeftButtonClicked:(id)arg1;
- (void)awakeFromNib;

@end


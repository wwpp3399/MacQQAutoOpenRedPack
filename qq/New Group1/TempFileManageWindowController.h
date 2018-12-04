//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "CAAnimationDelegate.h"
#import "MQTempFileManagerDelegate.h"

@class MQTemporaryFileManager, NSButton, NSImageView, NSString, NSTextField, NSView, TXHoverButton;

@interface TempFileManageWindowController : NSWindowController <MQTempFileManagerDelegate, CAAnimationDelegate>
{
    NSView *_normalView;
    NSView *_finishedView;
    NSTextField *_finishedInfo;
    NSTextField *_infoShowAtTop;
    NSTextField *_titleOfBox;
    NSTextField *_infoFromBuddy;
    NSTextField *_infoFromGroupNDisc;
    NSButton *_buttonCleanUp;
    NSButton *_btSelectFileFromBuddy;
    NSButton *_btSelectFileFromOthers;
    NSTextField *_titleOfComplete;
    TXHoverButton *_buttonOpenDir;
    NSImageView *_animation;
    NSImageView *_animationBg;
    BOOL _bStoped;
    BOOL _bNeedUpdateProgress;
    MQTemporaryFileManager *_tempFileMgr;
}

+ (BOOL)hasInstance;
+ (id)shareInstance;
- (void).cxx_destruct;
- (void)_saveCheckBoxState;
- (void)_loadSavedCheckBoxState;
- (id)_getTempFilePath;
- (void)_replaceCurrentViewWithFinishedView;
- (void)_showAllCleanUpWorksFinishedInfoWithSizeOfFiles:(float)arg1;
- (void)_willDeleteTempFile;
- (void)allCleanUpWorksFinishedWithSizeOfFiles:(float)arg1;
- (void)changeScanWorksFinishedInfo;
- (void)allScanTempFileWorksFinished;
- (void)groupNDiscussInfoChanged:(unsigned long long)arg1 size:(float)arg2;
- (void)buddyInfoChanged:(unsigned long long)arg1 size:(float)arg2;
- (void)deleteTempFileWithFlag:(id)arg1;
- (BOOL)needUserDecide;
- (void)OnClickCheckBox:(id)arg1;
- (void)OnClickOK:(id)arg1;
- (void)OnClickDeleteTempFile:(id)arg1;
- (void)OnClickOpenTempFile:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)cancelAllWorks;
- (void)QuitAlertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (BOOL)windowShouldClose:(id)arg1;
- (void)awakeFromNib;
- (void)_updateInfo;
- (void)onUpdateinfo;
- (void)scanTempFile;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

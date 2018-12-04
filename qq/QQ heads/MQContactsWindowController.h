//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "MQContactsViewControllerDelegate.h"

@class MQContactsViewController, MQSessionID, NSImageView, NSSearchField, NSString, NSTextField, NSView, NSWindow, TXColorView, TXHoverButton, TXPlaceholderTextView;

@interface MQContactsWindowController : NSWindowController <MQContactsViewControllerDelegate>
{
    MQContactsViewController *_contactViewController;
    MQSessionID *_sessionId;
    unsigned long long _deviceType;
    id <MQContactsWindowControllerDelegate> _delegate;
    NSString *_shareType;
    NSString *_uploadFilePath;
    NSString *_url;
    NSSearchField *_searchField;
    TXColorView *_rightContainer;
    TXColorView *_leftContainer;
    TXPlaceholderTextView *_attTextField;
    NSTextField *_toTextField;
    NSImageView *_selectedImgView;
    NSTextField *_selectedNameTextField;
    NSView *_contactsView;
    TXHoverButton *_cancelBtn;
    TXHoverButton *_comfireBtn;
    NSWindow *_errorWindow;
}

+ (id)shareContactsWindow;
@property __weak NSWindow *errorWindow; // @synthesize errorWindow=_errorWindow;
@property TXHoverButton *comfireBtn; // @synthesize comfireBtn=_comfireBtn;
@property TXHoverButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property NSView *contactsView; // @synthesize contactsView=_contactsView;
@property NSTextField *selectedNameTextField; // @synthesize selectedNameTextField=_selectedNameTextField;
@property NSImageView *selectedImgView; // @synthesize selectedImgView=_selectedImgView;
@property NSTextField *toTextField; // @synthesize toTextField=_toTextField;
@property TXPlaceholderTextView *attTextField; // @synthesize attTextField=_attTextField;
@property TXColorView *leftContainer; // @synthesize leftContainer=_leftContainer;
@property TXColorView *rightContainer; // @synthesize rightContainer=_rightContainer;
@property NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *uploadFilePath; // @synthesize uploadFilePath=_uploadFilePath;
@property(copy, nonatomic) NSString *shareType; // @synthesize shareType=_shareType;
@property(nonatomic) __weak id <MQContactsWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateSelectedItem:(id)arg1;
- (void)updateDeviceType:(id)arg1;
- (void)resetSelectedItem;
- (void)didSelectedFolderItem:(id)arg1;
- (void)didSelectedContactItem:(id)arg1;
- (void)userDataReport;
- (void)openAIO;
- (void)sendUrl;
- (void)sendFile;
- (void)onSend:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)addContactsViewController;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (void)showContactSelectFromWindow:(id)arg1 shareType:(id)arg2 uploadFilePath:(id)arg3 shareUrl:(id)arg4;
- (void)showContactSelectWindow:(id)arg1 uploadFilePath:(id)arg2 shareUrl:(id)arg3;
- (void)showContactSelectWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

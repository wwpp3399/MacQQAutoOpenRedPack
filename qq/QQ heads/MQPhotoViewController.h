//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MQLongPressButtonDelegate.h"
#import "MQOCRInteractiveDelegate.h"
#import "MQPhotoAccessoryViewDelegate.h"
#import "MQPhotoEventDelegate.h"
#import "MQPhotoFileDelegate.h"

@class MQFlippedView, MQLongPressButton, MQMoveWindowView, MQPhotoAccessoryView, MQPhotoLocationView, MQPhotoOCRController, MQPhotoView, NSImageView, NSLayoutConstraint, NSMutableArray, NSScrollView, NSString, NSTextField, NSTrackingArea, NSView, NSWindow, TXColorView, TXHoverButton;

@interface MQPhotoViewController : NSViewController <MQLongPressButtonDelegate, MQPhotoEventDelegate, MQPhotoFileDelegate, MQPhotoAccessoryViewDelegate, MQOCRInteractiveDelegate>
{
    BOOL _is1b1;
    BOOL _viewDidShow;
    unsigned long long tempShowState;
    BOOL _topBottomBarShow;
    BOOL _hasOpen;
    unsigned long long _showState;
    unsigned long long _OCRState;
    id <MQPhotoViewControllerDelegate> _delegate;
    long long _currentIndex;
    TXColorView *_toolEeffectContrainer;
    MQMoveWindowView *_effectContainer;
    MQMoveWindowView *_topView;
    NSTextField *_nameLabel;
    NSScrollView *_myScrollView;
    TXColorView *_titleContainer;
    MQPhotoView *_showenView;
    MQFlippedView *_OCRView;
    TXHoverButton *_previousButton;
    TXHoverButton *_nextButton;
    TXColorView *_previousView;
    TXColorView *_nextView;
    MQPhotoLocationView *_indicaterView;
    NSLayoutConstraint *_indicateWidthConstraint;
    NSLayoutConstraint *_indicateHeightConstraint;
    NSLayoutConstraint *_toolBarWidth;
    NSLayoutConstraint *_collectButtonWidth;
    NSLayoutConstraint *_collectBtnLeading;
    NSLayoutConstraint *_collectBtnTariling;
    NSWindow *_OCRToastWindow;
    TXColorView *_OCRScanningToast;
    NSTextField *_OCRScanningTitle;
    NSImageView *_OCRJuHua;
    TXHoverButton *_OCRToastCancelButton;
    TXColorView *_toolBar;
    TXColorView *_leftLine;
    TXColorView *_rightLine;
    TXHoverButton *_saveButton;
    TXHoverButton *_collectButton;
    TXHoverButton *_OCRButton;
    TXColorView *_middleLine;
    MQLongPressButton *_zoomOutButton;
    MQLongPressButton *_zoomInButton;
    TXHoverButton *_stretchButton;
    TXHoverButton *_rotateButton;
    TXHoverButton *_albumButton;
    NSTextField *_scaleRateTextField;
    NSMutableArray *_showViewBorderConstraints;
    NSMutableArray *_showViewSizeConstraints;
    NSMutableArray *_OCRViewConstraints;
    NSLayoutConstraint *_showViewTop;
    NSLayoutConstraint *_showViewBottom;
    NSLayoutConstraint *_showViewTrail;
    NSLayoutConstraint *_showViewLead;
    NSLayoutConstraint *_showViewWidth;
    NSLayoutConstraint *_showViewHeight;
    NSLayoutConstraint *_showViewXCenter;
    NSLayoutConstraint *_showViewYCenter;
    NSLayoutConstraint *_OCRViewWidth;
    NSLayoutConstraint *_OCRViewHeight;
    NSLayoutConstraint *_OCRViewXCenter;
    NSLayoutConstraint *_OCRViewYCenter;
    double _lastIndicateTimeinterval;
    NSTrackingArea *_trackingArea;
    TXColorView *_tipView;
    NSTextField *_tipLabel;
    MQPhotoAccessoryView *_accessoryView;
    NSView *_accessoryViewContainer;
    MQPhotoOCRController *_OCRController;
}

@property(retain) MQPhotoOCRController *OCRController; // @synthesize OCRController=_OCRController;
@property(nonatomic) __weak NSView *accessoryViewContainer; // @synthesize accessoryViewContainer=_accessoryViewContainer;
@property(retain, nonatomic) MQPhotoAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property NSTextField *tipLabel; // @synthesize tipLabel=_tipLabel;
@property TXColorView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property double lastIndicateTimeinterval; // @synthesize lastIndicateTimeinterval=_lastIndicateTimeinterval;
@property BOOL hasOpen; // @synthesize hasOpen=_hasOpen;
@property __weak NSLayoutConstraint *OCRViewYCenter; // @synthesize OCRViewYCenter=_OCRViewYCenter;
@property __weak NSLayoutConstraint *OCRViewXCenter; // @synthesize OCRViewXCenter=_OCRViewXCenter;
@property __weak NSLayoutConstraint *OCRViewHeight; // @synthesize OCRViewHeight=_OCRViewHeight;
@property __weak NSLayoutConstraint *OCRViewWidth; // @synthesize OCRViewWidth=_OCRViewWidth;
@property(retain) NSLayoutConstraint *showViewYCenter; // @synthesize showViewYCenter=_showViewYCenter;
@property(retain) NSLayoutConstraint *showViewXCenter; // @synthesize showViewXCenter=_showViewXCenter;
@property(retain, nonatomic) NSLayoutConstraint *showViewHeight; // @synthesize showViewHeight=_showViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *showViewWidth; // @synthesize showViewWidth=_showViewWidth;
@property NSLayoutConstraint *showViewLead; // @synthesize showViewLead=_showViewLead;
@property NSLayoutConstraint *showViewTrail; // @synthesize showViewTrail=_showViewTrail;
@property NSLayoutConstraint *showViewBottom; // @synthesize showViewBottom=_showViewBottom;
@property NSLayoutConstraint *showViewTop; // @synthesize showViewTop=_showViewTop;
@property(retain, nonatomic) NSMutableArray *OCRViewConstraints; // @synthesize OCRViewConstraints=_OCRViewConstraints;
@property(retain, nonatomic) NSMutableArray *showViewSizeConstraints; // @synthesize showViewSizeConstraints=_showViewSizeConstraints;
@property(retain, nonatomic) NSMutableArray *showViewBorderConstraints; // @synthesize showViewBorderConstraints=_showViewBorderConstraints;
@property NSTextField *scaleRateTextField; // @synthesize scaleRateTextField=_scaleRateTextField;
@property TXHoverButton *albumButton; // @synthesize albumButton=_albumButton;
@property TXHoverButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property TXHoverButton *stretchButton; // @synthesize stretchButton=_stretchButton;
@property MQLongPressButton *zoomInButton; // @synthesize zoomInButton=_zoomInButton;
@property MQLongPressButton *zoomOutButton; // @synthesize zoomOutButton=_zoomOutButton;
@property __weak TXColorView *middleLine; // @synthesize middleLine=_middleLine;
@property __weak TXHoverButton *OCRButton; // @synthesize OCRButton=_OCRButton;
@property TXHoverButton *collectButton; // @synthesize collectButton=_collectButton;
@property TXHoverButton *saveButton; // @synthesize saveButton=_saveButton;
@property TXColorView *rightLine; // @synthesize rightLine=_rightLine;
@property TXColorView *leftLine; // @synthesize leftLine=_leftLine;
@property TXColorView *toolBar; // @synthesize toolBar=_toolBar;
@property __weak TXHoverButton *OCRToastCancelButton; // @synthesize OCRToastCancelButton=_OCRToastCancelButton;
@property __weak NSImageView *OCRJuHua; // @synthesize OCRJuHua=_OCRJuHua;
@property __weak NSTextField *OCRScanningTitle; // @synthesize OCRScanningTitle=_OCRScanningTitle;
@property(retain) TXColorView *OCRScanningToast; // @synthesize OCRScanningToast=_OCRScanningToast;
@property(retain, nonatomic) NSWindow *OCRToastWindow; // @synthesize OCRToastWindow=_OCRToastWindow;
@property NSLayoutConstraint *collectBtnTariling; // @synthesize collectBtnTariling=_collectBtnTariling;
@property NSLayoutConstraint *collectBtnLeading; // @synthesize collectBtnLeading=_collectBtnLeading;
@property NSLayoutConstraint *collectButtonWidth; // @synthesize collectButtonWidth=_collectButtonWidth;
@property NSLayoutConstraint *toolBarWidth; // @synthesize toolBarWidth=_toolBarWidth;
@property NSLayoutConstraint *indicateHeightConstraint; // @synthesize indicateHeightConstraint=_indicateHeightConstraint;
@property NSLayoutConstraint *indicateWidthConstraint; // @synthesize indicateWidthConstraint=_indicateWidthConstraint;
@property MQPhotoLocationView *indicaterView; // @synthesize indicaterView=_indicaterView;
@property TXColorView *nextView; // @synthesize nextView=_nextView;
@property TXColorView *previousView; // @synthesize previousView=_previousView;
@property TXHoverButton *nextButton; // @synthesize nextButton=_nextButton;
@property TXHoverButton *previousButton; // @synthesize previousButton=_previousButton;
@property __weak MQFlippedView *OCRView; // @synthesize OCRView=_OCRView;
@property MQPhotoView *showenView; // @synthesize showenView=_showenView;
@property __weak TXColorView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property NSScrollView *myScrollView; // @synthesize myScrollView=_myScrollView;
@property NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property MQMoveWindowView *topView; // @synthesize topView=_topView;
@property __weak MQMoveWindowView *effectContainer; // @synthesize effectContainer=_effectContainer;
@property __weak TXColorView *toolEeffectContrainer; // @synthesize toolEeffectContrainer=_toolEeffectContrainer;
@property BOOL topBottomBarShow; // @synthesize topBottomBarShow=_topBottomBarShow;
@property long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property __weak id <MQPhotoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long OCRState; // @synthesize OCRState=_OCRState;
@property(readonly, nonatomic) unsigned long long showState; // @synthesize showState=_showState;
- (void).cxx_destruct;
- (void)hideOCRScanningToast;
- (void)resetOCRToastFrame;
- (void)showOCRScanningToast;
- (void)OCRDidFinishedWithSuccess:(BOOL)arg1 Message:(id)arg2;
- (void)hideOCRResultPanel;
- (void)setShowState:(unsigned long long)arg1;
- (void)showOCRResultPanel;
- (void)resizeOCRView;
- (void)startOCRScanning;
- (void)handlePhotoSourceChanged:(id)arg1;
- (void)photoFileViewModelChanged:(id)arg1;
- (void)fileAccessoryViewOnClicked:(id)arg1;
- (void)checkUIInteractive;
- (void)configAccessoryView;
- (id)viewForAccessoryIndex:(long long)arg1;
- (BOOL)showAccessoryViewForIndex:(long long)arg1;
- (struct CGRect)visibleScrollRect;
- (void)delayHideTip;
- (void)showTip:(id)arg1 animate:(BOOL)arg2;
- (void)hideCollectionBtn;
- (void)flowView:(unsigned long long)arg1 show:(BOOL)arg2;
- (void)detectMouseLocationFor2SecondsShowBar;
- (void)detectMouseLocation;
- (void)detectPoint:(struct CGPoint)arg1;
- (BOOL)detectPoint:(struct CGPoint)arg1 inView:(unsigned long long)arg2;
- (void)validatePreviousNextEnable;
- (void)caculateIndicateTimestamp;
- (void)resetBorderConstaintWithRect:(struct CGRect)arg1 needFill:(BOOL)arg2;
- (void)resetBorderConstaintWithRect:(struct CGRect)arg1 needFill:(BOOL)arg2 firstTime:(BOOL)arg3;
- (void)switchToWidthHeightConstraints;
- (void)switchToBorderContraints;
- (void)removeTrackingArea:(id)arg1;
- (void)reloadPhotoWithAnimation:(unsigned long long)arg1;
- (void)configIndicateView;
- (void)chargeLongImage;
- (void)chargeStateOnShow;
- (void)onOCRCancelClick:(id)arg1;
- (void)onAlbumClick:(id)arg1;
- (void)onRotateClick:(id)arg1;
- (void)switchShowStateWithTapPoint:(struct CGPoint)arg1;
- (void)onStretchClick:(id)arg1;
- (void)onZoomInClick:(id)arg1;
- (void)onZoomOutClick:(id)arg1;
- (void)onOCRClick:(id)arg1;
- (void)onCollectClick:(id)arg1;
- (void)onSaveClick:(id)arg1;
- (void)onNextClick:(id)arg1;
- (void)onPreviousClick:(id)arg1;
- (void)photoToCollection;
- (void)photoViewAddToCustomFace;
- (void)photoViewSave;
- (void)photoViewCopy;
- (id)photoViewMenu;
- (void)afterZoomWithPhoto:(id)arg1;
- (void)photoViewCmdWheel:(double)arg1;
- (void)photoViewSwipe:(unsigned long long)arg1;
- (void)photoViewSmartMagnificationEvent:(id)arg1;
- (void)photoViewPinchMagnification:(double)arg1;
- (void)photoEvent:(id)arg1 status:(unsigned long long)arg2;
- (BOOL)shouldRespondsDoubleClick;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)leftMouseDown:(id)arg1;
- (void)previousPhotoClick;
- (void)nextPhotoClick;
- (BOOL)hasNext;
- (BOOL)hasPrevious;
- (id)currentPhoto;
- (void)buttonDidClick:(id)arg1;
- (void)longPressDidEnd:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)scrollContentBoundsChanged:(id)arg1;
- (void)showenViewFrameChanged:(id)arg1;
- (void)loadPhotoScale;
- (void)windowDidResize:(struct CGRect)arg1;
- (void)OCRWillStart;
- (void)viewDidShow;
- (void)viewWillShowWithRect:(struct CGRect)arg1 onWindowOpen:(BOOL)arg2;
- (void)dealloc;
- (void)frostedGlassView;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


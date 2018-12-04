//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatBaseContentView.h"

#import "MQMediaLoadingDelegate.h"
#import "MQMenuButtonDelegate.h"
#import "MQMouseHoverProtocol.h"
#import "TChatEventProtocol.h"

@class AVPlayerItem, MQAIOAVPlayerView, MQAIOMenuButton, MQBubbleView, MQMediaLoadingView, MQMediaScheduleView, NSImageView, NSLayoutConstraint, NSString, NSTextField, NSView, TChatCellBuilderOption;

@interface TChatShortVideoView : TChatBaseContentView <MQMenuButtonDelegate, MQMediaLoadingDelegate, TChatEventProtocol, MQMouseHoverProtocol>
{
    BOOL _isPlaying;
    BOOL _isSelf;
    id _actionMenuItems;
    NSLayoutConstraint *_constraintGradientViewLeft;
    NSLayoutConstraint *_constraintGradientViewRight;
    NSLayoutConstraint *_constraintScheduleViewCenterX;
    NSLayoutConstraint *_constraintLoadingViewCenterX;
    NSLayoutConstraint *_constraintBaseViewWidth;
    NSLayoutConstraint *_constraintBaseViewHeight;
    NSLayoutConstraint *_constraintBaseViewLeft;
    NSLayoutConstraint *_constraintBaseViewRight;
    MQBubbleView *_baseView;
    NSImageView *_preview;
    MQMediaScheduleView *_scheduleView;
    NSTextField *_timeField;
    NSView *_gradientView;
    NSTextField *_lengthField;
    NSString *_thumbPath;
    AVPlayerItem *_item;
    MQAIOAVPlayerView *_playerView;
    NSLayoutConstraint *_constraintForPreviewCenterX;
    MQMediaLoadingView *_loadingView;
    double _width;
    double _height;
    MQAIOMenuButton *_menuBtn;
}

@property(retain, nonatomic) MQAIOMenuButton *menuBtn; // @synthesize menuBtn=_menuBtn;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) MQMediaLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSLayoutConstraint *constraintForPreviewCenterX; // @synthesize constraintForPreviewCenterX=_constraintForPreviewCenterX;
@property(retain, nonatomic) MQAIOAVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) AVPlayerItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSTextField *lengthField; // @synthesize lengthField=_lengthField;
@property(retain, nonatomic) NSView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) NSTextField *timeField; // @synthesize timeField=_timeField;
@property(retain, nonatomic) MQMediaScheduleView *scheduleView; // @synthesize scheduleView=_scheduleView;
@property(retain, nonatomic) NSImageView *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) MQBubbleView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) NSLayoutConstraint *constraintBaseViewRight; // @synthesize constraintBaseViewRight=_constraintBaseViewRight;
@property(retain, nonatomic) NSLayoutConstraint *constraintBaseViewLeft; // @synthesize constraintBaseViewLeft=_constraintBaseViewLeft;
@property(retain, nonatomic) NSLayoutConstraint *constraintBaseViewHeight; // @synthesize constraintBaseViewHeight=_constraintBaseViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *constraintBaseViewWidth; // @synthesize constraintBaseViewWidth=_constraintBaseViewWidth;
@property(retain, nonatomic) NSLayoutConstraint *constraintLoadingViewCenterX; // @synthesize constraintLoadingViewCenterX=_constraintLoadingViewCenterX;
@property(retain, nonatomic) NSLayoutConstraint *constraintScheduleViewCenterX; // @synthesize constraintScheduleViewCenterX=_constraintScheduleViewCenterX;
@property(retain, nonatomic) NSLayoutConstraint *constraintGradientViewRight; // @synthesize constraintGradientViewRight=_constraintGradientViewRight;
@property(retain, nonatomic) NSLayoutConstraint *constraintGradientViewLeft; // @synthesize constraintGradientViewLeft=_constraintGradientViewLeft;
@property(copy) id actionMenuItems; // @synthesize actionMenuItems=_actionMenuItems;
@property(nonatomic) BOOL isSelf; // @synthesize isSelf=_isSelf;
@property BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
- (void).cxx_destruct;
- (void)removeAVPlayer;
- (void)aioMultiTabChatViewWillBeRemovedFromWindow:(id)arg1;
- (void)aioRemoveFromWindowEvent:(id)arg1;
- (void)scrollViewDidLiveScroll:(id)arg1;
- (void)pauseShortVideo;
- (void)addCellMenuItem:(id)arg1;
- (void)onForward;
- (BOOL)showForward;
- (id)handleMenuEvent:(id)arg1;
- (id)previeWithEvent:(id)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (struct CGRect)visibleRect;
- (BOOL)TryDblClk:(id)arg1;
- (void)handleSelectEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)play;
- (void)showAVPlayer;
- (void)playVideoInViewer;
- (void)centerButtonClicked:(id)arg1;
- (void)showPlayButton;
- (void)showDownloadProcess:(float)arg1;
- (id)videoPacket;
- (BOOL)isShortVideo;
- (void)requestReloadDate;
- (void)videoIsInvalid;
- (void)showLoading;
- (BOOL)showPreview:(id)arg1;
- (void)onReplay:(id)arg1;
- (void)onLoadVideoProcessChanged:(id)arg1;
- (void)buildUI;
- (void)computeThumbnailSize:(id)arg1;
- (void)drawBubbleBorder;
- (double)bubbleOffset:(BOOL)arg1;
- (void)_onCenterButtonClicked:(id)arg1;
- (void)_createLongVideoUI;
- (void)_removePlayer;
- (void)_updateUI2LongVideo;
- (void)_updateUI2ShortVideo;
- (void)_updateUI;
- (void)_updateBubble;
- (void)playVideo;
- (id)getShortVideoPath;
- (BOOL)isPointInContent:(struct CGPoint)arg1;
- (unsigned long long)isPointInSelectedArea:(struct CGPoint)arg1;
- (id)handleDragEvent:(id)arg1;
- (id)dragImage;
- (BOOL)drawSelectedRange;
- (void)setDrawSelectedRange:(BOOL)arg1;
- (void)mouseExist:(id)arg1;
- (void)mouseEnter:(id)arg1;
- (void)onMenuMouseEnter:(id)arg1;
- (id)onPopUpMenuWithEvent:(id)arg1 forView:(id)arg2;
- (void)saveFile;
- (void)copySelectedItemsIntoPasteboard:(id)arg1;
- (void)copyFile;
- (void)initMoreMenu;
- (struct CGRect)menuBtnFrame;
- (struct CGSize)bubbleSize;
- (void)initMenuButton;
- (void)update:(id)arg1 sessionID:(id)arg2;
- (void)_onCompleteDownloadVideo:(id)arg1;
- (void)_handleDownloadVideo:(id)arg1;
- (void)_handleDownloadPerviewImage:(id)arg1;
- (void)_getVideoToPlay;
- (id)initWithViewModel:(id)arg1 option:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) TChatCellBuilderOption *option;
@property(readonly) Class superclass;

@end

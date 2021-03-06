//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MAVLayoutManagerDelegate.h"

@class MAVBasicVideoViewController, MAVRenderUtils, NSMutableArray, NSString, NSView;

@interface MAVLayoutManager : NSObject <MAVLayoutManagerDelegate>
{
    BOOL pureState_;
    NSMutableArray *videoViewControllers_;
    NSView *videoContentView_;
    MAVRenderUtils *utils_;
    NSView *videoRootView_;
    MAVBasicVideoViewController *cacheViewController_;
}

+ (id)currentLayoutManager;
@property(retain, nonatomic) MAVBasicVideoViewController *cacheViewController; // @synthesize cacheViewController=cacheViewController_;
@property(nonatomic) NSView *videoRootView; // @synthesize videoRootView=videoRootView_;
- (void)printAllVideoViewInfo;
- (void)delUserComeIn;
- (void)newUserComeIn;
- (void)testUtils;
- (void)testSwapViewController;
- (void)captureVideoDataAsPicture;
- (void)hideVideoView;
- (void)deleteVideoView;
- (void)testRatioOneToOne;
- (void)testQQMessage;
- (void)testQQMessageNotification;
- (void)testDAVQQMessageNotification;
- (void)testSwapBigAndSmallVideoControllers;
- (void)keyDown:(id)arg1;
- (void)notificationViewChanged:(id)arg1;
- (void)setSmallVideoViewBottom:(int)arg1;
- (void)updateLayoutForBasicVideoViewController;
- (void)updateLayout;
- (void)requestForHoveredControllerView:(id)arg1 hovered:(BOOL)arg2;
- (void)swapVideoFrameData:(CDStruct_24692b99 *)arg1 withFrameData:(CDStruct_24692b99 *)arg2;
- (void)switchVideoViewGeometryPosition:(id)arg1 withView:(id)arg2;
- (_Bool)swapVideoControllersForDoubleVideoMode;
- (void)requestForLargeControllerView:(id)arg1;
- (void)setSmallVideoViewVisible:(BOOL)arg1;
- (BOOL)removeVideoView:(unsigned long long)arg1 type:(int)arg2 action:(BOOL)arg3;
- (BOOL)makeSureBigViewExist;
- (void)loadInController:(id)arg1;
- (id)addVideoView:(unsigned long long)arg1 type:(int)arg2 action:(BOOL)arg3;
- (id)getVideoView:(unsigned long long)arg1 type:(int)arg2;
- (BOOL)isViewCreated:(unsigned long long)arg1 type:(int)arg2;
- (id)getBigViewController;
- (BOOL)hasBigView;
- (BOOL)hasSmallView;
- (int)getVideoViewNumber;
- (void)videoInfoChanged;
- (id)getAllVideoViewInfo;
- (id)getVideoContentView;
- (void)updateSmallViewByCurrentPureState;
- (void)switchToPureState:(BOOL)arg1;
- (void)clearAllControllers;
- (void)dealloc;
- (id)initWithUtils:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


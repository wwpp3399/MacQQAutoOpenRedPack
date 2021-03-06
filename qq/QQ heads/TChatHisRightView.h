//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "TChatHisSearchResultViewControllerDelegate.h"
#import "TChatHisToolBarDelegte.h"
#import "TChatHistorySelectedItemChangedDelegate.h"

@class MQSessionID, NSMutableArray, NSString, TChatHisMessageViewController, TChatHisSearchResultViewController, TChatHisToolBar, TChatHistoryBaseViewController, TChatHistoryCalendarViewController, TChatHistoryFileViewController, TChatHistoryPictureViewController, TChatHistoryRoamWindowController, TChatMenuController, TChatRoamChangeOverWinCtrl, TChatRoamPasswordWinCtrl, TChatRoamResultWinCtrl, TChatRoamSettingWinCtrl, TXColorView;

@interface TChatHisRightView : NSView <TChatHistorySelectedItemChangedDelegate, TChatHisToolBarDelegte, TChatHisSearchResultViewControllerDelegate>
{
    TChatHisToolBar *_toolbar;
    id <TChatHisRightViewDelegate> _delegate;
    MQSessionID *_sessionId;
    unsigned long long _hisStyle;
    TChatHisMessageViewController *_hisMessageViewController;
    TChatHistoryFileViewController *_fileViewController;
    TChatHistoryPictureViewController *_pictureViewController;
    TChatHisSearchResultViewController *_searchResultViewController;
    TChatHistoryRoamWindowController *_roamViewController;
    TChatRoamPasswordWinCtrl *_passwordCtrl;
    TChatRoamResultWinCtrl *_resultCtrl;
    TChatRoamSettingWinCtrl *_roamSettingCtrl;
    TChatRoamChangeOverWinCtrl *_changeOverCtrl;
    TChatHistoryBaseViewController *_currentContentViewController;
    NSMutableArray *_moreBtnSource;
    TChatHistoryCalendarViewController *_calendarViewController;
    TChatMenuController *_moreBtnMenuController;
    TXColorView *_contentView;
    NSView *_searchView;
    NSView *_roamTipsView;
    unsigned long long _timeFilterHisRecordPanel;
}

@property(nonatomic) unsigned long long timeFilterHisRecordPanel; // @synthesize timeFilterHisRecordPanel=_timeFilterHisRecordPanel;
@property(retain, nonatomic) NSView *roamTipsView; // @synthesize roamTipsView=_roamTipsView;
@property(retain, nonatomic) NSView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) TXColorView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak TChatMenuController *moreBtnMenuController; // @synthesize moreBtnMenuController=_moreBtnMenuController;
@property(nonatomic) __weak TChatHistoryCalendarViewController *calendarViewController; // @synthesize calendarViewController=_calendarViewController;
@property(retain, nonatomic) NSMutableArray *moreBtnSource; // @synthesize moreBtnSource=_moreBtnSource;
@property(nonatomic) __weak TChatHistoryBaseViewController *currentContentViewController; // @synthesize currentContentViewController=_currentContentViewController;
@property(retain, nonatomic) TChatRoamChangeOverWinCtrl *changeOverCtrl; // @synthesize changeOverCtrl=_changeOverCtrl;
@property(retain, nonatomic) TChatRoamSettingWinCtrl *roamSettingCtrl; // @synthesize roamSettingCtrl=_roamSettingCtrl;
@property(retain, nonatomic) TChatRoamResultWinCtrl *resultCtrl; // @synthesize resultCtrl=_resultCtrl;
@property(retain, nonatomic) TChatRoamPasswordWinCtrl *passwordCtrl; // @synthesize passwordCtrl=_passwordCtrl;
@property(retain, nonatomic) TChatHistoryRoamWindowController *roamViewController; // @synthesize roamViewController=_roamViewController;
@property(retain, nonatomic) TChatHisSearchResultViewController *searchResultViewController; // @synthesize searchResultViewController=_searchResultViewController;
@property(retain, nonatomic) TChatHistoryPictureViewController *pictureViewController; // @synthesize pictureViewController=_pictureViewController;
@property(retain, nonatomic) TChatHistoryFileViewController *fileViewController; // @synthesize fileViewController=_fileViewController;
@property(retain, nonatomic) TChatHisMessageViewController *hisMessageViewController; // @synthesize hisMessageViewController=_hisMessageViewController;
@property(nonatomic) unsigned long long hisStyle; // @synthesize hisStyle=_hisStyle;
@property(readonly, nonatomic) MQSessionID *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <TChatHisRightViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TChatHisToolBar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (void)becomeEditMode;
- (void)searchResultContextLeftRightBtnEnable:(BOOL)arg1;
- (void)searchResultContextRightBtnEnable:(BOOL)arg1;
- (void)searchResultContextLeftBtnEnable:(BOOL)arg1;
- (void)searchResultContextEnter:(id)arg1 currentPostion:(long long)arg2 count:(long long)arg3;
- (void)searchResultDeleted:(id)arg1 newCount:(long long)arg2;
- (void)searchResultCountChanged:(id)arg1 newCount:(long long)arg2;
- (void)selectedItemCountChanged:(long long)arg1;
- (void)changeToNormalState;
- (void)didEndNewDiscussSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)handleRoamingResult:(id)arg1;
- (void)reloadRoamingDataByUin:(long long)arg1;
- (void)showRoamingNoticeWindow:(id)arg1 winStyle:(unsigned long long)arg2;
- (void)closeRoamingWindow;
- (void)showRoamingPasswordCtrl:(BOOL)arg1;
- (void)showRoamingResultCtrl:(id)arg1 pageType:(long long)arg2;
- (void)toolbar:(id)arg1 buttonClicked:(id)arg2 buttonType:(unsigned long long)arg3;
- (void)_initSearchView:(id)arg1;
- (void)_removeTabs;
- (void)subSearchResultAllCount:(long long)arg1;
- (void)registModalWindow:(id)arg1;
- (void)initRoamWinCtrl;
- (void)_selectedTab:(id)arg1;
- (void)initSubviews;
- (void)initMenuData;
- (void)searchWithSearchModel:(id)arg1;
- (void)searchWithKey:(id)arg1 timeFilter:(unsigned long long)arg2 completion:(id)arg3;
- (void)removeSearchResult;
- (void)setSearchResultAllCount:(long long)arg1;
- (void)closeRoamingTips;
- (void)addRoamingTips;
- (void)synchronizingRoamingMessages:(id)arg1;
- (void)loadDataWithSessionID:(id)arg1;
- (void)setSearhingMode:(id)arg1;
- (void)setDefaultMode:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


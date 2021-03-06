//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSButtonCell, NSMenu, NSMutableArray, NSPopUpButton, NSPopUpButtonCell, NSTableColumn, NSTableView, NSTextField, NSWindow;

@interface BatchGroupWindowController : NSWindowController
{
    NSWindow *window;
    NSMutableArray *array;
    NSTableColumn *checkColumn;
    NSButton *batchGroupBtn;
    NSTableView *tabView;
    NSButtonCell *checkBtn;
    NSButton *checkAllBtn;
    NSPopUpButton *batchGroupBtnBelow;
    NSTextField *tipTxt;
    NSMenu *groupSettingMenu;
    NSMenu *groupSettingMenuBelow;
    NSPopUpButtonCell *groupSelectCell;
    NSPopUpButtonCell *groupSelectCellBelow;
    BOOL sortAscending;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)checkComponentClicked:(id)arg1;
- (void)batchGroupSelectCellItemIndex:(id)arg1;
- (void)groupSelectCellItemIndex:(id)arg1;
- (void)selectAllGroup:(id)arg1;
- (void)beginBatchGroup:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 mouseDownInHeaderOfTableColumn:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)dealloc;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (void)onGroupEventNotification:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (id)initWithWindowNibName:(id)arg1;
- (void)reloadGroupData;
- (void)awakeFromNib;

@end


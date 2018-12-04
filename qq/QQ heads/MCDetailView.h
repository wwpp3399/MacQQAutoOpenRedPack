//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXColorView.h"

#import "MCDetailViewForFileDelegate.h"

@class MCTableCellModel, NSMutableDictionary, NSString;

@interface MCDetailView : TXColorView <MCDetailViewForFileDelegate>
{
    id <MCDetailViewDelegate> _delegate;
    MCTableCellModel *_cellModel;
    NSMutableDictionary *_fileSummaries;
}

+ (id)loadInstanceFromNib;
@property(retain, nonatomic) NSMutableDictionary *fileSummaries; // @synthesize fileSummaries=_fileSummaries;
@property(retain, nonatomic) MCTableCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property __weak id <MCDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloadFileFinish:(id)arg1;
- (id)_createAudioUI:(id)arg1;
- (id)_createVideoUI:(id)arg1;
- (id)_createLinkUI:(id)arg1;
- (id)_createLocationUI:(id)arg1;
- (id)_createFileUI:(id)arg1;
- (id)_createRichMediaUI:(id)arg1;
- (BOOL)_isValidXML:(id)arg1;
- (id)_parseXML:(id)arg1;
- (id)_createGalleryUI:(id)arg1;
- (id)_createTextUI:(id)arg1;
- (id)_createQZoneUI:(id)arg1;
- (void)_addDetailView:(id)arg1 withLeft:(long long)arg2 top:(long long)arg3 right:(long long)arg4 bottom:(long long)arg5;
- (void)_addDetailView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)removeSubview;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

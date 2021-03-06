//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BHMessageModel, MQFileViewModel, QQGroupFileInfo, QQGroupFileTransferTask;

@interface MQGroupImageFileControl : NSObject
{
    QQGroupFileTransferTask *_task;
    QQGroupFileInfo *_fileInfo;
    MQFileViewModel *_fileViewModel;
    id <MQGroupFileControlDelegate> _fileDelegate;
    BHMessageModel *_msgModel;
}

@property(readonly, nonatomic) __weak BHMessageModel *msgModel; // @synthesize msgModel=_msgModel;
@property(nonatomic) __weak id <MQGroupFileControlDelegate> fileDelegate; // @synthesize fileDelegate=_fileDelegate;
- (void).cxx_destruct;
- (void)clickedFileBtn:(id)arg1;
- (id)fileName;
- (long long)fileSize;
- (void)removeObservers;
- (void)dealloc;
- (void)operationDoubleClick:(id)arg1 sel:(SEL)arg2;
- (void)operationBtnClick:(id)arg1 sel:(SEL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleProgressChanged:(id)arg1;
- (void)handleStatusChanged:(id)arg1;
- (void)resumeTransferTaskAction;
- (void)pauseTransferTaskAction;
- (void)removeTransferTaskAction;
- (void)downloadAction;
- (id)getFilePath;
- (void)resetTask;
- (void)doubleClickAction;
- (void)onDownload;
- (void)convertFileViewModel:(id)arg1 fileInfo:(id)arg2;
- (void)updateStatusText;
- (void)resetView:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQFileTransmissionTaskId, MQFileTransmissionTaskInfo, NSString;

@protocol RTXFileTransferAttachmentDelegate <NSObject>

@optional
- (void)onClickSwitchToOfflineFileOfTask:(MQFileTransmissionTaskInfo *)arg1;
- (void)onClickResendOfTask:(MQFileTransmissionTaskInfo *)arg1;
- (void)onFileReadyToShow:(MQFileTransmissionTaskInfo *)arg1 pathName:(NSString *)arg2;
- (BOOL)cancelTask:(MQFileTransmissionTaskId *)arg1;
- (BOOL)startTask:(MQFileTransmissionTaskId *)arg1;
@end


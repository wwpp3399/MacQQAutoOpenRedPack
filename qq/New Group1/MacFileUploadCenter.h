//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSMutableDictionary, NSString;

@interface MacFileUploadCenter : NSObject <NSURLSessionDataDelegate>
{
    NSMutableDictionary *_fileTaskQueue;
    NSMutableDictionary *_fragmentsTaskQueue;
}

+ (id)defaultCenter;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)fragmentUploadTaskSuccess:(id)arg1 fileTask:(id)arg2 fragmentNum:(long long)arg3;
- (void)fragmentUploadTaskRetry:(id)arg1 fileTask:(id)arg2 withReason:(id)arg3;
- (id)getMD5:(id)arg1;
- (id)cpuType;
- (id)getURL:(id)arg1 pid:(id)arg2 plugin:(id)arg3 occurTime:(double)arg4 extra:(id)arg5;
- (id)getFragmentRequest:(id)arg1 totalLength:(unsigned long long)arg2 md5:(id)arg3 range:(struct _NSRange)arg4 url:(id)arg5;
- (void)uploadFragmentData:(id)arg1 totalLength:(unsigned long long)arg2 md5:(id)arg3 range:(struct _NSRange)arg4 withRetryTimes:(unsigned long long)arg5 number:(long long)arg6 url:(id)arg7;
- (void)sendNextFragment:(id)arg1;
- (void)uploadFileData:(id)arg1 uin:(id)arg2 pid:(id)arg3 plugin:(id)arg4 extra:(id)arg5 retryTimes:(unsigned long long)arg6 completionHandler:(id)arg7;
- (id)getOperationQueue;
- (id)getURLSession;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


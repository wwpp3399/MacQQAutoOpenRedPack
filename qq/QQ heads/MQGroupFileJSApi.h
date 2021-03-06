//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebView;

@interface MQGroupFileJSApi : NSObject
{
    WebView *_webView;
}

@property(nonatomic) __weak WebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (id)getVersionString:(id)arg1;
- (id)openUrl:(id)arg1;
- (void)transferTaskProgressChanged:(id)arg1;
- (void)transferTaskStatusChanged:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)invokeUndefinedMethodFromWebScript:(id)arg1 withArguments:(id)arg2;
- (id)getNickName:(id)arg1;
- (id)isOnline:(id)arg1;
- (id)getVersion:(id)arg1;
- (id)previewPicture:(id)arg1;
- (id)getPreviewSuffixConfig:(id)arg1;
- (id)addContinueUploadTask:(id)arg1;
- (id)forwardFileToDataLine:(id)arg1;
- (id)resumeTask:(id)arg1;
- (id)pauseTask:(id)arg1;
- (id)removeTask:(id)arg1;
- (id)removeAllTasks:(id)arg1;
- (id)removeCompleteTask:(id)arg1;
- (id)getCompleteTaskList:(id)arg1;
- (id)printLog:(id)arg1;
- (id)getTaskInfo:(id)arg1;
- (id)getTaskList:(id)arg1;
- (id)openFolder:(id)arg1;
- (id)openFile:(id)arg1;
- (id)isFileExist:(id)arg1;
- (id)addDownloadTask:(id)arg1;
- (id)uploadFiles:(id)arg1;
- (id)getUploadFiles:(id)arg1;
- (id)addUploadTask:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MQScreenCaptureViewControllerDelegate <NSObject>

@optional
- (struct CGRect)autoFitRectForMouseLocation:(struct CGPoint)arg1;
- (void)captureRect:(struct CGRect)arg1 saveToFile:(BOOL)arg2;
- (void)captureDidStart:(struct CGPoint)arg1;
@end


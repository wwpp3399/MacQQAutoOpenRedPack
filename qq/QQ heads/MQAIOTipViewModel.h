//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQAIOMessageViewModel.h"

@class NSString;

@interface MQAIOTipViewModel : MQAIOMessageViewModel
{
    BOOL _isNeedsBackgroundImage;
    NSString *_text;
    double _timeInterval;
}

@property BOOL isNeedsBackgroundImage; // @synthesize isNeedsBackgroundImage=_isNeedsBackgroundImage;
@property double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)outputMessageWithInformativeText:(id)arg1 time:(double)arg2 chatUIStyle:(int)arg3 background:(BOOL)arg4;
- (id)buildAttributeString;
- (id)initWithMessageModel:(id)arg1;
- (id)init;

@end


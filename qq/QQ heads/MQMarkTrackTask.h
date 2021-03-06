//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MQMarkTrackTask : NSObject
{
    unsigned long long _state;
    double _initTime;
    struct CGImage *_imageRef;
}

@property(nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)processTrack;
- (void)cancelTrack;
- (void)startTrack;
- (void)dealloc;
- (id)initWithCGImageRef:(struct CGImage *)arg1;

@end


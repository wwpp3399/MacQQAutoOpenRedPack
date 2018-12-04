//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MQMarkInfoTracker : NSObject
{
    NSString *_markID;
    NSString *_creatorUin;
    double _lastTrackingTime;
    double _scale;
    struct Mat _originMatImage;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct Mat originMatImage; // @synthesize originMatImage=_originMatImage;
@property(nonatomic) double lastTrackingTime; // @synthesize lastTrackingTime=_lastTrackingTime;
@property(copy, nonatomic) NSString *creatorUin; // @synthesize creatorUin=_creatorUin;
@property(copy, nonatomic) NSString *markID; // @synthesize markID=_markID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateMarkInfo:(id)arg1 withMatImage:(struct Mat)arg2;
- (id)initWithCGImageRef:(struct CGImage *)arg1 markInfo:(id)arg2;

@end

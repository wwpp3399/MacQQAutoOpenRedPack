//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor;

@interface MQCircle : NSObject
{
    float _radius;
    float _originRadius;
    NSColor *_color;
    struct CGPoint _centerPoint;
}

+ (id)initWithcenterPoint:(struct CGPoint)arg1 radius:(float)arg2 color:(id)arg3;
+ (id)initWithcenterPoint:(struct CGPoint)arg1 radius:(float)arg2;
@property(nonatomic) float originRadius; // @synthesize originRadius=_originRadius;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property(nonatomic) float radius; // @synthesize radius=_radius;
- (void).cxx_destruct;

@end

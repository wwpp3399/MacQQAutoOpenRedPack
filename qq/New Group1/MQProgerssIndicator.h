//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProgressIndicator.h"

@class NSColor;

@interface MQProgerssIndicator : NSProgressIndicator
{
    NSColor *_borderColor;
    NSColor *_backgroudColor;
    NSColor *_incrementColor;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSColor *incrementColor; // @synthesize incrementColor=_incrementColor;
@property(retain, nonatomic) NSColor *backgroudColor; // @synthesize backgroudColor=_backgroudColor;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;

@end


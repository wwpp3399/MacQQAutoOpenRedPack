//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface MQBubbleView : NSView
{
    struct CGPath *_path;
    struct CGPath *_shortVideoSelfPath;
    BOOL _isSelf;
    BOOL _ignoreArrow;
}

@property(nonatomic) BOOL ignoreArrow; // @synthesize ignoreArrow=_ignoreArrow;
@property(nonatomic) BOOL isSelf; // @synthesize isSelf=_isSelf;
- (id)toImageWithColor:(id)arg1 rect:(struct CGRect)arg2;
- (id)toImageWithColor:(id)arg1;
- (BOOL)isFlipped;
- (struct CGPath *)newBubblePathWithFrame:(struct CGRect)arg1;
- (void)refreshShortVideoBubblePathWithFrame:(struct CGRect)arg1;
- (struct CGPath *)shortVideoSelfPath;
- (struct CGPath *)path;
- (void)refreshMask;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class TXButtonTextControl;

@interface TXTextButtonCell : NSTextFieldCell
{
    TXButtonTextControl *button;
}

- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg1;
- (void)OnRevealInFinder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end


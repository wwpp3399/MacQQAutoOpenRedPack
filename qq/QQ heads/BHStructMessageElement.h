//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BHStructMessageElement : NSObject
{
    NSString *_elementName;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) id node;

@end


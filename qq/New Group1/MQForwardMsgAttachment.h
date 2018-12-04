//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachment.h"

@class BHMessageModel, NSView, TChatBaseViewModel;

@interface MQForwardMsgAttachment : NSTextAttachment
{
    BHMessageModel *_msgModel;
    TChatBaseViewModel *_viewModel;
    NSView *_parentView;
}

@property(retain, nonatomic) NSView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) TChatBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) BHMessageModel *msgModel; // @synthesize msgModel=_msgModel;
- (void).cxx_destruct;
- (void)getImage:(id)arg1 completion:(id)arg2;
- (void)clickeEvent:(id)arg1;
- (void)setSourceIconUrl:(id)arg1 sourceName:(id)arg2;
- (void)setContentforwardTitle:(id)arg1 forwardSubTitle:(id)arg2;
- (void)setCoverImage:(id)arg1 coverUrl:(id)arg2;
- (void)initData;
- (void)update:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SFEditPhotoListFeedViewController, UIView;

@interface SFTipsControl : NSObject
{
    _Bool _enable;
    SFEditPhotoListFeedViewController *_editFeedVC;
    NSMutableDictionary *_taskStore;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSMutableDictionary *taskStore; // @synthesize taskStore=_taskStore;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) __weak SFEditPhotoListFeedViewController *editFeedVC; // @synthesize editFeedVC=_editFeedVC;
- (void).cxx_destruct;
- (void)cleanAllTips;
- (void)tapMaskView:(id)arg1;
- (void)showTask:(id)arg1 inView:(id)arg2 atArrowPointBlock:(CDUnknownBlockType)arg3;
- (void)hideTips;
- (void)initTips;
- (void)delayObserveValueChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeMediaRemoved:(id)arg1 ofObject:(id)arg2;
- (id)init;

@end


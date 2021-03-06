//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIImageView;

@interface APScanAnimationView : UIView
{
    _Bool _animationRunning;
    _Bool _stopAnimate;
    UIView *_scanNetBgView;
    UIImageView *_scanNetView;
    UIView *_backgroundView;
    CAShapeLayer *_maskLayer;
    struct CGRect _animationRect;
}

@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool stopAnimate; // @synthesize stopAnimate=_stopAnimate;
@property(retain, nonatomic) UIImageView *scanNetView; // @synthesize scanNetView=_scanNetView;
@property(retain, nonatomic) UIView *scanNetBgView; // @synthesize scanNetBgView=_scanNetBgView;
@property(nonatomic, setter=setAnimationRect:) struct CGRect animationRect; // @synthesize animationRect=_animationRect;
@property(nonatomic) _Bool animationRunning; // @synthesize animationRunning=_animationRunning;
- (void).cxx_destruct;
- (void)startInitAnimation:(CDUnknownBlockType)arg1;
- (void)scanNetAnimate:(id)arg1;
- (void)setCornerViewWithTag:(long long)arg1 image:(id)arg2;
- (void)hiddenAnimateView:(_Bool)arg1;
- (void)stopScanAnimation;
- (void)resumeScanAnimation;
- (void)startScanAnimation;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;

@end


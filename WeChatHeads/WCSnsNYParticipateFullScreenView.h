//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UILabel;

@interface WCSnsNYParticipateFullScreenView : MMUIView
{
    id <WCSnsNYParticipateFullScreenViewDelegate> _delegate;
    UILabel *_titleTipLabel;
    UILabel *_descTipLabel;
}

@property(nonatomic) __weak id <WCSnsNYParticipateFullScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)getButtonLeftMargin;
- (double)getBottomToButtonMargin;
- (double)getTitleToDescMargin;
- (double)getImageToTitleMargin;
- (double)getTopToImageMargin;
- (void)showAnimation;
- (void)layoutSubviews;
- (id)init;
- (void)initView;
- (void)onParticipateBtnClick:(id)arg1;
- (void)onNotParticipateBtnClick:(id)arg1;

@end


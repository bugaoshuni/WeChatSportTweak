//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MMBadgeView, MMUILabel, MMWebImageView, UIView;

@interface WCLabsSettingCell : UITableViewCell
{
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMWebImageView *_thumbImageView;
    UIView *_backgroundView;
    MMBadgeView *_badgeView;
    UIView *_maskView;
}

+ (double)heightForLabsItem:(id)arg1;
- (void).cxx_destruct;
- (void)initMaskView;
- (void)initBadgeView;
- (void)initThumbImageView;
- (void)initDescLabel;
- (void)initTitleLabel;
- (void)initBackgroundView;
- (void)configureWithLabsItem:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

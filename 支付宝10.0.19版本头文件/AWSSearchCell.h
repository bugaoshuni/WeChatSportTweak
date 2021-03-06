//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableViewBaseCell.h"

@class MSTOCKPRODStockCodeInfo, UIButton, UILabel;

@interface AWSSearchCell : APTableViewBaseCell
{
    MSTOCKPRODStockCodeInfo *_info;
    UILabel *_marketLogoImageView;
    id <AWSSearchCellDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_symbolLabel;
    UILabel *_bgLine;
    UIButton *_clickBtn;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIButton *clickBtn; // @synthesize clickBtn=_clickBtn;
@property(retain, nonatomic) UILabel *bgLine; // @synthesize bgLine=_bgLine;
@property(retain, nonatomic) UILabel *symbolLabel; // @synthesize symbolLabel=_symbolLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <AWSSearchCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addToFav;
- (void)layoutSubviews;
- (id)buildMarketLogoByMarket:(id)arg1;
- (void)fillWithStock:(id)arg1 isInFav:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface H5AuthTableViewCell : UITableViewCell
{
    UILabel *_contentLabel;
    UILabel *_symbolLabel;
}

+ (double)getCellHeightWithData:(id)arg1;
@property(retain, nonatomic) UILabel *symbolLabel; // @synthesize symbolLabel=_symbolLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


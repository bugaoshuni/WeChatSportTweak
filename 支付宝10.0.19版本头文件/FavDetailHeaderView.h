//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, MOBILECHATFAVCollectionVO, UIImageView, UILabel;

@interface FavDetailHeaderView : UIView
{
    CALayer *_separateLine;
    UIImageView *_headImageView;
    MOBILECHATFAVCollectionVO *_data;
    UILabel *_nameLabel;
}

+ (double)heightForData:(id)arg1;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MOBILECHATFAVCollectionVO *data; // @synthesize data=_data;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) CALayer *separateLine; // @synthesize separateLine=_separateLine;
- (void).cxx_destruct;
- (void)fixedHeadViewWithHeadImg:(id)arg1 name:(id)arg2 data:(id)arg3;
- (id)initWithData:(id)arg1;

@end


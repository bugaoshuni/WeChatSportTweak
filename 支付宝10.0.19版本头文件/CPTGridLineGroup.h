//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTLayer.h"

@class CPTPlotArea;

@interface CPTGridLineGroup : CPTLayer
{
    CPTPlotArea *plotArea;
    _Bool major;
}

@property(nonatomic) _Bool major; // @synthesize major;
@property(nonatomic) CPTPlotArea *plotArea; // @synthesize plotArea;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


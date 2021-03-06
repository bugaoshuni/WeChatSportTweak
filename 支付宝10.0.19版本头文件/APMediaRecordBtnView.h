//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface APMediaRecordBtnView : UIView
{
    UIColor *_progressColor;
    UIColor *_trackColor;
    UIColor *_fillColor;
    double _lineWidth;
    double _fillButtonWidth;
    double _minLineWidth;
    double _maxLineWidth;
    double _progressAlpha;
    double _radius;
    NSTimer *_timer;
    double _angle;
    int _recordSatus;
    id <APMediaRecordBtnViewDelegate> _delegate;
    double _progress;
    UILongPressGestureRecognizer *_longPressGesture;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UIColor *trackColor; // @synthesize trackColor=_trackColor;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) int recordSatus; // @synthesize recordSatus=_recordSatus;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <APMediaRecordBtnViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)longPressGesture:(id)arg1;
- (void)tapGesture:(id)arg1;
- (double)angleBetweenLinesWithLine1Start:(struct CGPoint)arg1 Line1End:(struct CGPoint)arg2 Line2Start:(struct CGPoint)arg3 Line2End:(struct CGPoint)arg4;
- (void)resetRecord;
- (void)stopRecord;
- (void)startRecord;
- (void)switchToPhoto;
- (void)updateProgressCircle;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end


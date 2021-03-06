//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APVAAsiOut, APVAAsrOut, APVAMainViewController;

@interface APVADomainManager : NSObject
{
    APVAAsrOut *_currentAsrOut;
    APVAAsiOut *_currentAsiOut;
    APVAMainViewController *_mainController;
    unsigned long long _speakerModelIndex;
    unsigned long long _answerModelIndex;
}

@property(nonatomic) unsigned long long answerModelIndex; // @synthesize answerModelIndex=_answerModelIndex;
@property(nonatomic) unsigned long long speakerModelIndex; // @synthesize speakerModelIndex=_speakerModelIndex;
@property(nonatomic) __weak APVAMainViewController *mainController; // @synthesize mainController=_mainController;
@property(retain, nonatomic) APVAAsiOut *currentAsiOut; // @synthesize currentAsiOut=_currentAsiOut;
@property(retain, nonatomic) APVAAsrOut *currentAsrOut; // @synthesize currentAsrOut=_currentAsrOut;
- (void).cxx_destruct;
- (void)invokeTransferWithModel:(id)arg1;
- (_Bool)validUserInfo:(id)arg1 iphoneNum:(id)arg2;
- (id)validTransferHits:(id)arg1;
- (void)invokeSpeechTransferWithGroupRecord:(id)arg1 trace:(id)arg2;
- (void)invokeTransferWithHits:(id)arg1 trace:(id)arg2;
- (void)invokeGotoCommonWithHits:(id)arg1 trace:(id)arg2;
- (void)invokeGotoSpeechTransferWithHits:(id)arg1 trace:(id)arg2;
- (void)invokeCommonWithHits:(id)arg1 trace:(id)arg2;
- (void)invokeGotoTransferWithHits:(id)arg1 trace:(id)arg2;
- (void)invokeAppWithGroupRecord:(id)arg1;
- (id)appCellModelByAPVAHit:(id)arg1;
- (void)updateDataSourceWithHits:(id)arg1 trace:(id)arg2;
- (void)updateAnswerCellWithText:(id)arg1;
- (void)updateAnswerCellWithModel:(id)arg1;
- (id)answerModel;
- (id)speakerModel;
- (void)updateAsiOut:(id)arg1;
- (void)updateSpeackerCell:(id)arg1;
- (void)updateAsrOut:(id)arg1;
- (id)init;

@end


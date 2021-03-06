//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"
#import "MsgDataDownloadDelegate.h"
#import "NotifyFromMainCtrlDelegate.h"

@class CdnTaskInfo, MsgDataDownloadLogic, NSMutableArray, NSString;

@interface UploadVideoCDNMgr : NSObject <MsgDataDownloadDelegate, ICdnComMgrExt, NotifyFromMainCtrlDelegate>
{
    NSMutableArray *_arrUploadTask;
    CdnTaskInfo *_curTaskInfo;
    unsigned int _curUploadEventID;
    MsgDataDownloadLogic *_msgDownloadLogic;
}

@property(retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic; // @synthesize msgDownloadLogic=_msgDownloadLogic;
- (void).cxx_destruct;
- (void)OnCompressVideoFinished:(id)arg1 success:(_Bool)arg2;
- (void)compressCurInfo;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadAnyFail:(id)arg1;
- (void)startDownloadVideo;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (_Bool)CreateCurUploadEvent:(_Bool)arg1 newMd5:(id)arg2 crc32:(unsigned int)arg3 useSafeCdn:(_Bool)arg4;
- (void)Stop;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StopCurUpload;
- (void)StartUpload:(id)arg1;
- (void)startCdnUpload;
- (void)CheckQueue;
- (_Bool)IsCurTaskByID:(unsigned int)arg1 From:(id)arg2 To:(id)arg3;
- (void)DelTaskInUploadQueue:(id)arg1;
- (_Bool)IsMsgInUploadQueue:(id)arg1;
- (void)UploadFail:(int)arg1;
- (void)UploadOk:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


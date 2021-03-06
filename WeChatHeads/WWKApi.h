//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WWKApi : NSObject
{
}

+ (_Bool)canOpenURL:(id)arg1;
+ (_Bool)openURL:(id)arg1;
+ (_Bool)sendObj:(id)arg1;
+ (_Bool)sendResp:(id)arg1;
+ (_Bool)sendReq:(id)arg1;
+ (_Bool)openChatList;
+ (_Bool)openCreateChat;
+ (_Bool)openApp;
+ (long long)displayNameType;
+ (id)validScheme;
+ (id)getApiVersion;
+ (id)getAppInstallUrl;
+ (_Bool)isLocalVersionAppInstalled;
+ (_Bool)isCloudVersionAppInstalled;
+ (_Bool)isAppInstalled;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)registerApp:(id)arg1 corpId:(id)arg2 agentId:(id)arg3;
+ (_Bool)registerApp:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (_Bool)openURL:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface COMShareCommunityReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) NSString *communityId; // @dynamic communityId;
@property(readonly) _Bool hasClientMsgId; // @dynamic hasClientMsgId;
@property(readonly) _Bool hasCommunityId; // @dynamic hasCommunityId;
@property(readonly) _Bool hasReceiverId; // @dynamic hasReceiverId;
@property(readonly) _Bool hasReceiverUserType; // @dynamic hasReceiverUserType;
@property(retain, nonatomic) NSString *receiverId; // @dynamic receiverId;
@property(retain, nonatomic) NSString *receiverUserType; // @dynamic receiverUserType;

@end


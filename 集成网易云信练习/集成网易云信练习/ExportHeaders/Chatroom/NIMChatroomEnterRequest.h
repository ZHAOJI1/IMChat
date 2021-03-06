//
//  NIMChatroomEnterRequest.h
//  NIMLib
//
//  Created by Netease.
//  Copyright © 2015 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  进入聊天室请求
 */
@interface NIMChatroomEnterRequest : NSObject

/**
 *  聊天室Id
 */
@property (nonatomic,copy)  NSString    *roomId;

/**
 *  聊天室昵称
 *  @discussion 上层可以自主设置在聊天室内的昵称，没有设置则使用用户本身的信息
 */
@property (nullable,nonatomic,copy)  NSString    *roomNickname;

/**
 *  聊天室头像
 *  @discussion 上层可以自主设置在聊天室内的头像，没有设置则使用用户本身的信息
 */
@property (nullable,nonatomic,copy)  NSString    *roomAvatar;

/**
 *  聊天室拓展字段
 */
@property (nullable,nonatomic,copy)  NSString    *roomExt;
/**
 *  聊天室事件通知拓展字段
 */
@property (nullable,nonatomic,copy)  NSString    *roomNotifyExt;

@end


NS_ASSUME_NONNULL_END


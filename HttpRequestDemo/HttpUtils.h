//
//  AppDelegate.h
//  HttpRequestDemo
//
//  Created by Sumit Sharma on 2/25/14.
//  Copyright (c) 2014 Sumit Sharma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HttpUtils : NSObject
typedef void(^processCompletion)(NSString *response,NSDictionary *paramObj,NSError *error,BOOL isSuccess);
+(void)invokeAPIWithURL:(NSURL*)url parameters:(NSDictionary*)params andCompletionHandler:(processCompletion)block inView:(UIView*)view andLoadmessage:(NSString*)loadMsg;
@end

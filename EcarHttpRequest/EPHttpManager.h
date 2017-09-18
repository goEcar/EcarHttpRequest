//
//  EPHttpManager.h
//  EcarRequestDemo
//
//  Created by liwei qiao on 2017/9/15.
//  Copyright © 2017年 liwei qiao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HttpRequestHelper.h"

@class EPHttpHeadBase;
@interface EPHttpManager : NSObject
{
    
}

+ (EPHttpManager *)shareHttpManager;


/**
 设置http请求基本参数

 @param httpHead EPHttpHeadBase类(根据APP的类型创建此对像)
 */
+ (void)setHttpHead:(EPHttpHeadBase *)httpHead;


/**
 http请求

 @param httpMethod GET或POST选择
 @param parameters 请求参数(包括u,v,t参数，请求方根据接口需要自行带上)
 @param completeHander 请求返回结果
 */
+ (void)requestHttpMethod:(HTTPREQUESTMETHOD)httpMethod
               parameters:(NSDictionary *)parameters
           completeHander:(RequestcompleteHander)completeHander;

/** 下载 */
+ (NSURLSessionDownloadTask *)requestHttpDownloadURLString:(NSString *)baseURL
                                                  fileName:(NSString *)fileName
                                                parameters:(NSDictionary *)parameters
                                     downloadProgressBlock:(DownloadProgressBlock)downloadProgressBlock
                                            completeHander:(RequestcompleteHander)completeHander;

/** 上传二进制图片  */
+ (NSURLSessionDataTask *)requestHttpUploadURLString:(NSString *)baseURL
                                          uploadData:(NSData *)uploadData
                                            fileName:(NSString *)fileName
                                          parameters:(NSMutableDictionary *)parameters
                                 uploadProgressBlock:(UploadProgressBlock)uploadProgressBlock
                                      completeHander:(RequestcompleteHander)completeHander;

/** 上传文件 */
+ (NSURLSessionDataTask *)requestHttpUploadURLString:(NSString *)baseURL
                                      uploadfilePath:(NSString *)uploadfilePath
                                      serverfileName:(NSString *)serverfileName
                                          parameters:(NSMutableDictionary *)parameters
                                 uploadProgressBlock:(UploadProgressBlock)uploadProgressBlock
                                      completeHander:(RequestcompleteHander)completeHander;

@end

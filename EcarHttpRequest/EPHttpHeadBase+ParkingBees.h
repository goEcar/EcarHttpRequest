//
//  EPHttpHeadBase+ParkingBees.h
//  EcarRequestDemo
//
//  Created by liwei qiao on 2017/9/15.
//  Copyright © 2017年 liwei qiao. All rights reserved.
//  蜜蜂停车基本请求信息

#import "EPHttpHeadBase.h"

@interface EPHttpHeadBase (ParkingBees)

+ (EPHttpHeadBase *)createTestingEnvironmentHeadWithParkingBees;
+ (EPHttpHeadBase *)createArchiveEnvironmentHeadWithParkingBees;

@end

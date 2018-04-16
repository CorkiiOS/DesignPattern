//
//  ModelTwoAdapter.h
//  DesignModeDemo
//
//  Created by koala on 2018/4/16.
//  Copyright © 2018年 koala. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserInfoProtocol.h"
#import "ModelTwo.h"

@interface ModelTwoAdapter : NSObject <UserInfoProtocol>

- (instancetype)initWithModel:(ModelTwo *)model;


@end

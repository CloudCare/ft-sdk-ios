//
//  ZYViewController_log.h
//  RuntimDemo
//
//  Created by 胡蕾蕾 on 2019/11/28.
//  Copyright © 2019 hll. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
typedef void(^UploadBlock)(void);

@interface FTAutoTrack : NSObject
@property (nonatomic, strong) UploadBlock block;


@end

NS_ASSUME_NONNULL_END

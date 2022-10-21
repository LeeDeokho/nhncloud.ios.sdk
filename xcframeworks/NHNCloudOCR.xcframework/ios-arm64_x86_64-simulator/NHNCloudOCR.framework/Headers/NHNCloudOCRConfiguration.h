//
//  NHNCloudOCRConfiguration.h
//  NHNCloudOCR
//
//  Created by HyupM1 on 2022/03/16.
//

#import <Foundation/Foundation.h>

#import <NHNCloudCommon/NHNCloudCommon.h>

NS_ASSUME_NONNULL_BEGIN
#ifndef __NHNCloudServiceZone__
#define __NHNCloudServiceZone__

typedef NS_ENUM(NSInteger, NHNCloudServiceZone) {
    NHNCloudServiceZoneReal = 0,
    NHNCloudServiceZoneAlpha = 1,
    NHNCloudServiceZoneBeta = 2,
};

@interface NHNCloudOCRConfiguration : NSObject

@property (strong, nonatomic, readonly) NSString *appKey;
@property (strong, nonatomic, readonly) NSString *secret;
@property (assign, nonatomic) NHNCloudServiceZone serviceZone;

@property (assign, nonatomic) BOOL defaultOCRViewFlag;

+ (instancetype)configurationWithAppKey:(NSString *)appKey secret:(NSString *)secret;
- (instancetype)initWithAppKey:(NSString *)appKey secret:(NSString *)secret NS_SWIFT_NAME(init(appKey:secret:));

- (void)enableTestGuide;
- (void)disableDefaultUI;

@end
#endif
NS_ASSUME_NONNULL_END
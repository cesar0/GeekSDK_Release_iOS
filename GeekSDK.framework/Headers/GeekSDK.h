//
//  GeekSDK.h
//  GeekSDK
//
//  Created by Roking xie on 2019/11/8.
//  Copyright © 2019 Roking xie. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for GeekSDK.
FOUNDATION_EXPORT double GeekSDKVersionNumber;

//! Project version string for GeekSDK.
FOUNDATION_EXPORT const unsigned char GeekSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GeekSDK/PublicHeader.h>


uint16_t crc16 (uint8_t *pD, uint32_t len);
void decode_key_fun(unsigned char fun_key, unsigned char *key);

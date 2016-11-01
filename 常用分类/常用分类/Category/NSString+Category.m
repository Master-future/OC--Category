//
//  NSString+Category.m
//  常用分类
//
//  Created by future on 16/11/1.
//  Copyright © 2016年 future. All rights reserved.
//

#import "NSString+Category.h"
#import <CommonCrypto/CommonDigest.h>
@implementation NSString (Category)
//清空字符串中的空白字符
- (NSString *)trimString
{
    return [self stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

//是否空字符串
- (BOOL)isEmptyString
{
    return (self == nil || self.length == 0);
}

//返回沙盒中的文件路径
- (NSString *)documentsPath
{
    NSString *path = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
    return [path stringByAppendingString:self];
}

//写入系统偏好
- (void)saveToNSDefaultsWithKey:(NSString *)key
{
    [[NSUserDefaults standardUserDefaults] setObject:self forKey:key]; [[NSUserDefaults standardUserDefaults] synchronize];
}

//  将字符串反转(比如@”123”调用方法后返回@”321”)
+ (NSString *)doturnback:(NSString *)str
{
    NSMutableString *str1 = [[NSMutableString alloc] initWithString:str];
    
    int count = (int)str1.length;
    
    for (int i = 0; i <= (count/2); i++)
    {
        char left = [str1 characterAtIndex:i];
        char right = [str1 characterAtIndex:(count - i - 1)];
        
        NSString *rightnow = [[NSString alloc]initWithFormat:@"%c",left];
        NSString *leftnow = [[NSString alloc]initWithFormat:@"%c",right];
        
        [str1 replaceCharactersInRange:NSMakeRange(i, 1) withString:leftnow];
        [str1 replaceCharactersInRange:NSMakeRange((count - i - 1), 1) withString:rightnow];
    }
    return str1;
}
@end

@implementation NSString (Base64)

-(NSString *)base64Encode:(NSString *)string {
    //加密解密都是对二进制的操作
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
    //选项
    return [data base64EncodedStringWithOptions:0];
}

//解码
-(NSString *)base64Decode:(NSString *)base64String{
    
    NSData *data = [[NSData alloc] initWithBase64EncodedString:base64String options:0];
    
    return [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
}

@end

@implementation NSString (MD5)

- (NSString *) md5WithString
{
    if(self == nil || [self length] == 0)
        return nil;
    
    const char *value = [self UTF8String];
    
    unsigned char outputBuffer[CC_MD5_DIGEST_LENGTH];
    CC_MD5(value, strlen(value), outputBuffer);
    
    NSMutableString *outputString = [[NSMutableString alloc] initWithCapacity:CC_MD5_DIGEST_LENGTH * 2];
    for(NSInteger count = 0; count < CC_MD5_DIGEST_LENGTH; count++){
        [outputString appendFormat:@"%02x",outputBuffer[count]];
    }
    
    return [NSString stringWithString:outputString];
}

@end

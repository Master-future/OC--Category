//
//  TJCommon.h
//  常用分类
//
//  Created by future on 16/11/1.
//  Copyright © 2016年 future. All rights reserved.
//

#ifndef TJCommon_h
#define TJCommon_h


#endif /* TJCommon_h */
//弱引用
#define WEAKSELF typeof(self) __weak weakSelf = self;

//获取屏幕 宽度、高度
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

//屏幕的宽高比
#define UIRate SCREEN_WIDTH/375.0

//获取屏幕
#define MainScreen [UIScreen mainScreen]

//获取application单例
#define SharedApplication [UIApplication sharedApplication]

//获取通知中心单例
#define LRNotificationCenter [NSNotificationCenter defaultCenter]

//NSUserDefaults 单利对象
#define USER_DEFAULT [NSUserDefaults standardUserDefaults]

//系统版本
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]

//APP版本号
#define APP_Version [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

//随机色
#define RDM_COLOR [UIColor colorWithRed:arc4random_uniform(255)/255.0 green:arc4random_uniform(255)/255.0 blue:arc4random_uniform(255)/255.0 alpha:1]

//获取temp
#define Path_Temp NSTemporaryDirectory()
//获取沙盒 Document
#define Path_Document [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject]
//获取沙盒 Cache
#define Path_Cache [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject]

//输出入日志
#ifdef DEBUG
#define NSLog(...) NSLog(__VA_ARGS__)
#else
#define NSLog(...)
#endif

//判断是否为iPhone
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

//判断是否为iPad
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

//判断是否为ipod
#define IS_IPOD ([[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"])

// 判断是否为 iPhone 5SE
#define iPhone5SE SCREEN_WIDTH == 320.0f && SCREEN_HEIGHT == 568.0f

// 判断是否为iPhone 6/6s
#define iPhone6_6s SCREEN_WIDTH == 375.0f && SCREEN_HEIGHT == 667.0f

// 判断是否为iPhone 6Plus/6sPlus
#define iPhone6Plus_6sPlus SCREEN_WIDTH == 414.0f && SCREEN_HEIGHT == 736.0f

//判断 iOS 8 或更高的系统版本
#define IOS_VERSION_8_OR_LATER (([[[UIDevice currentDevice] systemVersion] floatValue] >=8.0)? (YES):(NO))


//使用ARC和不使用ARC
#if __has_feature(objc_arc)
// 编译ARC类
#else
// 编译非ARC类
#endif

//读取本地图片.和imageNamed一样，但是性能比后者要强很多。两个参数，前面一个是文件名，后面一个是类型扩展名,例如 imageView.image =  LOADIMAGE(@"文件名",@"png");
#define LoadImage(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]

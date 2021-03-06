//
//  MyTanwei.h
//  17huanba
//
//  Created by Chen Hao on 13-2-22.
//  Copyright (c) 2013年 Chen Hao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PullingRefreshTableView.h"
#import "ASIFormDataRequest.h"
#import "KYShareViewController.h"

@interface MyTanwei : UIViewController<UITableViewDelegate,UITableViewDataSource,PullingRefreshTableViewDelegate,UIActionSheetDelegate>
{
    int page;
}

@property(retain,nonatomic)PullingRefreshTableView *tanweiTableView;
@property(assign,nonatomic)BOOL refreshing;
@property(retain,nonatomic)NSMutableArray *tanweiArray;

@property(retain,nonatomic)ASIFormDataRequest *form_request;
@property(retain,nonatomic)NSIndexPath *theIndexPath;
@property (nonatomic, retain)KYShareViewController *shareVC;

@end

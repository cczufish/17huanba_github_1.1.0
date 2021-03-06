//
//  Fabu.h
//  17huanba
//
//  Created by Chen Hao on 13-1-25.
//  Copyright (c) 2013年 Chen Hao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPTextViewPlaceholder.h"
#import "sqlService.h"
#import "FenleiSelect.h"
#import "Address.h"
#import "ASIFormDataRequest.h"


@interface Fabu : UIViewController<UITableViewDelegate,UITableViewDataSource,UITextViewDelegate,UITextFieldDelegate,UIPickerViewDelegate,UIPickerViewDataSource,UIActionSheetDelegate,UINavigationControllerDelegate,UIImagePickerControllerDelegate,BackToFabu,SelectTheAddress,UIAlertViewDelegate>
{
    UIImagePickerController *imagePicker;
    UIPickerView *cityPicker;
    NSMutableArray *proviceArray,*cityArray,*regionArray;
    sqlService *service;
    NSString *proviceStr,*cityStr,*regionStr;
    NSMutableArray *imgArray; //获取的图片组成的数组
}
@property(nonatomic,retain)NSMutableArray *proviceArray,*cityArray,*regionArray;

@property(retain,nonatomic)UITableView *fabuTableView;
@property(retain,nonatomic)UIScrollView *picScrollView;
@property(retain,nonatomic)CPTextViewPlaceholder *biaotiTV;
@property(retain,nonatomic)CPTextViewPlaceholder *miaoshuTV;
@property(retain,nonatomic)UITextField *RMBTF; //金币
@property(retain,nonatomic)UITextField *huanbiTF; //换币
@property(retain,nonatomic)UITextField *yuanjiaTF;
@property(retain,nonatomic)UITextField *fangshiTF;
//@property(retain,nonatomic)UIPickerView *fangshiPV;
@property(retain,nonatomic)UITextField *tongchengTF; //同城运费
@property(retain,nonatomic)UITextField *yidiTF; //异地运费
@property(retain,nonatomic)UITextField *fenleiTF;
//@property(retain,nonatomic)UIPickerView *fenleiPV;
@property(retain,nonatomic)UITextField *chengseTF;
@property(retain,nonatomic)UIPickerView *chengsePV;
@property(retain,nonatomic)UITextField *weizhiTF;
@property(retain,nonatomic)UIPickerView *weizhiPV;
@property(retain,nonatomic)UITextField *wuwuTF;
@property(nonatomic, retain) UIToolbar *keyboardToolbar;

@property(retain,nonatomic)UITextField *shouTF; //物品收货地址

@property(nonatomic,retain)NSArray *fangshiArray;
@property(nonatomic,retain)NSArray *chengseArray;

@property(nonatomic,retain)NSDictionary *theFenleiDic;

@property(nonatomic,retain)NSString *addrID;

//@property(nonatomic,retain)UISegmentedControl *baoyouSeg;
//@property(nonatomic,retain)UISegmentedControl *sellTypeSeg;

@property(nonatomic,assign)BOOL isEdit;
@property(nonatomic,retain)NSString *goodsID;
@property(nonatomic,retain)ASIFormDataRequest *detailGoodsRequest;
@property(nonatomic,retain)NSDictionary *dataDic;


@property(nonatomic,retain)NSArray *baoyouArray;
@property(nonatomic,retain)NSArray *sell_styleArray;
@property(retain,nonatomic)UITextField *baoyouTF;
@property(retain,nonatomic)UIPickerView *baoyouPV;
@property(retain,nonatomic)UITextField *sell_styleTF;
@property(retain,nonatomic)UIPickerView *sell_stylePV;


@end

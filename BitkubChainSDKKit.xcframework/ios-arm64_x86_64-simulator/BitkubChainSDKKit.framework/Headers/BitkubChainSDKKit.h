//
//  BitkubChainSDKKit.h
//  BitkubChainSDKKit
//

#ifndef BitkubChainSDKKit_h
#define BitkubChainSDKKit_h

#import <Foundation/Foundation.h>

#import <BitkubChainSDKKit/bkcbase.h>
#import <BitkubChainSDKKit/bkcerr.h>
#import <BitkubChainSDKKit/bkctypes.h>

//! Project version number for BitkubChainSDKKit.
FOUNDATION_EXPORT double BitkubChainSDKKitVersionNumber;

//! Project version string for BitkubChainSDKKit.
FOUNDATION_EXPORT const unsigned char BitkubChainSDKKitVersionString[];

NS_ASSUME_NONNULL_BEGIN

@interface BitkubChainSDK : NSObject

- (int)initializeSDKWithClientID:(NSString *_Nonnull)clientID
                           sdkID:(NSString *_Nonnull)sdkID
                         network:(enum NETWORK)network
                        initOpts:(const InitOptions *_Nullable)initOpts;

- (void)loginWithBitkubNext:(void (^)(int resultCode))completion NS_SWIFT_NAME(loginWithBitkubNext(completion:));
- (int)logout;
- (int)getLoginStatus:(enum LOGIN_STATUS *_Nonnull)loginStatus;
- (int)getUserInfo:(UserInfo *_Nonnull)userInfo;
- (int)getUserWalletAddress:(NSString *_Nullable *_Nonnull)walletAddress;
- (int)getUserTel:(NSString *_Nullable *_Nonnull)tel;
- (int)getUserEmail:(NSString *_Nullable *_Nonnull)email;
- (int)getUserID:(NSString *_Nullable *_Nonnull)userID;
- (int)getUserQuota:(Quota *_Nonnull)quota;

- (int)getBalanceNativeWithBalanceAndDecimals:(BalanceAndDecimals * _Nonnull)balanceAndDecimals NS_SWIFT_NAME(getBalanceNative(balanceAndDecimals:));
- (int)getBalance20WithTokenAddress:(NSString *_Nonnull)tokenAddress
                 balanceAndDecimals:(BalanceAndDecimals *_Nonnull)balanceAndDecimals NS_SWIFT_NAME(getBalance20WithTokenAddress(_:balanceAndDecimals:));
- (int)getBalance721WithTokenAddress:(NSString *_Nonnull)tokenAddress
                             balance:(NSString *_Nullable *_Nonnull)balance NS_SWIFT_NAME(getBalance721WithTokenAddress(_:balance:));
- (int)getTokenOfOwnerAll721WithTokenAddress:(NSString *_Nonnull)tokenAddress
                                  tokenArray:(NSArray<NSString *> *_Nullable *_Nonnull)tokenArray NS_SWIFT_NAME(getTokenOfOwnerAll721WithTokenAddress(_:tokenArray:));
- (int)getTokenOfOwnerByPage721WithTokenAddress:(NSString *_Nonnull)tokenAddress
                                           page:(u64)page
                                          limit:(u64)limit
                                     tokenArray:(NSArray<NSString *> *_Nullable *_Nonnull)tokenArray NS_SWIFT_NAME(getTokenOfOwnerByPage721WithTokenAddress(_:page:limit:tokenArray:));
- (int)getMetadata721WithTokenAddress:(NSString *_Nonnull)tokenAddress
                              tokenID:(NSString *_Nonnull)tokenID
                             metadata:(NSString *_Nullable *_Nonnull)metadata NS_SWIFT_NAME(getMetadata721WithTokenAddress(_:tokenID:metadata:));
- (int)getBalance1155WithTokenAddress:(NSString *_Nonnull)tokenAddress
                              tokenID:(NSString *_Nonnull)tokenID
                              balance:(NSString *_Nullable * _Nonnull)balance NS_SWIFT_NAME(getBalance1155WithTokenAddress(_:tokenID:balance:));
- (int)getMetadata1155WithTokenAddress:(NSString *_Nonnull)tokenAddress
                               tokenID:(NSString *_Nonnull)tokenID
                              metadata:(NSString *_Nullable *_Nonnull)metadata NS_SWIFT_NAME(getMetadata1155WithTokenAddress(_:tokenID:metadata:));

- (int)approveTokenWithTokenAddress:(NSString *_Nonnull)tokenAddress
                     spenderAddress:(NSString *_Nonnull)spenderAddress
                             amount:(NSString *_Nonnull)amount
                             result:(SubmitTransactionResult *_Nonnull)result NS_SWIFT_NAME(approveTokenWithTokenAddress(_:spenderAddress:amount:result:));
- (int)approveNFTWithTokenAddress:(NSString *_Nonnull)tokenAddress
                  operatorAddress:(NSString *_Nonnull)operatorAddress
                           result:(SubmitTransactionResult *_Nonnull)result NS_SWIFT_NAME(approveNFTWithTokenAddress(_:operatorAddress:result:));

- (int)transferNativeWithToAddress:(NSString *_Nonnull)toAddress
                            amount:(NSString *_Nonnull)amount
                            result:(SubmitTransactionResult *_Nonnull)result NS_SWIFT_NAME(transferNativeWithToAddress(_:amount:result:));
- (int)transfer20WithTokenAddress:(NSString *_Nonnull)tokenAddress
                        toAddress:(NSString *_Nonnull)toAddress
                           amount:(NSString *_Nonnull)amount
                           result:(SubmitTransactionResult *_Nonnull)result NS_SWIFT_NAME(transfer20WithTokenAddress(_:toAddress:amount:result:));
- (int)transfer721WithTokenAddress:(NSString *_Nonnull)tokenAddress
                         toAddress:(NSString *_Nonnull)toAddress
                           tokenID:(NSString *_Nonnull)tokenID
                            result:(SubmitTransactionResult *_Nonnull)result NS_SWIFT_NAME(transfer721WithTokenAddress(_:toAddress:tokenID:result:));
- (int)transfer1155WithTokenAddress:(NSString *_Nonnull)tokenAddress
                          toAddress:(NSString *_Nonnull)toAddress
                            tokenID:(NSString *_Nonnull)tokenID
                             amount:(NSString *_Nonnull)amount
                             result:(SubmitTransactionResult *_Nonnull)result NS_SWIFT_NAME(transfer1155WithTokenAddress(_:toAddress:tokenID:amount:result:));

- (int)sendCustomTransactionWithToAddress:(NSString *_Nonnull)toAddress
                      functionReadableABI:(NSString *_Nonnull)functionReadableABI
                                   params:(NSArray<NSString *> *)params
                                   result:(SubmitTransactionResult *_Nonnull)result NS_SWIFT_NAME(sendCustomTransactionWithToAddress(_:functionReadableABI:params:result:));
- (int)getTransactionDetailsWithTransactionID:(NSString *_Nonnull)transactionID
                                       result:(TransactionDetails *_Nonnull)result NS_SWIFT_NAME(getTransactionDetailsWithTransactionID(_:result:));

@end

NS_ASSUME_NONNULL_END

#endif /* BitkubChainSDKKit_h */

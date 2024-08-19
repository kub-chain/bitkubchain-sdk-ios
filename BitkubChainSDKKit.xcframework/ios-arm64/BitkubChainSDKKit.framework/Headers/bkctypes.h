#ifndef bkctypes_h
#define bkctypes_h

#include <BitkubChainSDKKit/bkcbase.h>

enum NETWORK {
    BKC_MAINNET = 0,
    BKC_TESTNET,
};

enum LOGIN_STATUS {
    NOT_CONNECTED = 0,
    CONNECTED,
    DISCONNECTED,
};

enum APPROVAL_STATUS {
    APRV_PENDING = 0,
    APRV_APPROVED,
};

enum TRANSACTION_STATUS {
    TX_PENDING = 0,
    TX_SUCCESS,
    TX_FAILED,
    TX_MINED,
};

@interface InitOptions : NSObject
@property (nonatomic, assign) u16 loginRedirectPort;
@property (nonatomic, strong) NSString *loginRedirectPath;
@end

@interface UserInfo : NSObject
@property (nonatomic, strong) NSString *id;
@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *phone;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *walletAddress;
@property (nonatomic, assign) s64 iat;
@property (nonatomic, assign) s64 exp;
@end

@interface Quota : NSObject
@property (nonatomic, assign) s64 currentFree;
@property (nonatomic, assign) s64 limitFree;
@property (nonatomic, assign) s64 currentPaid;
@end

@interface BalanceAndDecimals : NSObject
@property (nonatomic, strong) NSString *balance;
@property (nonatomic, assign) u8 decimals;
@end

@interface SubmitTransactionResult : NSObject
@property (nonatomic, assign) s64 approvalExpireTime;
@property (nonatomic, assign) enum APPROVAL_STATUS approvalStatus;
@property (nonatomic, strong) NSString *approvalURL;
@property (nonatomic, strong) NSString *queueID;
@end

@interface TransactionDetails : NSObject
@property (nonatomic, strong) NSString *errorMessage;
@property (nonatomic, strong) NSString *queueID;
@property (nonatomic, strong) NSString *signature;
@property (nonatomic, assign) enum TRANSACTION_STATUS status;
@property (nonatomic, strong) NSString *txHash;
@property (nonatomic, assign) s64 createdTime;
@property (nonatomic, assign) s64 updatedTime;
@end

#endif /* bkctypes_h */

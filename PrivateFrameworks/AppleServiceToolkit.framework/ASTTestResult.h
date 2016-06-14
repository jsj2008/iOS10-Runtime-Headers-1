/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTTestResult : NSObject {
    NSDictionary * _data;
    NSArray * _files;
    NSDictionary * _predicates;
    NSNumber * _statusCode;
    double  _testDuration;
    NSNumber * _testId;
}

@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) NSArray *files;
@property (nonatomic, retain) NSDictionary *predicates;
@property (nonatomic, retain) NSNumber *statusCode;
@property (nonatomic) double testDuration;
@property (nonatomic, retain) NSNumber *testId;

+ (id)resultWithTestId:(id)arg1 parameters:(id)arg2;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)dictionary;
- (id)files;
- (id)init;
- (id)initWithTestId:(id)arg1 parameters:(id)arg2;
- (id)predicates;
- (void)setData:(id)arg1;
- (void)setFiles:(id)arg1;
- (void)setPredicates:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (void)setTestDuration:(double)arg1;
- (void)setTestId:(id)arg1;
- (id)statusCode;
- (double)testDuration;
- (id)testId;

@end
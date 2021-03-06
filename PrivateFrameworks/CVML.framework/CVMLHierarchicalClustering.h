/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLHierarchicalClustering : NSObject <CVMLClustering> {
    struct shared_ptr<vision::mod::ClusteringAbstract> { 
        struct ClusteringAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_ClusteringImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 cancellationSemaphore:(id)arg3 error:(id*)arg4;
- (id)getClustersWithOptions:(id)arg1 cancellationSemaphore:(id)arg2 error:(id*)arg3;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;

@end

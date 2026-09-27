#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelSortExtensions_RadixSortBucketCountJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelSortExtensions_RadixSortBucketCountJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob::*)(int32_t)>(&::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob::Execute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb2137d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr  GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob::operator ::Unity::Jobs::IJobFor*()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob::i___Unity__Jobs__IJobFor()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "batchSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob::ParallelSortExtensions_RadixSortBucketCountJob(int32_t  radix, int32_t  jobsCount, int32_t  batchSize, ::Unity::Collections::NativeArray_1<int32_t>  array, ::Unity::Collections::NativeArray_1<int32_t>  buckets) noexcept  {
this->radix = radix;
this->jobsCount = jobsCount;
this->batchSize = batchSize;
this->array = array;
this->buckets = buckets;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob::ParallelSortExtensions_RadixSortBucketCountJob()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelSortExtensions_RadixSortBatchPrefixSumJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelSortExtensions_RadixSortBatchPrefixSumJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob.AtomicIncrement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::NativeArray_1<int32_t>)>(&::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::AtomicIncrement)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb213838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"AtomicIncrement", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob.JobIndexPrefixSum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::*)(int32_t, int32_t)>(&::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::JobIndexPrefixSum)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb2138a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"JobIndexPrefixSum", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::*)(int32_t)>(&::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::Execute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb2138ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::AtomicIncrement(::Unity::Collections::NativeArray_1<int32_t>  counter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"AtomicIncrement", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, counter);
}
inline int32_t GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::JobIndexPrefixSum(int32_t  sum, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"JobIndexPrefixSum", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, sum, i);
}
inline void GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr  GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::operator ::Unity::Jobs::IJobFor*()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::i___Unity__Jobs__IJobFor()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "counter", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::ParallelSortExtensions_RadixSortBatchPrefixSumJob(int32_t  radix, int32_t  jobsCount, ::Unity::Collections::NativeArray_1<int32_t>  array, ::Unity::Collections::NativeArray_1<int32_t>  counter, ::Unity::Collections::NativeArray_1<int32_t>  indicesSum, ::Unity::Collections::NativeArray_1<int32_t>  buckets, ::Unity::Collections::NativeArray_1<int32_t>  indices) noexcept  {
this->radix = radix;
this->jobsCount = jobsCount;
this->array = array;
this->counter = counter;
this->indicesSum = indicesSum;
this->buckets = buckets;
this->indices = indices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob::ParallelSortExtensions_RadixSortBatchPrefixSumJob()   {
}

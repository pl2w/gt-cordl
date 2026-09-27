#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelSortExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelSortExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelSortExtensions_RadixSortBatchPrefixSumJob_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelSortExtensions_RadixSortBucketCountJob_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelSortExtensions_RadixSortBucketSortJob_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelSortExtensions_RadixSortPrefixSumJob_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions.ParallelSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<int32_t>)>(&::UnityEngine::Rendering::ParallelSortExtensions::ParallelSort)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xb2132f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions*>(),
                        {"ParallelSort", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions._ParallelSort_g__Swap_2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>)>(&::UnityEngine::Rendering::ParallelSortExtensions::_ParallelSort_g__Swap_2_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb2137b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions*>(),
                        {"<ParallelSort>g__Swap|2_0", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::ParallelSortExtensions::ParallelSort(::Unity::Collections::NativeArray_1<int32_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions*>(),
                        {"ParallelSort", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, array);
}
inline void UnityEngine::Rendering::ParallelSortExtensions::_ParallelSort_g__Swap_2_0(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  a, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions*>(),
                        {"<ParallelSort>g__Swap|2_0", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ParallelSortExtensions::ParallelSortExtensions()   {
}

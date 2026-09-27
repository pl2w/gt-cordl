#pragma once
// IWYU pragma private; include "Fusion/Allocator.hpp"
#include "Fusion/zzzz__Allocator_BlockList_impl.hpp"
#include "Fusion/zzzz__Allocator_Block_impl.hpp"
#include "Fusion/zzzz__Allocator_Bucket_impl.hpp"
#include "Fusion/zzzz__Allocator_Config_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Allocator_def.hpp"
#include "Fusion/Statistics/zzzz__MemoryStatisticsSnapshot_def.hpp"
#include "Fusion/zzzz__Allocator_BlockList_def.hpp"
#include "Fusion/zzzz__Allocator_Block_def.hpp"
#include "Fusion/zzzz__Allocator_Bucket_def.hpp"
#include "Fusion/zzzz__Allocator_Config_def.hpp"
#include "Fusion/zzzz__Allocator_Segment_def.hpp"
#include "Fusion/zzzz__Allocator_def.hpp"
#include "Fusion/zzzz__Ptr_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Fusion::Allocator.AllocAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::Fusion::Allocator*, int32_t)>(&::Fusion::Allocator::AllocAndClear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f6bb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"AllocAndClear", {}, {::i2c::type_of<::Fusion::Allocator*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Allocator*)>(&::Fusion::Allocator::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f6bb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Dispose", {}, {::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Allocator_Config (::Fusion::Allocator::*)()>(&::Fusion::Allocator::get_Configuration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f6bbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.LogPointerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Allocator::*)(void*)>(&::Fusion::Allocator::LogPointerInfo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f6bbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"LogPointerInfo", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.Ptr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Ptr (::Fusion::Allocator::*)(void*)>(&::Fusion::Allocator::Ptr)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f6bcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Ptr", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.Ptr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::Fusion::Allocator::*)(::Fusion::Ptr)>(&::Fusion::Allocator::Ptr)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f6bd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Ptr", {}, {::i2c::type_of<::Fusion::Ptr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.IsPointerInHeap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Allocator::*)(void*)>(&::Fusion::Allocator::IsPointerInHeap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f6bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"IsPointerInHeap", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.WordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::Allocator::WordCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f6be10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"WordCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetBucket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::Allocator_Bucket> (::Fusion::Allocator::*)(int32_t)>(&::Fusion::Allocator::GetBucket)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f6be38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBucket", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetBucketForBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::Allocator_Bucket> (::Fusion::Allocator::*)(::by_ref<::GlobalNamespace::Allocator_Block>)>(&::Fusion::Allocator::GetBucketForBlock)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f6be88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBucketForBlock", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetBucketList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::Allocator_BlockList> (::Fusion::Allocator::*)(int32_t)>(&::Fusion::Allocator::GetBucketList)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f6bed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBucketList", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::Allocator_Block> (::Fusion::Allocator::*)(int32_t)>(&::Fusion::Allocator::GetBlock)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f6bf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::Allocator_Block> (::Fusion::Allocator::*)(int64_t)>(&::Fusion::Allocator::GetBlock)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f6bf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlock", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetBlockBucket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Allocator::*)(int64_t)>(&::Fusion::Allocator::GetBlockBucket)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f6c00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlockBucket", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetBlockForPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::Allocator_Block> (::Fusion::Allocator::*)(void*)>(&::Fusion::Allocator::GetBlockForPointer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f6c08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlockForPointer", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetBlockIndexForPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Allocator::*)(void*)>(&::Fusion::Allocator::GetBlockIndexForPointer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f6c168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlockIndexForPointer", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetBlockMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Fusion::Allocator::*)(::by_ref<::GlobalNamespace::Allocator_Block>)>(&::Fusion::Allocator::GetBlockMemory)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f6c200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlockMemory", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetBlockMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Fusion::Allocator::*)(int64_t)>(&::Fusion::Allocator::GetBlockMemory)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f6c228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlockMemory", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.TryGetSegmentRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Allocator::*)(void*, ::by_ref<void*>, ::by_ref<int64_t>)>(&::Fusion::Allocator::TryGetSegmentRoot)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5f6c27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"TryGetSegmentRoot", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<void*>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetSegmentRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::Fusion::Allocator::*)(void*)>(&::Fusion::Allocator::GetSegmentRoot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f6c3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetSegmentRoot", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.AllocAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::Fusion::Allocator::*)(int32_t)>(&::Fusion::Allocator::AllocAndClear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f6bb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"AllocAndClear", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetTotalSegmentsUsedInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Allocator::*)()>(&::Fusion::Allocator::GetTotalSegmentsUsedInBytes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f6c950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetTotalSegmentsUsedInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetMemorySnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Allocator::*)(::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>)>(&::Fusion::Allocator::GetMemorySnapshot)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5f6ca20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetMemorySnapshot", {}, {::i2c::type_of<::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.GetFreeSegmentsInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Allocator::*)()>(&::Fusion::Allocator::GetFreeSegmentsInBytes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f6cd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetFreeSegmentsInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.CanAllocSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Allocator::*)(int32_t)>(&::Fusion::Allocator::CanAllocSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f6cd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"CanAllocSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.ValidateSentinels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Allocator::*)()>(&::Fusion::Allocator::ValidateSentinels)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f6cd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"ValidateSentinels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.ValidatePointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Allocator::*)(void*, ::by_ref<::StringW>)>(&::Fusion::Allocator::ValidatePointer)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5f6cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"ValidatePointer", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.Alloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::Fusion::Allocator::*)(int32_t)>(&::Fusion::Allocator::Alloc)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x5f6c450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Alloc", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.TryAllocateSegmentFromBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::Fusion::Allocator::*)(::by_ref<::GlobalNamespace::Allocator_Bucket>, ::by_ref<::GlobalNamespace::Allocator_Block>, int32_t)>(&::Fusion::Allocator::TryAllocateSegmentFromBlock)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x5f6d3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"TryAllocateSegmentFromBlock", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Bucket>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.FreeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Allocator::*)(void*)>(&::Fusion::Allocator::FreeInternal)> {
  constexpr static std::size_t size = 0x8a4;
  constexpr static std::size_t addrs = 0x5f6de2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"FreeInternal", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.DebugVerifyBucketIntegrity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Allocator::*)(int32_t)>(&::Fusion::Allocator::DebugVerifyBucketIntegrity)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f6d224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"DebugVerifyBucketIntegrity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Allocator::*)()>(&::Fusion::Allocator::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f6bb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Allocator::*)(::GlobalNamespace::Allocator_Config)>(&::Fusion::Allocator::_ctor)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5f6e918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Allocator_Config>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Allocator* (*)(::GlobalNamespace::Allocator_Config)>(&::Fusion::Allocator::Create)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f6ef44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Create", {}, {::i2c::type_of<::GlobalNamespace::Allocator_Config>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.InitSegmentSentinels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, int32_t)>(&::Fusion::Allocator::InitSegmentSentinels)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f6efac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"InitSegmentSentinels", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.ValidateSegmentSentinels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Allocator::*)(void*, int32_t)>(&::Fusion::Allocator::ValidateSegmentSentinels)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x5f6f088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"ValidateSegmentSentinels", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Allocator.ValidateSegmentSentinels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, int32_t, ::by_ref<::StringW>)>(&::Fusion::Allocator::ValidateSegmentSentinels)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5f6cf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"ValidateSegmentSentinels", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t*& Fusion::Allocator::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr uint8_t* const& Fusion::Allocator::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Fusion::Allocator::__cordl_internal_set__root(uint8_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root = value;
}
constexpr uint8_t*& Fusion::Allocator::__cordl_internal_get__heap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heap;
}
constexpr uint8_t* const& Fusion::Allocator::__cordl_internal_get__heap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heap;
}
constexpr void Fusion::Allocator::__cordl_internal_set__heap(uint8_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heap = value;
}
constexpr ::ArrayW<::GlobalNamespace::Allocator_Block>& Fusion::Allocator::__cordl_internal_get__blocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blocks;
}
constexpr ::ArrayW<::GlobalNamespace::Allocator_Block> const& Fusion::Allocator::__cordl_internal_get__blocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blocks;
}
constexpr void Fusion::Allocator::__cordl_internal_set__blocks(::ArrayW<::GlobalNamespace::Allocator_Block>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blocks = value;
}
constexpr ::GlobalNamespace::Allocator_BlockList& Fusion::Allocator::__cordl_internal_get__blocksFreeList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blocksFreeList;
}
constexpr ::GlobalNamespace::Allocator_BlockList const& Fusion::Allocator::__cordl_internal_get__blocksFreeList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blocksFreeList;
}
constexpr void Fusion::Allocator::__cordl_internal_set__blocksFreeList(::GlobalNamespace::Allocator_BlockList  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blocksFreeList = value;
}
constexpr ::ArrayW<::GlobalNamespace::Allocator_Bucket>& Fusion::Allocator::__cordl_internal_get__buckets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buckets;
}
constexpr ::ArrayW<::GlobalNamespace::Allocator_Bucket> const& Fusion::Allocator::__cordl_internal_get__buckets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buckets;
}
constexpr void Fusion::Allocator::__cordl_internal_set__buckets(::ArrayW<::GlobalNamespace::Allocator_Bucket>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buckets = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Allocator::__cordl_internal_get__bucketsMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bucketsMap;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Allocator::__cordl_internal_get__bucketsMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bucketsMap;
}
constexpr void Fusion::Allocator::__cordl_internal_set__bucketsMap(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bucketsMap = value;
}
constexpr ::ArrayW<::GlobalNamespace::Allocator_BlockList>& Fusion::Allocator::__cordl_internal_get__bucketsLists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bucketsLists;
}
constexpr ::ArrayW<::GlobalNamespace::Allocator_BlockList> const& Fusion::Allocator::__cordl_internal_get__bucketsLists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bucketsLists;
}
constexpr void Fusion::Allocator::__cordl_internal_set__bucketsLists(::ArrayW<::GlobalNamespace::Allocator_BlockList>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bucketsLists = value;
}
constexpr ::GlobalNamespace::Allocator_Config& Fusion::Allocator::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::GlobalNamespace::Allocator_Config const& Fusion::Allocator::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Fusion::Allocator::__cordl_internal_set__config(::GlobalNamespace::Allocator_Config  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::IntPtr>*& Fusion::Allocator::__cordl_internal_get__allocated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocated;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::IntPtr>* const& Fusion::Allocator::__cordl_internal_get__allocated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocated;
}
constexpr void Fusion::Allocator::__cordl_internal_set__allocated(::System::Collections::Generic::HashSet_1<::System::IntPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allocated = value;
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::Allocator::Free(::Fusion::Allocator*  allocator, ::by_ref<T*>  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Allocator*>(),
                    {"Free", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::Allocator*>(), ::i2c::type_of<::by_ref<T*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allocator, ptr);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Allocator::AllocAndClearArray(::Fusion::Allocator*  allocator, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Allocator*>(),
                    {"AllocAndClearArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::Allocator*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, allocator, length);
}
inline void* Fusion::Allocator::AllocAndClear(::Fusion::Allocator*  allocator, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"AllocAndClear", {}, {::i2c::type_of<::Fusion::Allocator*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, allocator, size);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Allocator::AllocAndClear(::Fusion::Allocator*  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Allocator*>(),
                    {"AllocAndClear", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::Allocator*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, allocator);
}
inline void Fusion::Allocator::Dispose(::Fusion::Allocator*  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Dispose", {}, {::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allocator);
}
inline ::GlobalNamespace::Allocator_Config Fusion::Allocator::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Allocator_Config>(this, ___internal_method);
}
inline ::StringW Fusion::Allocator::LogPointerInfo(void*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"LogPointerInfo", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, p);
}
inline ::Fusion::Ptr Fusion::Allocator::Ptr(void*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Ptr", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Ptr>(this, ___internal_method, p);
}
inline void* Fusion::Allocator::Ptr(::Fusion::Ptr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Ptr", {}, {::i2c::type_of<::Fusion::Ptr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, ptr);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Allocator::Ptr(::Fusion::Ptr  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Allocator*>(),
                    {"Ptr", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::Ptr>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(this, ___internal_method, ptr);
}
inline bool Fusion::Allocator::IsPointerInHeap(void*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"IsPointerInHeap", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline int32_t Fusion::Allocator::WordCount(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"WordCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline ::by_ref<::GlobalNamespace::Allocator_Bucket> Fusion::Allocator::GetBucket(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBucket", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::Allocator_Bucket>>(this, ___internal_method, index);
}
inline ::by_ref<::GlobalNamespace::Allocator_Bucket> Fusion::Allocator::GetBucketForBlock(::by_ref<::GlobalNamespace::Allocator_Block>  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBucketForBlock", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::Allocator_Bucket>>(this, ___internal_method, block);
}
inline ::by_ref<::GlobalNamespace::Allocator_BlockList> Fusion::Allocator::GetBucketList(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBucketList", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::Allocator_BlockList>>(this, ___internal_method, index);
}
inline ::by_ref<::GlobalNamespace::Allocator_Block> Fusion::Allocator::GetBlock(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::Allocator_Block>>(this, ___internal_method, index);
}
inline ::by_ref<::GlobalNamespace::Allocator_Block> Fusion::Allocator::GetBlock(int64_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlock", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::Allocator_Block>>(this, ___internal_method, index);
}
inline int32_t Fusion::Allocator::GetBlockBucket(int64_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlockBucket", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::by_ref<::GlobalNamespace::Allocator_Block> Fusion::Allocator::GetBlockForPointer(void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlockForPointer", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::Allocator_Block>>(this, ___internal_method, ptr);
}
inline int32_t Fusion::Allocator::GetBlockIndexForPointer(void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlockIndexForPointer", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ptr);
}
inline uint8_t* Fusion::Allocator::GetBlockMemory(::by_ref<::GlobalNamespace::Allocator_Block>  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlockMemory", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(this, ___internal_method, block);
}
inline uint8_t* Fusion::Allocator::GetBlockMemory(int64_t  blockIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetBlockMemory", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(this, ___internal_method, blockIndex);
}
inline bool Fusion::Allocator::TryGetSegmentRoot(void*  ptr, ::by_ref<void*>  root, ::by_ref<int64_t>  segmentIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"TryGetSegmentRoot", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<void*>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ptr, root, segmentIndex);
}
inline void* Fusion::Allocator::GetSegmentRoot(void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetSegmentRoot", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, ptr);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Allocator::AllocArray(int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Allocator*>(),
                    {"AllocArray", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(this, ___internal_method, length);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Allocator::AllocAndClearArray(int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Allocator*>(),
                    {"AllocAndClearArray", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(this, ___internal_method, length);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Allocator::Alloc()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Allocator*>(),
                    {"Alloc", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Allocator::AllocAndClear()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Allocator*>(),
                    {"AllocAndClear", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(this, ___internal_method);
}
inline void* Fusion::Allocator::AllocAndClear(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"AllocAndClear", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, size);
}
inline int32_t Fusion::Allocator::GetTotalSegmentsUsedInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetTotalSegmentsUsedInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Allocator::GetMemorySnapshot(::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetMemorySnapshot", {}, {::i2c::type_of<::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot);
}
inline int32_t Fusion::Allocator::GetFreeSegmentsInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"GetFreeSegmentsInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::Allocator::CanAllocSize(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"CanAllocSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, size);
}
inline void Fusion::Allocator::ValidateSentinels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"ValidateSentinels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Allocator::ValidatePointer(void*  ptr, ::by_ref<::StringW>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"ValidatePointer", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ptr, error);
}
inline void* Fusion::Allocator::Alloc(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Alloc", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, size);
}
inline void* Fusion::Allocator::TryAllocateSegmentFromBlock(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Allocator_Bucket>  bucket, ::by_ref<::GlobalNamespace::Allocator_Block>  block, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"TryAllocateSegmentFromBlock", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Bucket>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, bucket, block, size);
}
inline void Fusion::Allocator::FreeInternal(void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"FreeInternal", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline void Fusion::Allocator::DebugVerifyBucketIntegrity(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"DebugVerifyBucketIntegrity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Fusion::Allocator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Allocator::_ctor(::GlobalNamespace::Allocator_Config  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Allocator_Config>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline ::Fusion::Allocator* Fusion::Allocator::Create(::GlobalNamespace::Allocator_Config  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"Create", {}, {::i2c::type_of<::GlobalNamespace::Allocator_Config>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Allocator*>(nullptr, ___internal_method, config);
}
inline void Fusion::Allocator::InitSegmentSentinels(void*  memory, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"InitSegmentSentinels", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory, size);
}
inline void Fusion::Allocator::ValidateSegmentSentinels(void*  memory, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"ValidateSegmentSentinels", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memory, size);
}
inline void Fusion::Allocator::ValidateSegmentSentinels(void*  memory, int32_t  size, ::by_ref<::StringW>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Allocator*>(),
                        {"ValidateSegmentSentinels", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory, size, error);
}
inline ::Fusion::Allocator* Fusion::Allocator::New_ctor(::GlobalNamespace::Allocator_Config  config)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Allocator*>(config));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::Allocator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::Allocator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Allocator::Allocator()   {
}
inline void Fusion::Allocator_AllocatorBucketSize::setStaticF_Sizes(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "Sizes", ::Fusion::Allocator_AllocatorBucketSize*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Fusion::Allocator_AllocatorBucketSize::getStaticF_Sizes()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "Sizes", ::Fusion::Allocator_AllocatorBucketSize*>();
}
// Ctor Parameters []
constexpr ::Fusion::Allocator_AllocatorBucketSize::Allocator_AllocatorBucketSize()   {
}

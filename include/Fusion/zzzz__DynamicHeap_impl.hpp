#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap.hpp"
#include "Fusion/zzzz__DynamicHeap_BlockList_impl.hpp"
#include "Fusion/zzzz__DynamicHeap_Config_impl.hpp"
#include "Fusion/zzzz__DynamicHeap_Phase_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__DynamicHeap_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Bin_def.hpp"
#include "Fusion/zzzz__DynamicHeap_BlockList_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Block_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Config_def.hpp"
#include "Fusion/zzzz__DynamicHeap_ObjectFlags_def.hpp"
#include "Fusion/zzzz__DynamicHeap_ObjectFree_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Object_def.hpp"
#include "Fusion/zzzz__DynamicHeap_PageList_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Page_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Phase_def.hpp"
#include "Fusion/zzzz__DynamicHeap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::DynamicHeap.get_MemoryReserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::DynamicHeap::*)()>(&::Fusion::DynamicHeap::get_MemoryReserved)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f8d194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"get_MemoryReserved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.get_MemoryAllocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::DynamicHeap::*)()>(&::Fusion::DynamicHeap::get_MemoryAllocated)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f8d1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"get_MemoryAllocated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.get_ObjectsAllocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::DynamicHeap::*)()>(&::Fusion::DynamicHeap::get_ObjectsAllocated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8d24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"get_ObjectsAllocated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.get_GCRoots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::DynamicHeap::*)()>(&::Fusion::DynamicHeap::get_GCRoots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8d254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"get_GCRoots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.get_GCPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DynamicHeap_Phase (::Fusion::DynamicHeap::*)()>(&::Fusion::DynamicHeap::get_GCPhase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8d25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"get_GCPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::DynamicHeap*)>(&::Fusion::DynamicHeap::Destroy)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5f8d264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::DynamicHeap_Block*)>(&::Fusion::DynamicHeap::Destroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f8d3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Destroy", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::DynamicHeap* (*)(::ArrayW<::System::Type*>)>(&::Fusion::DynamicHeap::Create)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f8d46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Create", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::DynamicHeap* (*)(::GlobalNamespace::DynamicHeap_Config, ::ArrayW<::System::Type*>)>(&::Fusion::DynamicHeap::Create)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0x5f8d4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Create", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Config>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.NextGen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::Fusion::DynamicHeap*)>(&::Fusion::DynamicHeap::NextGen)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f8e614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"NextGen", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.GetBinByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DynamicHeap_Bin* (*)(::Fusion::DynamicHeap*, int32_t)>(&::Fusion::DynamicHeap::GetBinByIndex)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f8e654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetBinByIndex", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.GetBinIndexForSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::DynamicHeap*, int32_t)>(&::Fusion::DynamicHeap::GetBinIndexForSize)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f8e69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetBinIndexForSize", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.AllocateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::Fusion::DynamicHeap*, int32_t, ::by_ref<uint8_t>)>(&::Fusion::DynamicHeap::AllocateInternal)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5f8e8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"AllocateInternal", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.AllocatePage_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DynamicHeap_Page* (*)(::Fusion::DynamicHeap*, bool)>(&::Fusion::DynamicHeap::AllocatePage_Internal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f8f05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"AllocatePage_Internal", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.AllocatePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DynamicHeap_Page* (*)(::Fusion::DynamicHeap*)>(&::Fusion::DynamicHeap::AllocatePage)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f8efb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"AllocatePage", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.AllocateBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::DynamicHeap*)>(&::Fusion::DynamicHeap::AllocateBlock)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5f8f1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"AllocateBlock", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.BlocksWithAvailablePages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::DynamicHeap*)>(&::Fusion::DynamicHeap::BlocksWithAvailablePages)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f8f148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"BlocksWithAvailablePages", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.PagesWithAvailableObjectsInBin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::DynamicHeap_Bin*)>(&::Fusion::DynamicHeap::PagesWithAvailableObjectsInBin)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f8ef78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"PagesWithAvailableObjectsInBin", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Bin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.ObjectsFreeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::DynamicHeap_Page*)>(&::Fusion::DynamicHeap::ObjectsFreeCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f8f33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"ObjectsFreeCount", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.TryAllocateFromPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::Fusion::DynamicHeap*, ::GlobalNamespace::DynamicHeap_Page*, int32_t, ::by_ref<uint8_t>)>(&::Fusion::DynamicHeap::TryAllocateFromPage)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5f8ec64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"TryAllocateFromPage", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.RegisterTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Type*>)>(&::Fusion::DynamicHeap::RegisterTypes)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0x5f8ddac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"RegisterTypes", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.IsPtrInBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::DynamicHeap*, ::GlobalNamespace::DynamicHeap_Block*, void*)>(&::Fusion::DynamicHeap::IsPtrInBlock)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f8f3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"IsPtrInBlock", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.GetPageForPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DynamicHeap_Page* (*)(::Fusion::DynamicHeap*, ::GlobalNamespace::DynamicHeap_Block*, void*)>(&::Fusion::DynamicHeap::GetPageForPtr)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f8f43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetPageForPtr", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.GetPageOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::DynamicHeap_Page*, ::GlobalNamespace::DynamicHeap_ObjectFree*)>(&::Fusion::DynamicHeap::GetPageOffset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f8f4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetPageOffset", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_ObjectFree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.ResolvePageOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DynamicHeap_ObjectFree* (*)(::GlobalNamespace::DynamicHeap_Page*, int32_t)>(&::Fusion::DynamicHeap::ResolvePageOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f8f3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"ResolvePageOffset", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.FreeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::DynamicHeap*, void*, ::GlobalNamespace::DynamicHeap_Object)>(&::Fusion::DynamicHeap::FreeInternal)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5f8f53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"FreeInternal", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Object>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::DynamicHeap*, void*)>(&::Fusion::DynamicHeap::Free)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5f8f740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Free", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::Fusion::DynamicHeap*, int32_t)>(&::Fusion::DynamicHeap::Allocate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f8f888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Allocate", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.GetArrayLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(void*)>(&::Fusion::DynamicHeap::GetArrayLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f8f954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetArrayLength", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.ThrowHeapCorrupted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::DynamicHeap::ThrowHeapCorrupted)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f8f010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"ThrowHeapCorrupted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.InitObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::DynamicHeap*, ::GlobalNamespace::DynamicHeap_Object*, uint16_t, uint16_t, uint8_t)>(&::Fusion::DynamicHeap::InitObj)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f8f998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"InitObj", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Object*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.InitRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::DynamicHeap*, ::GlobalNamespace::DynamicHeap_Object*)>(&::Fusion::DynamicHeap::InitRoot)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f8f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"InitRoot", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.ExpandStack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::DynamicHeap*)>(&::Fusion::DynamicHeap::ExpandStack)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f8fa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"ExpandStack", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.CollectGarbage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::DynamicHeap*, void*, int32_t)>(&::Fusion::DynamicHeap::CollectGarbage)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x5f8cbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"CollectGarbage", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.GetBin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::DynamicHeap::GetBin)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f8e7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetBin", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.WordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::DynamicHeap::WordCount)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f8e8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"WordCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap.BitScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::Fusion::DynamicHeap::BitScan)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f8fac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"BitScan", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::DynamicHeap::setStaticF__types(::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>*, "_types", ::Fusion::DynamicHeap>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>* Fusion::DynamicHeap::getStaticF__types()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>*, "_types", ::Fusion::DynamicHeap>();
}
inline void Fusion::DynamicHeap::setStaticF__typesByOffset(::System::Collections::Generic::Dictionary_2<uint16_t,::Fusion::DynamicHeap_TypeData*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint16_t,::Fusion::DynamicHeap_TypeData*>*, "_typesByOffset", ::Fusion::DynamicHeap>(std::forward<::System::Collections::Generic::Dictionary_2<uint16_t,::Fusion::DynamicHeap_TypeData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint16_t,::Fusion::DynamicHeap_TypeData*>* Fusion::DynamicHeap::getStaticF__typesByOffset()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint16_t,::Fusion::DynamicHeap_TypeData*>*, "_typesByOffset", ::Fusion::DynamicHeap>();
}
inline void Fusion::DynamicHeap::setStaticF__debruijnTable(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_debruijnTable", ::Fusion::DynamicHeap>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Fusion::DynamicHeap::getStaticF__debruijnTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_debruijnTable", ::Fusion::DynamicHeap>();
}
inline int32_t Fusion::DynamicHeap::get_MemoryReserved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"get_MemoryReserved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline double_t Fusion::DynamicHeap::get_MemoryAllocated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"get_MemoryAllocated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline int32_t Fusion::DynamicHeap::get_ObjectsAllocated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"get_ObjectsAllocated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::DynamicHeap::get_GCRoots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"get_GCRoots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::DynamicHeap_Phase Fusion::DynamicHeap::get_GCPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"get_GCPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DynamicHeap_Phase>(*this, ___internal_method);
}
inline void Fusion::DynamicHeap::Destroy(::Fusion::DynamicHeap*  heap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, heap);
}
inline void Fusion::DynamicHeap::Destroy(::GlobalNamespace::DynamicHeap_Block*  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Destroy", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block);
}
inline ::Fusion::DynamicHeap* Fusion::DynamicHeap::Create(/* [ParamArray] */ ::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Create", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::DynamicHeap*>(nullptr, ___internal_method, types);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::DynamicHeap::SetForcedAlive(T*  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeap>(),
                    {"SetForcedAlive", {::i2c::class_of<T>()}, {::i2c::type_of<T*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, ptr);
}
inline ::Fusion::DynamicHeap* Fusion::DynamicHeap::Create(::GlobalNamespace::DynamicHeap_Config  config, /* [ParamArray] */ ::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Create", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Config>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::DynamicHeap*>(nullptr, ___internal_method, config, types);
}
inline uint16_t Fusion::DynamicHeap::NextGen(::Fusion::DynamicHeap*  heap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"NextGen", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, heap);
}
inline ::GlobalNamespace::DynamicHeap_Bin* Fusion::DynamicHeap::GetBinByIndex(::Fusion::DynamicHeap*  heap, int32_t  binIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetBinByIndex", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DynamicHeap_Bin*>(nullptr, ___internal_method, heap, binIndex);
}
inline int32_t Fusion::DynamicHeap::GetBinIndexForSize(::Fusion::DynamicHeap*  heap, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetBinIndexForSize", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, heap, size);
}
inline uint8_t* Fusion::DynamicHeap::AllocateInternal(::Fusion::DynamicHeap*  heap, int32_t  size, ::by_ref<uint8_t>  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"AllocateInternal", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, heap, size, block);
}
inline ::GlobalNamespace::DynamicHeap_Page* Fusion::DynamicHeap::AllocatePage_Internal(::Fusion::DynamicHeap*  heap, bool  mustSucceed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"AllocatePage_Internal", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DynamicHeap_Page*>(nullptr, ___internal_method, heap, mustSucceed);
}
inline ::GlobalNamespace::DynamicHeap_Page* Fusion::DynamicHeap::AllocatePage(::Fusion::DynamicHeap*  heap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"AllocatePage", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DynamicHeap_Page*>(nullptr, ___internal_method, heap);
}
inline void Fusion::DynamicHeap::AllocateBlock(::Fusion::DynamicHeap*  heap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"AllocateBlock", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, heap);
}
inline int32_t Fusion::DynamicHeap::BlocksWithAvailablePages(::Fusion::DynamicHeap*  heap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"BlocksWithAvailablePages", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, heap);
}
inline int32_t Fusion::DynamicHeap::PagesWithAvailableObjectsInBin(::GlobalNamespace::DynamicHeap_Bin*  bin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"PagesWithAvailableObjectsInBin", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Bin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bin);
}
inline int32_t Fusion::DynamicHeap::ObjectsFreeCount(::GlobalNamespace::DynamicHeap_Page*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"ObjectsFreeCount", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, p);
}
inline uint8_t* Fusion::DynamicHeap::TryAllocateFromPage(::Fusion::DynamicHeap*  heap, ::GlobalNamespace::DynamicHeap_Page*  page, int32_t  size, ::by_ref<uint8_t>  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"TryAllocateFromPage", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, heap, page, size, block);
}
inline void Fusion::DynamicHeap::RegisterTypes(/* [ParamArray] */ ::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"RegisterTypes", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, types);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline uint16_t Fusion::DynamicHeap::GetTypeOffset()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeap>(),
                    {"GetTypeOffset", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method);
}
inline bool Fusion::DynamicHeap::IsPtrInBlock(::Fusion::DynamicHeap*  heap, ::GlobalNamespace::DynamicHeap_Block*  block, void*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"IsPtrInBlock", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, heap, block, p);
}
inline ::GlobalNamespace::DynamicHeap_Page* Fusion::DynamicHeap::GetPageForPtr(::Fusion::DynamicHeap*  heap, ::GlobalNamespace::DynamicHeap_Block*  block, void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetPageForPtr", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DynamicHeap_Page*>(nullptr, ___internal_method, heap, block, ptr);
}
inline int32_t Fusion::DynamicHeap::GetPageOffset(::GlobalNamespace::DynamicHeap_Page*  page, ::GlobalNamespace::DynamicHeap_ObjectFree*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetPageOffset", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_ObjectFree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, page, obj);
}
inline ::GlobalNamespace::DynamicHeap_ObjectFree* Fusion::DynamicHeap::ResolvePageOffset(::GlobalNamespace::DynamicHeap_Page*  page, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"ResolvePageOffset", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DynamicHeap_ObjectFree*>(nullptr, ___internal_method, page, offset);
}
inline void Fusion::DynamicHeap::FreeInternal(::Fusion::DynamicHeap*  heap, void*  ptr, ::GlobalNamespace::DynamicHeap_Object  objData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"FreeInternal", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Object>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, heap, ptr, objData);
}
inline void Fusion::DynamicHeap::Free(::Fusion::DynamicHeap*  heap, void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Free", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, heap, ptr);
}
inline void* Fusion::DynamicHeap::Allocate(::Fusion::DynamicHeap*  heap, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"Allocate", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, heap, size);
}
inline int32_t Fusion::DynamicHeap::GetArrayLength(void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetArrayLength", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::DynamicHeap::AllocateTracked(::Fusion::DynamicHeap*  heap, uint16_t  array, bool  root)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeap>(),
                    {"AllocateTracked", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, heap, array, root);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::DynamicHeap::AllocateTrackedPointerArray(::Fusion::DynamicHeap*  heap, uint16_t  array, bool  root)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeap>(),
                    {"AllocateTrackedPointerArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, heap, array, root);
}
inline void Fusion::DynamicHeap::ThrowHeapCorrupted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"ThrowHeapCorrupted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::DynamicHeap::InitObj(::Fusion::DynamicHeap*  heap, ::GlobalNamespace::DynamicHeap_Object*  obj, uint16_t  type, uint16_t  array, uint8_t  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"InitObj", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Object*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, heap, obj, type, array, block);
}
inline void Fusion::DynamicHeap::InitRoot(::Fusion::DynamicHeap*  heap, ::GlobalNamespace::DynamicHeap_Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"InitRoot", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, heap, obj);
}
inline void Fusion::DynamicHeap::ExpandStack(::Fusion::DynamicHeap*  heap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"ExpandStack", {}, {::i2c::type_of<::Fusion::DynamicHeap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, heap);
}
inline void Fusion::DynamicHeap::CollectGarbage(::Fusion::DynamicHeap*  heap, void*  dynamicRoots, int32_t  dynamicRootsLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"CollectGarbage", {}, {::i2c::type_of<::Fusion::DynamicHeap*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, heap, dynamicRoots, dynamicRootsLength);
}
inline int32_t Fusion::DynamicHeap::GetBin(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"GetBin", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline int32_t Fusion::DynamicHeap::WordCount(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"WordCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline int32_t Fusion::DynamicHeap::BitScan(uint32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap>(),
                        {"BitScan", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
// Ctor Parameters [CppParam { name: "_blocksFreePages", ty: "::GlobalNamespace::DynamicHeap_BlockList", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_blocks", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_blocksUsed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bins", ty: "::GlobalNamespace::DynamicHeap_Bin*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_typeMap", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_typeMapLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_typeMapStrides", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_gcGen", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_gcBlock", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_gcBlockPage", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_gcPhase", ty: "::GlobalNamespace::DynamicHeap_Phase", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_gcStack", ty: "::GlobalNamespace::DynamicHeap_Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_gcStackCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_gcStackCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_config", ty: "::GlobalNamespace::DynamicHeap_Config", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rootList", ty: "::GlobalNamespace::DynamicHeap_Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rootListCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rootListCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_objectsAllocated", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_memoryAllocated", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::DynamicHeap::DynamicHeap(::GlobalNamespace::DynamicHeap_BlockList  _blocksFreePages, ::GlobalNamespace::DynamicHeap_Block*  _blocks, int32_t  _blocksUsed, ::GlobalNamespace::DynamicHeap_Bin*  _bins, int32_t*  _typeMap, int32_t  _typeMapLength, int32_t*  _typeMapStrides, uint16_t  _gcGen, int32_t  _gcBlock, int32_t  _gcBlockPage, ::GlobalNamespace::DynamicHeap_Phase  _gcPhase, ::GlobalNamespace::DynamicHeap_Object*  _gcStack, int32_t  _gcStackCount, int32_t  _gcStackCapacity, ::GlobalNamespace::DynamicHeap_Config  _config, ::GlobalNamespace::DynamicHeap_Object*  _rootList, int32_t  _rootListCapacity, int32_t  _rootListCount, int32_t  _objectsAllocated, int32_t  _memoryAllocated) noexcept  {
this->_blocksFreePages = _blocksFreePages;
this->_blocks = _blocks;
this->_blocksUsed = _blocksUsed;
this->_bins = _bins;
this->_typeMap = _typeMap;
this->_typeMapLength = _typeMapLength;
this->_typeMapStrides = _typeMapStrides;
this->_gcGen = _gcGen;
this->_gcBlock = _gcBlock;
this->_gcBlockPage = _gcBlockPage;
this->_gcPhase = _gcPhase;
this->_gcStack = _gcStack;
this->_gcStackCount = _gcStackCount;
this->_gcStackCapacity = _gcStackCapacity;
this->_config = _config;
this->_rootList = _rootList;
this->_rootListCapacity = _rootListCapacity;
this->_rootListCount = _rootListCount;
this->_objectsAllocated = _objectsAllocated;
this->_memoryAllocated = _memoryAllocated;
}
// Ctor Parameters []
constexpr ::Fusion::DynamicHeap::DynamicHeap()   {
}
//  Writing Method size for method: ::Fusion::DynamicHeap___c__DisplayClass44_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeap___c__DisplayClass44_0::*)()>(&::Fusion::DynamicHeap___c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c__DisplayClass44_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap___c__DisplayClass44_0._Create_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::DynamicHeap___c__DisplayClass44_0::*)(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>)>(&::Fusion::DynamicHeap___c__DisplayClass44_0::_Create_b__1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f90d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c__DisplayClass44_0*>(),
                        {"<Create>b__1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint16_t& Fusion::DynamicHeap___c__DisplayClass44_0::__cordl_internal_get_maxOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxOffset;
}
constexpr uint16_t const& Fusion::DynamicHeap___c__DisplayClass44_0::__cordl_internal_get_maxOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxOffset;
}
constexpr void Fusion::DynamicHeap___c__DisplayClass44_0::__cordl_internal_set_maxOffset(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxOffset = value;
}
inline void Fusion::DynamicHeap___c__DisplayClass44_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c__DisplayClass44_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::DynamicHeap___c__DisplayClass44_0::_Create_b__1(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c__DisplayClass44_0*>(),
                        {"<Create>b__1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Fusion::DynamicHeap___c__DisplayClass44_0* Fusion::DynamicHeap___c__DisplayClass44_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DynamicHeap___c__DisplayClass44_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::DynamicHeap___c__DisplayClass44_0::DynamicHeap___c__DisplayClass44_0()   {
}
//  Writing Method size for method: ::Fusion::DynamicHeap___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeap___c::*)()>(&::Fusion::DynamicHeap___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap___c._Create_b__44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Fusion::DynamicHeap___c::*)(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>)>(&::Fusion::DynamicHeap___c::_Create_b__44_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f90c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c*>(),
                        {"<Create>b__44_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap___c._Create_b__44_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::DynamicHeap_TypeData* (::Fusion::DynamicHeap___c::*)(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>)>(&::Fusion::DynamicHeap___c::_Create_b__44_2)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f90cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c*>(),
                        {"<Create>b__44_2", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap___c._Create_b__44_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Fusion::DynamicHeap___c::*)(::Fusion::DynamicHeap_TypeData*)>(&::Fusion::DynamicHeap___c::_Create_b__44_3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f90ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c*>(),
                        {"<Create>b__44_3", {}, {::i2c::type_of<::Fusion::DynamicHeap_TypeData*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::DynamicHeap___c::setStaticF___9(::Fusion::DynamicHeap___c*  value)  {
::cordl_internals::setStaticField<::Fusion::DynamicHeap___c*, "<>9", ::Fusion::DynamicHeap___c*>(std::forward<::Fusion::DynamicHeap___c*>(value));
}
inline ::Fusion::DynamicHeap___c* Fusion::DynamicHeap___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::DynamicHeap___c*, "<>9", ::Fusion::DynamicHeap___c*>();
}
inline void Fusion::DynamicHeap___c::setStaticF___9__44_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,uint16_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,uint16_t>*, "<>9__44_0", ::Fusion::DynamicHeap___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,uint16_t>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,uint16_t>* Fusion::DynamicHeap___c::getStaticF___9__44_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,uint16_t>*, "<>9__44_0", ::Fusion::DynamicHeap___c*>();
}
inline void Fusion::DynamicHeap___c::setStaticF___9__44_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,::Fusion::DynamicHeap_TypeData*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,::Fusion::DynamicHeap_TypeData*>*, "<>9__44_2", ::Fusion::DynamicHeap___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,::Fusion::DynamicHeap_TypeData*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,::Fusion::DynamicHeap_TypeData*>* Fusion::DynamicHeap___c::getStaticF___9__44_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,::Fusion::DynamicHeap_TypeData*>*, "<>9__44_2", ::Fusion::DynamicHeap___c*>();
}
inline void Fusion::DynamicHeap___c::setStaticF___9__44_3(::System::Func_2<::Fusion::DynamicHeap_TypeData*,uint16_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Fusion::DynamicHeap_TypeData*,uint16_t>*, "<>9__44_3", ::Fusion::DynamicHeap___c*>(std::forward<::System::Func_2<::Fusion::DynamicHeap_TypeData*,uint16_t>*>(value));
}
inline ::System::Func_2<::Fusion::DynamicHeap_TypeData*,uint16_t>* Fusion::DynamicHeap___c::getStaticF___9__44_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Fusion::DynamicHeap_TypeData*,uint16_t>*, "<>9__44_3", ::Fusion::DynamicHeap___c*>();
}
inline void Fusion::DynamicHeap___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint16_t Fusion::DynamicHeap___c::_Create_b__44_0(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c*>(),
                        {"<Create>b__44_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, x);
}
inline ::Fusion::DynamicHeap_TypeData* Fusion::DynamicHeap___c::_Create_b__44_2(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c*>(),
                        {"<Create>b__44_2", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::DynamicHeap_TypeData*>(this, ___internal_method, x);
}
inline uint16_t Fusion::DynamicHeap___c::_Create_b__44_3(::Fusion::DynamicHeap_TypeData*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap___c*>(),
                        {"<Create>b__44_3", {}, {::i2c::type_of<::Fusion::DynamicHeap_TypeData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, x);
}
inline ::Fusion::DynamicHeap___c* Fusion::DynamicHeap___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DynamicHeap___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::DynamicHeap___c::DynamicHeap___c()   {
}
inline void Fusion::DynamicHeap_BinSizes::setStaticF_Sizes(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "Sizes", ::Fusion::DynamicHeap_BinSizes*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Fusion::DynamicHeap_BinSizes::getStaticF_Sizes()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "Sizes", ::Fusion::DynamicHeap_BinSizes*>();
}
// Ctor Parameters []
constexpr ::Fusion::DynamicHeap_BinSizes::DynamicHeap_BinSizes()   {
}
//  Writing Method size for method: ::Fusion::DynamicHeap_Ignore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeap_Ignore::*)()>(&::Fusion::DynamicHeap_Ignore::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap_Ignore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::DynamicHeap_Ignore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap_Ignore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::DynamicHeap_Ignore* Fusion::DynamicHeap_Ignore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DynamicHeap_Ignore*>());
}
// Ctor Parameters []
constexpr ::Fusion::DynamicHeap_Ignore::DynamicHeap_Ignore()   {
}
//  Writing Method size for method: ::Fusion::DynamicHeap_CollectGarbageDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeap_CollectGarbageDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::DynamicHeap_CollectGarbageDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f904f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap_CollectGarbageDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeap_CollectGarbageDelegate::*)(::Fusion::DynamicHeap*, void*, int32_t)>(&::Fusion::DynamicHeap_CollectGarbageDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f905ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(),
                    {::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap_CollectGarbageDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::DynamicHeap_CollectGarbageDelegate::*)(::Fusion::DynamicHeap*, void*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::DynamicHeap_CollectGarbageDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f905c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(),
                    {::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap_CollectGarbageDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeap_CollectGarbageDelegate::*)(::System::IAsyncResult*)>(&::Fusion::DynamicHeap_CollectGarbageDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f90624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(),
                    {::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::DynamicHeap_CollectGarbageDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::DynamicHeap_CollectGarbageDelegate::Invoke(::Fusion::DynamicHeap*  heap, void*  dynamicRoots, int32_t  dynamicRootsLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, heap, dynamicRoots, dynamicRootsLength);
}
inline ::System::IAsyncResult* Fusion::DynamicHeap_CollectGarbageDelegate::BeginInvoke(::Fusion::DynamicHeap*  heap, void*  dynamicRoots, int32_t  dynamicRootsLength, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, heap, dynamicRoots, dynamicRootsLength, callback, object);
}
inline void Fusion::DynamicHeap_CollectGarbageDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::DynamicHeap_CollectGarbageDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Fusion::DynamicHeap_CollectGarbageDelegate* Fusion::DynamicHeap_CollectGarbageDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DynamicHeap_CollectGarbageDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::DynamicHeap_CollectGarbageDelegate::DynamicHeap_CollectGarbageDelegate()   {
}
//  Writing Method size for method: ::Fusion::DynamicHeap_TypeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeap_TypeData::*)()>(&::Fusion::DynamicHeap_TypeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f90494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap_TypeData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeap_TypeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeap_TypeData::*)(int32_t, uint16_t, ::ArrayW<int32_t>, ::System::Type*)>(&::Fusion::DynamicHeap_TypeData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f9049c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap_TypeData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::DynamicHeap_TypeData::__cordl_internal_get_Stride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stride;
}
constexpr int32_t const& Fusion::DynamicHeap_TypeData::__cordl_internal_get_Stride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stride;
}
constexpr void Fusion::DynamicHeap_TypeData::__cordl_internal_set_Stride(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Stride = value;
}
constexpr uint16_t& Fusion::DynamicHeap_TypeData::__cordl_internal_get_Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr uint16_t const& Fusion::DynamicHeap_TypeData::__cordl_internal_get_Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr void Fusion::DynamicHeap_TypeData::__cordl_internal_set_Offset(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Offset = value;
}
constexpr ::ArrayW<int32_t>& Fusion::DynamicHeap_TypeData::__cordl_internal_get_Pointers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pointers;
}
constexpr ::ArrayW<int32_t> const& Fusion::DynamicHeap_TypeData::__cordl_internal_get_Pointers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pointers;
}
constexpr void Fusion::DynamicHeap_TypeData::__cordl_internal_set_Pointers(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pointers = value;
}
constexpr ::System::Type*& Fusion::DynamicHeap_TypeData::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::System::Type* const& Fusion::DynamicHeap_TypeData::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Fusion::DynamicHeap_TypeData::__cordl_internal_set_Type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
inline void Fusion::DynamicHeap_TypeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap_TypeData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::DynamicHeap_TypeData::_ctor(int32_t  stride, uint16_t  offset, ::ArrayW<int32_t>  pointers, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeap_TypeData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stride, offset, pointers, type);
}
inline ::Fusion::DynamicHeap_TypeData* Fusion::DynamicHeap_TypeData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DynamicHeap_TypeData*>());
}
inline ::Fusion::DynamicHeap_TypeData* Fusion::DynamicHeap_TypeData::New_ctor(int32_t  stride, uint16_t  offset, ::ArrayW<int32_t>  pointers, ::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DynamicHeap_TypeData*>(stride, offset, pointers, type));
}
// Ctor Parameters []
constexpr ::Fusion::DynamicHeap_TypeData::DynamicHeap_TypeData()   {
}

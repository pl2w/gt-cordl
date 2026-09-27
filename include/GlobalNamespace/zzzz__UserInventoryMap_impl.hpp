#pragma once
// IWYU pragma private; include "GlobalNamespace/UserInventoryMap.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UserInventoryMap_def.hpp"
#include "GlobalNamespace/zzzz__MothershipPlayerInventorySummary_def.hpp"
#include "GlobalNamespace/zzzz__UserInventoryMap_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)(::System::IntPtr, bool)>(&::GlobalNamespace::UserInventoryMap::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53adf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UserInventoryMap*)>(&::GlobalNamespace::UserInventoryMap::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x53adf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UserInventoryMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UserInventoryMap*)>(&::GlobalNamespace::UserInventoryMap::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x53adfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UserInventoryMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x53ae0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                    {::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x53ae064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)(bool)>(&::GlobalNamespace::UserInventoryMap::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x53ae168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                    {::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipPlayerInventorySummary* (::GlobalNamespace::UserInventoryMap::*)(::StringW)>(&::GlobalNamespace::UserInventoryMap::get_Item)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x53ae2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)(::StringW, ::GlobalNamespace::MothershipPlayerInventorySummary*)>(&::GlobalNamespace::UserInventoryMap::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x53ae558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipPlayerInventorySummary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserInventoryMap::*)(::StringW, ::by_ref<::GlobalNamespace::MothershipPlayerInventorySummary*>)>(&::GlobalNamespace::UserInventoryMap::TryGetValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x53ae65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MothershipPlayerInventorySummary*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x53ae6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53ae790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::get_Keys)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x53ae798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_Keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::GlobalNamespace::MothershipPlayerInventorySummary*>* (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::get_Values)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x53aeb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>)>(&::GlobalNamespace::UserInventoryMap::Add)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x53af070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserInventoryMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>)>(&::GlobalNamespace::UserInventoryMap::Remove)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x53af26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserInventoryMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>)>(&::GlobalNamespace::UserInventoryMap::Contains)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x53af2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>)>(&::GlobalNamespace::UserInventoryMap::CopyTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53af430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>, int32_t)>(&::GlobalNamespace::UserInventoryMap::CopyTo)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x53af438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_MothershipPlayerInventorySummary___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>* (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_MothershipPlayerInventorySummary___GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x53af794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,MothershipPlayerInventorySummary>>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.global::System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::global::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x53af8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator* (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x53aed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x53af92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)(::GlobalNamespace::UserInventoryMap*)>(&::GlobalNamespace::UserInventoryMap::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53af9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::UserInventoryMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::size)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ae6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::empty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53afae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x53afbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.getitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipPlayerInventorySummary* (::GlobalNamespace::UserInventoryMap::*)(::StringW)>(&::GlobalNamespace::UserInventoryMap::getitem)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x53ae444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"getitem", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.setitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)(::StringW, ::GlobalNamespace::MothershipPlayerInventorySummary*)>(&::GlobalNamespace::UserInventoryMap::setitem)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x53ae55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"setitem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipPlayerInventorySummary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.ContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserInventoryMap::*)(::StringW)>(&::GlobalNamespace::UserInventoryMap::ContainsKey)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x53ae360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)(::StringW, ::GlobalNamespace::MothershipPlayerInventorySummary*)>(&::GlobalNamespace::UserInventoryMap::Add)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x53af16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipPlayerInventorySummary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserInventoryMap::*)(::StringW)>(&::GlobalNamespace::UserInventoryMap::Remove)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x53af34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.create_iterator_begin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::UserInventoryMap::*)()>(&::GlobalNamespace::UserInventoryMap::create_iterator_begin)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ae8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"create_iterator_begin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.get_next_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::UserInventoryMap::*)(::System::IntPtr)>(&::GlobalNamespace::UserInventoryMap::get_next_key)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x53ae9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_next_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap.destroy_iterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap::*)(::System::IntPtr)>(&::GlobalNamespace::UserInventoryMap::destroy_iterator)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53aea94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"destroy_iterator", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::UserInventoryMap::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::UserInventoryMap::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::UserInventoryMap::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::UserInventoryMap::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::UserInventoryMap::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::UserInventoryMap::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::UserInventoryMap::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UserInventoryMap::getCPtr(::GlobalNamespace::UserInventoryMap*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UserInventoryMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UserInventoryMap::swigRelease(::GlobalNamespace::UserInventoryMap*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UserInventoryMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::UserInventoryMap::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UserInventoryMap::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UserInventoryMap::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::MothershipPlayerInventorySummary* GlobalNamespace::UserInventoryMap::get_Item(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipPlayerInventorySummary*>(this, ___internal_method, key);
}
inline void GlobalNamespace::UserInventoryMap::set_Item(::StringW  key, ::GlobalNamespace::MothershipPlayerInventorySummary*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipPlayerInventorySummary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline bool GlobalNamespace::UserInventoryMap::TryGetValue(::StringW  key, ::by_ref<::GlobalNamespace::MothershipPlayerInventorySummary*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MothershipPlayerInventorySummary*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline int32_t GlobalNamespace::UserInventoryMap::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::UserInventoryMap::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* GlobalNamespace::UserInventoryMap::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::GlobalNamespace::MothershipPlayerInventorySummary*>* GlobalNamespace::UserInventoryMap::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::GlobalNamespace::MothershipPlayerInventorySummary*>*>(this, ___internal_method);
}
inline void GlobalNamespace::UserInventoryMap::Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool GlobalNamespace::UserInventoryMap::Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline bool GlobalNamespace::UserInventoryMap::Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void GlobalNamespace::UserInventoryMap::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::UserInventoryMap::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>* GlobalNamespace::UserInventoryMap::global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_MothershipPlayerInventorySummary___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,MothershipPlayerInventorySummary>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::UserInventoryMap::global::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator* GlobalNamespace::UserInventoryMap::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::UserInventoryMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UserInventoryMap::_ctor(::GlobalNamespace::UserInventoryMap*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::UserInventoryMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline uint32_t GlobalNamespace::UserInventoryMap::size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::UserInventoryMap::empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UserInventoryMap::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipPlayerInventorySummary* GlobalNamespace::UserInventoryMap::getitem(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"getitem", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipPlayerInventorySummary*>(this, ___internal_method, key);
}
inline void GlobalNamespace::UserInventoryMap::setitem(::StringW  key, ::GlobalNamespace::MothershipPlayerInventorySummary*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"setitem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipPlayerInventorySummary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, x);
}
inline bool GlobalNamespace::UserInventoryMap::ContainsKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void GlobalNamespace::UserInventoryMap::Add(::StringW  key, ::GlobalNamespace::MothershipPlayerInventorySummary*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipPlayerInventorySummary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, val);
}
inline bool GlobalNamespace::UserInventoryMap::Remove(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::System::IntPtr GlobalNamespace::UserInventoryMap::create_iterator_begin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"create_iterator_begin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::UserInventoryMap::get_next_key(::System::IntPtr  swigiterator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"get_next_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, swigiterator);
}
inline void GlobalNamespace::UserInventoryMap::destroy_iterator(::System::IntPtr  swigiterator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap*>(),
                        {"destroy_iterator", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, swigiterator);
}
inline ::GlobalNamespace::UserInventoryMap* GlobalNamespace::UserInventoryMap::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UserInventoryMap*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::UserInventoryMap* GlobalNamespace::UserInventoryMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UserInventoryMap*>());
}
inline ::GlobalNamespace::UserInventoryMap* GlobalNamespace::UserInventoryMap::New_ctor(::GlobalNamespace::UserInventoryMap*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UserInventoryMap*>(other));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::UserInventoryMap::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::UserInventoryMap::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>"
constexpr  GlobalNamespace::UserInventoryMap::operator ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>* GlobalNamespace::UserInventoryMap::i___System__Collections__Generic__IDictionary_2___StringW___GlobalNamespace__MothershipPlayerInventorySummary__() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>"
constexpr  GlobalNamespace::UserInventoryMap::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>* GlobalNamespace::UserInventoryMap::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__MothershipPlayerInventorySummary___() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>"
constexpr  GlobalNamespace::UserInventoryMap::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>* GlobalNamespace::UserInventoryMap::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__MothershipPlayerInventorySummary___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::UserInventoryMap::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::UserInventoryMap::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserInventoryMap::UserInventoryMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::*)(::GlobalNamespace::UserInventoryMap*)>(&::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x53af7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::UserInventoryMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*> (::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::*)()>(&::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x53aede8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator.global::System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::*)()>(&::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::global::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x53afc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::*)()>(&::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x53aeefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::*)()>(&::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x53afce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::*)()>(&::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x53afd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::UserInventoryMap*& GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_get_collectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr ::GlobalNamespace::UserInventoryMap* const& GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_get_collectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr void GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_set_collectionRef(::GlobalNamespace::UserInventoryMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionRef = value;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>*& GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_get_keyCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollection;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>* const& GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_get_keyCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollection;
}
constexpr void GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_set_keyCollection(::System::Collections::Generic::IList_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyCollection = value;
}
constexpr int32_t& GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::System::Object*& GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_get_currentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr ::System::Object* const& GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_get_currentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr void GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_set_currentObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObject = value;
}
constexpr int32_t& GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int32_t const& GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::__cordl_internal_set_currentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
inline void GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::_ctor(::GlobalNamespace::UserInventoryMap*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::UserInventoryMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*> GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::global::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator* GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::New_ctor(::GlobalNamespace::UserInventoryMap*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>"
constexpr  GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>* GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__MothershipPlayerInventorySummary___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipPlayerInventorySummary*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserInventoryMap_UserInventoryMapEnumerator::UserInventoryMap_UserInventoryMapEnumerator()   {
}

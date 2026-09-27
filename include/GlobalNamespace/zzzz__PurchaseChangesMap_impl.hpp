#pragma once
// IWYU pragma private; include "GlobalNamespace/PurchaseChangesMap.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PurchaseChangesMap_def.hpp"
#include "GlobalNamespace/zzzz__MothershipEntitlementUpdate_def.hpp"
#include "GlobalNamespace/zzzz__PurchaseChangesMap_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)(::System::IntPtr, bool)>(&::GlobalNamespace::PurchaseChangesMap::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5306b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::PurchaseChangesMap*)>(&::GlobalNamespace::PurchaseChangesMap::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5306b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::PurchaseChangesMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::PurchaseChangesMap*)>(&::GlobalNamespace::PurchaseChangesMap::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5306bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::PurchaseChangesMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5306cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                    {::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5306c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)(bool)>(&::GlobalNamespace::PurchaseChangesMap::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5306d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                    {::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipEntitlementUpdate* (::GlobalNamespace::PurchaseChangesMap::*)(::StringW)>(&::GlobalNamespace::PurchaseChangesMap::get_Item)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5306ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)(::StringW, ::GlobalNamespace::MothershipEntitlementUpdate*)>(&::GlobalNamespace::PurchaseChangesMap::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5307148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipEntitlementUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PurchaseChangesMap::*)(::StringW, ::by_ref<::GlobalNamespace::MothershipEntitlementUpdate*>)>(&::GlobalNamespace::PurchaseChangesMap::TryGetValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x530724c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MothershipEntitlementUpdate*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x53072a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5307380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::get_Keys)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5307388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_Keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::GlobalNamespace::MothershipEntitlementUpdate*>* (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::get_Values)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x530775c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>)>(&::GlobalNamespace::PurchaseChangesMap::Add)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5307c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PurchaseChangesMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>)>(&::GlobalNamespace::PurchaseChangesMap::Remove)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5307e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PurchaseChangesMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>)>(&::GlobalNamespace::PurchaseChangesMap::Contains)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5307ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>)>(&::GlobalNamespace::PurchaseChangesMap::CopyTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5308020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>, int32_t)>(&::GlobalNamespace::PurchaseChangesMap::CopyTo)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5308028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_MothershipEntitlementUpdate___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>* (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_MothershipEntitlementUpdate___GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5308384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,MothershipEntitlementUpdate>>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.global::System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::global::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x53084c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator* (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5307980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x530851c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)(::GlobalNamespace::PurchaseChangesMap*)>(&::GlobalNamespace::PurchaseChangesMap::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53085e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PurchaseChangesMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::size)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53072ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::empty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53086d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x53087ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.getitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipEntitlementUpdate* (::GlobalNamespace::PurchaseChangesMap::*)(::StringW)>(&::GlobalNamespace::PurchaseChangesMap::getitem)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5307034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"getitem", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.setitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)(::StringW, ::GlobalNamespace::MothershipEntitlementUpdate*)>(&::GlobalNamespace::PurchaseChangesMap::setitem)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x530714c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"setitem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipEntitlementUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.ContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PurchaseChangesMap::*)(::StringW)>(&::GlobalNamespace::PurchaseChangesMap::ContainsKey)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5306f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)(::StringW, ::GlobalNamespace::MothershipEntitlementUpdate*)>(&::GlobalNamespace::PurchaseChangesMap::Add)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5307d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipEntitlementUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PurchaseChangesMap::*)(::StringW)>(&::GlobalNamespace::PurchaseChangesMap::Remove)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5307f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.create_iterator_begin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::PurchaseChangesMap::*)()>(&::GlobalNamespace::PurchaseChangesMap::create_iterator_begin)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53074cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"create_iterator_begin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.get_next_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PurchaseChangesMap::*)(::System::IntPtr)>(&::GlobalNamespace::PurchaseChangesMap::get_next_key)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x53075a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_next_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap.destroy_iterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap::*)(::System::IntPtr)>(&::GlobalNamespace::PurchaseChangesMap::destroy_iterator)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5307684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"destroy_iterator", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::PurchaseChangesMap::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::PurchaseChangesMap::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::PurchaseChangesMap::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::PurchaseChangesMap::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::PurchaseChangesMap::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::PurchaseChangesMap::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::PurchaseChangesMap::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::PurchaseChangesMap::getCPtr(::GlobalNamespace::PurchaseChangesMap*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::PurchaseChangesMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::PurchaseChangesMap::swigRelease(::GlobalNamespace::PurchaseChangesMap*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::PurchaseChangesMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::PurchaseChangesMap::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PurchaseChangesMap::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PurchaseChangesMap::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::MothershipEntitlementUpdate* GlobalNamespace::PurchaseChangesMap::get_Item(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipEntitlementUpdate*>(this, ___internal_method, key);
}
inline void GlobalNamespace::PurchaseChangesMap::set_Item(::StringW  key, ::GlobalNamespace::MothershipEntitlementUpdate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipEntitlementUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline bool GlobalNamespace::PurchaseChangesMap::TryGetValue(::StringW  key, ::by_ref<::GlobalNamespace::MothershipEntitlementUpdate*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MothershipEntitlementUpdate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline int32_t GlobalNamespace::PurchaseChangesMap::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PurchaseChangesMap::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* GlobalNamespace::PurchaseChangesMap::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::GlobalNamespace::MothershipEntitlementUpdate*>* GlobalNamespace::PurchaseChangesMap::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::GlobalNamespace::MothershipEntitlementUpdate*>*>(this, ___internal_method);
}
inline void GlobalNamespace::PurchaseChangesMap::Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool GlobalNamespace::PurchaseChangesMap::Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline bool GlobalNamespace::PurchaseChangesMap::Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void GlobalNamespace::PurchaseChangesMap::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::PurchaseChangesMap::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>* GlobalNamespace::PurchaseChangesMap::global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_MothershipEntitlementUpdate___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,MothershipEntitlementUpdate>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::PurchaseChangesMap::global::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator* GlobalNamespace::PurchaseChangesMap::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::PurchaseChangesMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PurchaseChangesMap::_ctor(::GlobalNamespace::PurchaseChangesMap*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PurchaseChangesMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline uint32_t GlobalNamespace::PurchaseChangesMap::size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PurchaseChangesMap::empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PurchaseChangesMap::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipEntitlementUpdate* GlobalNamespace::PurchaseChangesMap::getitem(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"getitem", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipEntitlementUpdate*>(this, ___internal_method, key);
}
inline void GlobalNamespace::PurchaseChangesMap::setitem(::StringW  key, ::GlobalNamespace::MothershipEntitlementUpdate*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"setitem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipEntitlementUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, x);
}
inline bool GlobalNamespace::PurchaseChangesMap::ContainsKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void GlobalNamespace::PurchaseChangesMap::Add(::StringW  key, ::GlobalNamespace::MothershipEntitlementUpdate*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipEntitlementUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, val);
}
inline bool GlobalNamespace::PurchaseChangesMap::Remove(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::System::IntPtr GlobalNamespace::PurchaseChangesMap::create_iterator_begin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"create_iterator_begin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PurchaseChangesMap::get_next_key(::System::IntPtr  swigiterator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"get_next_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, swigiterator);
}
inline void GlobalNamespace::PurchaseChangesMap::destroy_iterator(::System::IntPtr  swigiterator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap*>(),
                        {"destroy_iterator", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, swigiterator);
}
inline ::GlobalNamespace::PurchaseChangesMap* GlobalNamespace::PurchaseChangesMap::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PurchaseChangesMap*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::PurchaseChangesMap* GlobalNamespace::PurchaseChangesMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PurchaseChangesMap*>());
}
inline ::GlobalNamespace::PurchaseChangesMap* GlobalNamespace::PurchaseChangesMap::New_ctor(::GlobalNamespace::PurchaseChangesMap*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PurchaseChangesMap*>(other));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PurchaseChangesMap::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PurchaseChangesMap::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>"
constexpr  GlobalNamespace::PurchaseChangesMap::operator ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>* GlobalNamespace::PurchaseChangesMap::i___System__Collections__Generic__IDictionary_2___StringW___GlobalNamespace__MothershipEntitlementUpdate__() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>"
constexpr  GlobalNamespace::PurchaseChangesMap::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>* GlobalNamespace::PurchaseChangesMap::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__MothershipEntitlementUpdate___() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>"
constexpr  GlobalNamespace::PurchaseChangesMap::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>* GlobalNamespace::PurchaseChangesMap::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__MothershipEntitlementUpdate___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::PurchaseChangesMap::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::PurchaseChangesMap::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PurchaseChangesMap::PurchaseChangesMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::*)(::GlobalNamespace::PurchaseChangesMap*)>(&::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x53083dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PurchaseChangesMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*> (::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::*)()>(&::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x53079d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator.global::System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::*)()>(&::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::global::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5308874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::*)()>(&::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5307aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::*)()>(&::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x53088d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::*)()>(&::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5308970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PurchaseChangesMap*& GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_get_collectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr ::GlobalNamespace::PurchaseChangesMap* const& GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_get_collectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr void GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_set_collectionRef(::GlobalNamespace::PurchaseChangesMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionRef = value;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>*& GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_get_keyCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollection;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>* const& GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_get_keyCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollection;
}
constexpr void GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_set_keyCollection(::System::Collections::Generic::IList_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyCollection = value;
}
constexpr int32_t& GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::System::Object*& GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_get_currentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr ::System::Object* const& GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_get_currentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr void GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_set_currentObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObject = value;
}
constexpr int32_t& GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int32_t const& GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::__cordl_internal_set_currentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
inline void GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::_ctor(::GlobalNamespace::PurchaseChangesMap*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PurchaseChangesMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*> GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::global::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator* GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::New_ctor(::GlobalNamespace::PurchaseChangesMap*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>"
constexpr  GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>* GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__MothershipEntitlementUpdate___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipEntitlementUpdate*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PurchaseChangesMap_PurchaseChangesMapEnumerator::PurchaseChangesMap_PurchaseChangesMapEnumerator()   {
}

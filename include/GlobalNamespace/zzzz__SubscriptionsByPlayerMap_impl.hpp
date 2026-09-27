#pragma once
// IWYU pragma private; include "GlobalNamespace/SubscriptionsByPlayerMap.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SubscriptionsByPlayerMap_def.hpp"
#include "GlobalNamespace/zzzz__SubscriptionsByPlayerMap_def.hpp"
#include "GlobalNamespace/zzzz__SubscriptionsVector_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::System::IntPtr, bool)>(&::GlobalNamespace::SubscriptionsByPlayerMap::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53556e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SubscriptionsByPlayerMap*)>(&::GlobalNamespace::SubscriptionsByPlayerMap::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5355740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsByPlayerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SubscriptionsByPlayerMap*)>(&::GlobalNamespace::SubscriptionsByPlayerMap::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5355780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsByPlayerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5355888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                    {::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5355818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)(bool)>(&::GlobalNamespace::SubscriptionsByPlayerMap::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x535591c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                    {::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionsVector* (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::StringW)>(&::GlobalNamespace::SubscriptionsByPlayerMap::get_Item)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5355a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::StringW, ::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsByPlayerMap::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5355d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::StringW, ::by_ref<::GlobalNamespace::SubscriptionsVector*>)>(&::GlobalNamespace::SubscriptionsByPlayerMap::TryGetValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5355e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SubscriptionsVector*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5355e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5355f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::get_Keys)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5355f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_Keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::GlobalNamespace::SubscriptionsVector*>* (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::get_Values)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5356318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>)>(&::GlobalNamespace::SubscriptionsByPlayerMap::Add)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x535681c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>)>(&::GlobalNamespace::SubscriptionsByPlayerMap::Remove)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5356a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>)>(&::GlobalNamespace::SubscriptionsByPlayerMap::Contains)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5356a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>)>(&::GlobalNamespace::SubscriptionsByPlayerMap::CopyTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5356bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>, int32_t)>(&::GlobalNamespace::SubscriptionsByPlayerMap::CopyTo)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5356be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_SubscriptionsVector___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>* (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_SubscriptionsVector___GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5356f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,SubscriptionsVector>>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.global::System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::global::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x535707c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator* (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x535653c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x53570d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::GlobalNamespace::SubscriptionsByPlayerMap*)>(&::GlobalNamespace::SubscriptionsByPlayerMap::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53571a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsByPlayerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::size)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5355e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::empty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5357290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5357364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.getitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionsVector* (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::StringW)>(&::GlobalNamespace::SubscriptionsByPlayerMap::getitem)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5355bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"getitem", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.setitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::StringW, ::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsByPlayerMap::setitem)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5355d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"setitem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.ContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::StringW)>(&::GlobalNamespace::SubscriptionsByPlayerMap::ContainsKey)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5355b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::StringW, ::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsByPlayerMap::Add)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5356918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::StringW)>(&::GlobalNamespace::SubscriptionsByPlayerMap::Remove)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5356af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.create_iterator_begin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::SubscriptionsByPlayerMap::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap::create_iterator_begin)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5356088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"create_iterator_begin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.get_next_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::System::IntPtr)>(&::GlobalNamespace::SubscriptionsByPlayerMap::get_next_key)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x535615c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_next_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap.destroy_iterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap::*)(::System::IntPtr)>(&::GlobalNamespace::SubscriptionsByPlayerMap::destroy_iterator)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5356240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"destroy_iterator", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::SubscriptionsByPlayerMap::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::SubscriptionsByPlayerMap::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::SubscriptionsByPlayerMap::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::SubscriptionsByPlayerMap::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::SubscriptionsByPlayerMap::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::SubscriptionsByPlayerMap::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SubscriptionsByPlayerMap::getCPtr(::GlobalNamespace::SubscriptionsByPlayerMap*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsByPlayerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SubscriptionsByPlayerMap::swigRelease(::GlobalNamespace::SubscriptionsByPlayerMap*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsByPlayerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::SubscriptionsVector* GlobalNamespace::SubscriptionsByPlayerMap::get_Item(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionsVector*>(this, ___internal_method, key);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::set_Item(::StringW  key, ::GlobalNamespace::SubscriptionsVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline bool GlobalNamespace::SubscriptionsByPlayerMap::TryGetValue(::StringW  key, ::by_ref<::GlobalNamespace::SubscriptionsVector*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SubscriptionsVector*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline int32_t GlobalNamespace::SubscriptionsByPlayerMap::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SubscriptionsByPlayerMap::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* GlobalNamespace::SubscriptionsByPlayerMap::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::GlobalNamespace::SubscriptionsVector*>* GlobalNamespace::SubscriptionsByPlayerMap::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::GlobalNamespace::SubscriptionsVector*>*>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool GlobalNamespace::SubscriptionsByPlayerMap::Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline bool GlobalNamespace::SubscriptionsByPlayerMap::Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>* GlobalNamespace::SubscriptionsByPlayerMap::global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_SubscriptionsVector___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,SubscriptionsVector>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SubscriptionsByPlayerMap::global::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator* GlobalNamespace::SubscriptionsByPlayerMap::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::_ctor(::GlobalNamespace::SubscriptionsByPlayerMap*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsByPlayerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline uint32_t GlobalNamespace::SubscriptionsByPlayerMap::size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SubscriptionsByPlayerMap::empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SubscriptionsVector* GlobalNamespace::SubscriptionsByPlayerMap::getitem(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"getitem", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionsVector*>(this, ___internal_method, key);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::setitem(::StringW  key, ::GlobalNamespace::SubscriptionsVector*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"setitem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, x);
}
inline bool GlobalNamespace::SubscriptionsByPlayerMap::ContainsKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::Add(::StringW  key, ::GlobalNamespace::SubscriptionsVector*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, val);
}
inline bool GlobalNamespace::SubscriptionsByPlayerMap::Remove(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::System::IntPtr GlobalNamespace::SubscriptionsByPlayerMap::create_iterator_begin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"create_iterator_begin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SubscriptionsByPlayerMap::get_next_key(::System::IntPtr  swigiterator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"get_next_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, swigiterator);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap::destroy_iterator(::System::IntPtr  swigiterator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap*>(),
                        {"destroy_iterator", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, swigiterator);
}
inline ::GlobalNamespace::SubscriptionsByPlayerMap* GlobalNamespace::SubscriptionsByPlayerMap::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsByPlayerMap*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::SubscriptionsByPlayerMap* GlobalNamespace::SubscriptionsByPlayerMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsByPlayerMap*>());
}
inline ::GlobalNamespace::SubscriptionsByPlayerMap* GlobalNamespace::SubscriptionsByPlayerMap::New_ctor(::GlobalNamespace::SubscriptionsByPlayerMap*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsByPlayerMap*>(other));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SubscriptionsByPlayerMap::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SubscriptionsByPlayerMap::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SubscriptionsVector*>"
constexpr  GlobalNamespace::SubscriptionsByPlayerMap::operator ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SubscriptionsVector*>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SubscriptionsVector*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SubscriptionsVector*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SubscriptionsVector*>* GlobalNamespace::SubscriptionsByPlayerMap::i___System__Collections__Generic__IDictionary_2___StringW___GlobalNamespace__SubscriptionsVector__() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SubscriptionsVector*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>"
constexpr  GlobalNamespace::SubscriptionsByPlayerMap::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>* GlobalNamespace::SubscriptionsByPlayerMap::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__SubscriptionsVector___() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>"
constexpr  GlobalNamespace::SubscriptionsByPlayerMap::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>* GlobalNamespace::SubscriptionsByPlayerMap::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__SubscriptionsVector___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::SubscriptionsByPlayerMap::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::SubscriptionsByPlayerMap::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionsByPlayerMap::SubscriptionsByPlayerMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::*)(::GlobalNamespace::SubscriptionsByPlayerMap*)>(&::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5356f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsByPlayerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*> (::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5356594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator.global::System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::global::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x53574cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x53566a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5357530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::*)()>(&::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x53575c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SubscriptionsByPlayerMap*& GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_get_collectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr ::GlobalNamespace::SubscriptionsByPlayerMap* const& GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_get_collectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr void GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_set_collectionRef(::GlobalNamespace::SubscriptionsByPlayerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionRef = value;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>*& GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_get_keyCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollection;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>* const& GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_get_keyCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollection;
}
constexpr void GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_set_keyCollection(::System::Collections::Generic::IList_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyCollection = value;
}
constexpr int32_t& GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::System::Object*& GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_get_currentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr ::System::Object* const& GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_get_currentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr void GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_set_currentObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObject = value;
}
constexpr int32_t& GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int32_t const& GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::__cordl_internal_set_currentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
inline void GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::_ctor(::GlobalNamespace::SubscriptionsByPlayerMap*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsByPlayerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*> GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::global::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator* GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::New_ctor(::GlobalNamespace::SubscriptionsByPlayerMap*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>"
constexpr  GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>* GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__SubscriptionsVector___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SubscriptionsVector*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator::SubscriptionsByPlayerMap_SubscriptionsByPlayerMapEnumerator()   {
}

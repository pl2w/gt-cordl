#pragma once
// IWYU pragma private; include "GlobalNamespace/SharedGroupDataRecordMap.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SharedGroupDataRecordMap_def.hpp"
#include "GlobalNamespace/zzzz__SharedGroupDataRecordMap_def.hpp"
#include "GlobalNamespace/zzzz__SharedGroupDataRecord_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)(::System::IntPtr, bool)>(&::GlobalNamespace::SharedGroupDataRecordMap::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53389e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SharedGroupDataRecordMap*)>(&::GlobalNamespace::SharedGroupDataRecordMap::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5338a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SharedGroupDataRecordMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SharedGroupDataRecordMap*)>(&::GlobalNamespace::SharedGroupDataRecordMap::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5338a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SharedGroupDataRecordMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5338b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                    {::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5338b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)(bool)>(&::GlobalNamespace::SharedGroupDataRecordMap::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5338c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                    {::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SharedGroupDataRecord* (::GlobalNamespace::SharedGroupDataRecordMap::*)(::StringW)>(&::GlobalNamespace::SharedGroupDataRecordMap::get_Item)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5338d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)(::StringW, ::GlobalNamespace::SharedGroupDataRecord*)>(&::GlobalNamespace::SharedGroupDataRecordMap::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x533900c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SharedGroupDataRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SharedGroupDataRecordMap::*)(::StringW, ::by_ref<::GlobalNamespace::SharedGroupDataRecord*>)>(&::GlobalNamespace::SharedGroupDataRecordMap::TryGetValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x533910c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SharedGroupDataRecord*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5339168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5339240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::get_Keys)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5339248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_Keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::GlobalNamespace::SharedGroupDataRecord*>* (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::get_Values)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x533961c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>)>(&::GlobalNamespace::SharedGroupDataRecordMap::Add)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5339b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SharedGroupDataRecordMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>)>(&::GlobalNamespace::SharedGroupDataRecordMap::Remove)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5339d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SharedGroupDataRecordMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>)>(&::GlobalNamespace::SharedGroupDataRecordMap::Contains)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5339d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>)>(&::GlobalNamespace::SharedGroupDataRecordMap::CopyTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5339edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>, int32_t)>(&::GlobalNamespace::SharedGroupDataRecordMap::CopyTo)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5339ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_SharedGroupDataRecord___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>* (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_SharedGroupDataRecord___GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x533a240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,SharedGroupDataRecord>>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.global::System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::global::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x533a380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator* (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5339840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x533a3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)(::GlobalNamespace::SharedGroupDataRecordMap*)>(&::GlobalNamespace::SharedGroupDataRecordMap::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x533a4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SharedGroupDataRecordMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::size)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x533916c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::empty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x533a594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x533a668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.getitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SharedGroupDataRecord* (::GlobalNamespace::SharedGroupDataRecordMap::*)(::StringW)>(&::GlobalNamespace::SharedGroupDataRecordMap::getitem)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5338efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"getitem", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.setitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)(::StringW, ::GlobalNamespace::SharedGroupDataRecord*)>(&::GlobalNamespace::SharedGroupDataRecordMap::setitem)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5339010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"setitem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SharedGroupDataRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.ContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SharedGroupDataRecordMap::*)(::StringW)>(&::GlobalNamespace::SharedGroupDataRecordMap::ContainsKey)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5338e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)(::StringW, ::GlobalNamespace::SharedGroupDataRecord*)>(&::GlobalNamespace::SharedGroupDataRecordMap::Add)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5339c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SharedGroupDataRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SharedGroupDataRecordMap::*)(::StringW)>(&::GlobalNamespace::SharedGroupDataRecordMap::Remove)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5339df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.create_iterator_begin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::SharedGroupDataRecordMap::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap::create_iterator_begin)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x533938c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"create_iterator_begin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.get_next_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SharedGroupDataRecordMap::*)(::System::IntPtr)>(&::GlobalNamespace::SharedGroupDataRecordMap::get_next_key)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5339460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_next_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap.destroy_iterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap::*)(::System::IntPtr)>(&::GlobalNamespace::SharedGroupDataRecordMap::destroy_iterator)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5339544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"destroy_iterator", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::SharedGroupDataRecordMap::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::SharedGroupDataRecordMap::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::SharedGroupDataRecordMap::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::SharedGroupDataRecordMap::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::SharedGroupDataRecordMap::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::SharedGroupDataRecordMap::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::SharedGroupDataRecordMap::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SharedGroupDataRecordMap::getCPtr(::GlobalNamespace::SharedGroupDataRecordMap*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SharedGroupDataRecordMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SharedGroupDataRecordMap::swigRelease(::GlobalNamespace::SharedGroupDataRecordMap*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SharedGroupDataRecordMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::SharedGroupDataRecord* GlobalNamespace::SharedGroupDataRecordMap::get_Item(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SharedGroupDataRecord*>(this, ___internal_method, key);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::set_Item(::StringW  key, ::GlobalNamespace::SharedGroupDataRecord*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SharedGroupDataRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline bool GlobalNamespace::SharedGroupDataRecordMap::TryGetValue(::StringW  key, ::by_ref<::GlobalNamespace::SharedGroupDataRecord*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SharedGroupDataRecord*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline int32_t GlobalNamespace::SharedGroupDataRecordMap::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SharedGroupDataRecordMap::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* GlobalNamespace::SharedGroupDataRecordMap::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::GlobalNamespace::SharedGroupDataRecord*>* GlobalNamespace::SharedGroupDataRecordMap::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::GlobalNamespace::SharedGroupDataRecord*>*>(this, ___internal_method);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool GlobalNamespace::SharedGroupDataRecordMap::Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline bool GlobalNamespace::SharedGroupDataRecordMap::Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>* GlobalNamespace::SharedGroupDataRecordMap::global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_SharedGroupDataRecord___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,SharedGroupDataRecord>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SharedGroupDataRecordMap::global::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator* GlobalNamespace::SharedGroupDataRecordMap::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::_ctor(::GlobalNamespace::SharedGroupDataRecordMap*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SharedGroupDataRecordMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline uint32_t GlobalNamespace::SharedGroupDataRecordMap::size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SharedGroupDataRecordMap::empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SharedGroupDataRecord* GlobalNamespace::SharedGroupDataRecordMap::getitem(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"getitem", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SharedGroupDataRecord*>(this, ___internal_method, key);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::setitem(::StringW  key, ::GlobalNamespace::SharedGroupDataRecord*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"setitem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SharedGroupDataRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, x);
}
inline bool GlobalNamespace::SharedGroupDataRecordMap::ContainsKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::Add(::StringW  key, ::GlobalNamespace::SharedGroupDataRecord*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SharedGroupDataRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, val);
}
inline bool GlobalNamespace::SharedGroupDataRecordMap::Remove(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::System::IntPtr GlobalNamespace::SharedGroupDataRecordMap::create_iterator_begin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"create_iterator_begin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SharedGroupDataRecordMap::get_next_key(::System::IntPtr  swigiterator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"get_next_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, swigiterator);
}
inline void GlobalNamespace::SharedGroupDataRecordMap::destroy_iterator(::System::IntPtr  swigiterator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap*>(),
                        {"destroy_iterator", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, swigiterator);
}
inline ::GlobalNamespace::SharedGroupDataRecordMap* GlobalNamespace::SharedGroupDataRecordMap::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SharedGroupDataRecordMap*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::SharedGroupDataRecordMap* GlobalNamespace::SharedGroupDataRecordMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SharedGroupDataRecordMap*>());
}
inline ::GlobalNamespace::SharedGroupDataRecordMap* GlobalNamespace::SharedGroupDataRecordMap::New_ctor(::GlobalNamespace::SharedGroupDataRecordMap*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SharedGroupDataRecordMap*>(other));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SharedGroupDataRecordMap::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SharedGroupDataRecordMap::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>"
constexpr  GlobalNamespace::SharedGroupDataRecordMap::operator ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>* GlobalNamespace::SharedGroupDataRecordMap::i___System__Collections__Generic__IDictionary_2___StringW___GlobalNamespace__SharedGroupDataRecord__() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr  GlobalNamespace::SharedGroupDataRecordMap::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>* GlobalNamespace::SharedGroupDataRecordMap::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__SharedGroupDataRecord___() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr  GlobalNamespace::SharedGroupDataRecordMap::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>* GlobalNamespace::SharedGroupDataRecordMap::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__SharedGroupDataRecord___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::SharedGroupDataRecordMap::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::SharedGroupDataRecordMap::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedGroupDataRecordMap::SharedGroupDataRecordMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::*)(::GlobalNamespace::SharedGroupDataRecordMap*)>(&::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x533a298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SharedGroupDataRecordMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*> (::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5339898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator.global::System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::global::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x533a730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x53399ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x533a794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::*)()>(&::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x533a82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SharedGroupDataRecordMap*& GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_get_collectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr ::GlobalNamespace::SharedGroupDataRecordMap* const& GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_get_collectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr void GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_set_collectionRef(::GlobalNamespace::SharedGroupDataRecordMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionRef = value;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>*& GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_get_keyCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollection;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>* const& GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_get_keyCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollection;
}
constexpr void GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_set_keyCollection(::System::Collections::Generic::IList_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyCollection = value;
}
constexpr int32_t& GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::System::Object*& GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_get_currentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr ::System::Object* const& GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_get_currentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr void GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_set_currentObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObject = value;
}
constexpr int32_t& GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int32_t const& GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::__cordl_internal_set_currentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
inline void GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::_ctor(::GlobalNamespace::SharedGroupDataRecordMap*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SharedGroupDataRecordMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*> GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::global::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator* GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::New_ctor(::GlobalNamespace::SharedGroupDataRecordMap*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr  GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>* GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__SharedGroupDataRecord___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator()   {
}

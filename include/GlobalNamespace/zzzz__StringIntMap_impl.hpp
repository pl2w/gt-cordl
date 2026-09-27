#pragma once
// IWYU pragma private; include "GlobalNamespace/StringIntMap.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StringIntMap_def.hpp"
#include "GlobalNamespace/zzzz__StringIntMap_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::StringIntMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)(::System::IntPtr, bool)>(&::GlobalNamespace::StringIntMap::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x534532c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::StringIntMap*)>(&::GlobalNamespace::StringIntMap::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x534538c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::StringIntMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::StringIntMap*)>(&::GlobalNamespace::StringIntMap::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x53453cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::StringIntMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x53454d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                    {::i2c::class_of<::GlobalNamespace::StringIntMap*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5345464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)(bool)>(&::GlobalNamespace::StringIntMap::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5345568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                    {::i2c::class_of<::GlobalNamespace::StringIntMap*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StringIntMap::*)(::StringW)>(&::GlobalNamespace::StringIntMap::get_Item)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x53456b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)(::StringW, int32_t)>(&::GlobalNamespace::StringIntMap::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5345928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StringIntMap::*)(::StringW, ::by_ref<int32_t>)>(&::GlobalNamespace::StringIntMap::TryGetValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5345a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5345a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5345b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::get_Keys)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5345b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_Keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<int32_t>* (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::get_Values)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5345f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>)>(&::GlobalNamespace::StringIntMap::Add)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5346418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StringIntMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>)>(&::GlobalNamespace::StringIntMap::Remove)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x53465f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StringIntMap::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>)>(&::GlobalNamespace::StringIntMap::Contains)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x534666c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>)>(&::GlobalNamespace::StringIntMap::CopyTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53467b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>, int32_t)>(&::GlobalNamespace::StringIntMap::CopyTo)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x53467c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Int32___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>* (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Int32___GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5346b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Int32>>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.global::System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::global::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5346c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StringIntMap_StringIntMapEnumerator* (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5346138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5346cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)(::GlobalNamespace::StringIntMap*)>(&::GlobalNamespace::StringIntMap::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5346d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::StringIntMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::size)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5345a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::empty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5346e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5346f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.getitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StringIntMap::*)(::StringW)>(&::GlobalNamespace::StringIntMap::getitem)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5345844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"getitem", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.setitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)(::StringW, int32_t)>(&::GlobalNamespace::StringIntMap::setitem)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x534592c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"setitem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.ContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StringIntMap::*)(::StringW)>(&::GlobalNamespace::StringIntMap::ContainsKey)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5345760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)(::StringW, int32_t)>(&::GlobalNamespace::StringIntMap::Add)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5346514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StringIntMap::*)(::StringW)>(&::GlobalNamespace::StringIntMap::Remove)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x53466d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.create_iterator_begin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::StringIntMap::*)()>(&::GlobalNamespace::StringIntMap::create_iterator_begin)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5345c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"create_iterator_begin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.get_next_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StringIntMap::*)(::System::IntPtr)>(&::GlobalNamespace::StringIntMap::get_next_key)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5345d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_next_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap.destroy_iterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap::*)(::System::IntPtr)>(&::GlobalNamespace::StringIntMap::destroy_iterator)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5345e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"destroy_iterator", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::StringIntMap::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::StringIntMap::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::StringIntMap::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::StringIntMap::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::StringIntMap::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::StringIntMap::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::StringIntMap::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::StringIntMap::getCPtr(::GlobalNamespace::StringIntMap*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::StringIntMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::StringIntMap::swigRelease(::GlobalNamespace::StringIntMap*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::StringIntMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::StringIntMap::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StringIntMap*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StringIntMap::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StringIntMap::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StringIntMap*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t GlobalNamespace::StringIntMap::get_Item(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline void GlobalNamespace::StringIntMap::set_Item(::StringW  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline bool GlobalNamespace::StringIntMap::TryGetValue(::StringW  key, ::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline int32_t GlobalNamespace::StringIntMap::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::StringIntMap::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* GlobalNamespace::StringIntMap::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<int32_t>* GlobalNamespace::StringIntMap::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<int32_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::StringIntMap::Add(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool GlobalNamespace::StringIntMap::Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline bool GlobalNamespace::StringIntMap::Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void GlobalNamespace::StringIntMap::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::StringIntMap::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>* GlobalNamespace::StringIntMap::global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Int32___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Int32>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::StringIntMap::global::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::StringIntMap_StringIntMapEnumerator* GlobalNamespace::StringIntMap::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::StringIntMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StringIntMap::_ctor(::GlobalNamespace::StringIntMap*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::StringIntMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline uint32_t GlobalNamespace::StringIntMap::size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::StringIntMap::empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StringIntMap::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::StringIntMap::getitem(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"getitem", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline void GlobalNamespace::StringIntMap::setitem(::StringW  key, int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"setitem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, x);
}
inline bool GlobalNamespace::StringIntMap::ContainsKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void GlobalNamespace::StringIntMap::Add(::StringW  key, int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, val);
}
inline bool GlobalNamespace::StringIntMap::Remove(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::System::IntPtr GlobalNamespace::StringIntMap::create_iterator_begin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"create_iterator_begin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StringIntMap::get_next_key(::System::IntPtr  swigiterator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"get_next_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, swigiterator);
}
inline void GlobalNamespace::StringIntMap::destroy_iterator(::System::IntPtr  swigiterator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap*>(),
                        {"destroy_iterator", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, swigiterator);
}
inline ::GlobalNamespace::StringIntMap* GlobalNamespace::StringIntMap::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StringIntMap*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::StringIntMap* GlobalNamespace::StringIntMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StringIntMap*>());
}
inline ::GlobalNamespace::StringIntMap* GlobalNamespace::StringIntMap::New_ctor(::GlobalNamespace::StringIntMap*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StringIntMap*>(other));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::StringIntMap::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::StringIntMap::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,int32_t>"
constexpr  GlobalNamespace::StringIntMap::operator ::System::Collections::Generic::IDictionary_2<::StringW,int32_t>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,int32_t>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,int32_t>* GlobalNamespace::StringIntMap::i___System__Collections__Generic__IDictionary_2___StringW_int32_t_() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>"
constexpr  GlobalNamespace::StringIntMap::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>* GlobalNamespace::StringIntMap::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW_int32_t__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>"
constexpr  GlobalNamespace::StringIntMap::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>* GlobalNamespace::StringIntMap::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW_int32_t__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::StringIntMap::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::StringIntMap::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringIntMap::StringIntMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::StringIntMap_StringIntMapEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap_StringIntMapEnumerator::*)(::GlobalNamespace::StringIntMap*)>(&::GlobalNamespace::StringIntMap_StringIntMapEnumerator::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5346b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::StringIntMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap_StringIntMapEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t> (::GlobalNamespace::StringIntMap_StringIntMapEnumerator::*)()>(&::GlobalNamespace::StringIntMap_StringIntMapEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5346190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap_StringIntMapEnumerator.global::System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::StringIntMap_StringIntMapEnumerator::*)()>(&::GlobalNamespace::StringIntMap_StringIntMapEnumerator::global::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x534700c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap_StringIntMapEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StringIntMap_StringIntMapEnumerator::*)()>(&::GlobalNamespace::StringIntMap_StringIntMapEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x53462a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap_StringIntMapEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap_StringIntMapEnumerator::*)()>(&::GlobalNamespace::StringIntMap_StringIntMapEnumerator::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5347070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringIntMap_StringIntMapEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringIntMap_StringIntMapEnumerator::*)()>(&::GlobalNamespace::StringIntMap_StringIntMapEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5347108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StringIntMap*& GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_get_collectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr ::GlobalNamespace::StringIntMap* const& GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_get_collectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr void GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_set_collectionRef(::GlobalNamespace::StringIntMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionRef = value;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>*& GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_get_keyCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollection;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>* const& GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_get_keyCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollection;
}
constexpr void GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_set_keyCollection(::System::Collections::Generic::IList_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyCollection = value;
}
constexpr int32_t& GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::System::Object*& GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_get_currentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr ::System::Object* const& GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_get_currentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr void GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_set_currentObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObject = value;
}
constexpr int32_t& GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int32_t const& GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::StringIntMap_StringIntMapEnumerator::__cordl_internal_set_currentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
inline void GlobalNamespace::StringIntMap_StringIntMapEnumerator::_ctor(::GlobalNamespace::StringIntMap*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::StringIntMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t> GlobalNamespace::StringIntMap_StringIntMapEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::StringIntMap_StringIntMapEnumerator::global::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::StringIntMap_StringIntMapEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StringIntMap_StringIntMapEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StringIntMap_StringIntMapEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StringIntMap_StringIntMapEnumerator* GlobalNamespace::StringIntMap_StringIntMapEnumerator::New_ctor(::GlobalNamespace::StringIntMap*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StringIntMap_StringIntMapEnumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::StringIntMap_StringIntMapEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::StringIntMap_StringIntMapEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>"
constexpr  GlobalNamespace::StringIntMap_StringIntMapEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>* GlobalNamespace::StringIntMap_StringIntMapEnumerator::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW_int32_t__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::StringIntMap_StringIntMapEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::StringIntMap_StringIntMapEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringIntMap_StringIntMapEnumerator::StringIntMap_StringIntMapEnumerator()   {
}

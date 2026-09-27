#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLookupVector.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerLookupVector_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookupEntry_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookupVector_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(::System::IntPtr, bool)>(&::GlobalNamespace::PlayerLookupVector::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x52f2044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::PlayerLookupVector*)>(&::GlobalNamespace::PlayerLookupVector::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52f20a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::PlayerLookupVector*)>(&::GlobalNamespace::PlayerLookupVector::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52f20e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x52f21e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x52f217c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(bool)>(&::GlobalNamespace::PlayerLookupVector::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x52f2278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(::System::Collections::IEnumerable*)>(&::GlobalNamespace::PlayerLookupVector::_ctor)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x52f23c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>*)>(&::GlobalNamespace::PlayerLookupVector::_ctor)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x52f28c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x52f2bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x52f2bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLookupEntry* (::GlobalNamespace::PlayerLookupVector::*)(int32_t)>(&::GlobalNamespace::PlayerLookupVector::get_Item)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x52f2bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, ::GlobalNamespace::PlayerLookupEntry*)>(&::GlobalNamespace::PlayerLookupVector::set_Item)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x52f2d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, ::GlobalNamespace::PlayerLookupEntry*)>(&::GlobalNamespace::PlayerLookupVector::Insert)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52f2ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.InsertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, ::GlobalNamespace::PlayerLookupVector*)>(&::GlobalNamespace::PlayerLookupVector::InsertRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52f3068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t)>(&::GlobalNamespace::PlayerLookupVector::RemoveAt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x52f31fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.RemoveRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, int32_t)>(&::GlobalNamespace::PlayerLookupVector::RemoveRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52f3364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.ReverseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, int32_t)>(&::GlobalNamespace::PlayerLookupVector::ReverseRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52f3558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"ReverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.SetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, ::GlobalNamespace::PlayerLookupVector*)>(&::GlobalNamespace::PlayerLookupVector::SetRange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x52f374c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::get_Capacity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x52f3910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.set_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t)>(&::GlobalNamespace::PlayerLookupVector::set_Capacity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x52f39e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::get_IsEmpty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x52f3c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x52f2c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x52f3ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(::ArrayW<::GlobalNamespace::PlayerLookupEntry*>)>(&::GlobalNamespace::PlayerLookupVector::CopyTo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x52f3cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::PlayerLookupEntry*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(::ArrayW<::GlobalNamespace::PlayerLookupEntry*>, int32_t)>(&::GlobalNamespace::PlayerLookupVector::CopyTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x52f3f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::PlayerLookupEntry*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, ::ArrayW<::GlobalNamespace::PlayerLookupEntry*>, int32_t, int32_t)>(&::GlobalNamespace::PlayerLookupVector::CopyTo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x52f3d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::PlayerLookupEntry*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::PlayerLookupEntry*> (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::ToArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x52f40b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.global::System_Collections_Generic_IEnumerable_PlayerLookupEntry__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::PlayerLookupEntry*>* (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::global::System_Collections_Generic_IEnumerable_PlayerLookupEntry__GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x52f4130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"global::System.Collections.Generic.IEnumerable<PlayerLookupEntry>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.global::System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::global::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x52f41ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator* (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x52f4244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x52f2710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(::GlobalNamespace::PlayerLookupVector*)>(&::GlobalNamespace::PlayerLookupVector::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x52f429c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x52f438c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(::GlobalNamespace::PlayerLookupEntry*)>(&::GlobalNamespace::PlayerLookupVector::Add)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52f27dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::size)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52f3a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::empty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52f3c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::capacity)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52f3914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.reserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(uint32_t)>(&::GlobalNamespace::PlayerLookupVector::reserve)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52f3b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"reserve", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t)>(&::GlobalNamespace::PlayerLookupVector::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x52f4454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.getitemcopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLookupEntry* (::GlobalNamespace::PlayerLookupVector::*)(int32_t)>(&::GlobalNamespace::PlayerLookupVector::getitemcopy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x52f3fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"getitemcopy", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.getitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLookupEntry* (::GlobalNamespace::PlayerLookupVector::*)(int32_t)>(&::GlobalNamespace::PlayerLookupVector::getitem)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x52f2c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"getitem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.setitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, ::GlobalNamespace::PlayerLookupEntry*)>(&::GlobalNamespace::PlayerLookupVector::setitem)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52f2dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"setitem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(::GlobalNamespace::PlayerLookupVector*)>(&::GlobalNamespace::PlayerLookupVector::AddRange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52f4530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"AddRange", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, ::GlobalNamespace::PlayerLookupEntry*)>(&::GlobalNamespace::PlayerLookupVector::_insert)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52f2f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._insertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, ::GlobalNamespace::PlayerLookupVector*)>(&::GlobalNamespace::PlayerLookupVector::_insertRange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52f3100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_insertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._removeAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t)>(&::GlobalNamespace::PlayerLookupVector::_removeAt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52f328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_removeAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._removeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, int32_t)>(&::GlobalNamespace::PlayerLookupVector::_removeRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x52f3478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_removeRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector.Reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)()>(&::GlobalNamespace::PlayerLookupVector::Reverse)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x52f461c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"Reverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._reverseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, int32_t)>(&::GlobalNamespace::PlayerLookupVector::_reverseRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x52f366c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_reverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector._setRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector::*)(int32_t, ::GlobalNamespace::PlayerLookupVector*)>(&::GlobalNamespace::PlayerLookupVector::_setRange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52f3814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_setRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::PlayerLookupVector::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::PlayerLookupVector::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::PlayerLookupVector::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::PlayerLookupVector::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::PlayerLookupVector::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::PlayerLookupVector::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::PlayerLookupVector::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::PlayerLookupVector::getCPtr(::GlobalNamespace::PlayerLookupVector*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::PlayerLookupVector::swigRelease(::GlobalNamespace::PlayerLookupVector*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::PlayerLookupVector::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::PlayerLookupVector::_ctor(::System::Collections::IEnumerable*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void GlobalNamespace::PlayerLookupVector::_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline bool GlobalNamespace::PlayerLookupVector::get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLookupVector::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLookupEntry* GlobalNamespace::PlayerLookupVector::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLookupEntry*>(this, ___internal_method, index);
}
inline void GlobalNamespace::PlayerLookupVector::set_Item(int32_t  index, ::GlobalNamespace::PlayerLookupEntry*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::PlayerLookupVector::Insert(int32_t  index, ::GlobalNamespace::PlayerLookupEntry*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::PlayerLookupVector::InsertRange(int32_t  index, ::GlobalNamespace::PlayerLookupVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline void GlobalNamespace::PlayerLookupVector::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::PlayerLookupVector::RemoveRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::PlayerLookupVector::ReverseRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"ReverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::PlayerLookupVector::SetRange(int32_t  index, ::GlobalNamespace::PlayerLookupVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline int32_t GlobalNamespace::PlayerLookupVector::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerLookupVector::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PlayerLookupVector::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLookupVector::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector::CopyTo(::ArrayW<::GlobalNamespace::PlayerLookupEntry*>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::PlayerLookupEntry*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::PlayerLookupVector::CopyTo(::ArrayW<::GlobalNamespace::PlayerLookupEntry*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::PlayerLookupEntry*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline void GlobalNamespace::PlayerLookupVector::CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::PlayerLookupEntry*>  array, int32_t  arrayIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::PlayerLookupEntry*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, array, arrayIndex, count);
}
inline ::ArrayW<::GlobalNamespace::PlayerLookupEntry*> GlobalNamespace::PlayerLookupVector::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::PlayerLookupEntry*>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::PlayerLookupEntry*>* GlobalNamespace::PlayerLookupVector::global::System_Collections_Generic_IEnumerable_PlayerLookupEntry__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"global::System.Collections.Generic.IEnumerable<PlayerLookupEntry>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::PlayerLookupEntry*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::PlayerLookupVector::global::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator* GlobalNamespace::PlayerLookupVector::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector::_ctor(::GlobalNamespace::PlayerLookupVector*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::PlayerLookupVector::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector::Add(::GlobalNamespace::PlayerLookupEntry*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline uint32_t GlobalNamespace::PlayerLookupVector::size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLookupVector::empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::PlayerLookupVector::capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector::reserve(uint32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"reserve", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void GlobalNamespace::PlayerLookupVector::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::GlobalNamespace::PlayerLookupEntry* GlobalNamespace::PlayerLookupVector::getitemcopy(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"getitemcopy", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLookupEntry*>(this, ___internal_method, index);
}
inline ::GlobalNamespace::PlayerLookupEntry* GlobalNamespace::PlayerLookupVector::getitem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"getitem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLookupEntry*>(this, ___internal_method, index);
}
inline void GlobalNamespace::PlayerLookupVector::setitem(int32_t  index, ::GlobalNamespace::PlayerLookupEntry*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"setitem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, val);
}
inline void GlobalNamespace::PlayerLookupVector::AddRange(::GlobalNamespace::PlayerLookupVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"AddRange", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void GlobalNamespace::PlayerLookupVector::_insert(int32_t  index, ::GlobalNamespace::PlayerLookupEntry*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, x);
}
inline void GlobalNamespace::PlayerLookupVector::_insertRange(int32_t  index, ::GlobalNamespace::PlayerLookupVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_insertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline void GlobalNamespace::PlayerLookupVector::_removeAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_removeAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::PlayerLookupVector::_removeRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_removeRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::PlayerLookupVector::Reverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"Reverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector::_reverseRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_reverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::PlayerLookupVector::_setRange(int32_t  index, ::GlobalNamespace::PlayerLookupVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector*>(),
                        {"_setRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline ::GlobalNamespace::PlayerLookupVector* GlobalNamespace::PlayerLookupVector::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLookupVector*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::PlayerLookupVector* GlobalNamespace::PlayerLookupVector::New_ctor(::System::Collections::IEnumerable*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLookupVector*>(c));
}
inline ::GlobalNamespace::PlayerLookupVector* GlobalNamespace::PlayerLookupVector::New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLookupVector*>(c));
}
inline ::GlobalNamespace::PlayerLookupVector* GlobalNamespace::PlayerLookupVector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLookupVector*>());
}
inline ::GlobalNamespace::PlayerLookupVector* GlobalNamespace::PlayerLookupVector::New_ctor(::GlobalNamespace::PlayerLookupVector*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLookupVector*>(other));
}
inline ::GlobalNamespace::PlayerLookupVector* GlobalNamespace::PlayerLookupVector::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLookupVector*>(capacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PlayerLookupVector::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PlayerLookupVector::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::PlayerLookupVector::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::PlayerLookupVector::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>"
constexpr  GlobalNamespace::PlayerLookupVector::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>* GlobalNamespace::PlayerLookupVector::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__PlayerLookupEntry__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLookupEntry*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLookupVector::PlayerLookupVector()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::*)(::GlobalNamespace::PlayerLookupVector*)>(&::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x52f4188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLookupEntry* (::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::*)()>(&::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x52f46e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator.global::System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::*)()>(&::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::global::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x52f4800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::*)()>(&::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x52f4804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::*)()>(&::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52f487c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::*)()>(&::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x52f4914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerLookupVector*& GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_get_collectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr ::GlobalNamespace::PlayerLookupVector* const& GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_get_collectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr void GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_set_collectionRef(::GlobalNamespace::PlayerLookupVector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionRef = value;
}
constexpr int32_t& GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::System::Object*& GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_get_currentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr ::System::Object* const& GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_get_currentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr void GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_set_currentObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObject = value;
}
constexpr int32_t& GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int32_t const& GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::__cordl_internal_set_currentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
inline void GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::_ctor(::GlobalNamespace::PlayerLookupVector*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::GlobalNamespace::PlayerLookupEntry* GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLookupEntry*>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::global::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator* GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::New_ctor(::GlobalNamespace::PlayerLookupVector*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::PlayerLookupEntry*>"
constexpr  GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::PlayerLookupEntry*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::PlayerLookupEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::PlayerLookupEntry*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::PlayerLookupEntry*>* GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__PlayerLookupEntry__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::PlayerLookupEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator::PlayerLookupVector_PlayerLookupVectorEnumerator()   {
}

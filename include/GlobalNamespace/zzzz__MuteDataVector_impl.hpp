#pragma once
// IWYU pragma private; include "GlobalNamespace/MuteDataVector.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MuteDataVector_def.hpp"
#include "GlobalNamespace/zzzz__MothershipMuteData_def.hpp"
#include "GlobalNamespace/zzzz__MuteDataVector_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MuteDataVector::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x52d4924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MuteDataVector*)>(&::GlobalNamespace::MuteDataVector::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52d47dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MuteDataVector*)>(&::GlobalNamespace::MuteDataVector::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52d4c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x52d4d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                    {::i2c::class_of<::GlobalNamespace::MuteDataVector*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x52d4ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(bool)>(&::GlobalNamespace::MuteDataVector::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x52d4de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                    {::i2c::class_of<::GlobalNamespace::MuteDataVector*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(::System::Collections::IEnumerable*)>(&::GlobalNamespace::MuteDataVector::_ctor)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x52d4f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*)>(&::GlobalNamespace::MuteDataVector::_ctor)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x52d5434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x52d5720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x52d5728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipMuteData* (::GlobalNamespace::MuteDataVector::*)(int32_t)>(&::GlobalNamespace::MuteDataVector::get_Item)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x52d5730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, ::GlobalNamespace::MothershipMuteData*)>(&::GlobalNamespace::MuteDataVector::set_Item)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x52d58c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipMuteData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, ::GlobalNamespace::MothershipMuteData*)>(&::GlobalNamespace::MuteDataVector::Insert)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52d5a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipMuteData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.InsertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, ::GlobalNamespace::MuteDataVector*)>(&::GlobalNamespace::MuteDataVector::InsertRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52d5be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t)>(&::GlobalNamespace::MuteDataVector::RemoveAt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x52d5d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.RemoveRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, int32_t)>(&::GlobalNamespace::MuteDataVector::RemoveRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52d5edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.ReverseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, int32_t)>(&::GlobalNamespace::MuteDataVector::ReverseRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52d60d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"ReverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.SetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, ::GlobalNamespace::MuteDataVector*)>(&::GlobalNamespace::MuteDataVector::SetRange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x52d62c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::get_Capacity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x52d6488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.set_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t)>(&::GlobalNamespace::MuteDataVector::set_Capacity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x52d6560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::get_IsEmpty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x52d6788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x52d57ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x52d6860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(::ArrayW<::GlobalNamespace::MothershipMuteData*>)>(&::GlobalNamespace::MuteDataVector::CopyTo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x52d6868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipMuteData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(::ArrayW<::GlobalNamespace::MothershipMuteData*>, int32_t)>(&::GlobalNamespace::MuteDataVector::CopyTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x52d6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipMuteData*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, ::ArrayW<::GlobalNamespace::MothershipMuteData*>, int32_t, int32_t)>(&::GlobalNamespace::MuteDataVector::CopyTo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x52d689c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipMuteData*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MothershipMuteData*> (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::ToArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x52d6c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.global::System_Collections_Generic_IEnumerable_MothershipMuteData__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>* (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::global::System_Collections_Generic_IEnumerable_MothershipMuteData__GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x52d6cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"global::System.Collections.Generic.IEnumerable<MothershipMuteData>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.global::System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::global::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x52d6d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator* (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x52d6dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x52d5278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(::GlobalNamespace::MuteDataVector*)>(&::GlobalNamespace::MuteDataVector::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x52d6e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x52d6f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(::GlobalNamespace::MothershipMuteData*)>(&::GlobalNamespace::MuteDataVector::Add)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x52d5344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::MothershipMuteData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::size)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52d65dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::empty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52d678c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::capacity)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52d648c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.reserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(uint32_t)>(&::GlobalNamespace::MuteDataVector::reserve)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52d66b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"reserve", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t)>(&::GlobalNamespace::MuteDataVector::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x52d6fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.getitemcopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipMuteData* (::GlobalNamespace::MuteDataVector::*)(int32_t)>(&::GlobalNamespace::MuteDataVector::getitemcopy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52d6b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"getitemcopy", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.getitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipMuteData* (::GlobalNamespace::MuteDataVector::*)(int32_t)>(&::GlobalNamespace::MuteDataVector::getitem)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52d57b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"getitem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.setitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, ::GlobalNamespace::MothershipMuteData*)>(&::GlobalNamespace::MuteDataVector::setitem)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x52d5948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"setitem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipMuteData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(::GlobalNamespace::MuteDataVector*)>(&::GlobalNamespace::MuteDataVector::AddRange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52d70ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"AddRange", {}, {::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, ::GlobalNamespace::MothershipMuteData*)>(&::GlobalNamespace::MuteDataVector::_insert)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x52d5ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipMuteData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._insertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, ::GlobalNamespace::MuteDataVector*)>(&::GlobalNamespace::MuteDataVector::_insertRange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52d5c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_insertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._removeAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t)>(&::GlobalNamespace::MuteDataVector::_removeAt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52d5e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_removeAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._removeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, int32_t)>(&::GlobalNamespace::MuteDataVector::_removeRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x52d5ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_removeRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector.Reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)()>(&::GlobalNamespace::MuteDataVector::Reverse)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x52d7198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"Reverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._reverseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, int32_t)>(&::GlobalNamespace::MuteDataVector::_reverseRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x52d61e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_reverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector._setRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector::*)(int32_t, ::GlobalNamespace::MuteDataVector*)>(&::GlobalNamespace::MuteDataVector::_setRange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52d638c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_setRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MuteDataVector::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MuteDataVector::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MuteDataVector::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::MuteDataVector::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::MuteDataVector::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::MuteDataVector::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::MuteDataVector::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MuteDataVector::getCPtr(::GlobalNamespace::MuteDataVector*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MuteDataVector::swigRelease(::GlobalNamespace::MuteDataVector*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MuteDataVector::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MuteDataVector*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MuteDataVector*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MuteDataVector::_ctor(::System::Collections::IEnumerable*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void GlobalNamespace::MuteDataVector::_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline bool GlobalNamespace::MuteDataVector::get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MuteDataVector::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipMuteData* GlobalNamespace::MuteDataVector::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipMuteData*>(this, ___internal_method, index);
}
inline void GlobalNamespace::MuteDataVector::set_Item(int32_t  index, ::GlobalNamespace::MothershipMuteData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipMuteData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::MuteDataVector::Insert(int32_t  index, ::GlobalNamespace::MothershipMuteData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipMuteData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::MuteDataVector::InsertRange(int32_t  index, ::GlobalNamespace::MuteDataVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline void GlobalNamespace::MuteDataVector::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::MuteDataVector::RemoveRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::MuteDataVector::ReverseRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"ReverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::MuteDataVector::SetRange(int32_t  index, ::GlobalNamespace::MuteDataVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline int32_t GlobalNamespace::MuteDataVector::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MuteDataVector::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MuteDataVector::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MuteDataVector::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector::CopyTo(::ArrayW<::GlobalNamespace::MothershipMuteData*>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipMuteData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::MuteDataVector::CopyTo(::ArrayW<::GlobalNamespace::MothershipMuteData*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipMuteData*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline void GlobalNamespace::MuteDataVector::CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::MothershipMuteData*>  array, int32_t  arrayIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipMuteData*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, array, arrayIndex, count);
}
inline ::ArrayW<::GlobalNamespace::MothershipMuteData*> GlobalNamespace::MuteDataVector::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MothershipMuteData*>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>* GlobalNamespace::MuteDataVector::global::System_Collections_Generic_IEnumerable_MothershipMuteData__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"global::System.Collections.Generic.IEnumerable<MothershipMuteData>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MuteDataVector::global::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator* GlobalNamespace::MuteDataVector::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector::_ctor(::GlobalNamespace::MuteDataVector*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MuteDataVector::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector::Add(::GlobalNamespace::MothershipMuteData*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::MothershipMuteData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline uint32_t GlobalNamespace::MuteDataVector::size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MuteDataVector::empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::MuteDataVector::capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector::reserve(uint32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"reserve", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void GlobalNamespace::MuteDataVector::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::GlobalNamespace::MothershipMuteData* GlobalNamespace::MuteDataVector::getitemcopy(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"getitemcopy", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipMuteData*>(this, ___internal_method, index);
}
inline ::GlobalNamespace::MothershipMuteData* GlobalNamespace::MuteDataVector::getitem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"getitem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipMuteData*>(this, ___internal_method, index);
}
inline void GlobalNamespace::MuteDataVector::setitem(int32_t  index, ::GlobalNamespace::MothershipMuteData*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"setitem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipMuteData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, val);
}
inline void GlobalNamespace::MuteDataVector::AddRange(::GlobalNamespace::MuteDataVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"AddRange", {}, {::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void GlobalNamespace::MuteDataVector::_insert(int32_t  index, ::GlobalNamespace::MothershipMuteData*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipMuteData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, x);
}
inline void GlobalNamespace::MuteDataVector::_insertRange(int32_t  index, ::GlobalNamespace::MuteDataVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_insertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline void GlobalNamespace::MuteDataVector::_removeAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_removeAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::MuteDataVector::_removeRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_removeRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::MuteDataVector::Reverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"Reverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector::_reverseRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_reverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::MuteDataVector::_setRange(int32_t  index, ::GlobalNamespace::MuteDataVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector*>(),
                        {"_setRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline ::GlobalNamespace::MuteDataVector* GlobalNamespace::MuteDataVector::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MuteDataVector*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MuteDataVector* GlobalNamespace::MuteDataVector::New_ctor(::System::Collections::IEnumerable*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MuteDataVector*>(c));
}
inline ::GlobalNamespace::MuteDataVector* GlobalNamespace::MuteDataVector::New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MuteDataVector*>(c));
}
inline ::GlobalNamespace::MuteDataVector* GlobalNamespace::MuteDataVector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MuteDataVector*>());
}
inline ::GlobalNamespace::MuteDataVector* GlobalNamespace::MuteDataVector::New_ctor(::GlobalNamespace::MuteDataVector*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MuteDataVector*>(other));
}
inline ::GlobalNamespace::MuteDataVector* GlobalNamespace::MuteDataVector::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MuteDataVector*>(capacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MuteDataVector::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MuteDataVector::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::MuteDataVector::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::MuteDataVector::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>"
constexpr  GlobalNamespace::MuteDataVector::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>* GlobalNamespace::MuteDataVector::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__MothershipMuteData__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MuteDataVector::MuteDataVector()   {
}
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::*)(::GlobalNamespace::MuteDataVector*)>(&::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x52d6d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipMuteData* (::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::*)()>(&::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x52d7260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator.global::System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::*)()>(&::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::global::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x52d737c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::*)()>(&::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x52d7380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::*)()>(&::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52d73f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::*)()>(&::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x52d7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MuteDataVector*& GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_get_collectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr ::GlobalNamespace::MuteDataVector* const& GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_get_collectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr void GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_set_collectionRef(::GlobalNamespace::MuteDataVector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionRef = value;
}
constexpr int32_t& GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::System::Object*& GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_get_currentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr ::System::Object* const& GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_get_currentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr void GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_set_currentObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObject = value;
}
constexpr int32_t& GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int32_t const& GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::__cordl_internal_set_currentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
inline void GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::_ctor(::GlobalNamespace::MuteDataVector*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MuteDataVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::GlobalNamespace::MothershipMuteData* GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipMuteData*>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::global::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator* GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::New_ctor(::GlobalNamespace::MuteDataVector*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>"
constexpr  GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>* GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__MothershipMuteData__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator::MuteDataVector_MuteDataVectorEnumerator()   {
}

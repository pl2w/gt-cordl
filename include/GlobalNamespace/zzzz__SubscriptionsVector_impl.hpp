#pragma once
// IWYU pragma private; include "GlobalNamespace/SubscriptionsVector.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SubscriptionsVector_def.hpp"
#include "GlobalNamespace/zzzz__Subscription_def.hpp"
#include "GlobalNamespace/zzzz__SubscriptionsVector_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(::System::IntPtr, bool)>(&::GlobalNamespace::SubscriptionsVector::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x535742c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsVector::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x535748c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsVector::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x53575dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x53576e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                    {::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5357674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(bool)>(&::GlobalNamespace::SubscriptionsVector::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5357770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                    {::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(::System::Collections::IEnumerable*)>(&::GlobalNamespace::SubscriptionsVector::_ctor)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x53578bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>*)>(&::GlobalNamespace::SubscriptionsVector::_ctor)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5357dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53580b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53580b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Subscription* (::GlobalNamespace::SubscriptionsVector::*)(int32_t)>(&::GlobalNamespace::SubscriptionsVector::get_Item)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x53580c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, ::GlobalNamespace::Subscription*)>(&::GlobalNamespace::SubscriptionsVector::set_Item)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5358254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Subscription*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, ::GlobalNamespace::Subscription*)>(&::GlobalNamespace::SubscriptionsVector::Insert)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x53583d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Subscription*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.InsertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, ::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsVector::InsertRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5358570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t)>(&::GlobalNamespace::SubscriptionsVector::RemoveAt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5358704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.RemoveRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, int32_t)>(&::GlobalNamespace::SubscriptionsVector::RemoveRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x535886c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.ReverseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, int32_t)>(&::GlobalNamespace::SubscriptionsVector::ReverseRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5358a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"ReverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.SetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, ::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsVector::SetRange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5358c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::get_Capacity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5358e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.set_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t)>(&::GlobalNamespace::SubscriptionsVector::set_Capacity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5358ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::get_IsEmpty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5359118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x535813c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53591f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(::ArrayW<::GlobalNamespace::Subscription*>)>(&::GlobalNamespace::SubscriptionsVector::CopyTo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x53591f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::Subscription*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(::ArrayW<::GlobalNamespace::Subscription*>, int32_t)>(&::GlobalNamespace::SubscriptionsVector::CopyTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5359470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::Subscription*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, ::ArrayW<::GlobalNamespace::Subscription*>, int32_t, int32_t)>(&::GlobalNamespace::SubscriptionsVector::CopyTo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x535922c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::Subscription*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::Subscription*> (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::ToArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x53595bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.global::System_Collections_Generic_IEnumerable_Subscription__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Subscription*>* (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::global::System_Collections_Generic_IEnumerable_Subscription__GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x535963c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"global::System.Collections.Generic.IEnumerable<Subscription>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.global::System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::global::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x53596f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator* (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5359750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5357c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsVector::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53597a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5359898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(::GlobalNamespace::Subscription*)>(&::GlobalNamespace::SubscriptionsVector::Add)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5357cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::Subscription*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::size)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5358f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::empty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x535911c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::capacity)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5358e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.reserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(uint32_t)>(&::GlobalNamespace::SubscriptionsVector::reserve)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5359040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"reserve", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t)>(&::GlobalNamespace::SubscriptionsVector::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5359960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.getitemcopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Subscription* (::GlobalNamespace::SubscriptionsVector::*)(int32_t)>(&::GlobalNamespace::SubscriptionsVector::getitemcopy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x53594a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"getitemcopy", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.getitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Subscription* (::GlobalNamespace::SubscriptionsVector::*)(int32_t)>(&::GlobalNamespace::SubscriptionsVector::getitem)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5358140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"getitem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.setitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, ::GlobalNamespace::Subscription*)>(&::GlobalNamespace::SubscriptionsVector::setitem)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x53582d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"setitem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Subscription*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsVector::AddRange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5359a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"AddRange", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, ::GlobalNamespace::Subscription*)>(&::GlobalNamespace::SubscriptionsVector::_insert)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5358470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Subscription*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._insertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, ::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsVector::_insertRange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5358608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_insertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._removeAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t)>(&::GlobalNamespace::SubscriptionsVector::_removeAt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5358794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_removeAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._removeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, int32_t)>(&::GlobalNamespace::SubscriptionsVector::_removeRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5358980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_removeRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector.Reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)()>(&::GlobalNamespace::SubscriptionsVector::Reverse)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5359b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"Reverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._reverseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, int32_t)>(&::GlobalNamespace::SubscriptionsVector::_reverseRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5358b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_reverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector._setRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector::*)(int32_t, ::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsVector::_setRange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5358d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_setRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::SubscriptionsVector::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::SubscriptionsVector::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::SubscriptionsVector::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::SubscriptionsVector::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::SubscriptionsVector::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::SubscriptionsVector::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::SubscriptionsVector::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SubscriptionsVector::getCPtr(::GlobalNamespace::SubscriptionsVector*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SubscriptionsVector::swigRelease(::GlobalNamespace::SubscriptionsVector*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::SubscriptionsVector::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::SubscriptionsVector::_ctor(::System::Collections::IEnumerable*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void GlobalNamespace::SubscriptionsVector::_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline bool GlobalNamespace::SubscriptionsVector::get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SubscriptionsVector::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::Subscription* GlobalNamespace::SubscriptionsVector::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Subscription*>(this, ___internal_method, index);
}
inline void GlobalNamespace::SubscriptionsVector::set_Item(int32_t  index, ::GlobalNamespace::Subscription*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Subscription*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::SubscriptionsVector::Insert(int32_t  index, ::GlobalNamespace::Subscription*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Subscription*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::SubscriptionsVector::InsertRange(int32_t  index, ::GlobalNamespace::SubscriptionsVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline void GlobalNamespace::SubscriptionsVector::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::SubscriptionsVector::RemoveRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::SubscriptionsVector::ReverseRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"ReverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::SubscriptionsVector::SetRange(int32_t  index, ::GlobalNamespace::SubscriptionsVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline int32_t GlobalNamespace::SubscriptionsVector::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SubscriptionsVector::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SubscriptionsVector::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SubscriptionsVector::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector::CopyTo(::ArrayW<::GlobalNamespace::Subscription*>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::Subscription*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::SubscriptionsVector::CopyTo(::ArrayW<::GlobalNamespace::Subscription*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::Subscription*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline void GlobalNamespace::SubscriptionsVector::CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::Subscription*>  array, int32_t  arrayIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::Subscription*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, array, arrayIndex, count);
}
inline ::ArrayW<::GlobalNamespace::Subscription*> GlobalNamespace::SubscriptionsVector::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::Subscription*>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Subscription*>* GlobalNamespace::SubscriptionsVector::global::System_Collections_Generic_IEnumerable_Subscription__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"global::System.Collections.Generic.IEnumerable<Subscription>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Subscription*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SubscriptionsVector::global::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator* GlobalNamespace::SubscriptionsVector::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector::_ctor(::GlobalNamespace::SubscriptionsVector*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SubscriptionsVector::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector::Add(::GlobalNamespace::Subscription*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::Subscription*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline uint32_t GlobalNamespace::SubscriptionsVector::size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SubscriptionsVector::empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::SubscriptionsVector::capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector::reserve(uint32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"reserve", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void GlobalNamespace::SubscriptionsVector::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::GlobalNamespace::Subscription* GlobalNamespace::SubscriptionsVector::getitemcopy(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"getitemcopy", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Subscription*>(this, ___internal_method, index);
}
inline ::GlobalNamespace::Subscription* GlobalNamespace::SubscriptionsVector::getitem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"getitem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Subscription*>(this, ___internal_method, index);
}
inline void GlobalNamespace::SubscriptionsVector::setitem(int32_t  index, ::GlobalNamespace::Subscription*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"setitem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Subscription*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, val);
}
inline void GlobalNamespace::SubscriptionsVector::AddRange(::GlobalNamespace::SubscriptionsVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"AddRange", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void GlobalNamespace::SubscriptionsVector::_insert(int32_t  index, ::GlobalNamespace::Subscription*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Subscription*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, x);
}
inline void GlobalNamespace::SubscriptionsVector::_insertRange(int32_t  index, ::GlobalNamespace::SubscriptionsVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_insertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline void GlobalNamespace::SubscriptionsVector::_removeAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_removeAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::SubscriptionsVector::_removeRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_removeRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::SubscriptionsVector::Reverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"Reverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector::_reverseRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_reverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::SubscriptionsVector::_setRange(int32_t  index, ::GlobalNamespace::SubscriptionsVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector*>(),
                        {"_setRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline ::GlobalNamespace::SubscriptionsVector* GlobalNamespace::SubscriptionsVector::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsVector*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::SubscriptionsVector* GlobalNamespace::SubscriptionsVector::New_ctor(::System::Collections::IEnumerable*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsVector*>(c));
}
inline ::GlobalNamespace::SubscriptionsVector* GlobalNamespace::SubscriptionsVector::New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsVector*>(c));
}
inline ::GlobalNamespace::SubscriptionsVector* GlobalNamespace::SubscriptionsVector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsVector*>());
}
inline ::GlobalNamespace::SubscriptionsVector* GlobalNamespace::SubscriptionsVector::New_ctor(::GlobalNamespace::SubscriptionsVector*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsVector*>(other));
}
inline ::GlobalNamespace::SubscriptionsVector* GlobalNamespace::SubscriptionsVector::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsVector*>(capacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SubscriptionsVector::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SubscriptionsVector::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::SubscriptionsVector::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::SubscriptionsVector::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>"
constexpr  GlobalNamespace::SubscriptionsVector::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>* GlobalNamespace::SubscriptionsVector::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__Subscription__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Subscription*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionsVector::SubscriptionsVector()   {
}
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::*)(::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5359694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Subscription* (::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::*)()>(&::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5359bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator.global::System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::*)()>(&::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::global::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5359d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::*)()>(&::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5359d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::*)()>(&::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5359d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::*)()>(&::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5359e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SubscriptionsVector*& GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_get_collectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr ::GlobalNamespace::SubscriptionsVector* const& GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_get_collectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr void GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_set_collectionRef(::GlobalNamespace::SubscriptionsVector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionRef = value;
}
constexpr int32_t& GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::System::Object*& GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_get_currentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr ::System::Object* const& GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_get_currentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr void GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_set_currentObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObject = value;
}
constexpr int32_t& GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int32_t const& GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::__cordl_internal_set_currentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
inline void GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::_ctor(::GlobalNamespace::SubscriptionsVector*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::GlobalNamespace::Subscription* GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Subscription*>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::global::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator* GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::New_ctor(::GlobalNamespace::SubscriptionsVector*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Subscription*>"
constexpr  GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Subscription*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Subscription*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Subscription*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Subscription*>* GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__Subscription__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Subscription*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionsVector_SubscriptionsVectorEnumerator::SubscriptionsVector_SubscriptionsVectorEnumerator()   {
}

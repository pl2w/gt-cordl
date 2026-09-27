#pragma once
// IWYU pragma private; include "GlobalNamespace/AccountAssociationVector.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AccountAssociationVector_def.hpp"
#include "GlobalNamespace/zzzz__AccountAssociationVector_def.hpp"
#include "GlobalNamespace/zzzz__MothershipAccountAssociation_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(::System::IntPtr, bool)>(&::GlobalNamespace::AccountAssociationVector::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5254e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::AccountAssociationVector*)>(&::GlobalNamespace::AccountAssociationVector::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5254ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::AccountAssociationVector*)>(&::GlobalNamespace::AccountAssociationVector::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5254f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5255008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                    {::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5254f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(bool)>(&::GlobalNamespace::AccountAssociationVector::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5255098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                    {::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(::System::Collections::IEnumerable*)>(&::GlobalNamespace::AccountAssociationVector::_ctor)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x52551e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*)>(&::GlobalNamespace::AccountAssociationVector::_ctor)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5255710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x52559fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5255a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipAccountAssociation* (::GlobalNamespace::AccountAssociationVector::*)(int32_t)>(&::GlobalNamespace::AccountAssociationVector::get_Item)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5255a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, ::GlobalNamespace::MothershipAccountAssociation*)>(&::GlobalNamespace::AccountAssociationVector::set_Item)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5255ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipAccountAssociation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, ::GlobalNamespace::MothershipAccountAssociation*)>(&::GlobalNamespace::AccountAssociationVector::Insert)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5255d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipAccountAssociation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.InsertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, ::GlobalNamespace::AccountAssociationVector*)>(&::GlobalNamespace::AccountAssociationVector::InsertRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5255f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t)>(&::GlobalNamespace::AccountAssociationVector::RemoveAt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5256098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.RemoveRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, int32_t)>(&::GlobalNamespace::AccountAssociationVector::RemoveRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5256200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.ReverseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, int32_t)>(&::GlobalNamespace::AccountAssociationVector::ReverseRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52563f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"ReverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.SetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, ::GlobalNamespace::AccountAssociationVector*)>(&::GlobalNamespace::AccountAssociationVector::SetRange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x52565e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::get_Capacity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x52567ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.set_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t)>(&::GlobalNamespace::AccountAssociationVector::set_Capacity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5256884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::get_IsEmpty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5256aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5255a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5256b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>)>(&::GlobalNamespace::AccountAssociationVector::CopyTo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5256b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>, int32_t)>(&::GlobalNamespace::AccountAssociationVector::CopyTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5256e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, ::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>, int32_t, int32_t)>(&::GlobalNamespace::AccountAssociationVector::CopyTo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5256bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MothershipAccountAssociation*> (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::ToArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5256f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.global::System_Collections_Generic_IEnumerable_MothershipAccountAssociation__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>* (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::global::System_Collections_Generic_IEnumerable_MothershipAccountAssociation__GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5256fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"global::System.Collections.Generic.IEnumerable<MothershipAccountAssociation>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.global::System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::global::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x525708c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator* (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x52570e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5255530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(::GlobalNamespace::AccountAssociationVector*)>(&::GlobalNamespace::AccountAssociationVector::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x525713c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x525722c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(::GlobalNamespace::MothershipAccountAssociation*)>(&::GlobalNamespace::AccountAssociationVector::Add)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52555fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::MothershipAccountAssociation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::size)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5256900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::empty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5256ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::capacity)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52567b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.reserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(uint32_t)>(&::GlobalNamespace::AccountAssociationVector::reserve)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52569d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"reserve", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t)>(&::GlobalNamespace::AccountAssociationVector::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x52572f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.getitemcopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipAccountAssociation* (::GlobalNamespace::AccountAssociationVector::*)(int32_t)>(&::GlobalNamespace::AccountAssociationVector::getitemcopy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5256e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"getitemcopy", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.getitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipAccountAssociation* (::GlobalNamespace::AccountAssociationVector::*)(int32_t)>(&::GlobalNamespace::AccountAssociationVector::getitem)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5255a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"getitem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.setitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, ::GlobalNamespace::MothershipAccountAssociation*)>(&::GlobalNamespace::AccountAssociationVector::setitem)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5255c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"setitem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipAccountAssociation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(::GlobalNamespace::AccountAssociationVector*)>(&::GlobalNamespace::AccountAssociationVector::AddRange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52573d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"AddRange", {}, {::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, ::GlobalNamespace::MothershipAccountAssociation*)>(&::GlobalNamespace::AccountAssociationVector::_insert)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5255de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipAccountAssociation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._insertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, ::GlobalNamespace::AccountAssociationVector*)>(&::GlobalNamespace::AccountAssociationVector::_insertRange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5255f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_insertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._removeAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t)>(&::GlobalNamespace::AccountAssociationVector::_removeAt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5256128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_removeAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._removeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, int32_t)>(&::GlobalNamespace::AccountAssociationVector::_removeRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5256314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_removeRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector.Reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)()>(&::GlobalNamespace::AccountAssociationVector::Reverse)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x52574bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"Reverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._reverseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, int32_t)>(&::GlobalNamespace::AccountAssociationVector::_reverseRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5256508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_reverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector._setRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector::*)(int32_t, ::GlobalNamespace::AccountAssociationVector*)>(&::GlobalNamespace::AccountAssociationVector::_setRange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52566b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_setRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::AccountAssociationVector::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::AccountAssociationVector::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::AccountAssociationVector::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::AccountAssociationVector::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::AccountAssociationVector::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::AccountAssociationVector::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::AccountAssociationVector::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::AccountAssociationVector::getCPtr(::GlobalNamespace::AccountAssociationVector*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::AccountAssociationVector::swigRelease(::GlobalNamespace::AccountAssociationVector*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::AccountAssociationVector::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::AccountAssociationVector::_ctor(::System::Collections::IEnumerable*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void GlobalNamespace::AccountAssociationVector::_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline bool GlobalNamespace::AccountAssociationVector::get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AccountAssociationVector::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipAccountAssociation* GlobalNamespace::AccountAssociationVector::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipAccountAssociation*>(this, ___internal_method, index);
}
inline void GlobalNamespace::AccountAssociationVector::set_Item(int32_t  index, ::GlobalNamespace::MothershipAccountAssociation*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipAccountAssociation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::AccountAssociationVector::Insert(int32_t  index, ::GlobalNamespace::MothershipAccountAssociation*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipAccountAssociation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::AccountAssociationVector::InsertRange(int32_t  index, ::GlobalNamespace::AccountAssociationVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline void GlobalNamespace::AccountAssociationVector::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::AccountAssociationVector::RemoveRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::AccountAssociationVector::ReverseRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"ReverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::AccountAssociationVector::SetRange(int32_t  index, ::GlobalNamespace::AccountAssociationVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline int32_t GlobalNamespace::AccountAssociationVector::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AccountAssociationVector::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AccountAssociationVector::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::AccountAssociationVector::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector::CopyTo(::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::AccountAssociationVector::CopyTo(::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline void GlobalNamespace::AccountAssociationVector::CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>  array, int32_t  arrayIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, array, arrayIndex, count);
}
inline ::ArrayW<::GlobalNamespace::MothershipAccountAssociation*> GlobalNamespace::AccountAssociationVector::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>* GlobalNamespace::AccountAssociationVector::global::System_Collections_Generic_IEnumerable_MothershipAccountAssociation__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"global::System.Collections.Generic.IEnumerable<MothershipAccountAssociation>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AccountAssociationVector::global::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator* GlobalNamespace::AccountAssociationVector::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector::_ctor(::GlobalNamespace::AccountAssociationVector*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::AccountAssociationVector::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector::Add(::GlobalNamespace::MothershipAccountAssociation*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::MothershipAccountAssociation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline uint32_t GlobalNamespace::AccountAssociationVector::size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::AccountAssociationVector::empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::AccountAssociationVector::capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector::reserve(uint32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"reserve", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void GlobalNamespace::AccountAssociationVector::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::GlobalNamespace::MothershipAccountAssociation* GlobalNamespace::AccountAssociationVector::getitemcopy(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"getitemcopy", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipAccountAssociation*>(this, ___internal_method, index);
}
inline ::GlobalNamespace::MothershipAccountAssociation* GlobalNamespace::AccountAssociationVector::getitem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"getitem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipAccountAssociation*>(this, ___internal_method, index);
}
inline void GlobalNamespace::AccountAssociationVector::setitem(int32_t  index, ::GlobalNamespace::MothershipAccountAssociation*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"setitem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipAccountAssociation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, val);
}
inline void GlobalNamespace::AccountAssociationVector::AddRange(::GlobalNamespace::AccountAssociationVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"AddRange", {}, {::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void GlobalNamespace::AccountAssociationVector::_insert(int32_t  index, ::GlobalNamespace::MothershipAccountAssociation*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MothershipAccountAssociation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, x);
}
inline void GlobalNamespace::AccountAssociationVector::_insertRange(int32_t  index, ::GlobalNamespace::AccountAssociationVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_insertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline void GlobalNamespace::AccountAssociationVector::_removeAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_removeAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::AccountAssociationVector::_removeRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_removeRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::AccountAssociationVector::Reverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"Reverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector::_reverseRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_reverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::AccountAssociationVector::_setRange(int32_t  index, ::GlobalNamespace::AccountAssociationVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector*>(),
                        {"_setRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline ::GlobalNamespace::AccountAssociationVector* GlobalNamespace::AccountAssociationVector::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AccountAssociationVector*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::AccountAssociationVector* GlobalNamespace::AccountAssociationVector::New_ctor(::System::Collections::IEnumerable*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AccountAssociationVector*>(c));
}
inline ::GlobalNamespace::AccountAssociationVector* GlobalNamespace::AccountAssociationVector::New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AccountAssociationVector*>(c));
}
inline ::GlobalNamespace::AccountAssociationVector* GlobalNamespace::AccountAssociationVector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AccountAssociationVector*>());
}
inline ::GlobalNamespace::AccountAssociationVector* GlobalNamespace::AccountAssociationVector::New_ctor(::GlobalNamespace::AccountAssociationVector*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AccountAssociationVector*>(other));
}
inline ::GlobalNamespace::AccountAssociationVector* GlobalNamespace::AccountAssociationVector::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AccountAssociationVector*>(capacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AccountAssociationVector::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AccountAssociationVector::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::AccountAssociationVector::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::AccountAssociationVector::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>"
constexpr  GlobalNamespace::AccountAssociationVector::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>* GlobalNamespace::AccountAssociationVector::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__MothershipAccountAssociation__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AccountAssociationVector::AccountAssociationVector()   {
}
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::*)(::GlobalNamespace::AccountAssociationVector*)>(&::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5257028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipAccountAssociation* (::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::*)()>(&::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5257584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator.global::System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::*)()>(&::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::global::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x52576a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::*)()>(&::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x52576a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::*)()>(&::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x525771c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::*)()>(&::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x52577b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AccountAssociationVector*& GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_get_collectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr ::GlobalNamespace::AccountAssociationVector* const& GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_get_collectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr void GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_set_collectionRef(::GlobalNamespace::AccountAssociationVector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionRef = value;
}
constexpr int32_t& GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::System::Object*& GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_get_currentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr ::System::Object* const& GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_get_currentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr void GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_set_currentObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObject = value;
}
constexpr int32_t& GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int32_t const& GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::__cordl_internal_set_currentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
inline void GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::_ctor(::GlobalNamespace::AccountAssociationVector*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AccountAssociationVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::GlobalNamespace::MothershipAccountAssociation* GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipAccountAssociation*>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::global::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator* GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::New_ctor(::GlobalNamespace::AccountAssociationVector*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>"
constexpr  GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>* GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__MothershipAccountAssociation__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator::AccountAssociationVector_AccountAssociationVectorEnumerator()   {
}

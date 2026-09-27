#pragma once
// IWYU pragma private; include "GlobalNamespace/TrackLevelVector.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TrackLevelVector_def.hpp"
#include "GlobalNamespace/zzzz__LevelDefinition_def.hpp"
#include "GlobalNamespace/zzzz__TrackLevelVector_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(::System::IntPtr, bool)>(&::GlobalNamespace::TrackLevelVector::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5360944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::TrackLevelVector::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x53609a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::TrackLevelVector::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x53609e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5360ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                    {::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5360a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(bool)>(&::GlobalNamespace::TrackLevelVector::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5360b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                    {::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(::System::Collections::IEnumerable*)>(&::GlobalNamespace::TrackLevelVector::_ctor)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5360cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>*)>(&::GlobalNamespace::TrackLevelVector::_ctor)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x53611cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53614b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53614c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelDefinition* (::GlobalNamespace::TrackLevelVector::*)(int32_t)>(&::GlobalNamespace::TrackLevelVector::get_Item)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x53614c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, ::GlobalNamespace::LevelDefinition*)>(&::GlobalNamespace::TrackLevelVector::set_Item)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x536165c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LevelDefinition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, ::GlobalNamespace::LevelDefinition*)>(&::GlobalNamespace::TrackLevelVector::Insert)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x53617e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LevelDefinition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.InsertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, ::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::TrackLevelVector::InsertRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5361978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t)>(&::GlobalNamespace::TrackLevelVector::RemoveAt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5361b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.RemoveRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, int32_t)>(&::GlobalNamespace::TrackLevelVector::RemoveRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5361c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.ReverseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, int32_t)>(&::GlobalNamespace::TrackLevelVector::ReverseRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5361e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"ReverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.SetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, ::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::TrackLevelVector::SetRange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x536205c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::get_Capacity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5362220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.set_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t)>(&::GlobalNamespace::TrackLevelVector::set_Capacity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x53622f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::get_IsEmpty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5362520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5361544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53625f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(::ArrayW<::GlobalNamespace::LevelDefinition*>)>(&::GlobalNamespace::TrackLevelVector::CopyTo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5362600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::LevelDefinition*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(::ArrayW<::GlobalNamespace::LevelDefinition*>, int32_t)>(&::GlobalNamespace::TrackLevelVector::CopyTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5362878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::LevelDefinition*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, ::ArrayW<::GlobalNamespace::LevelDefinition*>, int32_t, int32_t)>(&::GlobalNamespace::TrackLevelVector::CopyTo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5362634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LevelDefinition*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::LevelDefinition*> (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::ToArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x53629c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.global::System_Collections_Generic_IEnumerable_LevelDefinition__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LevelDefinition*>* (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::global::System_Collections_Generic_IEnumerable_LevelDefinition__GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5362a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"global::System.Collections.Generic.IEnumerable<LevelDefinition>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.global::System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::global::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5362b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator* (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5362b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5361010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::TrackLevelVector::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5362bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5362ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(::GlobalNamespace::LevelDefinition*)>(&::GlobalNamespace::TrackLevelVector::Add)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53610dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::LevelDefinition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::size)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5362374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::empty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5362524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::capacity)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5362224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.reserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(uint32_t)>(&::GlobalNamespace::TrackLevelVector::reserve)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5362448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"reserve", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t)>(&::GlobalNamespace::TrackLevelVector::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5362d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.getitemcopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelDefinition* (::GlobalNamespace::TrackLevelVector::*)(int32_t)>(&::GlobalNamespace::TrackLevelVector::getitemcopy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x53628b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"getitemcopy", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.getitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelDefinition* (::GlobalNamespace::TrackLevelVector::*)(int32_t)>(&::GlobalNamespace::TrackLevelVector::getitem)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5361548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"getitem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.setitem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, ::GlobalNamespace::LevelDefinition*)>(&::GlobalNamespace::TrackLevelVector::setitem)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x53616e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"setitem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LevelDefinition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::TrackLevelVector::AddRange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5362e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"AddRange", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, ::GlobalNamespace::LevelDefinition*)>(&::GlobalNamespace::TrackLevelVector::_insert)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5361878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LevelDefinition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._insertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, ::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::TrackLevelVector::_insertRange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5361a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_insertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._removeAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t)>(&::GlobalNamespace::TrackLevelVector::_removeAt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5361b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_removeAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._removeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, int32_t)>(&::GlobalNamespace::TrackLevelVector::_removeRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5361d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_removeRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector.Reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)()>(&::GlobalNamespace::TrackLevelVector::Reverse)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5362f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"Reverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._reverseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, int32_t)>(&::GlobalNamespace::TrackLevelVector::_reverseRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5361f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_reverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector._setRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector::*)(int32_t, ::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::TrackLevelVector::_setRange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5362124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_setRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::TrackLevelVector::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::TrackLevelVector::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::TrackLevelVector::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::TrackLevelVector::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::TrackLevelVector::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::TrackLevelVector::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::TrackLevelVector::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::TrackLevelVector::getCPtr(::GlobalNamespace::TrackLevelVector*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::TrackLevelVector::swigRelease(::GlobalNamespace::TrackLevelVector*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::TrackLevelVector::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::TrackLevelVector::_ctor(::System::Collections::IEnumerable*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void GlobalNamespace::TrackLevelVector::_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline bool GlobalNamespace::TrackLevelVector::get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TrackLevelVector::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelDefinition* GlobalNamespace::TrackLevelVector::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelDefinition*>(this, ___internal_method, index);
}
inline void GlobalNamespace::TrackLevelVector::set_Item(int32_t  index, ::GlobalNamespace::LevelDefinition*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LevelDefinition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::TrackLevelVector::Insert(int32_t  index, ::GlobalNamespace::LevelDefinition*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LevelDefinition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::TrackLevelVector::InsertRange(int32_t  index, ::GlobalNamespace::TrackLevelVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline void GlobalNamespace::TrackLevelVector::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::TrackLevelVector::RemoveRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::TrackLevelVector::ReverseRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"ReverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::TrackLevelVector::SetRange(int32_t  index, ::GlobalNamespace::TrackLevelVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline int32_t GlobalNamespace::TrackLevelVector::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TrackLevelVector::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TrackLevelVector::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::TrackLevelVector::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector::CopyTo(::ArrayW<::GlobalNamespace::LevelDefinition*>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::LevelDefinition*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::TrackLevelVector::CopyTo(::ArrayW<::GlobalNamespace::LevelDefinition*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::LevelDefinition*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline void GlobalNamespace::TrackLevelVector::CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::LevelDefinition*>  array, int32_t  arrayIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"CopyTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LevelDefinition*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, array, arrayIndex, count);
}
inline ::ArrayW<::GlobalNamespace::LevelDefinition*> GlobalNamespace::TrackLevelVector::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LevelDefinition*>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LevelDefinition*>* GlobalNamespace::TrackLevelVector::global::System_Collections_Generic_IEnumerable_LevelDefinition__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"global::System.Collections.Generic.IEnumerable<LevelDefinition>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LevelDefinition*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::TrackLevelVector::global::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"global::System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator* GlobalNamespace::TrackLevelVector::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector::_ctor(::GlobalNamespace::TrackLevelVector*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::TrackLevelVector::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector::Add(::GlobalNamespace::LevelDefinition*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::LevelDefinition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline uint32_t GlobalNamespace::TrackLevelVector::size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::TrackLevelVector::empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::TrackLevelVector::capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector::reserve(uint32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"reserve", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void GlobalNamespace::TrackLevelVector::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::GlobalNamespace::LevelDefinition* GlobalNamespace::TrackLevelVector::getitemcopy(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"getitemcopy", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelDefinition*>(this, ___internal_method, index);
}
inline ::GlobalNamespace::LevelDefinition* GlobalNamespace::TrackLevelVector::getitem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"getitem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelDefinition*>(this, ___internal_method, index);
}
inline void GlobalNamespace::TrackLevelVector::setitem(int32_t  index, ::GlobalNamespace::LevelDefinition*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"setitem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LevelDefinition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, val);
}
inline void GlobalNamespace::TrackLevelVector::AddRange(::GlobalNamespace::TrackLevelVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"AddRange", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void GlobalNamespace::TrackLevelVector::_insert(int32_t  index, ::GlobalNamespace::LevelDefinition*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LevelDefinition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, x);
}
inline void GlobalNamespace::TrackLevelVector::_insertRange(int32_t  index, ::GlobalNamespace::TrackLevelVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_insertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline void GlobalNamespace::TrackLevelVector::_removeAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_removeAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::TrackLevelVector::_removeRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_removeRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::TrackLevelVector::Reverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"Reverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector::_reverseRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_reverseRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::TrackLevelVector::_setRange(int32_t  index, ::GlobalNamespace::TrackLevelVector*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector*>(),
                        {"_setRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, values);
}
inline ::GlobalNamespace::TrackLevelVector* GlobalNamespace::TrackLevelVector::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackLevelVector*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::TrackLevelVector* GlobalNamespace::TrackLevelVector::New_ctor(::System::Collections::IEnumerable*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackLevelVector*>(c));
}
inline ::GlobalNamespace::TrackLevelVector* GlobalNamespace::TrackLevelVector::New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackLevelVector*>(c));
}
inline ::GlobalNamespace::TrackLevelVector* GlobalNamespace::TrackLevelVector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackLevelVector*>());
}
inline ::GlobalNamespace::TrackLevelVector* GlobalNamespace::TrackLevelVector::New_ctor(::GlobalNamespace::TrackLevelVector*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackLevelVector*>(other));
}
inline ::GlobalNamespace::TrackLevelVector* GlobalNamespace::TrackLevelVector::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackLevelVector*>(capacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::TrackLevelVector::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TrackLevelVector::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::TrackLevelVector::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::TrackLevelVector::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>"
constexpr  GlobalNamespace::TrackLevelVector::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>* GlobalNamespace::TrackLevelVector::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__LevelDefinition__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LevelDefinition*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackLevelVector::TrackLevelVector()   {
}
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::*)(::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5362a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelDefinition* (::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::*)()>(&::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5362ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator.global::System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::*)()>(&::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::global::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5363114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::*)()>(&::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5363118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::*)()>(&::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5363190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::*)()>(&::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5363228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TrackLevelVector*& GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_get_collectionRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr ::GlobalNamespace::TrackLevelVector* const& GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_get_collectionRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionRef;
}
constexpr void GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_set_collectionRef(::GlobalNamespace::TrackLevelVector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionRef = value;
}
constexpr int32_t& GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::System::Object*& GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_get_currentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr ::System::Object* const& GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_get_currentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObject;
}
constexpr void GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_set_currentObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObject = value;
}
constexpr int32_t& GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int32_t const& GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::__cordl_internal_set_currentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
inline void GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::_ctor(::GlobalNamespace::TrackLevelVector*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::GlobalNamespace::LevelDefinition* GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelDefinition*>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::global::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {"global::System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator* GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::New_ctor(::GlobalNamespace::TrackLevelVector*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LevelDefinition*>"
constexpr  GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LevelDefinition*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LevelDefinition*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LevelDefinition*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LevelDefinition*>* GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__LevelDefinition__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LevelDefinition*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackLevelVector_TrackLevelVectorEnumerator::TrackLevelVector_TrackLevelVectorEnumerator()   {
}

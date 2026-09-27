#pragma once
// IWYU pragma private; include "GlobalNamespace/Id128.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "GlobalNamespace/zzzz__Id128_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Id128._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Id128::*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::Id128::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a1c37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Id128::*)(int64_t, int64_t)>(&::GlobalNamespace::Id128::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a1c3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Id128::*)(::UnityEngine::Hash128)>(&::GlobalNamespace::Id128::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a1c448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Id128::*)(::System::Guid)>(&::GlobalNamespace::Id128::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1c4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Id128::*)(::StringW)>(&::GlobalNamespace::Id128::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a1c4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Id128::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::Id128::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a1c540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.ToLongs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int64_t,int64_t> (::GlobalNamespace::Id128::*)()>(&::GlobalNamespace::Id128::ToLongs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a1c61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"ToLongs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.ToInts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_4<int32_t,int32_t,int32_t,int32_t> (::GlobalNamespace::Id128::*)()>(&::GlobalNamespace::Id128::ToInts)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a1c67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"ToInts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.ToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::Id128::*)()>(&::GlobalNamespace::Id128::ToByteArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1c6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"ToByteArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Id128::*)(::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a1c6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Id128::*)(::System::Guid)>(&::GlobalNamespace::Id128::Equals)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a1c70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"Equals", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Id128::*)(::UnityEngine::Hash128)>(&::GlobalNamespace::Id128::Equals)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a1c728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Id128::*)(::System::Object*)>(&::GlobalNamespace::Id128::Equals)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a1c744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Id128>(),
                    {::i2c::class_of<::GlobalNamespace::Id128>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Id128::*)()>(&::GlobalNamespace::Id128::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1c854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Id128>(),
                    {::i2c::class_of<::GlobalNamespace::Id128>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Id128::*)()>(&::GlobalNamespace::Id128::GetHashCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1c85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Id128>(),
                    {::i2c::class_of<::GlobalNamespace::Id128>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Id128::*)(::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::CompareTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a1c91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Id128::*)(::System::Object*)>(&::GlobalNamespace::Id128::CompareTo)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5a1c95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.NewId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)()>(&::GlobalNamespace::Id128::NewId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1ca98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"NewId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.ComputeMD5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)(::StringW)>(&::GlobalNamespace::Id128::ComputeMD5)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5a1caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"ComputeMD5", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.ComputeSHV2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)(::StringW)>(&::GlobalNamespace::Id128::ComputeSHV2)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a1cc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"ComputeSHV2", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Id128, ::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a1cd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Id128, ::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a1cd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Id128, ::System::Guid)>(&::GlobalNamespace::Id128::op_Equality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1cd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Id128, ::System::Guid)>(&::GlobalNamespace::Id128::op_Inequality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a1cd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Guid, ::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a1cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Guid, ::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a1cdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Id128, ::UnityEngine::Hash128)>(&::GlobalNamespace::Id128::op_Equality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1cdf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Id128, ::UnityEngine::Hash128)>(&::GlobalNamespace::Id128::op_Inequality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a1cdfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Hash128, ::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a1ce18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Hash128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Hash128, ::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a1ce48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Hash128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Id128, ::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_LessThan)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a1ce7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_LessThan", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Id128, ::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_GreaterThan)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a1cec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_LessThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Id128, ::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a1cf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_GreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Id128, ::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a1cf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Implicit___System__Guid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_Implicit___System__Guid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1cfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Implicit___GlobalNamespace__Id128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)(::System::Guid)>(&::GlobalNamespace::Id128::op_Implicit___GlobalNamespace__Id128)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1cc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Implicit___GlobalNamespace__Id128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)(::UnityEngine::Hash128)>(&::GlobalNamespace::Id128::op_Implicit___GlobalNamespace__Id128)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a1cd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Implicit___UnityEngine__Hash128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (*)(::GlobalNamespace::Id128)>(&::GlobalNamespace::Id128::op_Implicit___UnityEngine__Hash128)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1cfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128.op_Explicit___GlobalNamespace__Id128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)(::StringW)>(&::GlobalNamespace::Id128::op_Explicit___GlobalNamespace__Id128)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1cfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Explicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::Id128::__cordl_internal_get_x()  {
return this->___x;
}
constexpr int64_t const& GlobalNamespace::Id128::__cordl_internal_get_x() const {
return this->___x;
}
constexpr void GlobalNamespace::Id128::__cordl_internal_set_x(int64_t  value)  {
this->___x = value;
}
constexpr int64_t& GlobalNamespace::Id128::__cordl_internal_get_y()  {
return this->___y;
}
constexpr int64_t const& GlobalNamespace::Id128::__cordl_internal_get_y() const {
return this->___y;
}
constexpr void GlobalNamespace::Id128::__cordl_internal_set_y(int64_t  value)  {
this->___y = value;
}
constexpr int32_t& GlobalNamespace::Id128::__cordl_internal_get_a()  {
return this->___a;
}
constexpr int32_t const& GlobalNamespace::Id128::__cordl_internal_get_a() const {
return this->___a;
}
constexpr void GlobalNamespace::Id128::__cordl_internal_set_a(int32_t  value)  {
this->___a = value;
}
constexpr int32_t& GlobalNamespace::Id128::__cordl_internal_get_b()  {
return this->___b;
}
constexpr int32_t const& GlobalNamespace::Id128::__cordl_internal_get_b() const {
return this->___b;
}
constexpr void GlobalNamespace::Id128::__cordl_internal_set_b(int32_t  value)  {
this->___b = value;
}
constexpr int32_t& GlobalNamespace::Id128::__cordl_internal_get_c()  {
return this->___c;
}
constexpr int32_t const& GlobalNamespace::Id128::__cordl_internal_get_c() const {
return this->___c;
}
constexpr void GlobalNamespace::Id128::__cordl_internal_set_c(int32_t  value)  {
this->___c = value;
}
constexpr int32_t& GlobalNamespace::Id128::__cordl_internal_get_d()  {
return this->___d;
}
constexpr int32_t const& GlobalNamespace::Id128::__cordl_internal_get_d() const {
return this->___d;
}
constexpr void GlobalNamespace::Id128::__cordl_internal_set_d(int32_t  value)  {
this->___d = value;
}
constexpr ::System::Guid& GlobalNamespace::Id128::__cordl_internal_get_guid()  {
return this->___guid;
}
constexpr ::System::Guid const& GlobalNamespace::Id128::__cordl_internal_get_guid() const {
return this->___guid;
}
constexpr void GlobalNamespace::Id128::__cordl_internal_set_guid(::System::Guid  value)  {
this->___guid = value;
}
constexpr ::UnityEngine::Hash128& GlobalNamespace::Id128::__cordl_internal_get_h128()  {
return this->___h128;
}
constexpr ::UnityEngine::Hash128 const& GlobalNamespace::Id128::__cordl_internal_get_h128() const {
return this->___h128;
}
constexpr void GlobalNamespace::Id128::__cordl_internal_set_h128(::UnityEngine::Hash128  value)  {
this->___h128 = value;
}
inline void GlobalNamespace::Id128::setStaticF_Empty(::GlobalNamespace::Id128  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Id128, "Empty", ::GlobalNamespace::Id128>(std::forward<::GlobalNamespace::Id128>(value));
}
inline ::GlobalNamespace::Id128 GlobalNamespace::Id128::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Id128, "Empty", ::GlobalNamespace::Id128>();
}
inline void GlobalNamespace::Id128::_ctor(int32_t  a, int32_t  b, int32_t  c, int32_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c, d);
}
inline void GlobalNamespace::Id128::_ctor(int64_t  x, int64_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline void GlobalNamespace::Id128::_ctor(::UnityEngine::Hash128  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hash);
}
inline void GlobalNamespace::Id128::_ctor(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, guid);
}
inline void GlobalNamespace::Id128::_ctor(::StringW  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, guid);
}
inline void GlobalNamespace::Id128::_ctor(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bytes);
}
inline ::System::ValueTuple_2<int64_t,int64_t> GlobalNamespace::Id128::ToLongs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"ToLongs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int64_t,int64_t>>(*this, ___internal_method);
}
inline ::System::ValueTuple_4<int32_t,int32_t,int32_t,int32_t> GlobalNamespace::Id128::ToInts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"ToInts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_4<int32_t,int32_t,int32_t,int32_t>>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t> GlobalNamespace::Id128::ToByteArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"ToByteArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline bool GlobalNamespace::Id128::Equals(::GlobalNamespace::Id128  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, id);
}
inline bool GlobalNamespace::Id128::Equals(::System::Guid  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"Equals", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, g);
}
inline bool GlobalNamespace::Id128::Equals(::UnityEngine::Hash128  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, h);
}
inline bool GlobalNamespace::Id128::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Id128>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline ::StringW GlobalNamespace::Id128::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Id128>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Id128::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Id128>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Id128::CompareTo(::GlobalNamespace::Id128  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, id);
}
inline int32_t GlobalNamespace::Id128::CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, obj);
}
inline ::GlobalNamespace::Id128 GlobalNamespace::Id128::NewId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"NewId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::Id128 GlobalNamespace::Id128::ComputeMD5(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"ComputeMD5", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method, s);
}
inline ::GlobalNamespace::Id128 GlobalNamespace::Id128::ComputeSHV2(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"ComputeSHV2", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method, s);
}
inline bool GlobalNamespace::Id128::op_Equality(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_Inequality(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_Equality(::GlobalNamespace::Id128  j, ::System::Guid  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_Inequality(::GlobalNamespace::Id128  j, ::System::Guid  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_Equality(::System::Guid  j, ::GlobalNamespace::Id128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_Inequality(::System::Guid  j, ::GlobalNamespace::Id128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_Equality(::GlobalNamespace::Id128  j, ::UnityEngine::Hash128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_Inequality(::GlobalNamespace::Id128  j, ::UnityEngine::Hash128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_Equality(::UnityEngine::Hash128  j, ::GlobalNamespace::Id128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Hash128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_Inequality(::UnityEngine::Hash128  j, ::GlobalNamespace::Id128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Hash128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_LessThan(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_LessThan", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_GreaterThan(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_LessThanOrEqual(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline bool GlobalNamespace::Id128::op_GreaterThanOrEqual(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::Id128>(), ::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, j, k);
}
inline ::System::Guid GlobalNamespace::Id128::op_Implicit___System__Guid(::GlobalNamespace::Id128  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, id);
}
inline ::GlobalNamespace::Id128 GlobalNamespace::Id128::op_Implicit___GlobalNamespace__Id128(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method, guid);
}
inline ::GlobalNamespace::Id128 GlobalNamespace::Id128::op_Implicit___GlobalNamespace__Id128(::UnityEngine::Hash128  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method, h);
}
inline ::UnityEngine::Hash128 GlobalNamespace::Id128::op_Implicit___UnityEngine__Hash128(::GlobalNamespace::Id128  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Id128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(nullptr, ___internal_method, id);
}
inline ::GlobalNamespace::Id128 GlobalNamespace::Id128::op_Explicit___GlobalNamespace__Id128(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128>(),
                        {"op_Explicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method, s);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Id128>"
constexpr  GlobalNamespace::Id128::operator ::System::IEquatable_1<::GlobalNamespace::Id128>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::Id128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Id128>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Id128>* GlobalNamespace::Id128::i___System__IEquatable_1___GlobalNamespace__Id128_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::Id128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::Id128>"
constexpr  GlobalNamespace::Id128::operator ::System::IComparable_1<::GlobalNamespace::Id128>*()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::Id128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::Id128>"
constexpr ::System::IComparable_1<::GlobalNamespace::Id128>* GlobalNamespace::Id128::i___System__IComparable_1___GlobalNamespace__Id128_()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::Id128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Guid>"
constexpr  GlobalNamespace::Id128::operator ::System::IEquatable_1<::System::Guid>*()  {
return static_cast<::System::IEquatable_1<::System::Guid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Guid>"
constexpr ::System::IEquatable_1<::System::Guid>* GlobalNamespace::Id128::i___System__IEquatable_1___System__Guid_()  {
return static_cast<::System::IEquatable_1<::System::Guid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Hash128>"
constexpr  GlobalNamespace::Id128::operator ::System::IEquatable_1<::UnityEngine::Hash128>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Hash128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Hash128>"
constexpr ::System::IEquatable_1<::UnityEngine::Hash128>* GlobalNamespace::Id128::i___System__IEquatable_1___UnityEngine__Hash128_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Hash128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "a", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "b", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "d", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "guid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h128", ty: "::UnityEngine::Hash128", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Id128::Id128(int64_t  x, int64_t  y, int32_t  a, int32_t  b, int32_t  c, int32_t  d, ::System::Guid  guid, ::UnityEngine::Hash128  h128) noexcept  {
this->x = x;
this->y = y;
this->a = a;
this->b = b;
this->c = c;
this->d = d;
this->guid = guid;
this->h128 = h128;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Id128::Id128()   {
}

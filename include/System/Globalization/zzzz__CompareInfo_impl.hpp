#pragma once
// IWYU pragma private; include "System/Globalization/CompareInfo.hpp"
#include "System/Globalization/zzzz__CompareOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__ISimpleCollator_def.hpp"
#include "System/Globalization/zzzz__SortKey_def.hpp"
#include "System/Globalization/zzzz__SortVersion_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantIndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t, int32_t, bool)>(&::System::Globalization::CompareInfo::InvariantIndexOf)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa20b31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantIndexOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantIndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::Globalization::CompareInfo::InvariantIndexOf)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa20b7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantIndexOf", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantLastIndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t, int32_t, bool)>(&::System::Globalization::CompareInfo::InvariantLastIndexOf)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa20b8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantLastIndexOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantFindString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, char16_t*, int32_t, bool, bool)>(&::System::Globalization::CompareInfo::InvariantFindString)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xa20b3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantFindString", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantToUpper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::System::Globalization::CompareInfo::InvariantToUpper)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa20b998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantToUpper", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantCreateSortKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::InvariantCreateSortKey)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xa20b9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantCreateSortKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Globalization::CultureInfo*)>(&::System::Globalization::CompareInfo::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa20bc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetCompareInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CompareInfo* (*)(::StringW)>(&::System::Globalization::CompareInfo::GetCompareInfo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa20bcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"GetCompareInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.OnDeserializing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Globalization::CompareInfo::OnDeserializing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa20bd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"OnDeserializing", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Object*)>(&::System::Globalization::CompareInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa20bd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.OnDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Globalization::CompareInfo::OnDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa20be28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"OnDeserialized", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.OnDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::OnDeserialized)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa20bd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"OnDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.OnSerializing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Globalization::CompareInfo::OnSerializing)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa20be2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"OnSerializing", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::get_Name)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa20beb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW)>(&::System::Globalization::CompareInfo::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa20bf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::Compare)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa20bf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::Compare)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xa20c4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"Compare", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareOptionNone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::Globalization::CompareInfo::CompareOptionNone)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa20c8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareOptionNone", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareOptionIgnoreCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::Globalization::CompareInfo::CompareOptionIgnoreCase)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa20cb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareOptionIgnoreCase", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::Compare)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0xa20cc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareOrdinalIgnoreCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t)>(&::System::Globalization::CompareInfo::CompareOrdinalIgnoreCase)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa20d17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareOrdinalIgnoreCase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareOrdinalIgnoreCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::Globalization::CompareInfo::CompareOrdinalIgnoreCase)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa20c1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareOrdinalIgnoreCase", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IsPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::IsPrefix)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa20d470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IsPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::IsPrefix)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa20d808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IsPrefix", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IsSuffix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::IsSuffix)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa20d86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IsSuffix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::IsSuffix)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa20dc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IsSuffix", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, char16_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::IndexOf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa20dc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::IndexOf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa20dcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, char16_t, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::IndexOf)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xa20dd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::IndexOf)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa20e15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOfOrdinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::Globalization::CompareInfo::IndexOfOrdinal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa20e41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfOrdinal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::IndexOf)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa20e4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions, int32_t*)>(&::System::Globalization::CompareInfo::IndexOf)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa20e538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOfOrdinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, bool)>(&::System::Globalization::CompareInfo::IndexOfOrdinal)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa20e014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfOrdinal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.LastIndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::LastIndexOf)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xa20e6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.LastIndexOfOrdinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, bool)>(&::System::Globalization::CompareInfo::LastIndexOfOrdinal)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa20ea38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"LastIndexOfOrdinal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetSortKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::GetSortKey)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa20eb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::System::Object*)>(&::System::Globalization::CompareInfo::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa20ed14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa20edc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetIgnoreCaseHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Globalization::CompareInfo::GetIgnoreCaseHash)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xa20edf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"GetIgnoreCaseHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetHashCodeOfString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::GetHashCodeOfString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa20f288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"GetHashCodeOfString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa20f454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa20f554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                    {::i2c::class_of<::System::Globalization::CompareInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.get_UseManagedCollation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Globalization::CompareInfo::get_UseManagedCollation)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa20f5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"get_UseManagedCollation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetCollator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::ISimpleCollator* (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::GetCollator)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xa20f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"GetCollator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CreateSortKeyCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::CreateSortKeyCore)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa20fa2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CreateSortKeyCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_index_switch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, int32_t, int32_t, ::StringW, ::System::Globalization::CompareOptions, bool)>(&::System::Globalization::CompareInfo::internal_index_switch)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa20fb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_index_switch", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_compare_switch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::internal_compare_switch)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa20c3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_compare_switch", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_compare_managed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::internal_compare_managed)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa20ff68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_compare_managed", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_index_managed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, int32_t, int32_t, ::StringW, ::System::Globalization::CompareOptions, bool)>(&::System::Globalization::CompareInfo::internal_index_managed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa20fd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_index_managed", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_compare_icall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, char16_t*, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::internal_compare_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa210068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_compare_icall", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::internal_compare)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa20feb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_compare", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_index_icall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, int32_t, char16_t*, int32_t, bool)>(&::System::Globalization::CompareInfo::internal_index_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa21006c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_index_icall", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int32_t, ::StringW, bool)>(&::System::Globalization::CompareInfo::internal_index)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa20fcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_index", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InitSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Globalization::CultureInfo*)>(&::System::Globalization::CompareInfo::InitSort)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa20bc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InitSort", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareStringOrdinalIgnoreCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, char16_t*, int32_t)>(&::System::Globalization::CompareInfo::CompareStringOrdinalIgnoreCase)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa20d2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareStringOrdinalIgnoreCase", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOfOrdinalCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t, int32_t, bool)>(&::System::Globalization::CompareInfo::IndexOfOrdinalCore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa20e6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfOrdinalCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.LastIndexOfOrdinalCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t, int32_t, bool)>(&::System::Globalization::CompareInfo::LastIndexOfOrdinalCore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa20eb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"LastIndexOfOrdinalCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.LastIndexOfCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::LastIndexOfCore)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa20eb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"LastIndexOfCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOfCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions, int32_t*)>(&::System::Globalization::CompareInfo::IndexOfCore)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa20e12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOfCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::CompareOptions, int32_t*)>(&::System::Globalization::CompareInfo::IndexOfCore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa20e4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfCore", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOfOrdinalCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::Globalization::CompareInfo::IndexOfOrdinalCore)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa20e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfOrdinalCore", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::CompareString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa20c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::CompareString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa20ca28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CreateSortKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::CreateSortKey)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa20ec5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CreateSortKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.StartsWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::StartsWith)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa20d694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"StartsWith", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.StartsWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::StartsWith)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa20d80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"StartsWith", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.EndsWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::EndsWith)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa20da90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"EndsWith", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.EndsWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::EndsWith)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa20dc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"EndsWith", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetHashCodeOfStringCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::GetHashCodeOfStringCore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa20f428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"GetHashCodeOfStringCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa210108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Globalization::CompareInfo::__cordl_internal_get_m_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_name;
}
constexpr ::StringW const& System::Globalization::CompareInfo::__cordl_internal_get_m_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_name;
}
constexpr void System::Globalization::CompareInfo::__cordl_internal_set_m_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_name = value;
}
constexpr ::StringW& System::Globalization::CompareInfo::__cordl_internal_get__sortName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sortName;
}
constexpr ::StringW const& System::Globalization::CompareInfo::__cordl_internal_get__sortName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sortName;
}
constexpr void System::Globalization::CompareInfo::__cordl_internal_set__sortName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sortName = value;
}
constexpr ::System::Globalization::SortVersion*& System::Globalization::CompareInfo::__cordl_internal_get_m_SortVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortVersion;
}
constexpr ::System::Globalization::SortVersion* const& System::Globalization::CompareInfo::__cordl_internal_get_m_SortVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortVersion;
}
constexpr void System::Globalization::CompareInfo::__cordl_internal_set_m_SortVersion(::System::Globalization::SortVersion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SortVersion = value;
}
constexpr int32_t& System::Globalization::CompareInfo::__cordl_internal_get_culture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___culture;
}
constexpr int32_t const& System::Globalization::CompareInfo::__cordl_internal_get_culture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___culture;
}
constexpr void System::Globalization::CompareInfo::__cordl_internal_set_culture(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___culture = value;
}
constexpr ::System::Globalization::ISimpleCollator*& System::Globalization::CompareInfo::__cordl_internal_get_collator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collator;
}
constexpr ::System::Globalization::ISimpleCollator* const& System::Globalization::CompareInfo::__cordl_internal_get_collator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collator;
}
constexpr void System::Globalization::CompareInfo::__cordl_internal_set_collator(::System::Globalization::ISimpleCollator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collator = value;
}
inline void System::Globalization::CompareInfo::setStaticF_Invariant(::System::Globalization::CompareInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CompareInfo*, "Invariant", ::System::Globalization::CompareInfo*>(std::forward<::System::Globalization::CompareInfo*>(value));
}
inline ::System::Globalization::CompareInfo* System::Globalization::CompareInfo::getStaticF_Invariant()  {
return ::cordl_internals::getStaticField<::System::Globalization::CompareInfo*, "Invariant", ::System::Globalization::CompareInfo*>();
}
inline void System::Globalization::CompareInfo::setStaticF_collators(::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::ISimpleCollator*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::ISimpleCollator*>*, "collators", ::System::Globalization::CompareInfo*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::ISimpleCollator*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::ISimpleCollator*>* System::Globalization::CompareInfo::getStaticF_collators()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::ISimpleCollator*>*, "collators", ::System::Globalization::CompareInfo*>();
}
inline void System::Globalization::CompareInfo::setStaticF_managedCollation(bool  value)  {
::cordl_internals::setStaticField<bool, "managedCollation", ::System::Globalization::CompareInfo*>(std::forward<bool>(value));
}
inline bool System::Globalization::CompareInfo::getStaticF_managedCollation()  {
return ::cordl_internals::getStaticField<bool, "managedCollation", ::System::Globalization::CompareInfo*>();
}
inline void System::Globalization::CompareInfo::setStaticF_managedCollationChecked(bool  value)  {
::cordl_internals::setStaticField<bool, "managedCollationChecked", ::System::Globalization::CompareInfo*>(std::forward<bool>(value));
}
inline bool System::Globalization::CompareInfo::getStaticF_managedCollationChecked()  {
return ::cordl_internals::getStaticField<bool, "managedCollationChecked", ::System::Globalization::CompareInfo*>();
}
inline int32_t System::Globalization::CompareInfo::InvariantIndexOf(::StringW  source, ::StringW  value, int32_t  startIndex, int32_t  count, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantIndexOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::InvariantIndexOf(::System::ReadOnlySpan_1<char16_t>  source, ::System::ReadOnlySpan_1<char16_t>  value, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantIndexOf", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::InvariantLastIndexOf(::StringW  source, ::StringW  value, int32_t  startIndex, int32_t  count, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantLastIndexOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::InvariantFindString(char16_t*  source, int32_t  sourceCount, char16_t*  value, int32_t  valueCount, bool  ignoreCase, bool  start)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantFindString", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, sourceCount, value, valueCount, ignoreCase, start);
}
inline char16_t System::Globalization::CompareInfo::InvariantToUpper(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantToUpper", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline ::System::Globalization::SortKey* System::Globalization::CompareInfo::InvariantCreateSortKey(::StringW  source, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InvariantCreateSortKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, source, options);
}
inline void System::Globalization::CompareInfo::_ctor(::System::Globalization::CultureInfo*  culture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline ::System::Globalization::CompareInfo* System::Globalization::CompareInfo::GetCompareInfo(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"GetCompareInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CompareInfo*>(nullptr, ___internal_method, name);
}
inline void System::Globalization::CompareInfo::OnDeserializing(::System::Runtime::Serialization::StreamingContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"OnDeserializing", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void System::Globalization::CompareInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void System::Globalization::CompareInfo::OnDeserialized(::System::Runtime::Serialization::StreamingContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"OnDeserialized", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void System::Globalization::CompareInfo::OnDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"OnDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Globalization::CompareInfo::OnSerializing(::System::Runtime::Serialization::StreamingContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"OnSerializing", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::StringW System::Globalization::CompareInfo::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Globalization::CompareInfo::Compare(::StringW  string1, ::StringW  string2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2);
}
inline int32_t System::Globalization::CompareInfo::Compare(::StringW  string1, ::StringW  string2, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2, options);
}
inline int32_t System::Globalization::CompareInfo::Compare(::System::ReadOnlySpan_1<char16_t>  string1, ::StringW  string2, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"Compare", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2, options);
}
inline int32_t System::Globalization::CompareInfo::CompareOptionNone(::System::ReadOnlySpan_1<char16_t>  string1, ::System::ReadOnlySpan_1<char16_t>  string2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareOptionNone", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2);
}
inline int32_t System::Globalization::CompareInfo::CompareOptionIgnoreCase(::System::ReadOnlySpan_1<char16_t>  string1, ::System::ReadOnlySpan_1<char16_t>  string2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareOptionIgnoreCase", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2);
}
inline int32_t System::Globalization::CompareInfo::Compare(::StringW  string1, int32_t  offset1, int32_t  length1, ::StringW  string2, int32_t  offset2, int32_t  length2, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, offset1, length1, string2, offset2, length2, options);
}
inline int32_t System::Globalization::CompareInfo::CompareOrdinalIgnoreCase(::StringW  strA, int32_t  indexA, int32_t  lengthA, ::StringW  strB, int32_t  indexB, int32_t  lengthB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareOrdinalIgnoreCase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, indexA, lengthA, strB, indexB, lengthB);
}
inline int32_t System::Globalization::CompareInfo::CompareOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t>  strA, ::System::ReadOnlySpan_1<char16_t>  strB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareOrdinalIgnoreCase", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, strB);
}
inline bool System::Globalization::CompareInfo::IsPrefix(::StringW  source, ::StringW  prefix, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, prefix, options);
}
inline bool System::Globalization::CompareInfo::IsPrefix(::System::ReadOnlySpan_1<char16_t>  source, ::System::ReadOnlySpan_1<char16_t>  prefix, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IsPrefix", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, prefix, options);
}
inline bool System::Globalization::CompareInfo::IsSuffix(::StringW  source, ::StringW  suffix, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, suffix, options);
}
inline bool System::Globalization::CompareInfo::IsSuffix(::System::ReadOnlySpan_1<char16_t>  source, ::System::ReadOnlySpan_1<char16_t>  suffix, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IsSuffix", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, suffix, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOf(::StringW  source, char16_t  value, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOf(::StringW  source, ::StringW  value, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOf(::StringW  source, char16_t  value, int32_t  startIndex, int32_t  count, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOf(::StringW  source, ::StringW  value, int32_t  startIndex, int32_t  count, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOfOrdinal(::System::ReadOnlySpan_1<char16_t>  source, ::System::ReadOnlySpan_1<char16_t>  value, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfOrdinal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::IndexOf(::System::ReadOnlySpan_1<char16_t>  source, ::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOf(::StringW  source, ::StringW  value, int32_t  startIndex, int32_t  count, ::System::Globalization::CompareOptions  options, int32_t*  matchLengthPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, options, matchLengthPtr);
}
inline int32_t System::Globalization::CompareInfo::IndexOfOrdinal(::StringW  source, ::StringW  value, int32_t  startIndex, int32_t  count, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfOrdinal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::LastIndexOf(::StringW  source, ::StringW  value, int32_t  startIndex, int32_t  count, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, options);
}
inline int32_t System::Globalization::CompareInfo::LastIndexOfOrdinal(::StringW  source, ::StringW  value, int32_t  startIndex, int32_t  count, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"LastIndexOfOrdinal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline ::System::Globalization::SortKey* System::Globalization::CompareInfo::GetSortKey(::StringW  source, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, source, options);
}
inline bool System::Globalization::CompareInfo::Equals(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Globalization::CompareInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Globalization::CompareInfo::GetIgnoreCaseHash(::StringW  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"GetIgnoreCaseHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source);
}
inline int32_t System::Globalization::CompareInfo::GetHashCodeOfString(::StringW  source, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"GetHashCodeOfString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, options);
}
inline int32_t System::Globalization::CompareInfo::GetHashCode(::StringW  source, ::System::Globalization::CompareOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, options);
}
inline ::StringW System::Globalization::CompareInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CompareInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Globalization::CompareInfo::get_UseManagedCollation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"get_UseManagedCollation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Globalization::ISimpleCollator* System::Globalization::CompareInfo::GetCollator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"GetCollator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::ISimpleCollator*>(this, ___internal_method);
}
inline ::System::Globalization::SortKey* System::Globalization::CompareInfo::CreateSortKeyCore(::StringW  source, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CreateSortKeyCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, source, options);
}
inline int32_t System::Globalization::CompareInfo::internal_index_switch(::StringW  s1, int32_t  sindex, int32_t  count, ::StringW  s2, ::System::Globalization::CompareOptions  opt, bool  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_index_switch", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, sindex, count, s2, opt, first);
}
inline int32_t System::Globalization::CompareInfo::internal_compare_switch(::StringW  str1, int32_t  offset1, int32_t  length1, ::StringW  str2, int32_t  offset2, int32_t  length2, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_compare_switch", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, str1, offset1, length1, str2, offset2, length2, options);
}
inline int32_t System::Globalization::CompareInfo::internal_compare_managed(::StringW  str1, int32_t  offset1, int32_t  length1, ::StringW  str2, int32_t  offset2, int32_t  length2, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_compare_managed", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, str1, offset1, length1, str2, offset2, length2, options);
}
inline int32_t System::Globalization::CompareInfo::internal_index_managed(::StringW  s1, int32_t  sindex, int32_t  count, ::StringW  s2, ::System::Globalization::CompareOptions  opt, bool  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_index_managed", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, sindex, count, s2, opt, first);
}
inline int32_t System::Globalization::CompareInfo::internal_compare_icall(char16_t*  str1, int32_t  length1, char16_t*  str2, int32_t  length2, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_compare_icall", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str1, length1, str2, length2, options);
}
inline int32_t System::Globalization::CompareInfo::internal_compare(::StringW  str1, int32_t  offset1, int32_t  length1, ::StringW  str2, int32_t  offset2, int32_t  length2, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_compare", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str1, offset1, length1, str2, offset2, length2, options);
}
inline int32_t System::Globalization::CompareInfo::internal_index_icall(char16_t*  source, int32_t  sindex, int32_t  count, char16_t*  value, int32_t  value_length, bool  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_index_icall", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, sindex, count, value, value_length, first);
}
inline int32_t System::Globalization::CompareInfo::internal_index(::StringW  source, int32_t  sindex, int32_t  count, ::StringW  value, bool  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"internal_index", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, sindex, count, value, first);
}
inline void System::Globalization::CompareInfo::InitSort(::System::Globalization::CultureInfo*  culture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"InitSort", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline int32_t System::Globalization::CompareInfo::CompareStringOrdinalIgnoreCase(char16_t*  pString1, int32_t  length1, char16_t*  pString2, int32_t  length2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareStringOrdinalIgnoreCase", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pString1, length1, pString2, length2);
}
inline int32_t System::Globalization::CompareInfo::IndexOfOrdinalCore(::StringW  source, ::StringW  value, int32_t  startIndex, int32_t  count, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfOrdinalCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::LastIndexOfOrdinalCore(::StringW  source, ::StringW  value, int32_t  startIndex, int32_t  count, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"LastIndexOfOrdinalCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::LastIndexOfCore(::StringW  source, ::StringW  target, int32_t  startIndex, int32_t  count, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"LastIndexOfCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, target, startIndex, count, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOfCore(::StringW  source, ::StringW  target, int32_t  startIndex, int32_t  count, ::System::Globalization::CompareOptions  options, int32_t*  matchLengthPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, target, startIndex, count, options, matchLengthPtr);
}
inline int32_t System::Globalization::CompareInfo::IndexOfCore(::System::ReadOnlySpan_1<char16_t>  source, ::System::ReadOnlySpan_1<char16_t>  target, ::System::Globalization::CompareOptions  options, int32_t*  matchLengthPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfCore", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, target, options, matchLengthPtr);
}
inline int32_t System::Globalization::CompareInfo::IndexOfOrdinalCore(::System::ReadOnlySpan_1<char16_t>  source, ::System::ReadOnlySpan_1<char16_t>  value, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"IndexOfOrdinalCore", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::CompareString(::System::ReadOnlySpan_1<char16_t>  string1, ::StringW  string2, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2, options);
}
inline int32_t System::Globalization::CompareInfo::CompareString(::System::ReadOnlySpan_1<char16_t>  string1, ::System::ReadOnlySpan_1<char16_t>  string2, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CompareString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2, options);
}
inline ::System::Globalization::SortKey* System::Globalization::CompareInfo::CreateSortKey(::StringW  source, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"CreateSortKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, source, options);
}
inline bool System::Globalization::CompareInfo::StartsWith(::StringW  source, ::StringW  prefix, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"StartsWith", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, prefix, options);
}
inline bool System::Globalization::CompareInfo::StartsWith(::System::ReadOnlySpan_1<char16_t>  source, ::System::ReadOnlySpan_1<char16_t>  prefix, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"StartsWith", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, prefix, options);
}
inline bool System::Globalization::CompareInfo::EndsWith(::StringW  source, ::StringW  suffix, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"EndsWith", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, suffix, options);
}
inline bool System::Globalization::CompareInfo::EndsWith(::System::ReadOnlySpan_1<char16_t>  source, ::System::ReadOnlySpan_1<char16_t>  suffix, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"EndsWith", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, suffix, options);
}
inline int32_t System::Globalization::CompareInfo::GetHashCodeOfStringCore(::StringW  source, ::System::Globalization::CompareOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {"GetHashCodeOfStringCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, options);
}
inline void System::Globalization::CompareInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Globalization::CompareInfo* System::Globalization::CompareInfo::New_ctor(::System::Globalization::CultureInfo*  culture)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CompareInfo*>(culture));
}
inline ::System::Globalization::CompareInfo* System::Globalization::CompareInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CompareInfo*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  System::Globalization::CompareInfo::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Globalization::CompareInfo::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Globalization::CompareInfo::CompareInfo()   {
}
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareInfo::ValidIndexMaskOffFlags{static_cast<int32_t>(0xffffffe0)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareInfo::ValidCompareMaskOffFlags{static_cast<int32_t>(0xdfffffe0)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareInfo::ValidHashCodeOfStringMaskOffFlags{static_cast<int32_t>(0xffffffe0)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareInfo::ValidSortkeyCtorMaskOffFlags{static_cast<int32_t>(0xdfffffe0)};

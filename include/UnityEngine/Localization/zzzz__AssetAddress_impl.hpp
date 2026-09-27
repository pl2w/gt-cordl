#pragma once
// IWYU pragma private; include "UnityEngine/Localization/AssetAddress.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__AssetAddress_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::AssetAddress.IsSubAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Localization::AssetAddress::IsSubAsset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb0156a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AssetAddress*>(),
                        {"IsSubAsset", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AssetAddress.GetGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Localization::AssetAddress::GetGuid)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb015700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AssetAddress*>(),
                        {"GetGuid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AssetAddress.GetSubAssetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Localization::AssetAddress::GetSubAssetName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb015784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AssetAddress*>(),
                        {"GetSubAssetName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AssetAddress.FormatAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::UnityEngine::Localization::AssetAddress::FormatAddress)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb015810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AssetAddress*>(),
                        {"FormatAddress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Localization::AssetAddress::IsSubAsset(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AssetAddress*>(),
                        {"IsSubAsset", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, address);
}
inline ::StringW UnityEngine::Localization::AssetAddress::GetGuid(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AssetAddress*>(),
                        {"GetGuid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, address);
}
inline ::StringW UnityEngine::Localization::AssetAddress::GetSubAssetName(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AssetAddress*>(),
                        {"GetSubAssetName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, address);
}
inline ::StringW UnityEngine::Localization::AssetAddress::FormatAddress(::StringW  guid, ::StringW  subAssetName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AssetAddress*>(),
                        {"FormatAddress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, guid, subAssetName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::AssetAddress::AssetAddress()   {
}

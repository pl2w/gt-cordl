#pragma once
// IWYU pragma private; include "Fusion/FusionAddressablesUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionAddressablesUtils_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
//  Writing Method size for method: ::Fusion::FusionAddressablesUtils.TryParseAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::Fusion::FusionAddressablesUtils::TryParseAddress)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x60e35e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionAddressablesUtils*>(),
                        {"TryParseAddress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionAddressablesUtils.CreateAssetReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (*)(::StringW)>(&::Fusion::FusionAddressablesUtils::CreateAssetReference)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x60e3704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionAddressablesUtils*>(),
                        {"CreateAssetReference", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::FusionAddressablesUtils::TryParseAddress(::StringW  address, ::by_ref<::StringW>  mainPart, ::by_ref<::StringW>  subObjectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionAddressablesUtils*>(),
                        {"TryParseAddress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, address, mainPart, subObjectName);
}
inline ::UnityEngine::AddressableAssets::AssetReference* Fusion::FusionAddressablesUtils::CreateAssetReference(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionAddressablesUtils*>(),
                        {"CreateAssetReference", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*>(nullptr, ___internal_method, address);
}
// Ctor Parameters []
constexpr ::Fusion::FusionAddressablesUtils::FusionAddressablesUtils()   {
}

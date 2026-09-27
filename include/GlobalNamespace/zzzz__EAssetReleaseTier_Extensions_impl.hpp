#pragma once
// IWYU pragma private; include "GlobalNamespace/EAssetReleaseTier_Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EAssetReleaseTier_Extensions_def.hpp"
#include "GlobalNamespace/zzzz__EAssetReleaseTier_def.hpp"
#include "GlobalNamespace/zzzz__EBuildReleaseTier_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EAssetReleaseTier_Extensions.ShouldIncludeInBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::EAssetReleaseTier, ::GlobalNamespace::EBuildReleaseTier)>(&::GlobalNamespace::EAssetReleaseTier_Extensions::ShouldIncludeInBuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58dc1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EAssetReleaseTier_Extensions*>(),
                        {"ShouldIncludeInBuild", {}, {::i2c::type_of<::GlobalNamespace::EAssetReleaseTier>(), ::i2c::type_of<::GlobalNamespace::EBuildReleaseTier>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::EAssetReleaseTier_Extensions::ShouldIncludeInBuild(::GlobalNamespace::EAssetReleaseTier  assetTier, ::GlobalNamespace::EBuildReleaseTier  buildTier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EAssetReleaseTier_Extensions*>(),
                        {"ShouldIncludeInBuild", {}, {::i2c::type_of<::GlobalNamespace::EAssetReleaseTier>(), ::i2c::type_of<::GlobalNamespace::EBuildReleaseTier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assetTier, buildTier);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EAssetReleaseTier_Extensions::EAssetReleaseTier_Extensions()   {
}

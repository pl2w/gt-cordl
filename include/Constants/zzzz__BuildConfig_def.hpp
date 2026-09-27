#pragma once
// IWYU pragma private; include "Constants/BuildConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EAssetReleaseTier_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BuildConfig)
// Forward declare root types
namespace Constants {
class BuildConfig;
}
// Write type traits
MARK_REF_T(::Constants::BuildConfig*);
DEFINE_IL2CPP_CLASS(::Constants::BuildConfig*, "Constants", "BuildConfig");
// Dependencies EAssetReleaseTier, System.Object
namespace Constants {
// Is value type: false
// CS Name: Constants.BuildConfig
class CORDL_TYPE BuildConfig : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuildConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuildConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuildConfig(BuildConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuildConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuildConfig(BuildConfig const& ) = delete;

/// @brief Field ASSET_TIER value: I32(1)
static ::GlobalNamespace::EAssetReleaseTier const ASSET_TIER;

/// @brief Field BETA offset 0xffffffff size 0x1
static constexpr bool  BETA{false};

/// @brief Field GT_AUTO_NAME offset 0xffffffff size 0x1
static constexpr bool  GT_AUTO_NAME{false};

/// @brief Field GT_COSMETICS__ONLY_NEW offset 0xffffffff size 0x1
static constexpr bool  GT_COSMETICS__ONLY_NEW{false};

/// @brief Field GT_CREATOR_BUILD offset 0xffffffff size 0x1
static constexpr bool  GT_CREATOR_BUILD{false};

/// @brief Field GT_EXTRA_NAME_CHARS offset 0xffffffff size 0x1
static constexpr bool  GT_EXTRA_NAME_CHARS{false};

/// @brief Field UNITY_EDITOR offset 0xffffffff size 0x1
static constexpr bool  UNITY_EDITOR{false};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3849};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Constants::BuildConfig) == 0x10, "Size mismatch!");

} // namespace end def Constants

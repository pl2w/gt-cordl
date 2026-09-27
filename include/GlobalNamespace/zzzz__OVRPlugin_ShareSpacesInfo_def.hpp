#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ShareSpacesInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_ShareSpacesRecipientType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_ShareSpacesInfo)
namespace GlobalNamespace {
struct OVRPlugin_ShareSpacesRecipientInfoBase;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_ShareSpacesInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_ShareSpacesInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_ShareSpacesInfo, "", "OVRPlugin/ShareSpacesInfo");
// Dependencies OVRPlugin::ShareSpacesRecipientType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/ShareSpacesInfo
struct CORDL_TYPE OVRPlugin_ShareSpacesInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_ShareSpacesInfo() ;

// Ctor Parameters [CppParam { name: "RecipientType", ty: "::GlobalNamespace::OVRPlugin_ShareSpacesRecipientType", modifiers: "", def_value: None, comment: None }, CppParam { name: "RecipientInfo", ty: "::GlobalNamespace::OVRPlugin_ShareSpacesRecipientInfoBase*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SpaceCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Spaces", ty: "uint64_t*", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_ShareSpacesInfo(::GlobalNamespace::OVRPlugin_ShareSpacesRecipientType  RecipientType, ::GlobalNamespace::OVRPlugin_ShareSpacesRecipientInfoBase*  RecipientInfo, uint32_t  SpaceCount, uint64_t*  Spaces) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12223};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field RecipientType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_ShareSpacesRecipientType  RecipientType;

/// @brief Field RecipientInfo, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_ShareSpacesRecipientInfoBase*  RecipientInfo;

/// @brief Field SpaceCount, offset: 0x10, size: 0x4, def value: None
 uint32_t  SpaceCount;

/// @brief Field Spaces, offset: 0x18, size: 0x8, def value: None
 uint64_t*  Spaces;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_ShareSpacesInfo, RecipientType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ShareSpacesInfo, RecipientInfo) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ShareSpacesInfo, SpaceCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ShareSpacesInfo, Spaces) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_ShareSpacesInfo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

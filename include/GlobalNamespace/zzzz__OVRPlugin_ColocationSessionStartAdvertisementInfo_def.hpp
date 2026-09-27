#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ColocationSessionStartAdvertisementInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_ColocationSessionStartAdvertisementInfo)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_ColocationSessionStartAdvertisementInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_ColocationSessionStartAdvertisementInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_ColocationSessionStartAdvertisementInfo, "", "OVRPlugin/ColocationSessionStartAdvertisementInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/ColocationSessionStartAdvertisementInfo
struct CORDL_TYPE OVRPlugin_ColocationSessionStartAdvertisementInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_ColocationSessionStartAdvertisementInfo() ;

// Ctor Parameters [CppParam { name: "PeerMetadataCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GroupMetadata", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_ColocationSessionStartAdvertisementInfo(uint32_t  PeerMetadataCount, uint8_t*  GroupMetadata) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12220};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field PeerMetadataCount, offset: 0x0, size: 0x4, def value: None
 uint32_t  PeerMetadataCount;

/// @brief Field GroupMetadata, offset: 0x8, size: 0x8, def value: None
 uint8_t*  GroupMetadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_ColocationSessionStartAdvertisementInfo, PeerMetadataCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ColocationSessionStartAdvertisementInfo, GroupMetadata) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_ColocationSessionStartAdvertisementInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

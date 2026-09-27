#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_SaveOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRSpatialAnchor_SaveOptions)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpatialAnchor_SaveOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_SaveOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor_SaveOptions, "", "OVRSpatialAnchor/SaveOptions");
// [Obsolete("Use SaveAnchorAsync instead, which does not require you to provide SaveOptions.")]
// Dependencies OVRSpace::StorageLocation
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/SaveOptions
struct CORDL_TYPE OVRSpatialAnchor_SaveOptions {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor_SaveOptions() ;

// Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpatialAnchor_SaveOptions(::GlobalNamespace::OVRSpace_StorageLocation  Storage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Storage, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRSpace_StorageLocation  Storage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_SaveOptions, Storage) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor_SaveOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

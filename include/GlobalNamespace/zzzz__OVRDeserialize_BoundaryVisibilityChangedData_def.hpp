#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_BoundaryVisibilityChangedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_BoundaryVisibility_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRDeserialize_BoundaryVisibilityChangedData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_BoundaryVisibilityChangedData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData, "", "OVRDeserialize/BoundaryVisibilityChangedData");
// Dependencies OVRPlugin::BoundaryVisibility
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/BoundaryVisibilityChangedData
struct CORDL_TYPE OVRDeserialize_BoundaryVisibilityChangedData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_BoundaryVisibilityChangedData() ;

// Ctor Parameters [CppParam { name: "BoundaryVisibility", ty: "::GlobalNamespace::OVRPlugin_BoundaryVisibility", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_BoundaryVisibilityChangedData(::GlobalNamespace::OVRPlugin_BoundaryVisibility  BoundaryVisibility) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12631};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field BoundaryVisibility, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BoundaryVisibility  BoundaryVisibility;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData, BoundaryVisibility) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

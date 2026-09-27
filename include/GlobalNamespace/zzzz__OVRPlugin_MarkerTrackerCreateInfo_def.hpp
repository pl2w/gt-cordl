#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_MarkerTrackerCreateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_MarkerTrackerCreateInfo)
namespace GlobalNamespace {
struct OVRPlugin_MarkerType;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_MarkerTrackerCreateInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_MarkerTrackerCreateInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_MarkerTrackerCreateInfo, "", "OVRPlugin/MarkerTrackerCreateInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/MarkerTrackerCreateInfo
struct CORDL_TYPE OVRPlugin_MarkerTrackerCreateInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_MarkerTrackerCreateInfo() ;

// Ctor Parameters [CppParam { name: "MarkerTypeCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MarkerTypes", ty: "::GlobalNamespace::OVRPlugin_MarkerType*", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_MarkerTrackerCreateInfo(uint32_t  MarkerTypeCount, ::GlobalNamespace::OVRPlugin_MarkerType*  MarkerTypes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12260};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field MarkerTypeCount, offset: 0x0, size: 0x4, def value: None
 uint32_t  MarkerTypeCount;

/// @brief Field MarkerTypes, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_MarkerType*  MarkerTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_MarkerTrackerCreateInfo, MarkerTypeCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_MarkerTrackerCreateInfo, MarkerTypes) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_MarkerTrackerCreateInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

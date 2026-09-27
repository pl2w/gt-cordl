#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HandTrackingStateInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_MicrogestureType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_HandTrackingStateInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HandTrackingStateInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HandTrackingStateInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HandTrackingStateInternal, "", "OVRPlugin/HandTrackingStateInternal");
// Dependencies OVRPlugin::MicrogestureType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HandTrackingStateInternal
struct CORDL_TYPE OVRPlugin_HandTrackingStateInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HandTrackingStateInternal() ;

// Ctor Parameters [CppParam { name: "Microgesture", ty: "::GlobalNamespace::OVRPlugin_MicrogestureType", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HandTrackingStateInternal(::GlobalNamespace::OVRPlugin_MicrogestureType  Microgesture) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12138};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Microgesture, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_MicrogestureType  Microgesture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandTrackingStateInternal, Microgesture) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HandTrackingStateInternal) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

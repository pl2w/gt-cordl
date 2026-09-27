#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_CameraExtrinsics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_CameraStatus_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Node_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_CameraExtrinsics)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_CameraExtrinsics;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_CameraExtrinsics);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_CameraExtrinsics, "", "OVRPlugin/CameraExtrinsics");
// Dependencies OVRPlugin::Bool, OVRPlugin::CameraStatus, OVRPlugin::Node, OVRPlugin::Posef
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/CameraExtrinsics
struct CORDL_TYPE OVRPlugin_CameraExtrinsics {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_CameraExtrinsics() ;

// Ctor Parameters [CppParam { name: "IsValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "LastChangedTimeSeconds", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CameraStatusData", ty: "::GlobalNamespace::OVRPlugin_CameraStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "AttachedToNode", ty: "::GlobalNamespace::OVRPlugin_Node", modifiers: "", def_value: None, comment: None }, CppParam { name: "RelativePose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_CameraExtrinsics(::GlobalNamespace::OVRPlugin_Bool  IsValid, double_t  LastChangedTimeSeconds, ::GlobalNamespace::OVRPlugin_CameraStatus  CameraStatusData, ::GlobalNamespace::OVRPlugin_Node  AttachedToNode, ::GlobalNamespace::OVRPlugin_Posef  RelativePose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12123};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field IsValid, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  IsValid;

/// @brief Field LastChangedTimeSeconds, offset: 0x8, size: 0x8, def value: None
 double_t  LastChangedTimeSeconds;

/// @brief Field CameraStatusData, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_CameraStatus  CameraStatusData;

/// @brief Field AttachedToNode, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Node  AttachedToNode;

/// @brief Field RelativePose, offset: 0x18, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  RelativePose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraExtrinsics, IsValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraExtrinsics, LastChangedTimeSeconds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraExtrinsics, CameraStatusData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraExtrinsics, AttachedToNode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraExtrinsics, RelativePose) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_CameraExtrinsics) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

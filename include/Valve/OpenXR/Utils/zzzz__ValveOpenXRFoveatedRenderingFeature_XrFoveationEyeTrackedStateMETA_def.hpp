#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__XrStructureType_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__XrVector2f_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA)
namespace Valve::OpenXR::Utils {
struct XrVector2f;
}
// Forward declare root types
namespace GlobalNamespace {
struct ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA, "Valve.OpenXR.Utils", "ValveOpenXRFoveatedRenderingFeature/XrFoveationEyeTrackedStateMETA");
// Dependencies System.IntPtr, Valve.OpenXR.Utils.ValveOpenXRFoveatedRenderingFeature::XrFoveationEyeTrackedStateFlagsMETA, Valve.OpenXR.Utils.XrStructureType, Valve.OpenXR.Utils.XrVector2f
namespace GlobalNamespace {
// Is value type: true
// CS Name: Valve.OpenXR.Utils.ValveOpenXRFoveatedRenderingFeature/XrFoveationEyeTrackedStateMETA
struct CORDL_TYPE ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA() ;

// Ctor Parameters [CppParam { name: "type", ty: "::Valve::OpenXR::Utils::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name: "next", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "foveationCenter", ty: "::ArrayW<::Valve::OpenXR::Utils::XrVector2f>", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA", modifiers: "", def_value: None, comment: None }]
constexpr ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA(::Valve::OpenXR::Utils::XrStructureType  type, ::System::IntPtr  next, ::ArrayW<::Valve::OpenXR::Utils::XrVector2f>  foveationCenter, ::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA  flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31833};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::Valve::OpenXR::Utils::XrStructureType  type;

/// @brief Field next, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  next;

/// @brief Field foveationCenter, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Valve::OpenXR::Utils::XrVector2f>  foveationCenter;

/// @brief Field flags, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA  flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA, next) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA, foveationCenter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA, flags) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCameraManagerBase_DefaultTargetSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CameraTarget_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineCameraManagerBase_DefaultTargetSettings)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineCameraManagerBase_DefaultTargetSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings, "Unity.Cinemachine", "CinemachineCameraManagerBase/DefaultTargetSettings");
// Dependencies Unity.Cinemachine.CameraTarget
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineCameraManagerBase/DefaultTargetSettings
struct CORDL_TYPE CinemachineCameraManagerBase_DefaultTargetSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCameraManagerBase_DefaultTargetSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Target", ty: "::Unity::Cinemachine::CameraTarget", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineCameraManagerBase_DefaultTargetSettings(bool  Enabled, ::Unity::Cinemachine::CameraTarget  Target) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22272};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [Tooltip("If enabled, a default target will be available.  It will be used if a child rig needs a target and doesn\'t specify one itself.")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [NoSaveDuringPlay]
/// [Tooltip("Default target for the camera children, which may be used if the child rig does not specify a target of its own.")]
/// @brief Field Target, offset: 0x8, size: 0x18, def value: None
 ::Unity::Cinemachine::CameraTarget  Target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings, Target) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

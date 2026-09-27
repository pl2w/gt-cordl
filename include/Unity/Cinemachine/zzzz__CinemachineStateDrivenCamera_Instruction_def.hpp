#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStateDrivenCamera_Instruction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineStateDrivenCamera_Instruction)
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineStateDrivenCamera_Instruction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineStateDrivenCamera_Instruction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineStateDrivenCamera_Instruction, "Unity.Cinemachine", "CinemachineStateDrivenCamera/Instruction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineStateDrivenCamera/Instruction
struct CORDL_TYPE CinemachineStateDrivenCamera_Instruction {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineStateDrivenCamera_Instruction() ;

// Ctor Parameters [CppParam { name: "FullHash", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Camera", ty: "::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ActivateAfter", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MinDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineStateDrivenCamera_Instruction(int32_t  FullHash, ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  Camera, float_t  ActivateAfter, float_t  MinDuration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [Tooltip("The full hash of the animation state")]
/// [FormerlySerializedAs("m_FullHash")]
/// @brief Field FullHash, offset: 0x0, size: 0x4, def value: None
 int32_t  FullHash;

/// [Tooltip("The virtual camera to activate when the animation state becomes active")]
/// [FormerlySerializedAs("m_VirtualCamera")]
/// [ChildCameraProperty]
/// @brief Field Camera, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  Camera;

/// [Tooltip("How long to wait (in seconds) before activating the camera. This filters out very short state durations")]
/// [FormerlySerializedAs("m_ActivateAfter")]
/// @brief Field ActivateAfter, offset: 0x10, size: 0x4, def value: None
 float_t  ActivateAfter;

/// [Tooltip("The minimum length of time (in seconds) to keep a camera active")]
/// [FormerlySerializedAs("m_MinDuration")]
/// @brief Field MinDuration, offset: 0x14, size: 0x4, def value: None
 float_t  MinDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineStateDrivenCamera_Instruction, FullHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineStateDrivenCamera_Instruction, Camera) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineStateDrivenCamera_Instruction, ActivateAfter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineStateDrivenCamera_Instruction, MinDuration) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineStateDrivenCamera_Instruction) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

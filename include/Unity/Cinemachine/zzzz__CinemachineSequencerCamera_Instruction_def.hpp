#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSequencerCamera_Instruction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineSequencerCamera_Instruction)
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineSequencerCamera_Instruction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineSequencerCamera_Instruction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineSequencerCamera_Instruction, "Unity.Cinemachine", "CinemachineSequencerCamera/Instruction");
// Dependencies Unity.Cinemachine.CinemachineBlendDefinition
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineSequencerCamera/Instruction
struct CORDL_TYPE CinemachineSequencerCamera_Instruction {
public:
// Declarations
/// @brief Method Validate, addr 0xae97304, size 0x14, virtual false, abstract: false, final false
inline void Validate() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSequencerCamera_Instruction() ;

// Ctor Parameters [CppParam { name: "Camera", ty: "::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Blend", ty: "::Unity::Cinemachine::CinemachineBlendDefinition", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hold", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineSequencerCamera_Instruction(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  Camera, ::Unity::Cinemachine::CinemachineBlendDefinition  Blend, float_t  Hold) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22195};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [Tooltip("The camera to activate when this instruction becomes active")]
/// [FormerlySerializedAs("m_VirtualCamera")]
/// [ChildCameraProperty]
/// @brief Field Camera, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  Camera;

/// [Tooltip("How to blend to the next camera in the list (if any)")]
/// [FormerlySerializedAs("m_Blend")]
/// @brief Field Blend, offset: 0x8, size: 0x10, def value: None
 ::Unity::Cinemachine::CinemachineBlendDefinition  Blend;

/// [Tooltip("How long to wait (in seconds) before activating the next camera in the list (if any)")]
/// [FormerlySerializedAs("m_Hold")]
/// @brief Field Hold, offset: 0x18, size: 0x4, def value: None
 float_t  Hold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineSequencerCamera_Instruction, Camera) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineSequencerCamera_Instruction, Blend) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineSequencerCamera_Instruction, Hold) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineSequencerCamera_Instruction) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

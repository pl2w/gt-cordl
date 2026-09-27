#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSequencerCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineSequencerCamera)
namespace GlobalNamespace {
struct CinemachineSequencerCamera_Instruction;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct CinemachineBlendDefinition;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineSequencerCamera;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineSequencerCamera*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineSequencerCamera*, "Unity.Cinemachine", "CinemachineSequencerCamera");
// [DisallowMultipleComponent]
// [ExecuteAlways]
// [ExcludeFromPreset]
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Cinemachine Sequencer Camera")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineSequencerCamera.html")]
// Dependencies Unity.Cinemachine.CinemachineCameraManagerBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineSequencerCamera
class CORDL_TYPE CinemachineSequencerCamera : public ::Unity::Cinemachine::CinemachineCameraManagerBase {
public:
// Declarations
using Instruction = ::GlobalNamespace::CinemachineSequencerCamera_Instruction;

/// @brief Field Instructions, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_Instructions, put=__cordl_internal_set_Instructions)) ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineSequencerCamera_Instruction>*  Instructions;

/// @brief Field Loop, offset 0x208, size 0x1 
 __declspec(property(get=__cordl_internal_get_Loop, put=__cordl_internal_set_Loop)) bool  Loop;

/// @brief Field m_ActivationTime, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ActivationTime, put=__cordl_internal_set_m_ActivationTime)) float_t  m_ActivationTime;

/// @brief Field m_CurrentInstruction, offset 0x22c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentInstruction, put=__cordl_internal_set_m_CurrentInstruction)) int32_t  m_CurrentInstruction;

/// @brief Field m_LegacyFollow, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyFollow, put=__cordl_internal_set_m_LegacyFollow)) ::UnityW<::UnityEngine::Transform>  m_LegacyFollow;

/// @brief Field m_LegacyLookAt, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyLookAt, put=__cordl_internal_set_m_LegacyLookAt)) ::UnityW<::UnityEngine::Transform>  m_LegacyLookAt;

/// @brief Method AdvanceCurrentInstruction, addr 0xae975c4, size 0x1e8, virtual false, abstract: false, final false
inline void AdvanceCurrentInstruction(float_t  deltaTime) ;

/// @brief Method ChooseCurrentCamera, addr 0xae97500, size 0xc4, virtual true, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> ChooseCurrentCamera(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method LookupBlend, addr 0xae977ac, size 0x68, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlendDefinition LookupBlend(::Unity::Cinemachine::ICinemachineCamera*  outgoing, ::Unity::Cinemachine::ICinemachineCamera*  incoming) ;

static inline ::Unity::Cinemachine::CinemachineSequencerCamera* New_ctor() ;

/// @brief Method OnTransitionFromCamera, addr 0xae974a0, size 0x60, virtual true, abstract: false, final false
inline void OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xae971fc, size 0x108, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PerformLegacyUpgrade, addr 0xae97318, size 0x188, virtual true, abstract: false, final false
inline void PerformLegacyUpgrade(int32_t  streamedVersion) ;

/// @brief Method Reset, addr 0xae971d4, size 0x28, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method UpdateCameraCache, addr 0xae97814, size 0x8c, virtual true, abstract: false, final false
inline bool UpdateCameraCache() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineSequencerCamera_Instruction>* const& __cordl_internal_get_Instructions() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineSequencerCamera_Instruction>*& __cordl_internal_get_Instructions() ;

constexpr bool const& __cordl_internal_get_Loop() const;

constexpr bool& __cordl_internal_get_Loop() ;

constexpr float_t const& __cordl_internal_get_m_ActivationTime() const;

constexpr float_t& __cordl_internal_get_m_ActivationTime() ;

constexpr int32_t const& __cordl_internal_get_m_CurrentInstruction() const;

constexpr int32_t& __cordl_internal_get_m_CurrentInstruction() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LegacyFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LegacyFollow() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LegacyLookAt() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LegacyLookAt() ;

constexpr void __cordl_internal_set_Instructions(::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineSequencerCamera_Instruction>*  value) ;

constexpr void __cordl_internal_set_Loop(bool  value) ;

constexpr void __cordl_internal_set_m_ActivationTime(float_t  value) ;

constexpr void __cordl_internal_set_m_CurrentInstruction(int32_t  value) ;

constexpr void __cordl_internal_set_m_LegacyFollow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LegacyLookAt(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xae978a0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSequencerCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSequencerCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineSequencerCamera(CinemachineSequencerCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSequencerCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineSequencerCamera(CinemachineSequencerCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22196};

/// [Tooltip("When enabled, the child vcams will cycle indefinitely instead of just stopping at the last one")]
/// [FormerlySerializedAs("m_Loop")]
/// @brief Field Loop, offset: 0x208, size: 0x1, def value: None
 bool  ___Loop;

/// [Tooltip("The set of instructions for enabling child cameras.")]
/// [FormerlySerializedAs("m_Instructions")]
/// @brief Field Instructions, offset: 0x210, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineSequencerCamera_Instruction>*  ___Instructions;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_LookAt")]
/// @brief Field m_LegacyLookAt, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LegacyLookAt;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_Follow")]
/// @brief Field m_LegacyFollow, offset: 0x220, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LegacyFollow;

/// @brief Field m_ActivationTime, offset: 0x228, size: 0x4, def value: None
 float_t  ___m_ActivationTime;

/// @brief Field m_CurrentInstruction, offset: 0x22c, size: 0x4, def value: None
 int32_t  ___m_CurrentInstruction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineSequencerCamera, ___Loop) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSequencerCamera, ___Instructions) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSequencerCamera, ___m_LegacyLookAt) == 0x218, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSequencerCamera, ___m_LegacyFollow) == 0x220, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSequencerCamera, ___m_ActivationTime) == 0x228, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSequencerCamera, ___m_CurrentInstruction) == 0x22c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineSequencerCamera) == 0x230, "Size mismatch!");

} // namespace end def Unity::Cinemachine

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStateDrivenCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStateDrivenCamera_Instruction_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineStateDrivenCamera)
namespace GlobalNamespace {
struct CinemachineStateDrivenCamera_HashPair;
}
namespace GlobalNamespace {
struct CinemachineStateDrivenCamera_Instruction;
}
namespace GlobalNamespace {
struct CinemachineStateDrivenCamera_ParentHash;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct AnimatorClipInfo;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineStateDrivenCamera;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineStateDrivenCamera*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineStateDrivenCamera*, "Unity.Cinemachine", "CinemachineStateDrivenCamera");
// [DisallowMultipleComponent]
// [ExecuteAlways]
// [ExcludeFromPreset]
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Cinemachine State Driven Camera")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineStateDrivenCamera.html")]
// Dependencies Unity.Cinemachine.CinemachineCameraManagerBase, Unity.Cinemachine.CinemachineStateDrivenCamera::Instruction
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineStateDrivenCamera
class CORDL_TYPE CinemachineStateDrivenCamera : public ::Unity::Cinemachine::CinemachineCameraManagerBase {
public:
// Declarations
using HashPair = ::GlobalNamespace::CinemachineStateDrivenCamera_HashPair;

using Instruction = ::GlobalNamespace::CinemachineStateDrivenCamera_Instruction;

using ParentHash = ::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash;

/// @brief Field AnimatedTarget, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnimatedTarget, put=__cordl_internal_set_AnimatedTarget)) ::UnityW<::UnityEngine::Animator>  AnimatedTarget;

/// @brief Field HashOfParent, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_HashOfParent, put=__cordl_internal_set_HashOfParent)) ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*  HashOfParent;

/// @brief Field Instructions, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_Instructions, put=__cordl_internal_set_Instructions)) ::ArrayW<::GlobalNamespace::CinemachineStateDrivenCamera_Instruction>  Instructions;

/// @brief Field LayerIndex, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_LayerIndex, put=__cordl_internal_set_LayerIndex)) int32_t  LayerIndex;

/// @brief Field m_ActivationTime, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ActivationTime, put=__cordl_internal_set_m_ActivationTime)) float_t  m_ActivationTime;

/// @brief Field m_ActiveInstructionIndex, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ActiveInstructionIndex, put=__cordl_internal_set_m_ActiveInstructionIndex)) int32_t  m_ActiveInstructionIndex;

/// @brief Field m_ClipInfoList, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClipInfoList, put=__cordl_internal_set_m_ClipInfoList)) ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  m_ClipInfoList;

/// @brief Field m_HashCache, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HashCache, put=__cordl_internal_set_m_HashCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_HashPair>*>*  m_HashCache;

/// @brief Field m_InstructionDictionary, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstructionDictionary, put=__cordl_internal_set_m_InstructionDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*  m_InstructionDictionary;

/// @brief Field m_LegacyFollow, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyFollow, put=__cordl_internal_set_m_LegacyFollow)) ::UnityW<::UnityEngine::Transform>  m_LegacyFollow;

/// @brief Field m_LegacyLookAt, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyLookAt, put=__cordl_internal_set_m_LegacyLookAt)) ::UnityW<::UnityEngine::Transform>  m_LegacyLookAt;

/// @brief Field m_PendingActivationTime, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PendingActivationTime, put=__cordl_internal_set_m_PendingActivationTime)) float_t  m_PendingActivationTime;

/// @brief Field m_PendingInstructionIndex, offset 0x244, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PendingInstructionIndex, put=__cordl_internal_set_m_PendingInstructionIndex)) int32_t  m_PendingInstructionIndex;

/// @brief Field m_StateParentLookup, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StateParentLookup, put=__cordl_internal_set_m_StateParentLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  m_StateParentLookup;

/// @brief Method CancelWait, addr 0xae999c8, size 0x94, virtual false, abstract: false, final false
inline void CancelWait() ;

/// @brief Method ChooseCurrentCamera, addr 0xae99290, size 0x5d0, virtual true, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> ChooseCurrentCamera(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method CreateFakeHash, addr 0xae98c04, size 0x8c, virtual false, abstract: false, final false
static inline int32_t CreateFakeHash(int32_t  parentHash, ::UnityEngine::AnimationClip*  clip) ;

/// @brief Method GetClipHash, addr 0xae99860, size 0x168, virtual false, abstract: false, final false
inline int32_t GetClipHash(int32_t  hash, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method LookupFakeHash, addr 0xae98c90, size 0x270, virtual false, abstract: false, final false
inline int32_t LookupFakeHash(int32_t  parentHash, ::UnityEngine::AnimationClip*  clip) ;

static inline ::Unity::Cinemachine::CinemachineStateDrivenCamera* New_ctor() ;

/// @brief Method PerformLegacyUpgrade, addr 0xae98a7c, size 0x188, virtual true, abstract: false, final false
inline void PerformLegacyUpgrade(int32_t  streamedVersion) ;

/// @brief Method Reset, addr 0xae989ec, size 0x90, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetParentHash, addr 0xae9897c, size 0x70, virtual false, abstract: false, final false
inline void SetParentHash(::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*  list) ;

/// @brief Method ValidateInstructions, addr 0xae98f00, size 0x390, virtual false, abstract: false, final false
inline void ValidateInstructions() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_AnimatedTarget() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_AnimatedTarget() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>* const& __cordl_internal_get_HashOfParent() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*& __cordl_internal_get_HashOfParent() ;

constexpr ::ArrayW<::GlobalNamespace::CinemachineStateDrivenCamera_Instruction> const& __cordl_internal_get_Instructions() const;

constexpr ::ArrayW<::GlobalNamespace::CinemachineStateDrivenCamera_Instruction>& __cordl_internal_get_Instructions() ;

constexpr int32_t const& __cordl_internal_get_LayerIndex() const;

constexpr int32_t& __cordl_internal_get_LayerIndex() ;

constexpr float_t const& __cordl_internal_get_m_ActivationTime() const;

constexpr float_t& __cordl_internal_get_m_ActivationTime() ;

constexpr int32_t const& __cordl_internal_get_m_ActiveInstructionIndex() const;

constexpr int32_t& __cordl_internal_get_m_ActiveInstructionIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* const& __cordl_internal_get_m_ClipInfoList() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*& __cordl_internal_get_m_ClipInfoList() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_HashPair>*>* const& __cordl_internal_get_m_HashCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_HashPair>*>*& __cordl_internal_get_m_HashCache() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>* const& __cordl_internal_get_m_InstructionDictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*& __cordl_internal_get_m_InstructionDictionary() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LegacyFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LegacyFollow() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LegacyLookAt() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LegacyLookAt() ;

constexpr float_t const& __cordl_internal_get_m_PendingActivationTime() const;

constexpr float_t& __cordl_internal_get_m_PendingActivationTime() ;

constexpr int32_t const& __cordl_internal_get_m_PendingInstructionIndex() const;

constexpr int32_t& __cordl_internal_get_m_PendingInstructionIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_m_StateParentLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_m_StateParentLookup() ;

constexpr void __cordl_internal_set_AnimatedTarget(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_HashOfParent(::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*  value) ;

constexpr void __cordl_internal_set_Instructions(::ArrayW<::GlobalNamespace::CinemachineStateDrivenCamera_Instruction>  value) ;

constexpr void __cordl_internal_set_LayerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_ActivationTime(float_t  value) ;

constexpr void __cordl_internal_set_m_ActiveInstructionIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_ClipInfoList(::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  value) ;

constexpr void __cordl_internal_set_m_HashCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_HashPair>*>*  value) ;

constexpr void __cordl_internal_set_m_InstructionDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*  value) ;

constexpr void __cordl_internal_set_m_LegacyFollow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LegacyLookAt(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_PendingActivationTime(float_t  value) ;

constexpr void __cordl_internal_set_m_PendingInstructionIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_StateParentLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

/// @brief Method .ctor, addr 0xae99a5c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineStateDrivenCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineStateDrivenCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineStateDrivenCamera(CinemachineStateDrivenCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineStateDrivenCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineStateDrivenCamera(CinemachineStateDrivenCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22209};

/// [Space]
/// [Tooltip("The state machine whose state changes will drive this camera\'s choice of active child")]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_AnimatedTarget")]
/// @brief Field AnimatedTarget, offset: 0x208, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___AnimatedTarget;

/// [Tooltip("Which layer in the target state machine to observe")]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_LayerIndex")]
/// @brief Field LayerIndex, offset: 0x210, size: 0x4, def value: None
 int32_t  ___LayerIndex;

/// [Tooltip("The set of instructions associating cameras with states.  These instructions are used to choose the live child at any given moment")]
/// [FormerlySerializedAs("m_Instructions")]
/// @brief Field Instructions, offset: 0x218, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CinemachineStateDrivenCamera_Instruction>  ___Instructions;

/// [HideInInspector]
/// [SerializeField]
/// [NoSaveDuringPlay]
/// @brief Field HashOfParent, offset: 0x220, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*  ___HashOfParent;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_LookAt")]
/// @brief Field m_LegacyLookAt, offset: 0x228, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LegacyLookAt;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_Follow")]
/// @brief Field m_LegacyFollow, offset: 0x230, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LegacyFollow;

/// @brief Field m_ActivationTime, offset: 0x238, size: 0x4, def value: None
 float_t  ___m_ActivationTime;

/// @brief Field m_ActiveInstructionIndex, offset: 0x23c, size: 0x4, def value: None
 int32_t  ___m_ActiveInstructionIndex;

/// @brief Field m_PendingActivationTime, offset: 0x240, size: 0x4, def value: None
 float_t  ___m_PendingActivationTime;

/// @brief Field m_PendingInstructionIndex, offset: 0x244, size: 0x4, def value: None
 int32_t  ___m_PendingInstructionIndex;

/// @brief Field m_InstructionDictionary, offset: 0x248, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*  ___m_InstructionDictionary;

/// @brief Field m_StateParentLookup, offset: 0x250, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___m_StateParentLookup;

/// @brief Field m_ClipInfoList, offset: 0x258, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  ___m_ClipInfoList;

/// @brief Field m_HashCache, offset: 0x260, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_HashPair>*>*  ___m_HashCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___AnimatedTarget) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___LayerIndex) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___Instructions) == 0x218, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___HashOfParent) == 0x220, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___m_LegacyLookAt) == 0x228, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___m_LegacyFollow) == 0x230, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___m_ActivationTime) == 0x238, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___m_ActiveInstructionIndex) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___m_PendingActivationTime) == 0x240, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___m_PendingInstructionIndex) == 0x244, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___m_InstructionDictionary) == 0x248, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___m_StateParentLookup) == 0x250, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___m_ClipInfoList) == 0x258, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStateDrivenCamera, ___m_HashCache) == 0x260, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineStateDrivenCamera) == 0x268, "Size mismatch!");

} // namespace end def Unity::Cinemachine

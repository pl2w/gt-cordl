#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineHardLockToTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineHardLockToTarget)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineHardLockToTarget;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineHardLockToTarget*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineHardLockToTarget*, "Unity.Cinemachine", "CinemachineHardLockToTarget");
// [AddComponentMenu("Cinemachine/Procedural/Position Control/Cinemachine Hard Lock to Target")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)1)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineHardLockToTarget.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineHardLockToTarget
class CORDL_TYPE CinemachineHardLockToTarget : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
/// @brief Field Damping, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) float_t  Damping;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field m_PreviousTargetPosition, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousTargetPosition, put=__cordl_internal_set_m_PreviousTargetPosition)) ::UnityEngine::Vector3  m_PreviousTargetPosition;

/// @brief Method GetMaxDampTime, addr 0xae9f484, size 0x8, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method MutateCameraState, addr 0xae9f48c, size 0xf0, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineHardLockToTarget* New_ctor() ;

constexpr float_t const& __cordl_internal_get_Damping() const;

constexpr float_t& __cordl_internal_get_Damping() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousTargetPosition() ;

constexpr void __cordl_internal_set_Damping(float_t  value) ;

constexpr void __cordl_internal_set_m_PreviousTargetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xae9f57c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0xae9f3ec, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xae9f47c, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineHardLockToTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineHardLockToTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineHardLockToTarget(CinemachineHardLockToTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineHardLockToTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineHardLockToTarget(CinemachineHardLockToTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22223};

/// [Tooltip("How much time it takes for the position to catch up to the target\'s position")]
/// [FormerlySerializedAs("m_Damping")]
/// @brief Field Damping, offset: 0x28, size: 0x4, def value: None
 float_t  ___Damping;

/// @brief Field m_PreviousTargetPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousTargetPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineHardLockToTarget, ___Damping) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineHardLockToTarget, ___m_PreviousTargetPosition) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineHardLockToTarget) == 0x38, "Size mismatch!");

} // namespace end def Unity::Cinemachine

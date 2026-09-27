#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineRotateWithFollowTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineRotateWithFollowTarget)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineRotateWithFollowTarget;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineRotateWithFollowTarget*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineRotateWithFollowTarget*, "Unity.Cinemachine", "CinemachineRotateWithFollowTarget");
// [AddComponentMenu("Cinemachine/Procedural/Rotation Control/Cinemachine Rotate With Follow Target")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)1)]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)1)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineRotateWithFollowTarget.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, UnityEngine.Quaternion
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineRotateWithFollowTarget
class CORDL_TYPE CinemachineRotateWithFollowTarget : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
/// @brief Field Damping, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) float_t  Damping;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field m_PreviousReferenceOrientation, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_PreviousReferenceOrientation, put=__cordl_internal_set_m_PreviousReferenceOrientation)) ::UnityEngine::Quaternion  m_PreviousReferenceOrientation;

/// @brief Method GetMaxDampTime, addr 0xaea4794, size 0x8, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method MutateCameraState, addr 0xaea479c, size 0x14c, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineRotateWithFollowTarget* New_ctor() ;

constexpr float_t const& __cordl_internal_get_Damping() const;

constexpr float_t& __cordl_internal_get_Damping() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_PreviousReferenceOrientation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_PreviousReferenceOrientation() ;

constexpr void __cordl_internal_set_Damping(float_t  value) ;

constexpr void __cordl_internal_set_m_PreviousReferenceOrientation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0xaea48e8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0xaea46fc, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xaea478c, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineRotateWithFollowTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineRotateWithFollowTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineRotateWithFollowTarget(CinemachineRotateWithFollowTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineRotateWithFollowTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineRotateWithFollowTarget(CinemachineRotateWithFollowTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22239};

/// [Tooltip("How much time it takes for the aim to catch up to the target\'s rotation")]
/// @brief Field Damping, offset: 0x28, size: 0x4, def value: None
 float_t  ___Damping;

/// @brief Field m_PreviousReferenceOrientation, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_PreviousReferenceOrientation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineRotateWithFollowTarget, ___Damping) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotateWithFollowTarget, ___m_PreviousReferenceOrientation) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineRotateWithFollowTarget) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine

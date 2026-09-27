#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineHardLookAt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineHardLookAt)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineHardLookAt;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineHardLookAt*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineHardLookAt*, "Unity.Cinemachine", "CinemachineHardLookAt");
// [AddComponentMenu("Cinemachine/Procedural/Rotation Control/Cinemachine Hard Look At")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)1)]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)2)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineHardLookAt.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineHardLookAt
class CORDL_TYPE CinemachineHardLookAt : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
 __declspec(property(get=get_CameraLooksAtTarget)) bool  CameraLooksAtTarget;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field LookAtOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_LookAtOffset, put=__cordl_internal_set_LookAtOffset)) ::UnityEngine::Vector3  LookAtOffset;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Method MutateCameraState, addr 0xae9f67c, size 0x2c8, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineHardLookAt* New_ctor() ;

/// @brief Method Reset, addr 0xae9f624, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LookAtOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LookAtOffset() ;

constexpr void __cordl_internal_set_LookAtOffset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xae9f944, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CameraLooksAtTarget, addr 0xae9f61c, size 0x8, virtual true, abstract: false, final false
inline bool get_CameraLooksAtTarget() ;

/// @brief Method get_IsValid, addr 0xae9f584, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xae9f614, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineHardLookAt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineHardLookAt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineHardLookAt(CinemachineHardLookAt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineHardLookAt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineHardLookAt(CinemachineHardLookAt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22224};

/// [Tooltip("Offset from the LookAt target\'s origin, in target\'s local space.  The camera will look at this point.")]
/// @brief Field LookAtOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LookAtOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineHardLookAt, ___LookAtOffset) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineHardLookAt) == 0x38, "Size mismatch!");

} // namespace end def Unity::Cinemachine

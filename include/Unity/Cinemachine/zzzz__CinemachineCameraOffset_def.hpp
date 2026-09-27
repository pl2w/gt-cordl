#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCameraOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineCameraOffset)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineCameraOffset;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineCameraOffset*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCameraOffset*, "Unity.Cinemachine", "CinemachineCameraOffset");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Camera Offset")]
// [ExecuteAlways]
// [SaveDuringPlay]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineCameraOffset.html")]
// Dependencies Unity.Cinemachine.CinemachineCore::Stage, Unity.Cinemachine.CinemachineExtension, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCameraOffset
class CORDL_TYPE CinemachineCameraOffset : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
/// @brief Field ApplyAfter, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ApplyAfter, put=__cordl_internal_set_ApplyAfter)) ::GlobalNamespace::CinemachineCore_Stage  ApplyAfter;

/// @brief Field Offset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_Offset, put=__cordl_internal_set_Offset)) ::UnityEngine::Vector3  Offset;

/// @brief Field PreserveComposition, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_PreserveComposition, put=__cordl_internal_set_PreserveComposition)) bool  PreserveComposition;

static inline ::Unity::Cinemachine::CinemachineCameraOffset* New_ctor() ;

/// @brief Method PostPipelineStageCallback, addr 0xae88ce8, size 0x1fc, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xae88c84, size 0x64, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::GlobalNamespace::CinemachineCore_Stage const& __cordl_internal_get_ApplyAfter() const;

constexpr ::GlobalNamespace::CinemachineCore_Stage& __cordl_internal_get_ApplyAfter() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Offset() ;

constexpr bool const& __cordl_internal_get_PreserveComposition() const;

constexpr bool& __cordl_internal_get_PreserveComposition() ;

constexpr void __cordl_internal_set_ApplyAfter(::GlobalNamespace::CinemachineCore_Stage  value) ;

constexpr void __cordl_internal_set_Offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PreserveComposition(bool  value) ;

/// @brief Method .ctor, addr 0xae88ee4, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCameraOffset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCameraOffset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCameraOffset(CinemachineCameraOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCameraOffset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCameraOffset(CinemachineCameraOffset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22146};

/// [Tooltip("Offset the camera\'s position by this much (camera space)")]
/// [FormerlySerializedAs("m_Offset")]
/// @brief Field Offset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Offset;

/// [Tooltip("When to apply the offset")]
/// [FormerlySerializedAs("m_ApplyAfter")]
/// @brief Field ApplyAfter, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineCore_Stage  ___ApplyAfter;

/// [Tooltip("If applying offset after aim, re-adjust the aim to preserve the screen position of the LookAt target as much as possible")]
/// [FormerlySerializedAs("m_PreserveComposition")]
/// @brief Field PreserveComposition, offset: 0x40, size: 0x1, def value: None
 bool  ___PreserveComposition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraOffset, ___Offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraOffset, ___ApplyAfter) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraOffset, ___PreserveComposition) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineCameraOffset) == 0x48, "Size mismatch!");

} // namespace end def Unity::Cinemachine

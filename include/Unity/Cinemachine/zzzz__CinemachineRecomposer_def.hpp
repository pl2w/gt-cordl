#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineRecomposer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineRecomposer)
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
class CinemachineRecomposer;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineRecomposer*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineRecomposer*, "Unity.Cinemachine", "CinemachineRecomposer");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Recomposer")]
// [ExecuteAlways]
// [SaveDuringPlay]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineRecomposer.html")]
// Dependencies Unity.Cinemachine.CinemachineCore::Stage, Unity.Cinemachine.CinemachineExtension
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineRecomposer
class CORDL_TYPE CinemachineRecomposer : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
/// @brief Field ApplyAfter, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ApplyAfter, put=__cordl_internal_set_ApplyAfter)) ::GlobalNamespace::CinemachineCore_Stage  ApplyAfter;

/// @brief Field Dutch, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Dutch, put=__cordl_internal_set_Dutch)) float_t  Dutch;

/// @brief Field FollowAttachment, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_FollowAttachment, put=__cordl_internal_set_FollowAttachment)) float_t  FollowAttachment;

/// @brief Field LookAtAttachment, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_LookAtAttachment, put=__cordl_internal_set_LookAtAttachment)) float_t  LookAtAttachment;

/// @brief Field Pan, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Pan, put=__cordl_internal_set_Pan)) float_t  Pan;

/// @brief Field Tilt, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tilt, put=__cordl_internal_set_Tilt)) float_t  Tilt;

/// @brief Field ZoomScale, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZoomScale, put=__cordl_internal_set_ZoomScale)) float_t  ZoomScale;

static inline ::Unity::Cinemachine::CinemachineRecomposer* New_ctor() ;

/// @brief Method OnValidate, addr 0xae96eac, size 0x38, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xae96efc, size 0x2d0, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method PrePipelineMutateCameraStateCallback, addr 0xae96ee4, size 0x18, virtual true, abstract: false, final false
inline void PrePipelineMutateCameraStateCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xae96e8c, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::GlobalNamespace::CinemachineCore_Stage const& __cordl_internal_get_ApplyAfter() const;

constexpr ::GlobalNamespace::CinemachineCore_Stage& __cordl_internal_get_ApplyAfter() ;

constexpr float_t const& __cordl_internal_get_Dutch() const;

constexpr float_t& __cordl_internal_get_Dutch() ;

constexpr float_t const& __cordl_internal_get_FollowAttachment() const;

constexpr float_t& __cordl_internal_get_FollowAttachment() ;

constexpr float_t const& __cordl_internal_get_LookAtAttachment() const;

constexpr float_t& __cordl_internal_get_LookAtAttachment() ;

constexpr float_t const& __cordl_internal_get_Pan() const;

constexpr float_t& __cordl_internal_get_Pan() ;

constexpr float_t const& __cordl_internal_get_Tilt() const;

constexpr float_t& __cordl_internal_get_Tilt() ;

constexpr float_t const& __cordl_internal_get_ZoomScale() const;

constexpr float_t& __cordl_internal_get_ZoomScale() ;

constexpr void __cordl_internal_set_ApplyAfter(::GlobalNamespace::CinemachineCore_Stage  value) ;

constexpr void __cordl_internal_set_Dutch(float_t  value) ;

constexpr void __cordl_internal_set_FollowAttachment(float_t  value) ;

constexpr void __cordl_internal_set_LookAtAttachment(float_t  value) ;

constexpr void __cordl_internal_set_Pan(float_t  value) ;

constexpr void __cordl_internal_set_Tilt(float_t  value) ;

constexpr void __cordl_internal_set_ZoomScale(float_t  value) ;

/// @brief Method .ctor, addr 0xae971cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineRecomposer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineRecomposer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineRecomposer(CinemachineRecomposer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineRecomposer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineRecomposer(CinemachineRecomposer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22194};

/// [Tooltip("When to apply the adjustment")]
/// [FormerlySerializedAs("m_ApplyAfter")]
/// @brief Field ApplyAfter, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineCore_Stage  ___ApplyAfter;

/// [Tooltip("Tilt the camera by this much")]
/// [FormerlySerializedAs("m_Tilt")]
/// @brief Field Tilt, offset: 0x34, size: 0x4, def value: None
 float_t  ___Tilt;

/// [Tooltip("Pan the camera by this much")]
/// [FormerlySerializedAs("m_Pan")]
/// @brief Field Pan, offset: 0x38, size: 0x4, def value: None
 float_t  ___Pan;

/// [Tooltip("Roll the camera by this much")]
/// [FormerlySerializedAs("m_Dutch")]
/// @brief Field Dutch, offset: 0x3c, size: 0x4, def value: None
 float_t  ___Dutch;

/// [Tooltip("Scale the zoom by this amount (normal = 1)")]
/// [FormerlySerializedAs("m_ZoomScale")]
/// @brief Field ZoomScale, offset: 0x40, size: 0x4, def value: None
 float_t  ___ZoomScale;

/// [Range(0, 1)]
/// [Tooltip("Lowering this value relaxes the camera\'s attention to the Follow target (normal = 1)")]
/// [FormerlySerializedAs("m_FollowAttachment")]
/// @brief Field FollowAttachment, offset: 0x44, size: 0x4, def value: None
 float_t  ___FollowAttachment;

/// [Range(0, 1)]
/// [Tooltip("Lowering this value relaxes the camera\'s attention to the LookAt target (normal = 1)")]
/// [FormerlySerializedAs("m_LookAtAttachment")]
/// @brief Field LookAtAttachment, offset: 0x48, size: 0x4, def value: None
 float_t  ___LookAtAttachment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineRecomposer, ___ApplyAfter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRecomposer, ___Tilt) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRecomposer, ___Pan) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRecomposer, ___Dutch) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRecomposer, ___ZoomScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRecomposer, ___FollowAttachment) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRecomposer, ___LookAtAttachment) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineRecomposer) == 0x50, "Size mismatch!");

} // namespace end def Unity::Cinemachine

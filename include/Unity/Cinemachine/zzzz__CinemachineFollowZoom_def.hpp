#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFollowZoom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineFollowZoom)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineFollowZoom_VcamExtraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineFollowZoom;
}
namespace Unity::Cinemachine {
class CinemachineFollowZoom_VcamExtraState;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineFollowZoom*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFollowZoom*, "Unity.Cinemachine", "CinemachineFollowZoom");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState*, "Unity.Cinemachine", "CinemachineFollowZoom/VcamExtraState");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Follow Zoom")]
// [SaveDuringPlay]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)2)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineFollowZoom.html")]
// Dependencies Unity.Cinemachine.CinemachineExtension, UnityEngine.Vector2
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFollowZoom
class CORDL_TYPE CinemachineFollowZoom : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using VcamExtraState = ::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState;

/// @brief Field Damping, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) float_t  Damping;

/// @brief Field FovRange, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_FovRange, put=__cordl_internal_set_FovRange)) ::UnityEngine::Vector2  FovRange;

/// @brief Field Width, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Width, put=__cordl_internal_set_Width)) float_t  Width;

/// @brief Method GetMaxDampTime, addr 0xae92508, size 0x8, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

static inline ::Unity::Cinemachine::CinemachineFollowZoom* New_ctor() ;

/// @brief Method OnValidate, addr 0xae924bc, size 0x4c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xae92510, size 0x2a4, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xae924a4, size 0x18, virtual false, abstract: false, final false
inline void Reset() ;

constexpr float_t const& __cordl_internal_get_Damping() const;

constexpr float_t& __cordl_internal_get_Damping() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_FovRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_FovRange() ;

constexpr float_t const& __cordl_internal_get_Width() const;

constexpr float_t& __cordl_internal_get_Width() ;

constexpr void __cordl_internal_set_Damping(float_t  value) ;

constexpr void __cordl_internal_set_FovRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_Width(float_t  value) ;

/// @brief Method .ctor, addr 0xae927b4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFollowZoom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFollowZoom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFollowZoom(CinemachineFollowZoom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFollowZoom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFollowZoom(CinemachineFollowZoom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22170};

/// [Tooltip("The shot width to maintain, in world units, at target distance.")]
/// [FormerlySerializedAs("m_Width")]
/// @brief Field Width, offset: 0x30, size: 0x4, def value: None
 float_t  ___Width;

/// [Range(0, 20)]
/// [Tooltip("Increase this value to soften the aggressiveness of the follow-zoom.  Small numbers are more responsive, larger numbers give a more heavy slowly responding camera.")]
/// [FormerlySerializedAs("m_Damping")]
/// @brief Field Damping, offset: 0x34, size: 0x4, def value: None
 float_t  ___Damping;

/// [MinMaxRangeSlider(1, 179)]
/// [Tooltip("Range for the FOV that this behaviour will generate.")]
/// @brief Field FovRange, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___FovRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFollowZoom, ___Width) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFollowZoom, ___Damping) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFollowZoom, ___FovRange) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFollowZoom) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFollowZoom/VcamExtraState
class CORDL_TYPE CinemachineFollowZoom_VcamExtraState : public ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase {
public:
// Declarations
/// @brief Field m_PreviousFrameZoom, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousFrameZoom, put=__cordl_internal_set_m_PreviousFrameZoom)) float_t  m_PreviousFrameZoom;

static inline ::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState* New_ctor() ;

constexpr float_t const& __cordl_internal_get_m_PreviousFrameZoom() const;

constexpr float_t& __cordl_internal_get_m_PreviousFrameZoom() ;

constexpr void __cordl_internal_set_m_PreviousFrameZoom(float_t  value) ;

/// @brief Method .ctor, addr 0xae927d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFollowZoom_VcamExtraState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFollowZoom_VcamExtraState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFollowZoom_VcamExtraState(CinemachineFollowZoom_VcamExtraState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFollowZoom_VcamExtraState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFollowZoom_VcamExtraState(CinemachineFollowZoom_VcamExtraState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22169};

/// @brief Field m_PreviousFrameZoom, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_PreviousFrameZoom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState, ___m_PreviousFrameZoom) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine

#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Recorder/HandGrabPoseLiveRecorder_RecorderStep.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HandGrabPoseLiveRecorder_RecorderStep)
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractable;
}
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
struct HandGrabPoseLiveRecorder_RecorderStep;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep, "Oculus.Interaction.HandGrab.Recorder", "HandGrabPoseLiveRecorder/RecorderStep");
// Dependencies UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandGrab.Recorder.HandGrabPoseLiveRecorder/RecorderStep
struct CORDL_TYPE HandGrabPoseLiveRecorder_RecorderStep {
public:
// Declarations
 __declspec(property(get=get_GrabPoint, put=set_GrabPoint)) ::UnityEngine::Pose  GrabPoint;

 __declspec(property(get=get_HandScale, put=set_HandScale)) float_t  HandScale;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityW<::UnityEngine::Rigidbody>  Item;

 __declspec(property(get=get_RawHandPose, put=set_RawHandPose)) ::Oculus::Interaction::HandGrab::HandPose*  RawHandPose;

/// @brief Method ClearInteractable, addr 0xa432eac, size 0xa8, virtual false, abstract: false, final false
inline void ClearInteractable() ;

/// @brief Method .ctor, addr 0xa4335a8, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::HandGrab::HandPose*  rawPose, ::UnityEngine::Pose  grabPoint, float_t  scale, ::UnityEngine::Rigidbody*  item) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_GrabPoint, addr 0xa43374c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_GrabPoint() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_HandScale, addr 0xa43378c, size 0x8, virtual false, abstract: false, final false
inline float_t get_HandScale() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Item, addr 0xa43377c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_Item() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_RawHandPose, addr 0xa43373c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::HandPose* get_RawHandPose() ;

/// [CompilerGenerated]
/// @brief Method set_GrabPoint, addr 0xa433760, size 0x1c, virtual false, abstract: false, final false
inline void set_GrabPoint(::UnityEngine::Pose  value) ;

/// [CompilerGenerated]
/// @brief Method set_HandScale, addr 0xa433794, size 0x8, virtual false, abstract: false, final false
inline void set_HandScale(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Item, addr 0xa433784, size 0x8, virtual false, abstract: false, final false
inline void set_Item(::UnityEngine::Rigidbody*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RawHandPose, addr 0xa433744, size 0x8, virtual false, abstract: false, final false
inline void set_RawHandPose(::Oculus::Interaction::HandGrab::HandPose*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HandGrabPoseLiveRecorder_RecorderStep() ;

// Ctor Parameters [CppParam { name: "_RawHandPose_k__BackingField", ty: "::Oculus::Interaction::HandGrab::HandPose*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GrabPoint_k__BackingField", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Item_k__BackingField", ty: "::UnityW<::UnityEngine::Rigidbody>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_HandScale_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactable", ty: "::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>", modifiers: "", def_value: None, comment: None }]
constexpr HandGrabPoseLiveRecorder_RecorderStep(::Oculus::Interaction::HandGrab::HandPose*  _RawHandPose_k__BackingField, ::UnityEngine::Pose  _GrabPoint_k__BackingField, ::UnityW<::UnityEngine::Rigidbody>  _Item_k__BackingField, float_t  _HandScale_k__BackingField, ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  interactable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28281};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// [CompilerGenerated]
/// @brief Field <RawHandPose>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandPose*  _RawHandPose_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GrabPoint>k__BackingField, offset: 0x8, size: 0x1c, def value: None
 ::UnityEngine::Pose  _GrabPoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Item>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  _Item_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HandScale>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  _HandScale_k__BackingField;

/// @brief Field interactable, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  interactable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep, _RawHandPose_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep, _GrabPoint_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep, _Item_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep, _HandScale_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep, interactable) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

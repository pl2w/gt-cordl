#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/AnimatedHandOVR.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "Oculus/Interaction/Input/zzzz__AnimatedHandOVR_AllowThumbUp_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatedHandOVR)
namespace GlobalNamespace {
struct AnimatedHandOVR_AllowThumbUp;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace Oculus::Interaction::Input {
class AnimatedHandOVR___c;
}
namespace Oculus::Interaction {
class IDeltaTimeConsumer;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class AnimatedHandOVR;
}
namespace Oculus::Interaction::Input {
class AnimatedHandOVR___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::AnimatedHandOVR*);
MARK_REF_T(::Oculus::Interaction::Input::AnimatedHandOVR___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::AnimatedHandOVR*, "Oculus.Interaction.Input", "AnimatedHandOVR");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::AnimatedHandOVR___c*, "Oculus.Interaction.Input", "AnimatedHandOVR/<>c");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Controller, Oculus.Interaction.Input.AnimatedHandOVR::AllowThumbUp, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.AnimatedHandOVR
class CORDL_TYPE AnimatedHandOVR : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AllowThumbUp = ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp;

using __c = ::Oculus::Interaction::Input::AnimatedHandOVR___c;

 __declspec(property(get=get_AllowThumbUpMode, put=set_AllowThumbUpMode)) ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp  AllowThumbUpMode;

 __declspec(property(get=get_AnimFlexGain, put=set_AnimFlexGain)) float_t  AnimFlexGain;

 __declspec(property(get=get_AnimPinchGain, put=set_AnimPinchGain)) float_t  AnimPinchGain;

 __declspec(property(get=get_AnimPointAndThumbsUpGain, put=set_AnimPointAndThumbsUpGain)) float_t  AnimPointAndThumbsUpGain;

 __declspec(property(get=get_DeltaTimeProvider, put=set_DeltaTimeProvider)) ::System::Func_1<float_t>*  DeltaTimeProvider;

/// @brief Field <DeltaTimeProvider>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__DeltaTimeProvider_k__BackingField, put=__cordl_internal_set__DeltaTimeProvider_k__BackingField)) ::System::Func_1<float_t>*  _DeltaTimeProvider_k__BackingField;

/// @brief Field _allowThumbUp, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__allowThumbUp, put=__cordl_internal_set__allowThumbUp)) ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp  _allowThumbUp;

/// @brief Field _animFlex, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__animFlex, put=__cordl_internal_set__animFlex)) float_t  _animFlex;

/// @brief Field _animFlexGain, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__animFlexGain, put=__cordl_internal_set__animFlexGain)) float_t  _animFlexGain;

/// @brief Field _animLayerIndexPoint, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__animLayerIndexPoint, put=__cordl_internal_set__animLayerIndexPoint)) int32_t  _animLayerIndexPoint;

/// @brief Field _animLayerIndexThumb, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__animLayerIndexThumb, put=__cordl_internal_set__animLayerIndexThumb)) int32_t  _animLayerIndexThumb;

/// @brief Field _animParamIndexFlex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__animParamIndexFlex, put=__cordl_internal_set__animParamIndexFlex)) int32_t  _animParamIndexFlex;

/// @brief Field _animParamIndexSlide, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__animParamIndexSlide, put=__cordl_internal_set__animParamIndexSlide)) int32_t  _animParamIndexSlide;

/// @brief Field _animParamPinch, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__animParamPinch, put=__cordl_internal_set__animParamPinch)) int32_t  _animParamPinch;

/// @brief Field _animPinch, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__animPinch, put=__cordl_internal_set__animPinch)) float_t  _animPinch;

/// @brief Field _animPinchGain, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__animPinchGain, put=__cordl_internal_set__animPinchGain)) float_t  _animPinchGain;

/// @brief Field _animPointAndThumbsUpGain, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__animPointAndThumbsUpGain, put=__cordl_internal_set__animPointAndThumbsUpGain)) float_t  _animPointAndThumbsUpGain;

/// @brief Field _animator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__animator, put=__cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator>  _animator;

/// @brief Field _controller, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::GlobalNamespace::OVRInput_Controller  _controller;

/// @brief Field _deltaTimeProvider, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltaTimeProvider, put=__cordl_internal_set__deltaTimeProvider)) ::System::Func_1<float_t>*  _deltaTimeProvider;

/// @brief Field _isGivingThumbsUp, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isGivingThumbsUp, put=__cordl_internal_set__isGivingThumbsUp)) bool  _isGivingThumbsUp;

/// @brief Field _pointBlend, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointBlend, put=__cordl_internal_set__pointBlend)) float_t  _pointBlend;

/// @brief Field _pointTarget, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointTarget, put=__cordl_internal_set__pointTarget)) float_t  _pointTarget;

/// @brief Field _slideBlend, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__slideBlend, put=__cordl_internal_set__slideBlend)) float_t  _slideBlend;

/// @brief Field _slideTarget, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__slideTarget, put=__cordl_internal_set__slideTarget)) float_t  _slideTarget;

/// @brief Field _thumbsUpBlend, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__thumbsUpBlend, put=__cordl_internal_set__thumbsUpBlend)) float_t  _thumbsUpBlend;

/// @brief Convert operator to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr operator  ::Oculus::Interaction::IDeltaTimeConsumer*() noexcept;

/// @brief Method InjectAllAnimatedHandOVR, addr 0xa41b9bc, size 0x14, virtual false, abstract: false, final false
inline void InjectAllAnimatedHandOVR(::GlobalNamespace::OVRInput_Controller  controller, ::UnityEngine::Animator*  animator) ;

/// @brief Method InjectAnimator, addr 0xa41b9d8, size 0x8, virtual false, abstract: false, final false
inline void InjectAnimator(::UnityEngine::Animator*  animator) ;

/// @brief Method InjectController, addr 0xa41b9d0, size 0x8, virtual false, abstract: false, final false
inline void InjectController(::GlobalNamespace::OVRInput_Controller  controller) ;

static inline ::Oculus::Interaction::Input::AnimatedHandOVR* New_ctor() ;

/// @brief Method SetDeltaTimeProvider, addr 0xa41b3d8, size 0x8, virtual true, abstract: false, final true
inline void SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider) ;

/// @brief Method Start, addr 0xa41b3e0, size 0x8c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa41b46c, size 0x12c, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAnimStates, addr 0xa41b6e8, size 0x194, virtual false, abstract: false, final false
inline void UpdateAnimStates() ;

/// @brief Method UpdateCapTouchStates, addr 0xa41b598, size 0x150, virtual false, abstract: false, final false
inline void UpdateCapTouchStates() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__DeltaTimeProvider_k__BackingField() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__DeltaTimeProvider_k__BackingField() ;

constexpr ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp const& __cordl_internal_get__allowThumbUp() const;

constexpr ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp& __cordl_internal_get__allowThumbUp() ;

constexpr float_t const& __cordl_internal_get__animFlex() const;

constexpr float_t& __cordl_internal_get__animFlex() ;

constexpr float_t const& __cordl_internal_get__animFlexGain() const;

constexpr float_t& __cordl_internal_get__animFlexGain() ;

constexpr int32_t const& __cordl_internal_get__animLayerIndexPoint() const;

constexpr int32_t& __cordl_internal_get__animLayerIndexPoint() ;

constexpr int32_t const& __cordl_internal_get__animLayerIndexThumb() const;

constexpr int32_t& __cordl_internal_get__animLayerIndexThumb() ;

constexpr int32_t const& __cordl_internal_get__animParamIndexFlex() const;

constexpr int32_t& __cordl_internal_get__animParamIndexFlex() ;

constexpr int32_t const& __cordl_internal_get__animParamIndexSlide() const;

constexpr int32_t& __cordl_internal_get__animParamIndexSlide() ;

constexpr int32_t const& __cordl_internal_get__animParamPinch() const;

constexpr int32_t& __cordl_internal_get__animParamPinch() ;

constexpr float_t const& __cordl_internal_get__animPinch() const;

constexpr float_t& __cordl_internal_get__animPinch() ;

constexpr float_t const& __cordl_internal_get__animPinchGain() const;

constexpr float_t& __cordl_internal_get__animPinchGain() ;

constexpr float_t const& __cordl_internal_get__animPointAndThumbsUpGain() const;

constexpr float_t& __cordl_internal_get__animPointAndThumbsUpGain() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controller() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controller() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__deltaTimeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__deltaTimeProvider() ;

constexpr bool const& __cordl_internal_get__isGivingThumbsUp() const;

constexpr bool& __cordl_internal_get__isGivingThumbsUp() ;

constexpr float_t const& __cordl_internal_get__pointBlend() const;

constexpr float_t& __cordl_internal_get__pointBlend() ;

constexpr float_t const& __cordl_internal_get__pointTarget() const;

constexpr float_t& __cordl_internal_get__pointTarget() ;

constexpr float_t const& __cordl_internal_get__slideBlend() const;

constexpr float_t& __cordl_internal_get__slideBlend() ;

constexpr float_t const& __cordl_internal_get__slideTarget() const;

constexpr float_t& __cordl_internal_get__slideTarget() ;

constexpr float_t const& __cordl_internal_get__thumbsUpBlend() const;

constexpr float_t& __cordl_internal_get__thumbsUpBlend() ;

constexpr void __cordl_internal_set__DeltaTimeProvider_k__BackingField(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__allowThumbUp(::GlobalNamespace::AnimatedHandOVR_AllowThumbUp  value) ;

constexpr void __cordl_internal_set__animFlex(float_t  value) ;

constexpr void __cordl_internal_set__animFlexGain(float_t  value) ;

constexpr void __cordl_internal_set__animLayerIndexPoint(int32_t  value) ;

constexpr void __cordl_internal_set__animLayerIndexThumb(int32_t  value) ;

constexpr void __cordl_internal_set__animParamIndexFlex(int32_t  value) ;

constexpr void __cordl_internal_set__animParamIndexSlide(int32_t  value) ;

constexpr void __cordl_internal_set__animParamPinch(int32_t  value) ;

constexpr void __cordl_internal_set__animPinch(float_t  value) ;

constexpr void __cordl_internal_set__animPinchGain(float_t  value) ;

constexpr void __cordl_internal_set__animPointAndThumbsUpGain(float_t  value) ;

constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set__deltaTimeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__isGivingThumbsUp(bool  value) ;

constexpr void __cordl_internal_set__pointBlend(float_t  value) ;

constexpr void __cordl_internal_set__pointTarget(float_t  value) ;

constexpr void __cordl_internal_set__slideBlend(float_t  value) ;

constexpr void __cordl_internal_set__slideTarget(float_t  value) ;

constexpr void __cordl_internal_set__thumbsUpBlend(float_t  value) ;

/// @brief Method .ctor, addr 0xa41b9e0, size 0x230, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AllowThumbUpMode, addr 0xa41b388, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp get_AllowThumbUpMode() ;

/// @brief Method get_AnimFlexGain, addr 0xa41b398, size 0x8, virtual false, abstract: false, final false
inline float_t get_AnimFlexGain() ;

/// @brief Method get_AnimPinchGain, addr 0xa41b3a8, size 0x8, virtual false, abstract: false, final false
inline float_t get_AnimPinchGain() ;

/// @brief Method get_AnimPointAndThumbsUpGain, addr 0xa41b3b8, size 0x8, virtual false, abstract: false, final false
inline float_t get_AnimPointAndThumbsUpGain() ;

/// [CompilerGenerated]
/// @brief Method get_DeltaTimeProvider, addr 0xa41b3c8, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<float_t>* get_DeltaTimeProvider() ;

/// @brief Convert to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr ::Oculus::Interaction::IDeltaTimeConsumer* i___Oculus__Interaction__IDeltaTimeConsumer() noexcept;

/// @brief Method set_AllowThumbUpMode, addr 0xa41b390, size 0x8, virtual false, abstract: false, final false
inline void set_AllowThumbUpMode(::GlobalNamespace::AnimatedHandOVR_AllowThumbUp  value) ;

/// @brief Method set_AnimFlexGain, addr 0xa41b3a0, size 0x8, virtual false, abstract: false, final false
inline void set_AnimFlexGain(float_t  value) ;

/// @brief Method set_AnimPinchGain, addr 0xa41b3b0, size 0x8, virtual false, abstract: false, final false
inline void set_AnimPinchGain(float_t  value) ;

/// @brief Method set_AnimPointAndThumbsUpGain, addr 0xa41b3c0, size 0x8, virtual false, abstract: false, final false
inline void set_AnimPointAndThumbsUpGain(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DeltaTimeProvider, addr 0xa41b3d0, size 0x8, virtual false, abstract: false, final false
inline void set_DeltaTimeProvider(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedHandOVR() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedHandOVR", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedHandOVR(AnimatedHandOVR && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedHandOVR", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedHandOVR(AnimatedHandOVR const& ) = delete;

/// @brief Field ANIM_LAYER_NAME_POINT offset 0xffffffff size 0x8
static constexpr ::ConstString  ANIM_LAYER_NAME_POINT{u"Point Layer"};

/// @brief Field ANIM_LAYER_NAME_THUMB offset 0xffffffff size 0x8
static constexpr ::ConstString  ANIM_LAYER_NAME_THUMB{u"Thumb Layer"};

/// @brief Field ANIM_PARAM_NAME_FLEX offset 0xffffffff size 0x8
static constexpr ::ConstString  ANIM_PARAM_NAME_FLEX{u"Flex"};

/// @brief Field ANIM_PARAM_NAME_INDEX_SLIDE offset 0xffffffff size 0x8
static constexpr ::ConstString  ANIM_PARAM_NAME_INDEX_SLIDE{u"IndexSlide"};

/// @brief Field ANIM_PARAM_NAME_PINCH offset 0xffffffff size 0x8
static constexpr ::ConstString  ANIM_PARAM_NAME_PINCH{u"Pinch"};

/// @brief Field TRIGGER_MAX offset 0xffffffff size 0x4
static constexpr float_t  TRIGGER_MAX{static_cast<float_t>(0.95f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31135};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____controller;

/// [SerializeField]
/// @brief Field _animator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____animator;

/// [SerializeField]
/// [Tooltip("Indicates the input needed in order to perform a thumbs-up when the fist is closed")]
/// @brief Field _allowThumbUp, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp  ____allowThumbUp;

/// [Header("Animation Speed")]
/// [SerializeField]
/// [FormerlySerializedAs("_animFlexhGain")]
/// [Tooltip("Speed of the index flex animation")]
/// @brief Field _animFlexGain, offset: 0x34, size: 0x4, def value: None
 float_t  ____animFlexGain;

/// [SerializeField]
/// [Tooltip("Speed of the pinch animation")]
/// @brief Field _animPinchGain, offset: 0x38, size: 0x4, def value: None
 float_t  ____animPinchGain;

/// [SerializeField]
/// [Tooltip("Speed of the point, slide and thumbs up animation")]
/// @brief Field _animPointAndThumbsUpGain, offset: 0x3c, size: 0x4, def value: None
 float_t  ____animPointAndThumbsUpGain;

/// [CompilerGenerated]
/// @brief Field <DeltaTimeProvider>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____DeltaTimeProvider_k__BackingField;

/// @brief Field _animLayerIndexThumb, offset: 0x48, size: 0x4, def value: None
 int32_t  ____animLayerIndexThumb;

/// @brief Field _animLayerIndexPoint, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____animLayerIndexPoint;

/// @brief Field _animParamIndexFlex, offset: 0x50, size: 0x4, def value: None
 int32_t  ____animParamIndexFlex;

/// @brief Field _animParamPinch, offset: 0x54, size: 0x4, def value: None
 int32_t  ____animParamPinch;

/// @brief Field _animParamIndexSlide, offset: 0x58, size: 0x4, def value: None
 int32_t  ____animParamIndexSlide;

/// @brief Field _isGivingThumbsUp, offset: 0x5c, size: 0x1, def value: None
 bool  ____isGivingThumbsUp;

/// @brief Field _pointBlend, offset: 0x60, size: 0x4, def value: None
 float_t  ____pointBlend;

/// @brief Field _slideBlend, offset: 0x64, size: 0x4, def value: None
 float_t  ____slideBlend;

/// @brief Field _thumbsUpBlend, offset: 0x68, size: 0x4, def value: None
 float_t  ____thumbsUpBlend;

/// @brief Field _pointTarget, offset: 0x6c, size: 0x4, def value: None
 float_t  ____pointTarget;

/// @brief Field _slideTarget, offset: 0x70, size: 0x4, def value: None
 float_t  ____slideTarget;

/// @brief Field _animFlex, offset: 0x74, size: 0x4, def value: None
 float_t  ____animFlex;

/// @brief Field _animPinch, offset: 0x78, size: 0x4, def value: None
 float_t  ____animPinch;

/// @brief Field _deltaTimeProvider, offset: 0x80, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____deltaTimeProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____allowThumbUp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animFlexGain) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animPinchGain) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animPointAndThumbsUpGain) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____DeltaTimeProvider_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animLayerIndexThumb) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animLayerIndexPoint) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animParamIndexFlex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animParamPinch) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animParamIndexSlide) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____isGivingThumbsUp) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____pointBlend) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____slideBlend) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____thumbsUpBlend) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____pointTarget) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____slideTarget) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animFlex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____animPinch) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::AnimatedHandOVR, ____deltaTimeProvider) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::AnimatedHandOVR) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.AnimatedHandOVR/<>c
class CORDL_TYPE AnimatedHandOVR___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::AnimatedHandOVR___c*  __9;

/// @brief Field <>9__51_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__51_0, put=setStaticF___9__51_0)) ::System::Func_1<float_t>*  __9__51_0;

/// @brief Field <>9__51_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__51_1, put=setStaticF___9__51_1)) ::System::Func_1<float_t>*  __9__51_1;

static inline ::Oculus::Interaction::Input::AnimatedHandOVR___c* New_ctor() ;

/// @brief Method <.ctor>b__51_0, addr 0xa41bc80, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__51_0() ;

/// @brief Method <.ctor>b__51_1, addr 0xa41bc88, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__51_1() ;

/// @brief Method .ctor, addr 0xa41bc78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::AnimatedHandOVR___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__51_0() ;

static inline ::System::Func_1<float_t>* getStaticF___9__51_1() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::AnimatedHandOVR___c*  value) ;

static inline void setStaticF___9__51_0(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__51_1(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedHandOVR___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedHandOVR___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedHandOVR___c(AnimatedHandOVR___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedHandOVR___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedHandOVR___c(AnimatedHandOVR___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31134};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::AnimatedHandOVR___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

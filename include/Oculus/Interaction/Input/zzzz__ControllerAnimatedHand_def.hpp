#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerAnimatedHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__ControllerAnimatedHand_AllowThumbUp_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerAnimatedHand)
namespace GlobalNamespace {
struct ControllerAnimatedHand_AllowThumbUp;
}
namespace Oculus::Interaction::Input {
class ControllerAnimatedHand___c;
}
namespace Oculus::Interaction::Input {
class IController;
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
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class ControllerAnimatedHand;
}
namespace Oculus::Interaction::Input {
class ControllerAnimatedHand___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ControllerAnimatedHand*);
MARK_REF_T(::Oculus::Interaction::Input::ControllerAnimatedHand___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ControllerAnimatedHand*, "Oculus.Interaction.Input", "ControllerAnimatedHand");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ControllerAnimatedHand___c*, "Oculus.Interaction.Input", "ControllerAnimatedHand/<>c");
// Dependencies Oculus.Interaction.Input.ControllerAnimatedHand::AllowThumbUp, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ControllerAnimatedHand
class CORDL_TYPE ControllerAnimatedHand : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AllowThumbUp = ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp;

using __c = ::Oculus::Interaction::Input::ControllerAnimatedHand___c;

 __declspec(property(get=get_AllowThumbUpMode, put=set_AllowThumbUpMode)) ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp  AllowThumbUpMode;

 __declspec(property(get=get_AnimFlexGain, put=set_AnimFlexGain)) float_t  AnimFlexGain;

 __declspec(property(get=get_AnimPinchGain, put=set_AnimPinchGain)) float_t  AnimPinchGain;

 __declspec(property(get=get_AnimPointAndThumbsUpGain, put=set_AnimPointAndThumbsUpGain)) float_t  AnimPointAndThumbsUpGain;

/// @brief Field Controller, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Controller, put=__cordl_internal_set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

 __declspec(property(get=get_DeltaTimeProvider, put=set_DeltaTimeProvider)) ::System::Func_1<float_t>*  DeltaTimeProvider;

/// @brief Field <DeltaTimeProvider>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__DeltaTimeProvider_k__BackingField, put=__cordl_internal_set__DeltaTimeProvider_k__BackingField)) ::System::Func_1<float_t>*  _DeltaTimeProvider_k__BackingField;

/// @brief Field _allowThumbUp, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__allowThumbUp, put=__cordl_internal_set__allowThumbUp)) ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp  _allowThumbUp;

/// @brief Field _animFlex, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__animFlex, put=__cordl_internal_set__animFlex)) float_t  _animFlex;

/// @brief Field _animFlexGain, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__animFlexGain, put=__cordl_internal_set__animFlexGain)) float_t  _animFlexGain;

/// @brief Field _animLayerIndexPoint, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__animLayerIndexPoint, put=__cordl_internal_set__animLayerIndexPoint)) int32_t  _animLayerIndexPoint;

/// @brief Field _animLayerIndexThumb, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__animLayerIndexThumb, put=__cordl_internal_set__animLayerIndexThumb)) int32_t  _animLayerIndexThumb;

/// @brief Field _animParamIndexFlex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__animParamIndexFlex, put=__cordl_internal_set__animParamIndexFlex)) int32_t  _animParamIndexFlex;

/// @brief Field _animParamIndexSlide, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__animParamIndexSlide, put=__cordl_internal_set__animParamIndexSlide)) int32_t  _animParamIndexSlide;

/// @brief Field _animParamPinch, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__animParamPinch, put=__cordl_internal_set__animParamPinch)) int32_t  _animParamPinch;

/// @brief Field _animPinch, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__animPinch, put=__cordl_internal_set__animPinch)) float_t  _animPinch;

/// @brief Field _animPinchGain, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__animPinchGain, put=__cordl_internal_set__animPinchGain)) float_t  _animPinchGain;

/// @brief Field _animPointAndThumbsUpGain, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__animPointAndThumbsUpGain, put=__cordl_internal_set__animPointAndThumbsUpGain)) float_t  _animPointAndThumbsUpGain;

/// @brief Field _animator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__animator, put=__cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator>  _animator;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Field _deltaTimeProvider, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltaTimeProvider, put=__cordl_internal_set__deltaTimeProvider)) ::System::Func_1<float_t>*  _deltaTimeProvider;

/// @brief Field _isGivingThumbsUp, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__isGivingThumbsUp, put=__cordl_internal_set__isGivingThumbsUp)) bool  _isGivingThumbsUp;

/// @brief Field _pointBlend, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointBlend, put=__cordl_internal_set__pointBlend)) float_t  _pointBlend;

/// @brief Field _pointTarget, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointTarget, put=__cordl_internal_set__pointTarget)) float_t  _pointTarget;

/// @brief Field _slideBlend, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__slideBlend, put=__cordl_internal_set__slideBlend)) float_t  _slideBlend;

/// @brief Field _slideTarget, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__slideTarget, put=__cordl_internal_set__slideTarget)) float_t  _slideTarget;

/// @brief Field _started, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _thumbsUpBlend, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__thumbsUpBlend, put=__cordl_internal_set__thumbsUpBlend)) float_t  _thumbsUpBlend;

/// @brief Convert operator to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr operator  ::Oculus::Interaction::IDeltaTimeConsumer*() noexcept;

/// @brief Method Awake, addr 0xa5074ac, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllControllerAnimatedHand, addr 0xa507b28, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllControllerAnimatedHand(::Oculus::Interaction::Input::IController*  controller, ::UnityEngine::Animator*  animator) ;

/// @brief Method InjectAnimator, addr 0xa507c24, size 0x8, virtual false, abstract: false, final false
inline void InjectAnimator(::UnityEngine::Animator*  animator) ;

/// @brief Method InjectController, addr 0xa507b54, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

static inline ::Oculus::Interaction::Input::ControllerAnimatedHand* New_ctor() ;

/// @brief Method SetDeltaTimeProvider, addr 0xa5074a4, size 0x8, virtual true, abstract: false, final true
inline void SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider) ;

/// @brief Method Start, addr 0xa507514, size 0xb0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa5075c4, size 0x12c, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAnimStates, addr 0xa5078ec, size 0x23c, virtual false, abstract: false, final false
inline void UpdateAnimStates() ;

/// @brief Method UpdateCapTouchStates, addr 0xa5076f0, size 0x1fc, virtual false, abstract: false, final false
inline void UpdateCapTouchStates() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get_Controller() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get_Controller() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__DeltaTimeProvider_k__BackingField() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__DeltaTimeProvider_k__BackingField() ;

constexpr ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp const& __cordl_internal_get__allowThumbUp() const;

constexpr ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp& __cordl_internal_get__allowThumbUp() ;

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

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

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

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__thumbsUpBlend() const;

constexpr float_t& __cordl_internal_get__thumbsUpBlend() ;

constexpr void __cordl_internal_set_Controller(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__DeltaTimeProvider_k__BackingField(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__allowThumbUp(::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp  value) ;

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

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__deltaTimeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__isGivingThumbsUp(bool  value) ;

constexpr void __cordl_internal_set__pointBlend(float_t  value) ;

constexpr void __cordl_internal_set__pointTarget(float_t  value) ;

constexpr void __cordl_internal_set__slideBlend(float_t  value) ;

constexpr void __cordl_internal_set__slideTarget(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__thumbsUpBlend(float_t  value) ;

/// @brief Method .ctor, addr 0xa507c2c, size 0x230, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AllowThumbUpMode, addr 0xa507454, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp get_AllowThumbUpMode() ;

/// @brief Method get_AnimFlexGain, addr 0xa507464, size 0x8, virtual false, abstract: false, final false
inline float_t get_AnimFlexGain() ;

/// @brief Method get_AnimPinchGain, addr 0xa507474, size 0x8, virtual false, abstract: false, final false
inline float_t get_AnimPinchGain() ;

/// @brief Method get_AnimPointAndThumbsUpGain, addr 0xa507484, size 0x8, virtual false, abstract: false, final false
inline float_t get_AnimPointAndThumbsUpGain() ;

/// [CompilerGenerated]
/// @brief Method get_DeltaTimeProvider, addr 0xa507494, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<float_t>* get_DeltaTimeProvider() ;

/// @brief Convert to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr ::Oculus::Interaction::IDeltaTimeConsumer* i___Oculus__Interaction__IDeltaTimeConsumer() noexcept;

/// @brief Method set_AllowThumbUpMode, addr 0xa50745c, size 0x8, virtual false, abstract: false, final false
inline void set_AllowThumbUpMode(::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp  value) ;

/// @brief Method set_AnimFlexGain, addr 0xa50746c, size 0x8, virtual false, abstract: false, final false
inline void set_AnimFlexGain(float_t  value) ;

/// @brief Method set_AnimPinchGain, addr 0xa50747c, size 0x8, virtual false, abstract: false, final false
inline void set_AnimPinchGain(float_t  value) ;

/// @brief Method set_AnimPointAndThumbsUpGain, addr 0xa50748c, size 0x8, virtual false, abstract: false, final false
inline void set_AnimPointAndThumbsUpGain(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DeltaTimeProvider, addr 0xa50749c, size 0x8, virtual false, abstract: false, final false
inline void set_DeltaTimeProvider(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerAnimatedHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerAnimatedHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerAnimatedHand(ControllerAnimatedHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerAnimatedHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerAnimatedHand(ControllerAnimatedHand const& ) = delete;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16473};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// @brief Field Controller, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ___Controller;

/// [SerializeField]
/// @brief Field _animator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____animator;

/// [SerializeField]
/// [Tooltip("Indicates the input needed in order to perform a thumbs-up when the fist is closed")]
/// @brief Field _allowThumbUp, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp  ____allowThumbUp;

/// [Header("Animation Speed")]
/// [SerializeField]
/// [Tooltip("Speed of the index flex animation")]
/// @brief Field _animFlexGain, offset: 0x3c, size: 0x4, def value: None
 float_t  ____animFlexGain;

/// [SerializeField]
/// [Tooltip("Speed of the pinch animation")]
/// @brief Field _animPinchGain, offset: 0x40, size: 0x4, def value: None
 float_t  ____animPinchGain;

/// [SerializeField]
/// [Tooltip("Speed of the point, slide and thumbs up animation")]
/// @brief Field _animPointAndThumbsUpGain, offset: 0x44, size: 0x4, def value: None
 float_t  ____animPointAndThumbsUpGain;

/// [CompilerGenerated]
/// @brief Field <DeltaTimeProvider>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____DeltaTimeProvider_k__BackingField;

/// @brief Field _animLayerIndexThumb, offset: 0x50, size: 0x4, def value: None
 int32_t  ____animLayerIndexThumb;

/// @brief Field _animLayerIndexPoint, offset: 0x54, size: 0x4, def value: None
 int32_t  ____animLayerIndexPoint;

/// @brief Field _animParamIndexFlex, offset: 0x58, size: 0x4, def value: None
 int32_t  ____animParamIndexFlex;

/// @brief Field _animParamPinch, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____animParamPinch;

/// @brief Field _animParamIndexSlide, offset: 0x60, size: 0x4, def value: None
 int32_t  ____animParamIndexSlide;

/// @brief Field _isGivingThumbsUp, offset: 0x64, size: 0x1, def value: None
 bool  ____isGivingThumbsUp;

/// @brief Field _pointBlend, offset: 0x68, size: 0x4, def value: None
 float_t  ____pointBlend;

/// @brief Field _slideBlend, offset: 0x6c, size: 0x4, def value: None
 float_t  ____slideBlend;

/// @brief Field _thumbsUpBlend, offset: 0x70, size: 0x4, def value: None
 float_t  ____thumbsUpBlend;

/// @brief Field _pointTarget, offset: 0x74, size: 0x4, def value: None
 float_t  ____pointTarget;

/// @brief Field _slideTarget, offset: 0x78, size: 0x4, def value: None
 float_t  ____slideTarget;

/// @brief Field _animFlex, offset: 0x7c, size: 0x4, def value: None
 float_t  ____animFlex;

/// @brief Field _animPinch, offset: 0x80, size: 0x4, def value: None
 float_t  ____animPinch;

/// @brief Field _started, offset: 0x84, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _deltaTimeProvider, offset: 0x88, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____deltaTimeProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ___Controller) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____allowThumbUp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animFlexGain) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animPinchGain) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animPointAndThumbsUpGain) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____DeltaTimeProvider_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animLayerIndexThumb) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animLayerIndexPoint) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animParamIndexFlex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animParamPinch) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animParamIndexSlide) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____isGivingThumbsUp) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____pointBlend) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____slideBlend) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____thumbsUpBlend) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____pointTarget) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____slideTarget) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animFlex) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____animPinch) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____started) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerAnimatedHand, ____deltaTimeProvider) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ControllerAnimatedHand) == 0x90, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ControllerAnimatedHand/<>c
class CORDL_TYPE ControllerAnimatedHand___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::ControllerAnimatedHand___c*  __9;

/// @brief Field <>9__54_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_0, put=setStaticF___9__54_0)) ::System::Func_1<float_t>*  __9__54_0;

/// @brief Field <>9__54_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_1, put=setStaticF___9__54_1)) ::System::Func_1<float_t>*  __9__54_1;

static inline ::Oculus::Interaction::Input::ControllerAnimatedHand___c* New_ctor() ;

/// @brief Method <.ctor>b__54_0, addr 0xa507ecc, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__54_0() ;

/// @brief Method <.ctor>b__54_1, addr 0xa507ed4, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__54_1() ;

/// @brief Method .ctor, addr 0xa507ec4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::ControllerAnimatedHand___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__54_0() ;

static inline ::System::Func_1<float_t>* getStaticF___9__54_1() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::ControllerAnimatedHand___c*  value) ;

static inline void setStaticF___9__54_0(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__54_1(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerAnimatedHand___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerAnimatedHand___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerAnimatedHand___c(ControllerAnimatedHand___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerAnimatedHand___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerAnimatedHand___c(ControllerAnimatedHand___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::ControllerAnimatedHand___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

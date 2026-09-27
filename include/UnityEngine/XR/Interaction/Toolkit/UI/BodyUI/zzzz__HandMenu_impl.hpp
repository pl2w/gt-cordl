#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/HandMenu.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__XRInputModalityManager_InputMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__HandMenu_MenuHandedness_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__HandMenu_UpDirection_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__HandMenu_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__BindingsGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__XRInputModalityManager_InputMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__FollowPresetDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__FollowPreset_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__HandMenu_MenuHandedness_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__HandMenu_UpDirection_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/zzzz__QuaternionTweenableVariable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/zzzz__Vector3TweenableVariable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/SmartTweenableVariables/zzzz__SmartFollowVector3TweenableVariable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_handMenuUIGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_handMenuUIGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_handMenuUIGameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_handMenuUIGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_handMenuUIGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_handMenuUIGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_menuHandedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandMenu_MenuHandedness (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_menuHandedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_menuHandedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_menuHandedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::GlobalNamespace::HandMenu_MenuHandedness)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_menuHandedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_menuHandedness", {}, {::i2c::type_of<::GlobalNamespace::HandMenu_MenuHandedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_handMenuUpDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandMenu_UpDirection (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_handMenuUpDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_handMenuUpDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_handMenuUpDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::GlobalNamespace::HandMenu_UpDirection)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_handMenuUpDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_handMenuUpDirection", {}, {::i2c::type_of<::GlobalNamespace::HandMenu_UpDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_leftPalmAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_leftPalmAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_leftPalmAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_leftPalmAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_leftPalmAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_leftPalmAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_rightPalmAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_rightPalmAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_rightPalmAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_rightPalmAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_rightPalmAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_rightPalmAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_minFollowDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_minFollowDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_minFollowDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_minFollowDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_minFollowDistance)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb444e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_minFollowDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_maxFollowDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_maxFollowDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_maxFollowDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_maxFollowDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_maxFollowDistance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb444e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_maxFollowDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_minToMaxDelaySeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_minToMaxDelaySeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_minToMaxDelaySeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_minToMaxDelaySeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_minToMaxDelaySeconds)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb444e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_minToMaxDelaySeconds", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_hideMenuWhenGazeDiverges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_hideMenuWhenGazeDiverges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_hideMenuWhenGazeDiverges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_hideMenuWhenGazeDiverges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_hideMenuWhenGazeDiverges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_hideMenuWhenGazeDiverges", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_menuVisibleGazeDivergenceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_menuVisibleGazeDivergenceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_menuVisibleGazeDivergenceThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_menuVisibleGazeDivergenceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_menuVisibleGazeDivergenceThreshold)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb444e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_menuVisibleGazeDivergenceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_animateMenuHideAndRevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_animateMenuHideAndRevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_animateMenuHideAndRevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_animateMenuHideAndRevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_animateMenuHideAndRevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_animateMenuHideAndRevel", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_revealHideAnimationDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_revealHideAnimationDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_revealHideAnimationDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_revealHideAnimationDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_revealHideAnimationDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_revealHideAnimationDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_hideMenuOnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_hideMenuOnSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_hideMenuOnSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_hideMenuOnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_hideMenuOnSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_hideMenuOnSelect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.get_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_interactionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_interactionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.set_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_interactionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::Awake)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb444f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnEnable)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0xb445054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnDisable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb4455fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb4456e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnValidate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb445738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.OnInputModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::GlobalNamespace::XRInputModalityManager_InputMode)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnInputModeChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb44578c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnInputModeChanged", {}, {::i2c::type_of<::GlobalNamespace::XRInputModalityManager_InputMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.GetCurrentPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset* (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::GetCurrentPreset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4457b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"GetCurrentPreset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.ShowMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::ShowMenu)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb445818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"ShowMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.OnMenuVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnMenuVisible)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4456c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnMenuVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.HideMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::HideMenu)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb4459ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"HideMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.OnMenuHidden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnMenuHidden)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb445bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnMenuHidden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::LateUpdate)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0xb445c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.TryGetTrackedAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::GlobalNamespace::HandMenu_MenuHandedness, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>, ::by_ref<::GlobalNamespace::HandMenu_MenuHandedness>, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Transform*>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::TryGetTrackedAnchors)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xb44612c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"TryGetTrackedAnchors", {}, {::i2c::type_of<::GlobalNamespace::HandMenu_MenuHandedness>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMenu_MenuHandedness>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.TryGetInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::TryGetInteractionManager)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb4464bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"TryGetInteractionManager", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.GetTransformAnchorsForHandedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::GlobalNamespace::HandMenu_MenuHandedness, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Transform*>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::GetTransformAnchorsForHandedness)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb4466a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"GetTransformAnchorsForHandedness", {}, {::i2c::type_of<::GlobalNamespace::HandMenu_MenuHandedness>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.GetReferenceUpDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::GetReferenceUpDirection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb446350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"GetReferenceUpDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.PalmMeetsRequirements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, bool, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::PalmMeetsRequirements)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb44659c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"PalmMeetsRequirements", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.TryGetCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::by_ref<::UnityEngine::Transform*>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::TryGetCamera)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4463cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"TryGetCamera", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu.AngleToDot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::AngleToDot)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb444ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"AngleToDot", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb44671c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu._OnEnable_b__80_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::Unity::Mathematics::float3)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::_OnEnable_b__80_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb446944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"<OnEnable>b__80_0", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu._OnEnable_b__80_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::UnityEngine::Quaternion)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::_OnEnable_b__80_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4469a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"<OnEnable>b__80_1", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu._OnEnable_b__80_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(::Unity::Mathematics::float3)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::_OnEnable_b__80_2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4469fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"<OnEnable>b__80_2", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu._OnEnable_b__80_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::_OnEnable_b__80_3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb446a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"<OnEnable>b__80_3", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HandMenuUIGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandMenuUIGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HandMenuUIGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandMenuUIGameObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_HandMenuUIGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HandMenuUIGameObject = value;
}
constexpr ::GlobalNamespace::HandMenu_MenuHandedness& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MenuHandedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuHandedness;
}
constexpr ::GlobalNamespace::HandMenu_MenuHandedness const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MenuHandedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuHandedness;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_MenuHandedness(::GlobalNamespace::HandMenu_MenuHandedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MenuHandedness = value;
}
constexpr ::GlobalNamespace::HandMenu_UpDirection& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HandMenuUpDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandMenuUpDirection;
}
constexpr ::GlobalNamespace::HandMenu_UpDirection const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HandMenuUpDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandMenuUpDirection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_HandMenuUpDirection(::GlobalNamespace::HandMenu_UpDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HandMenuUpDirection = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LeftPalmAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftPalmAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LeftPalmAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftPalmAnchor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_LeftPalmAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftPalmAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_RightPalmAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightPalmAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_RightPalmAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightPalmAnchor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_RightPalmAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightPalmAnchor = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MinFollowDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinFollowDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MinFollowDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinFollowDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_MinFollowDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinFollowDistance = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MaxFollowDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxFollowDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MaxFollowDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxFollowDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_MaxFollowDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxFollowDistance = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MinToMaxDelaySeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinToMaxDelaySeconds;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MinToMaxDelaySeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinToMaxDelaySeconds;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_MinToMaxDelaySeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinToMaxDelaySeconds = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HideMenuWhenGazeDiverges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideMenuWhenGazeDiverges;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HideMenuWhenGazeDiverges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideMenuWhenGazeDiverges;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_HideMenuWhenGazeDiverges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HideMenuWhenGazeDiverges = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MenuVisibleGazeAngleDivergenceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuVisibleGazeAngleDivergenceThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MenuVisibleGazeAngleDivergenceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuVisibleGazeAngleDivergenceThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_MenuVisibleGazeAngleDivergenceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MenuVisibleGazeAngleDivergenceThreshold = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MenuVisibilityDotThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuVisibilityDotThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MenuVisibilityDotThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuVisibilityDotThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_MenuVisibilityDotThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MenuVisibilityDotThreshold = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HandAnchorSmartFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandAnchorSmartFollow;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable* const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HandAnchorSmartFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandAnchorSmartFollow;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_HandAnchorSmartFollow(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HandAnchorSmartFollow = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_RotTweenFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotTweenFollow;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable* const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_RotTweenFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotTweenFollow;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_RotTweenFollow(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotTweenFollow = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable*& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MenuScaleTweenable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuScaleTweenable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable* const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MenuScaleTweenable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuScaleTweenable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_MenuScaleTweenable(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MenuScaleTweenable = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_BindingsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_BindingsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsGroup = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_CameraTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_CameraTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_CameraTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraTransform = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_WasMenuHiddenLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasMenuHiddenLastFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_WasMenuHiddenLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasMenuHiddenLastFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_WasMenuHiddenLastFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WasMenuHiddenLastFrame = value;
}
constexpr ::GlobalNamespace::HandMenu_MenuHandedness& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LastHandThatMetRequirements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHandThatMetRequirements;
}
constexpr ::GlobalNamespace::HandMenu_MenuHandedness const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LastHandThatMetRequirements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHandThatMetRequirements;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_LastHandThatMetRequirements(::GlobalNamespace::HandMenu_MenuHandedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastHandThatMetRequirements = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_AnimateMenuHideAndReveal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimateMenuHideAndReveal;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_AnimateMenuHideAndReveal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimateMenuHideAndReveal;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_AnimateMenuHideAndReveal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnimateMenuHideAndReveal = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_RevealHideAnimationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RevealHideAnimationDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_RevealHideAnimationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RevealHideAnimationDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_RevealHideAnimationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RevealHideAnimationDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HideMenuOnSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideMenuOnSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HideMenuOnSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideMenuOnSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_HideMenuOnSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HideMenuOnSelect = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_InteractionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_InteractionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionManager = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HandTrackingFollowPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandTrackingFollowPreset;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HandTrackingFollowPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandTrackingFollowPreset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_HandTrackingFollowPreset(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HandTrackingFollowPreset = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_ControllerFollowPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerFollowPreset;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_ControllerFollowPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerFollowPreset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_ControllerFollowPreset(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerFollowPreset = value;
}
constexpr ::GlobalNamespace::XRInputModalityManager_InputMode& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_CurrentInputMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentInputMode;
}
constexpr ::GlobalNamespace::XRInputModalityManager_InputMode const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_CurrentInputMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentInputMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_CurrentInputMode(::GlobalNamespace::XRInputModalityManager_InputMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentInputMode = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LeftOffsetRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftOffsetRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LeftOffsetRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftOffsetRoot;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_LeftOffsetRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftOffsetRoot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_RightOffsetRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightOffsetRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_RightOffsetRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightOffsetRoot;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_RightOffsetRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightOffsetRoot = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HideCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_HideCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideCoroutine;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_HideCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HideCoroutine = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_ShowCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShowCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_ShowCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShowCoroutine;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_ShowCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShowCoroutine = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LastValidCameraTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidCameraTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LastValidCameraTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidCameraTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_LastValidCameraTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastValidCameraTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LastValidPalmAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidPalmAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LastValidPalmAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidPalmAnchor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_LastValidPalmAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastValidPalmAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LastValidPalmAnchorOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidPalmAnchorOffset;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LastValidPalmAnchorOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidPalmAnchorOffset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_LastValidPalmAnchorOffset(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastValidPalmAnchorOffset = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_InitialMenuLocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialMenuLocalScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_InitialMenuLocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialMenuLocalScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_InitialMenuLocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitialMenuLocalScale = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<bool>*& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MenuVisibleBindableVariable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuVisibleBindableVariable;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<bool>* const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_MenuVisibleBindableVariable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuVisibleBindableVariable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_MenuVisibleBindableVariable(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MenuVisibleBindableVariable = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LastValidTrackingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidTrackingTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_get_m_LastValidTrackingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidTrackingTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::__cordl_internal_set_m_LastValidTrackingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastValidTrackingTime = value;
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_handMenuUIGameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_handMenuUIGameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_handMenuUIGameObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_handMenuUIGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HandMenu_MenuHandedness UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_menuHandedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_menuHandedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandMenu_MenuHandedness>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_menuHandedness(::GlobalNamespace::HandMenu_MenuHandedness  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_menuHandedness", {}, {::i2c::type_of<::GlobalNamespace::HandMenu_MenuHandedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HandMenu_UpDirection UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_handMenuUpDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_handMenuUpDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandMenu_UpDirection>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_handMenuUpDirection(::GlobalNamespace::HandMenu_UpDirection  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_handMenuUpDirection", {}, {::i2c::type_of<::GlobalNamespace::HandMenu_UpDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_leftPalmAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_leftPalmAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_leftPalmAnchor(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_leftPalmAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_rightPalmAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_rightPalmAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_rightPalmAnchor(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_rightPalmAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_minFollowDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_minFollowDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_minFollowDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_minFollowDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_maxFollowDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_maxFollowDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_maxFollowDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_maxFollowDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_minToMaxDelaySeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_minToMaxDelaySeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_minToMaxDelaySeconds(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_minToMaxDelaySeconds", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_hideMenuWhenGazeDiverges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_hideMenuWhenGazeDiverges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_hideMenuWhenGazeDiverges(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_hideMenuWhenGazeDiverges", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_menuVisibleGazeDivergenceThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_menuVisibleGazeDivergenceThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_menuVisibleGazeDivergenceThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_menuVisibleGazeDivergenceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_animateMenuHideAndRevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_animateMenuHideAndRevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_animateMenuHideAndRevel(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_animateMenuHideAndRevel", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_revealHideAnimationDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_revealHideAnimationDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_revealHideAnimationDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_revealHideAnimationDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_hideMenuOnSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_hideMenuOnSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_hideMenuOnSelect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_hideMenuOnSelect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::get_interactionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"get_interactionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnInputModeChanged(::GlobalNamespace::XRInputModalityManager_InputMode  newInputMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnInputModeChanged", {}, {::i2c::type_of<::GlobalNamespace::XRInputModalityManager_InputMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newInputMode);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset* UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::GetCurrentPreset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"GetCurrentPreset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::ShowMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"ShowMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnMenuVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnMenuVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::HideMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"HideMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::OnMenuHidden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"OnMenuHidden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::TryGetTrackedAnchors(::GlobalNamespace::HandMenu_MenuHandedness  desiredHandedness, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>  currentPreset, ::by_ref<::GlobalNamespace::HandMenu_MenuHandedness>  targetHandedness, ::by_ref<::UnityEngine::Transform*>  cameraTransform, ::by_ref<::UnityEngine::Transform*>  palmAnchor, ::by_ref<::UnityEngine::Transform*>  palmAnchorOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"TryGetTrackedAnchors", {}, {::i2c::type_of<::GlobalNamespace::HandMenu_MenuHandedness>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMenu_MenuHandedness>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, desiredHandedness, currentPreset, targetHandedness, cameraTransform, palmAnchor, palmAnchorOffset);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::TryGetInteractionManager(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"TryGetInteractionManager", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, manager);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::GetTransformAnchorsForHandedness(::GlobalNamespace::HandMenu_MenuHandedness  handedness, ::by_ref<::UnityEngine::Transform*>  palmAnchor, ::by_ref<::UnityEngine::Transform*>  palmAnchorOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"GetTransformAnchorsForHandedness", {}, {::i2c::type_of<::GlobalNamespace::HandMenu_MenuHandedness>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handedness, palmAnchor, palmAnchorOffset);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::GetReferenceUpDirection(::UnityEngine::Transform*  cameraTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"GetReferenceUpDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, cameraTransform);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::PalmMeetsRequirements(::UnityEngine::Transform*  cameraTransform, ::UnityEngine::Transform*  palmAnchor, bool  isRightHand, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>  currentPresent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"PalmMeetsRequirements", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraTransform, palmAnchor, isRightHand, currentPresent);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::TryGetCamera(::by_ref<::UnityEngine::Transform*>  cameraTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"TryGetCamera", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraTransform);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::AngleToDot(float_t  angleDeg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"AngleToDot", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, angleDeg);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::_OnEnable_b__80_0(::Unity::Mathematics::float3  newPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"<OnEnable>b__80_0", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPosition);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::_OnEnable_b__80_1(::UnityEngine::Quaternion  newRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"<OnEnable>b__80_1", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRot);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::_OnEnable_b__80_2(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"<OnEnable>b__80_2", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::_OnEnable_b__80_3(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>(),
                        {"<OnEnable>b__80_3", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu* UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu::HandMenu()   {
}

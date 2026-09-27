#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrabGlow.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_GlowState_impl.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_GlowType_impl.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_GrabState_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_GlowState_def.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_GlowType_def.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_GrabState_def.hpp"
#include "Oculus/Interaction/zzzz__HandVisual_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__MaterialPropertyBlockEditor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa405174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa405234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4052d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4053d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.SetMaterialPropertyBlockValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::SetMaterialPropertyBlockValues)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa4054d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"SetMaterialPropertyBlockValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.UpdateFingerGlowStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(int32_t, float_t)>(&::Oculus::Interaction::HandGrabGlow::UpdateFingerGlowStrength)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa405610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateFingerGlowStrength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.FingerOptionalOrRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrabGlow::*)(::Oculus::Interaction::GrabAPI::GrabbingRule, ::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::HandGrabGlow::FingerOptionalOrRequired)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa40566c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"FingerOptionalOrRequired", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.UpdateGlowStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::UpdateGlowStrength)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0xa405708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateGlowStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.UpdateGlowState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::UpdateGlowState)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa406024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateGlowState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.UpdateGlowColorAndFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::UpdateGlowColorAndFade)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa4061a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateGlowColorAndFade", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.TargetSupportsPinch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::TargetSupportsPinch)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa405c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"TargetSupportsPinch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.TargetSupportsPalm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::TargetSupportsPalm)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa405e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"TargetSupportsPalm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.UpdateGrabState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::UpdateGrabState)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0xa4062f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateGrabState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.ClearGlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::ClearGlow)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4066cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"ClearGlow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.UpdateVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::UpdateVisual)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa40676c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.InjectAllHandGrabGlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::UnityEngine::SkinnedMeshRenderer*, ::Oculus::Interaction::MaterialPropertyBlockEditor*, ::Oculus::Interaction::HandVisual*, ::UnityEngine::Color, ::UnityEngine::Color, float_t, float_t, float_t, bool, float_t, ::GlobalNamespace::HandGrabGlow_GlowType)>(&::Oculus::Interaction::HandGrabGlow::InjectAllHandGrabGlow)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4067d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectAllHandGrabGlow", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>(), ::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::HandGrabGlow_GlowType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.InjectHandGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&::Oculus::Interaction::HandGrabGlow::InjectHandGrabInteractor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa4068e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.InjectHandRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(::UnityEngine::SkinnedMeshRenderer*)>(&::Oculus::Interaction::HandGrabGlow::InjectHandRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa406a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectHandRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.InjectMaterialPropertyBlockEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::HandGrabGlow::InjectMaterialPropertyBlockEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa406a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.InjectHandVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(::Oculus::Interaction::HandVisual*)>(&::Oculus::Interaction::HandGrabGlow::InjectHandVisual)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa406a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectHandVisual", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.InjectGlowColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::Oculus::Interaction::HandGrabGlow::InjectGlowColors)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa406a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectGlowColors", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.InjectVisualChangeSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(float_t, float_t, float_t)>(&::Oculus::Interaction::HandGrabGlow::InjectVisualChangeSpeed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa406a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectVisualChangeSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.InjectFadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(bool)>(&::Oculus::Interaction::HandGrabGlow::InjectFadeOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa406a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectFadeOut", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.InjectGradientLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(float_t)>(&::Oculus::Interaction::HandGrabGlow::InjectGradientLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa406a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectGradientLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow.InjectGlowType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)(::GlobalNamespace::HandGrabGlow_GlowType)>(&::Oculus::Interaction::HandGrabGlow::InjectGlowType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa406a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectGlowType", {}, {::i2c::type_of<::GlobalNamespace::HandGrabGlow_GlowType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrabGlow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrabGlow::*)()>(&::Oculus::Interaction::HandGrabGlow::_ctor)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa406a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__handGrabInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__handGrabInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractor;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__handGrabInteractor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabInteractor = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandVisual>& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__handVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handVisual;
}
constexpr ::UnityW<::Oculus::Interaction::HandVisual> const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__handVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handVisual;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__handVisual(::UnityW<::Oculus::Interaction::HandVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handVisual = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__handRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__handRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handRenderer;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__handRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handRenderer = value;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__materialEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialEditor;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__materialEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialEditor;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__materialEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialEditor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowColorGrabing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorGrabing;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowColorGrabing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorGrabing;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__glowColorGrabing(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowColorGrabing = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowColorHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorHover;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowColorHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorHover;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__glowColorHover(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowColorHover = value;
}
constexpr float_t& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__colorChangeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorChangeSpeed;
}
constexpr float_t const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__colorChangeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorChangeSpeed;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__colorChangeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorChangeSpeed = value;
}
constexpr float_t& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowFadeStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowFadeStartTime;
}
constexpr float_t const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowFadeStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowFadeStartTime;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__glowFadeStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowFadeStartTime = value;
}
constexpr float_t& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowStrengthChangeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowStrengthChangeSpeed;
}
constexpr float_t const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowStrengthChangeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowStrengthChangeSpeed;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__glowStrengthChangeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowStrengthChangeSpeed = value;
}
constexpr bool& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__fadeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOut;
}
constexpr bool const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__fadeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOut;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__fadeOut(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeOut = value;
}
constexpr float_t& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__gradientLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gradientLength;
}
constexpr float_t const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__gradientLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gradientLength;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__gradientLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gradientLength = value;
}
constexpr ::GlobalNamespace::HandGrabGlow_GlowType& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowType;
}
constexpr ::GlobalNamespace::HandGrabGlow_GlowType const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowType;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__glowType(::GlobalNamespace::HandGrabGlow_GlowType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowType = value;
}
constexpr ::GlobalNamespace::HandGrabGlow_GlowState& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::HandGrabGlow_GlowState const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__state(::GlobalNamespace::HandGrabGlow_GlowState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr float_t& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__accumulatedSelectedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedSelectedTime;
}
constexpr float_t const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__accumulatedSelectedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedSelectedTime;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__accumulatedSelectedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____accumulatedSelectedTime = value;
}
constexpr ::GlobalNamespace::HandGrabGlow_GrabState& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__grabState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabState;
}
constexpr ::GlobalNamespace::HandGrabGlow_GrabState const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__grabState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabState;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__grabState(::GlobalNamespace::HandGrabGlow_GrabState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabState = value;
}
constexpr float_t& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowFadeValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowFadeValue;
}
constexpr float_t const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowFadeValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowFadeValue;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__glowFadeValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowFadeValue = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__currentColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__currentColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentColor;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__currentColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentColor = value;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor*& Oculus::Interaction::HandGrabGlow::__cordl_internal_get_HandGrabInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandGrabInteractor;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get_HandGrabInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandGrabInteractor;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set_HandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandGrabInteractor = value;
}
constexpr ::Oculus::Interaction::IInteractor*& Oculus::Interaction::HandGrabGlow::__cordl_internal_get_Interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactor;
}
constexpr ::Oculus::Interaction::IInteractor* const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get_Interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactor;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set_Interactor(::Oculus::Interaction::IInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Interactor = value;
}
constexpr ::ArrayW<float_t>& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowStregth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowStregth;
}
constexpr ::ArrayW<float_t> const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowStregth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowStregth;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__glowStregth(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowStregth = value;
}
constexpr int32_t& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__generateGlowID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____generateGlowID;
}
constexpr int32_t const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__generateGlowID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____generateGlowID;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__generateGlowID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____generateGlowID = value;
}
constexpr int32_t& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowColorID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorID;
}
constexpr int32_t const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowColorID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorID;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__glowColorID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowColorID = value;
}
constexpr int32_t& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowTypeID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowTypeID;
}
constexpr int32_t const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowTypeID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowTypeID;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__glowTypeID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowTypeID = value;
}
constexpr int32_t& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowParameterID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowParameterID;
}
constexpr int32_t const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__glowParameterID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowParameterID;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__glowParameterID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowParameterID = value;
}
constexpr ::ArrayW<int32_t>& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__fingersGlowIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersGlowIDs;
}
constexpr ::ArrayW<int32_t> const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__fingersGlowIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersGlowIDs;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__fingersGlowIDs(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingersGlowIDs = value;
}
constexpr bool& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandGrabGlow::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandGrabGlow::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::HandGrabGlow::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::SetMaterialPropertyBlockValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"SetMaterialPropertyBlockValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::UpdateFingerGlowStrength(int32_t  fingerIndex, float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateFingerGlowStrength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerIndex, strength);
}
inline bool Oculus::Interaction::HandGrabGlow::FingerOptionalOrRequired(::Oculus::Interaction::GrabAPI::GrabbingRule  rules, ::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"FingerOptionalOrRequired", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rules, finger);
}
inline void Oculus::Interaction::HandGrabGlow::UpdateGlowStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateGlowStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::UpdateGlowState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateGlowState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::UpdateGlowColorAndFade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateGlowColorAndFade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrabGlow::TargetSupportsPinch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"TargetSupportsPinch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrabGlow::TargetSupportsPalm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"TargetSupportsPalm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::UpdateGrabState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateGrabState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::ClearGlow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"ClearGlow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::UpdateVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"UpdateVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrabGlow::InjectAllHandGrabGlow(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::UnityEngine::SkinnedMeshRenderer*  handRenderer, ::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor, ::Oculus::Interaction::HandVisual*  handVisual, ::UnityEngine::Color  grabbingColor, ::UnityEngine::Color  hoverColor, float_t  colorChangeSpeed, float_t  fadeStartTime, float_t  glowStrengthChangeSpeed, bool  fadeOut, float_t  gradientLength, ::GlobalNamespace::HandGrabGlow_GlowType  glowType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectAllHandGrabGlow", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>(), ::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::HandGrabGlow_GlowType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabInteractor, handRenderer, materialEditor, handVisual, grabbingColor, hoverColor, colorChangeSpeed, fadeStartTime, glowStrengthChangeSpeed, fadeOut, gradientLength, glowType);
}
inline void Oculus::Interaction::HandGrabGlow::InjectHandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabInteractor);
}
inline void Oculus::Interaction::HandGrabGlow::InjectHandRenderer(::UnityEngine::SkinnedMeshRenderer*  handRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectHandRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handRenderer);
}
inline void Oculus::Interaction::HandGrabGlow::InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialEditor);
}
inline void Oculus::Interaction::HandGrabGlow::InjectHandVisual(::Oculus::Interaction::HandVisual*  handVisual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectHandVisual", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handVisual);
}
inline void Oculus::Interaction::HandGrabGlow::InjectGlowColors(::UnityEngine::Color  grabbingColor, ::UnityEngine::Color  hoverColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectGlowColors", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingColor, hoverColor);
}
inline void Oculus::Interaction::HandGrabGlow::InjectVisualChangeSpeed(float_t  colorChangeSpeed, float_t  fadeStartTime, float_t  glowStrengthChangeSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectVisualChangeSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorChangeSpeed, fadeStartTime, glowStrengthChangeSpeed);
}
inline void Oculus::Interaction::HandGrabGlow::InjectFadeOut(bool  fadeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectFadeOut", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fadeOut);
}
inline void Oculus::Interaction::HandGrabGlow::InjectGradientLength(float_t  gradientLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectGradientLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gradientLength);
}
inline void Oculus::Interaction::HandGrabGlow::InjectGlowType(::GlobalNamespace::HandGrabGlow_GlowType  glowType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {"InjectGlowType", {}, {::i2c::type_of<::GlobalNamespace::HandGrabGlow_GlowType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glowType);
}
inline void Oculus::Interaction::HandGrabGlow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrabGlow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrabGlow* Oculus::Interaction::HandGrabGlow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrabGlow*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrabGlow::HandGrabGlow()   {
}

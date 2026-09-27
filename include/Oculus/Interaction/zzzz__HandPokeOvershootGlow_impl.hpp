#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandPokeOvershootGlow.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "Oculus/Interaction/zzzz__HandPokeOvershootGlow_GlowType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__HandPokeOvershootGlow_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__HandPokeOvershootGlow_GlowType_def.hpp"
#include "Oculus/Interaction/zzzz__HandVisual_def.hpp"
#include "Oculus/Interaction/zzzz__MaterialPropertyBlockEditor_def.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)()>(&::Oculus::Interaction::HandPokeOvershootGlow::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa406cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)()>(&::Oculus::Interaction::HandPokeOvershootGlow::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa406d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)()>(&::Oculus::Interaction::HandPokeOvershootGlow::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa406df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)()>(&::Oculus::Interaction::HandPokeOvershootGlow::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa406ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.UpdateOvershoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(float_t)>(&::Oculus::Interaction::HandPokeOvershootGlow::UpdateOvershoot)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa406f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"UpdateOvershoot", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.UpdateVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)()>(&::Oculus::Interaction::HandPokeOvershootGlow::UpdateVisual)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa407080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"UpdateVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.InjectAllHandPokeOvershootGlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::PokeInteractor*, ::Oculus::Interaction::MaterialPropertyBlockEditor*, ::UnityEngine::Color, float_t, ::UnityEngine::Transform*, ::GlobalNamespace::HandPokeOvershootGlow_GlowType)>(&::Oculus::Interaction::HandPokeOvershootGlow::InjectAllHandPokeOvershootGlow)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa4071ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectAllHandPokeOvershootGlow", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PokeInteractor*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::HandPokeOvershootGlow_GlowType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.InjectAllHandPokeOvershootGlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::PokeInteractor*, ::Oculus::Interaction::HandVisual*, ::UnityEngine::SkinnedMeshRenderer*, ::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::HandPokeOvershootGlow::InjectAllHandPokeOvershootGlow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa407348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectAllHandPokeOvershootGlow", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PokeInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandPokeOvershootGlow::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa407278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.InjectPokeInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(::Oculus::Interaction::PokeInteractor*)>(&::Oculus::Interaction::HandPokeOvershootGlow::InjectPokeInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4073b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectPokeInteractor", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.InjectHandRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(::UnityEngine::SkinnedMeshRenderer*)>(&::Oculus::Interaction::HandPokeOvershootGlow::InjectHandRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4073c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectHandRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.InjectHandVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(::Oculus::Interaction::HandVisual*)>(&::Oculus::Interaction::HandPokeOvershootGlow::InjectHandVisual)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4073c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectHandVisual", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.InjectMaterialPropertyBlockEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::HandPokeOvershootGlow::InjectMaterialPropertyBlockEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4073d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.InjectGlowColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(::UnityEngine::Color)>(&::Oculus::Interaction::HandPokeOvershootGlow::InjectGlowColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4073d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectGlowColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.InjectOvershootMaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(float_t)>(&::Oculus::Interaction::HandPokeOvershootGlow::InjectOvershootMaxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4073e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectOvershootMaxDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow.InjectGlowType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)(::GlobalNamespace::HandPokeOvershootGlow_GlowType)>(&::Oculus::Interaction::HandPokeOvershootGlow::InjectGlowType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4073ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectGlowType", {}, {::i2c::type_of<::GlobalNamespace::HandPokeOvershootGlow_GlowType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPokeOvershootGlow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPokeOvershootGlow::*)()>(&::Oculus::Interaction::HandPokeOvershootGlow::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa4073f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::UnityW<::Oculus::Interaction::PokeInteractor>& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__pokeInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pokeInteractor;
}
constexpr ::UnityW<::Oculus::Interaction::PokeInteractor> const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__pokeInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pokeInteractor;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__pokeInteractor(::UnityW<::Oculus::Interaction::PokeInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pokeInteractor = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandVisual>& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__handVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handVisual;
}
constexpr ::UnityW<::Oculus::Interaction::HandVisual> const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__handVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handVisual;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__handVisual(::UnityW<::Oculus::Interaction::HandVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handVisual = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__handRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__handRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handRenderer;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__handRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handRenderer = value;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__materialEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialEditor;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__materialEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialEditor;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__materialEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialEditor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColor;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__glowColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowColor = value;
}
constexpr float_t& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__overshootMaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overshootMaxDistance;
}
constexpr float_t const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__overshootMaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overshootMaxDistance;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__overshootMaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overshootMaxDistance = value;
}
constexpr ::Oculus::Interaction::Input::HandFinger& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__pokeFinger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pokeFinger;
}
constexpr ::Oculus::Interaction::Input::HandFinger const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__pokeFinger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pokeFinger;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__pokeFinger(::Oculus::Interaction::Input::HandFinger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pokeFinger = value;
}
constexpr float_t& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__maxGradientLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxGradientLength;
}
constexpr float_t const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__maxGradientLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxGradientLength;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__maxGradientLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxGradientLength = value;
}
constexpr ::GlobalNamespace::HandPokeOvershootGlow_GlowType& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowType;
}
constexpr ::GlobalNamespace::HandPokeOvershootGlow_GlowType const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowType;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__glowType(::GlobalNamespace::HandPokeOvershootGlow_GlowType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowType = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get_Hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get_Hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hand = value;
}
constexpr bool& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowEnabled;
}
constexpr bool const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowEnabled;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__glowEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowEnabled = value;
}
constexpr int32_t& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowFingerIndexID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowFingerIndexID;
}
constexpr int32_t const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowFingerIndexID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowFingerIndexID;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__glowFingerIndexID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowFingerIndexID = value;
}
constexpr int32_t& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__generateGlowID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____generateGlowID;
}
constexpr int32_t const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__generateGlowID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____generateGlowID;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__generateGlowID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____generateGlowID = value;
}
constexpr int32_t& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowColorID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorID;
}
constexpr int32_t const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowColorID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorID;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__glowColorID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowColorID = value;
}
constexpr int32_t& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowTypeID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowTypeID;
}
constexpr int32_t const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowTypeID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowTypeID;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__glowTypeID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowTypeID = value;
}
constexpr int32_t& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowParameterID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowParameterID;
}
constexpr int32_t const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowParameterID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowParameterID;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__glowParameterID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowParameterID = value;
}
constexpr int32_t& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowMaxLengthID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowMaxLengthID;
}
constexpr int32_t const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__glowMaxLengthID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowMaxLengthID;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__glowMaxLengthID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowMaxLengthID = value;
}
constexpr bool& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandPokeOvershootGlow::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::HandPokeOvershootGlow::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::UpdateOvershoot(float_t  normalizedDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"UpdateOvershoot", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normalizedDistance);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::UpdateVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"UpdateVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::InjectAllHandPokeOvershootGlow(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PokeInteractor*  pokeInteractor, ::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor, ::UnityEngine::Color  glowColor, float_t  distanceMultiplier, ::UnityEngine::Transform*  wristTransform, ::GlobalNamespace::HandPokeOvershootGlow_GlowType  glowType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectAllHandPokeOvershootGlow", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PokeInteractor*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::HandPokeOvershootGlow_GlowType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, pokeInteractor, materialEditor, glowColor, distanceMultiplier, wristTransform, glowType);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::InjectAllHandPokeOvershootGlow(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PokeInteractor*  pokeInteractor, ::Oculus::Interaction::HandVisual*  handVisual, ::UnityEngine::SkinnedMeshRenderer*  handRenderer, ::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectAllHandPokeOvershootGlow", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PokeInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, pokeInteractor, handVisual, handRenderer, materialEditor);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::InjectPokeInteractor(::Oculus::Interaction::PokeInteractor*  pokeInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectPokeInteractor", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pokeInteractor);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::InjectHandRenderer(::UnityEngine::SkinnedMeshRenderer*  handRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectHandRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handRenderer);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::InjectHandVisual(::Oculus::Interaction::HandVisual*  handVisual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectHandVisual", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handVisual);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialEditor);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::InjectGlowColor(::UnityEngine::Color  glowColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectGlowColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glowColor);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::InjectOvershootMaxDistance(float_t  overshootMaxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectOvershootMaxDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overshootMaxDistance);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::InjectGlowType(::GlobalNamespace::HandPokeOvershootGlow_GlowType  glowType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {"InjectGlowType", {}, {::i2c::type_of<::GlobalNamespace::HandPokeOvershootGlow_GlowType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glowType);
}
inline void Oculus::Interaction::HandPokeOvershootGlow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPokeOvershootGlow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandPokeOvershootGlow* Oculus::Interaction::HandPokeOvershootGlow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandPokeOvershootGlow*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandPokeOvershootGlow::HandPokeOvershootGlow()   {
}

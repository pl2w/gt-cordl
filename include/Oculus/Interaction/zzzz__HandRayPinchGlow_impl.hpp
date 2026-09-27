#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandRayPinchGlow.hpp"
#include "Oculus/Interaction/zzzz__HandRayPinchGlow_GlowType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__HandRayPinchGlow_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__HandRayPinchGlow_GlowType_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__MaterialPropertyBlockEditor_def.hpp"
#include "Oculus/Interaction/zzzz__RayInteractor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)()>(&::Oculus::Interaction::HandRayPinchGlow::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa407548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)()>(&::Oculus::Interaction::HandRayPinchGlow::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4075b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)()>(&::Oculus::Interaction::HandRayPinchGlow::OnEnable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa4075d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)()>(&::Oculus::Interaction::HandRayPinchGlow::OnDisable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa407aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.UpdateVisualState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::HandRayPinchGlow::UpdateVisualState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa407bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"UpdateVisualState", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.UpdateGlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)(::UnityEngine::Vector3, float_t, float_t)>(&::Oculus::Interaction::HandRayPinchGlow::UpdateGlow)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa407bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"UpdateGlow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.UpdateVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)()>(&::Oculus::Interaction::HandRayPinchGlow::UpdateVisual)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0xa40770c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"UpdateVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.InjectAllHandRayPinchGlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::RayInteractor*, ::Oculus::Interaction::MaterialPropertyBlockEditor*, ::UnityEngine::Color, ::GlobalNamespace::HandRayPinchGlow_GlowType)>(&::Oculus::Interaction::HandRayPinchGlow::InjectAllHandRayPinchGlow)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa407d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectAllHandRayPinchGlow", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::RayInteractor*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::HandRayPinchGlow_GlowType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandRayPinchGlow::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa407d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.InjectRayInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::RayInteractor*)>(&::Oculus::Interaction::HandRayPinchGlow::InjectRayInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa407e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectRayInteractor", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.InjectMaterialPropertyBlockEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::HandRayPinchGlow::InjectMaterialPropertyBlockEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa407e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.InjectGlowColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)(::UnityEngine::Color)>(&::Oculus::Interaction::HandRayPinchGlow::InjectGlowColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa407e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectGlowColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow.InjectGlowType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)(::GlobalNamespace::HandRayPinchGlow_GlowType)>(&::Oculus::Interaction::HandRayPinchGlow::InjectGlowType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa407e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectGlowType", {}, {::i2c::type_of<::GlobalNamespace::HandRayPinchGlow_GlowType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayPinchGlow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayPinchGlow::*)()>(&::Oculus::Interaction::HandRayPinchGlow::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa407e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractor>& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__rayInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractor;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractor> const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__rayInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractor;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__rayInteractor(::UnityW<::Oculus::Interaction::RayInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayInteractor = value;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__materialEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialEditor;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__materialEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialEditor;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__materialEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialEditor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColor;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__glowColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowColor = value;
}
constexpr ::GlobalNamespace::HandRayPinchGlow_GlowType& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowType;
}
constexpr ::GlobalNamespace::HandRayPinchGlow_GlowType const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowType;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__glowType(::GlobalNamespace::HandRayPinchGlow_GlowType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowType = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get_Hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get_Hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hand = value;
}
constexpr int32_t& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__generateGlowID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____generateGlowID;
}
constexpr int32_t const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__generateGlowID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____generateGlowID;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__generateGlowID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____generateGlowID = value;
}
constexpr int32_t& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowPositionID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowPositionID;
}
constexpr int32_t const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowPositionID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowPositionID;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__glowPositionID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowPositionID = value;
}
constexpr int32_t& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowColorID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorID;
}
constexpr int32_t const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowColorID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorID;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__glowColorID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowColorID = value;
}
constexpr int32_t& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowTypeID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowTypeID;
}
constexpr int32_t const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowTypeID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowTypeID;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__glowTypeID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowTypeID = value;
}
constexpr int32_t& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowParameterID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowParameterID;
}
constexpr int32_t const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowParameterID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowParameterID;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__glowParameterID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowParameterID = value;
}
constexpr int32_t& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowMaxLengthID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowMaxLengthID;
}
constexpr int32_t const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowMaxLengthID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowMaxLengthID;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__glowMaxLengthID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowMaxLengthID = value;
}
constexpr bool& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowEnabled;
}
constexpr bool const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__glowEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowEnabled;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__glowEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowEnabled = value;
}
constexpr bool& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandRayPinchGlow::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandRayPinchGlow::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::HandRayPinchGlow::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayPinchGlow::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayPinchGlow::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayPinchGlow::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayPinchGlow::UpdateVisualState(::Oculus::Interaction::InteractorStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"UpdateVisualState", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Oculus::Interaction::HandRayPinchGlow::UpdateGlow(::UnityEngine::Vector3  glowPosition, float_t  pinchStrength, float_t  glowMaxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"UpdateGlow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glowPosition, pinchStrength, glowMaxLength);
}
inline void Oculus::Interaction::HandRayPinchGlow::UpdateVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"UpdateVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayPinchGlow::InjectAllHandRayPinchGlow(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::RayInteractor*  interactor, ::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor, ::UnityEngine::Color  color, ::GlobalNamespace::HandRayPinchGlow_GlowType  glowType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectAllHandRayPinchGlow", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::RayInteractor*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::HandRayPinchGlow_GlowType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, interactor, materialEditor, color, glowType);
}
inline void Oculus::Interaction::HandRayPinchGlow::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandRayPinchGlow::InjectRayInteractor(::Oculus::Interaction::RayInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectRayInteractor", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::HandRayPinchGlow::InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialEditor);
}
inline void Oculus::Interaction::HandRayPinchGlow::InjectGlowColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectGlowColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Oculus::Interaction::HandRayPinchGlow::InjectGlowType(::GlobalNamespace::HandRayPinchGlow_GlowType  glowType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {"InjectGlowType", {}, {::i2c::type_of<::GlobalNamespace::HandRayPinchGlow_GlowType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glowType);
}
inline void Oculus::Interaction::HandRayPinchGlow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayPinchGlow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandRayPinchGlow* Oculus::Interaction::HandRayPinchGlow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandRayPinchGlow*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandRayPinchGlow::HandRayPinchGlow()   {
}

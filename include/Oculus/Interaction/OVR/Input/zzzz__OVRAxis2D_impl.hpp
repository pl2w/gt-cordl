#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVR/Input/OVRAxis2D.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Axis2D_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/OVR/Input/zzzz__OVRAxis2D_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OVR::Input::OVRAxis2D.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Oculus::Interaction::OVR::Input::OVRAxis2D::*)()>(&::Oculus::Interaction::OVR::Input::OVRAxis2D::Value)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa41b250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRAxis2D*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVR::Input::OVRAxis2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OVR::Input::OVRAxis2D::*)()>(&::Oculus::Interaction::OVR::Input::OVRAxis2D::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRAxis2D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_Controller& Oculus::Interaction::OVR::Input::OVRAxis2D::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& Oculus::Interaction::OVR::Input::OVRAxis2D::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::OVR::Input::OVRAxis2D::__cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::GlobalNamespace::OVRInput_Axis2D& Oculus::Interaction::OVR::Input::OVRAxis2D::__cordl_internal_get__axis2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr ::GlobalNamespace::OVRInput_Axis2D const& Oculus::Interaction::OVR::Input::OVRAxis2D::__cordl_internal_get__axis2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr void Oculus::Interaction::OVR::Input::OVRAxis2D::__cordl_internal_set__axis2D(::GlobalNamespace::OVRInput_Axis2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis2D = value;
}
inline ::UnityEngine::Vector2 Oculus::Interaction::OVR::Input::OVRAxis2D::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRAxis2D*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Oculus::Interaction::OVR::Input::OVRAxis2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRAxis2D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OVR::Input::OVRAxis2D* Oculus::Interaction::OVR::Input::OVRAxis2D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OVR::Input::OVRAxis2D*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis2D"
constexpr  Oculus::Interaction::OVR::Input::OVRAxis2D::operator ::Oculus::Interaction::Input::IAxis2D*() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis2D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IAxis2D"
constexpr ::Oculus::Interaction::Input::IAxis2D* Oculus::Interaction::OVR::Input::OVRAxis2D::i___Oculus__Interaction__Input__IAxis2D() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis2D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OVR::Input::OVRAxis2D::OVRAxis2D()   {
}

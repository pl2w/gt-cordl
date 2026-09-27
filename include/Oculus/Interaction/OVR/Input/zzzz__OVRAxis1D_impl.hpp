#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVR/Input/OVRAxis1D.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Axis1D_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/OVR/Input/zzzz__OVRAxis1D_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/OVR/Input/zzzz__OVRAxis1D_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OVR::Input::OVRAxis1D.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::OVR::Input::OVRAxis1D::*)()>(&::Oculus::Interaction::OVR::Input::OVRAxis1D::Value)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa41b118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRAxis1D*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVR::Input::OVRAxis1D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OVR::Input::OVRAxis1D::*)()>(&::Oculus::Interaction::OVR::Input::OVRAxis1D::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa41b1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRAxis1D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_Controller& Oculus::Interaction::OVR::Input::OVRAxis1D::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& Oculus::Interaction::OVR::Input::OVRAxis1D::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::OVR::Input::OVRAxis1D::__cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::GlobalNamespace::OVRInput_Axis1D& Oculus::Interaction::OVR::Input::OVRAxis1D::__cordl_internal_get__axis1D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis1D;
}
constexpr ::GlobalNamespace::OVRInput_Axis1D const& Oculus::Interaction::OVR::Input::OVRAxis1D::__cordl_internal_get__axis1D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis1D;
}
constexpr void Oculus::Interaction::OVR::Input::OVRAxis1D::__cordl_internal_set__axis1D(::GlobalNamespace::OVRInput_Axis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis1D = value;
}
constexpr ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*& Oculus::Interaction::OVR::Input::OVRAxis1D::__cordl_internal_get__remapConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapConfig;
}
constexpr ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig* const& Oculus::Interaction::OVR::Input::OVRAxis1D::__cordl_internal_get__remapConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapConfig;
}
constexpr void Oculus::Interaction::OVR::Input::OVRAxis1D::__cordl_internal_set__remapConfig(::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remapConfig = value;
}
inline float_t Oculus::Interaction::OVR::Input::OVRAxis1D::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRAxis1D*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::OVR::Input::OVRAxis1D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRAxis1D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OVR::Input::OVRAxis1D* Oculus::Interaction::OVR::Input::OVRAxis1D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OVR::Input::OVRAxis1D*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr  Oculus::Interaction::OVR::Input::OVRAxis1D::operator ::Oculus::Interaction::Input::IAxis1D*() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::OVR::Input::OVRAxis1D::i___Oculus__Interaction__Input__IAxis1D() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OVR::Input::OVRAxis1D::OVRAxis1D()   {
}
//  Writing Method size for method: ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::*)()>(&::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41b248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::__cordl_internal_get_Curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Curve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::__cordl_internal_get_Curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Curve;
}
constexpr void Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::__cordl_internal_set_Curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Curve = value;
}
inline void Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig* Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig::OVRAxis1D_RemapConfig()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/UsageAxis2DMapping.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Axis2D_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAxis2DUsage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__UsageAxis2DMapping_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Axis2D_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAxis2DUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IUsage_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageAxis2DMapping.get_Usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ControllerAxis2DUsage (::Oculus::Interaction::Input::UsageAxis2DMapping::*)()>(&::Oculus::Interaction::Input::UsageAxis2DMapping::get_Usage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41beec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis2DMapping*>(),
                        {"get_Usage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageAxis2DMapping.get_Axis2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Axis2D (::Oculus::Interaction::Input::UsageAxis2DMapping::*)()>(&::Oculus::Interaction::Input::UsageAxis2DMapping::get_Axis2D)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41bef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis2DMapping*>(),
                        {"get_Axis2D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageAxis2DMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::UsageAxis2DMapping::*)(::Oculus::Interaction::Input::ControllerAxis2DUsage, ::GlobalNamespace::OVRInput_Axis2D)>(&::Oculus::Interaction::Input::UsageAxis2DMapping::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa41befc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis2DMapping*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerAxis2DUsage>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Axis2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageAxis2DMapping.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::UsageAxis2DMapping::*)(::Oculus::Interaction::Input::ControllerDataAsset*, ::GlobalNamespace::OVRInput_Controller)>(&::Oculus::Interaction::Input::UsageAxis2DMapping::Apply)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa41bf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis2DMapping*>(),
                        {"Apply", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage& Oculus::Interaction::Input::UsageAxis2DMapping::__cordl_internal_get__Usage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Usage_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage const& Oculus::Interaction::Input::UsageAxis2DMapping::__cordl_internal_get__Usage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Usage_k__BackingField;
}
constexpr void Oculus::Interaction::Input::UsageAxis2DMapping::__cordl_internal_set__Usage_k__BackingField(::Oculus::Interaction::Input::ControllerAxis2DUsage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Usage_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRInput_Axis2D& Oculus::Interaction::Input::UsageAxis2DMapping::__cordl_internal_get__Axis2D_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis2D_k__BackingField;
}
constexpr ::GlobalNamespace::OVRInput_Axis2D const& Oculus::Interaction::Input::UsageAxis2DMapping::__cordl_internal_get__Axis2D_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis2D_k__BackingField;
}
constexpr void Oculus::Interaction::Input::UsageAxis2DMapping::__cordl_internal_set__Axis2D_k__BackingField(::GlobalNamespace::OVRInput_Axis2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Axis2D_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::ControllerAxis2DUsage Oculus::Interaction::Input::UsageAxis2DMapping::get_Usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis2DMapping*>(),
                        {"get_Usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ControllerAxis2DUsage>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_Axis2D Oculus::Interaction::Input::UsageAxis2DMapping::get_Axis2D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis2DMapping*>(),
                        {"get_Axis2D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Axis2D>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::UsageAxis2DMapping::_ctor(::Oculus::Interaction::Input::ControllerAxis2DUsage  usage, ::GlobalNamespace::OVRInput_Axis2D  axis2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis2DMapping*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerAxis2DUsage>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Axis2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage, axis2D);
}
inline void Oculus::Interaction::Input::UsageAxis2DMapping::Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis2DMapping*>(),
                        {"Apply", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerDataAsset, controllerMask);
}
inline ::Oculus::Interaction::Input::UsageAxis2DMapping* Oculus::Interaction::Input::UsageAxis2DMapping::New_ctor(::Oculus::Interaction::Input::ControllerAxis2DUsage  usage, ::GlobalNamespace::OVRInput_Axis2D  axis2D)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::UsageAxis2DMapping*>(usage, axis2D));
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IUsage"
constexpr  Oculus::Interaction::Input::UsageAxis2DMapping::operator ::Oculus::Interaction::Input::IUsage*() noexcept {
return static_cast<::Oculus::Interaction::Input::IUsage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IUsage"
constexpr ::Oculus::Interaction::Input::IUsage* Oculus::Interaction::Input::UsageAxis2DMapping::i___Oculus__Interaction__Input__IUsage() noexcept {
return static_cast<::Oculus::Interaction::Input::IUsage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::UsageAxis2DMapping::UsageAxis2DMapping()   {
}

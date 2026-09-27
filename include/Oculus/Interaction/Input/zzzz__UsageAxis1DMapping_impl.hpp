#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/UsageAxis1DMapping.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Axis1D_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAxis1DUsage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__UsageAxis1DMapping_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Axis1D_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAxis1DUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IUsage_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageAxis1DMapping.get_Usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ControllerAxis1DUsage (::Oculus::Interaction::Input::UsageAxis1DMapping::*)()>(&::Oculus::Interaction::Input::UsageAxis1DMapping::get_Usage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41be28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis1DMapping*>(),
                        {"get_Usage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageAxis1DMapping.get_Axis1D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Axis1D (::Oculus::Interaction::Input::UsageAxis1DMapping::*)()>(&::Oculus::Interaction::Input::UsageAxis1DMapping::get_Axis1D)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41be30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis1DMapping*>(),
                        {"get_Axis1D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageAxis1DMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::UsageAxis1DMapping::*)(::Oculus::Interaction::Input::ControllerAxis1DUsage, ::GlobalNamespace::OVRInput_Axis1D)>(&::Oculus::Interaction::Input::UsageAxis1DMapping::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa41be38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis1DMapping*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerAxis1DUsage>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Axis1D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageAxis1DMapping.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::UsageAxis1DMapping::*)(::Oculus::Interaction::Input::ControllerDataAsset*, ::GlobalNamespace::OVRInput_Controller)>(&::Oculus::Interaction::Input::UsageAxis1DMapping::Apply)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa41be64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis1DMapping*>(),
                        {"Apply", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::ControllerAxis1DUsage& Oculus::Interaction::Input::UsageAxis1DMapping::__cordl_internal_get__Usage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Usage_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::ControllerAxis1DUsage const& Oculus::Interaction::Input::UsageAxis1DMapping::__cordl_internal_get__Usage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Usage_k__BackingField;
}
constexpr void Oculus::Interaction::Input::UsageAxis1DMapping::__cordl_internal_set__Usage_k__BackingField(::Oculus::Interaction::Input::ControllerAxis1DUsage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Usage_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRInput_Axis1D& Oculus::Interaction::Input::UsageAxis1DMapping::__cordl_internal_get__Axis1D_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis1D_k__BackingField;
}
constexpr ::GlobalNamespace::OVRInput_Axis1D const& Oculus::Interaction::Input::UsageAxis1DMapping::__cordl_internal_get__Axis1D_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis1D_k__BackingField;
}
constexpr void Oculus::Interaction::Input::UsageAxis1DMapping::__cordl_internal_set__Axis1D_k__BackingField(::GlobalNamespace::OVRInput_Axis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Axis1D_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::ControllerAxis1DUsage Oculus::Interaction::Input::UsageAxis1DMapping::get_Usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis1DMapping*>(),
                        {"get_Usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ControllerAxis1DUsage>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_Axis1D Oculus::Interaction::Input::UsageAxis1DMapping::get_Axis1D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis1DMapping*>(),
                        {"get_Axis1D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Axis1D>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::UsageAxis1DMapping::_ctor(::Oculus::Interaction::Input::ControllerAxis1DUsage  usage, ::GlobalNamespace::OVRInput_Axis1D  axis1D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis1DMapping*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerAxis1DUsage>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Axis1D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage, axis1D);
}
inline void Oculus::Interaction::Input::UsageAxis1DMapping::Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageAxis1DMapping*>(),
                        {"Apply", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerDataAsset, controllerMask);
}
inline ::Oculus::Interaction::Input::UsageAxis1DMapping* Oculus::Interaction::Input::UsageAxis1DMapping::New_ctor(::Oculus::Interaction::Input::ControllerAxis1DUsage  usage, ::GlobalNamespace::OVRInput_Axis1D  axis1D)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::UsageAxis1DMapping*>(usage, axis1D));
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IUsage"
constexpr  Oculus::Interaction::Input::UsageAxis1DMapping::operator ::Oculus::Interaction::Input::IUsage*() noexcept {
return static_cast<::Oculus::Interaction::Input::IUsage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IUsage"
constexpr ::Oculus::Interaction::Input::IUsage* Oculus::Interaction::Input::UsageAxis1DMapping::i___Oculus__Interaction__Input__IUsage() noexcept {
return static_cast<::Oculus::Interaction::Input::IUsage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::UsageAxis1DMapping::UsageAxis1DMapping()   {
}

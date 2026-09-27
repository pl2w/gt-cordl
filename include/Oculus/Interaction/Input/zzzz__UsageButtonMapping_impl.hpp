#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/UsageButtonMapping.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Button_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__UsageButtonMapping_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Button_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IUsage_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageButtonMapping.get_Usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ControllerButtonUsage (::Oculus::Interaction::Input::UsageButtonMapping::*)()>(&::Oculus::Interaction::Input::UsageButtonMapping::get_Usage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41bd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageButtonMapping*>(),
                        {"get_Usage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageButtonMapping.get_Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Button (::Oculus::Interaction::Input::UsageButtonMapping::*)()>(&::Oculus::Interaction::Input::UsageButtonMapping::get_Button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41bd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageButtonMapping*>(),
                        {"get_Button", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageButtonMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::UsageButtonMapping::*)(::Oculus::Interaction::Input::ControllerButtonUsage, ::GlobalNamespace::OVRInput_Button)>(&::Oculus::Interaction::Input::UsageButtonMapping::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa41bd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageButtonMapping*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageButtonMapping.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::UsageButtonMapping::*)(::Oculus::Interaction::Input::ControllerDataAsset*, ::GlobalNamespace::OVRInput_Controller)>(&::Oculus::Interaction::Input::UsageButtonMapping::Apply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa41bd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageButtonMapping*>(),
                        {"Apply", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage& Oculus::Interaction::Input::UsageButtonMapping::__cordl_internal_get__Usage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Usage_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage const& Oculus::Interaction::Input::UsageButtonMapping::__cordl_internal_get__Usage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Usage_k__BackingField;
}
constexpr void Oculus::Interaction::Input::UsageButtonMapping::__cordl_internal_set__Usage_k__BackingField(::Oculus::Interaction::Input::ControllerButtonUsage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Usage_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRInput_Button& Oculus::Interaction::Input::UsageButtonMapping::__cordl_internal_get__Button_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Button_k__BackingField;
}
constexpr ::GlobalNamespace::OVRInput_Button const& Oculus::Interaction::Input::UsageButtonMapping::__cordl_internal_get__Button_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Button_k__BackingField;
}
constexpr void Oculus::Interaction::Input::UsageButtonMapping::__cordl_internal_set__Button_k__BackingField(::GlobalNamespace::OVRInput_Button  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Button_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::ControllerButtonUsage Oculus::Interaction::Input::UsageButtonMapping::get_Usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageButtonMapping*>(),
                        {"get_Usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ControllerButtonUsage>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_Button Oculus::Interaction::Input::UsageButtonMapping::get_Button()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageButtonMapping*>(),
                        {"get_Button", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Button>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::UsageButtonMapping::_ctor(::Oculus::Interaction::Input::ControllerButtonUsage  usage, ::GlobalNamespace::OVRInput_Button  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageButtonMapping*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage, button);
}
inline void Oculus::Interaction::Input::UsageButtonMapping::Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageButtonMapping*>(),
                        {"Apply", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerDataAsset, controllerMask);
}
inline ::Oculus::Interaction::Input::UsageButtonMapping* Oculus::Interaction::Input::UsageButtonMapping::New_ctor(::Oculus::Interaction::Input::ControllerButtonUsage  usage, ::GlobalNamespace::OVRInput_Button  button)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::UsageButtonMapping*>(usage, button));
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IUsage"
constexpr  Oculus::Interaction::Input::UsageButtonMapping::operator ::Oculus::Interaction::Input::IUsage*() noexcept {
return static_cast<::Oculus::Interaction::Input::IUsage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IUsage"
constexpr ::Oculus::Interaction::Input::IUsage* Oculus::Interaction::Input::UsageButtonMapping::i___Oculus__Interaction__Input__IUsage() noexcept {
return static_cast<::Oculus::Interaction::Input::IUsage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::UsageButtonMapping::UsageButtonMapping()   {
}

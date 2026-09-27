#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/UsageTouchMapping.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Touch_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__UsageTouchMapping_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Touch_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IUsage_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageTouchMapping.get_Usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ControllerButtonUsage (::Oculus::Interaction::Input::UsageTouchMapping::*)()>(&::Oculus::Interaction::Input::UsageTouchMapping::get_Usage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41bc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageTouchMapping*>(),
                        {"get_Usage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageTouchMapping.get_Touch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Touch (::Oculus::Interaction::Input::UsageTouchMapping::*)()>(&::Oculus::Interaction::Input::UsageTouchMapping::get_Touch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41bc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageTouchMapping*>(),
                        {"get_Touch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageTouchMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::UsageTouchMapping::*)(::Oculus::Interaction::Input::ControllerButtonUsage, ::GlobalNamespace::OVRInput_Touch)>(&::Oculus::Interaction::Input::UsageTouchMapping::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa41bca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageTouchMapping*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Touch>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::UsageTouchMapping.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::UsageTouchMapping::*)(::Oculus::Interaction::Input::ControllerDataAsset*, ::GlobalNamespace::OVRInput_Controller)>(&::Oculus::Interaction::Input::UsageTouchMapping::Apply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa41bccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageTouchMapping*>(),
                        {"Apply", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage& Oculus::Interaction::Input::UsageTouchMapping::__cordl_internal_get__Usage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Usage_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage const& Oculus::Interaction::Input::UsageTouchMapping::__cordl_internal_get__Usage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Usage_k__BackingField;
}
constexpr void Oculus::Interaction::Input::UsageTouchMapping::__cordl_internal_set__Usage_k__BackingField(::Oculus::Interaction::Input::ControllerButtonUsage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Usage_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRInput_Touch& Oculus::Interaction::Input::UsageTouchMapping::__cordl_internal_get__Touch_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Touch_k__BackingField;
}
constexpr ::GlobalNamespace::OVRInput_Touch const& Oculus::Interaction::Input::UsageTouchMapping::__cordl_internal_get__Touch_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Touch_k__BackingField;
}
constexpr void Oculus::Interaction::Input::UsageTouchMapping::__cordl_internal_set__Touch_k__BackingField(::GlobalNamespace::OVRInput_Touch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Touch_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::ControllerButtonUsage Oculus::Interaction::Input::UsageTouchMapping::get_Usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageTouchMapping*>(),
                        {"get_Usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ControllerButtonUsage>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_Touch Oculus::Interaction::Input::UsageTouchMapping::get_Touch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageTouchMapping*>(),
                        {"get_Touch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Touch>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::UsageTouchMapping::_ctor(::Oculus::Interaction::Input::ControllerButtonUsage  usage, ::GlobalNamespace::OVRInput_Touch  touch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageTouchMapping*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Touch>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage, touch);
}
inline void Oculus::Interaction::Input::UsageTouchMapping::Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::UsageTouchMapping*>(),
                        {"Apply", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerDataAsset, controllerMask);
}
inline ::Oculus::Interaction::Input::UsageTouchMapping* Oculus::Interaction::Input::UsageTouchMapping::New_ctor(::Oculus::Interaction::Input::ControllerButtonUsage  usage, ::GlobalNamespace::OVRInput_Touch  touch)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::UsageTouchMapping*>(usage, touch));
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IUsage"
constexpr  Oculus::Interaction::Input::UsageTouchMapping::operator ::Oculus::Interaction::Input::IUsage*() noexcept {
return static_cast<::Oculus::Interaction::Input::IUsage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IUsage"
constexpr ::Oculus::Interaction::Input::IUsage* Oculus::Interaction::Input::UsageTouchMapping::i___Oculus__Interaction__Input__IUsage() noexcept {
return static_cast<::Oculus::Interaction::Input::IUsage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::UsageTouchMapping::UsageTouchMapping()   {
}

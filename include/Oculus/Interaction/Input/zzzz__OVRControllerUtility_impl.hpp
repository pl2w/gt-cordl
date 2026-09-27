#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRControllerUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__OVRControllerUtility_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRControllerUtility.GetPinchAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::OVRInput_Controller)>(&::Oculus::Interaction::Input::OVRControllerUtility::GetPinchAmount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa41fbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRControllerUtility*>(),
                        {"GetPinchAmount", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRControllerUtility.GetIndexCurl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::OVRInput_Controller)>(&::Oculus::Interaction::Input::OVRControllerUtility::GetIndexCurl)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa41b87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRControllerUtility*>(),
                        {"GetIndexCurl", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRControllerUtility.GetIndexSlide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::OVRInput_Controller)>(&::Oculus::Interaction::Input::OVRControllerUtility::GetIndexSlide)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa41b944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRControllerUtility*>(),
                        {"GetIndexSlide", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRControllerUtility.SupportsAnalogIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::Oculus::Interaction::Input::OVRControllerUtility::SupportsAnalogIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa41fc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRControllerUtility*>(),
                        {"SupportsAnalogIndex", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Oculus::Interaction::Input::OVRControllerUtility::GetPinchAmount(::GlobalNamespace::OVRInput_Controller  ovrController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRControllerUtility*>(),
                        {"GetPinchAmount", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ovrController);
}
inline float_t Oculus::Interaction::Input::OVRControllerUtility::GetIndexCurl(::GlobalNamespace::OVRInput_Controller  ovrController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRControllerUtility*>(),
                        {"GetIndexCurl", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ovrController);
}
inline float_t Oculus::Interaction::Input::OVRControllerUtility::GetIndexSlide(::GlobalNamespace::OVRInput_Controller  ovrController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRControllerUtility*>(),
                        {"GetIndexSlide", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ovrController);
}
inline bool Oculus::Interaction::Input::OVRControllerUtility::SupportsAnalogIndex(::GlobalNamespace::OVRInput_Controller  ovrController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRControllerUtility*>(),
                        {"SupportsAnalogIndex", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ovrController);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::OVRControllerUtility::OVRControllerUtility()   {
}

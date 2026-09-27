#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/HandFingerUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandFingerUtils_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandFinger_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerUtils.ToFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Compatibility::OVR::HandFingerFlags (*)(::Oculus::Interaction::Input::Compatibility::OVR::HandFinger)>(&::Oculus::Interaction::Input::Compatibility::OVR::HandFingerUtils::ToFlags)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa5154f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandFingerUtils*>(),
                        {"ToFlags", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerFlags Oculus::Interaction::Input::Compatibility::OVR::HandFingerUtils::ToFlags(::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  handFinger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandFingerUtils*>(),
                        {"ToFlags", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Compatibility::OVR::HandFingerFlags>(nullptr, ___internal_method, handFinger);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerUtils::HandFingerUtils()   {
}

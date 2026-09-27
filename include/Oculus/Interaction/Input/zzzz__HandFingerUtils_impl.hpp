#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandFingerUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerUtils_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandFingerUtils.ToFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::HandFingerUtils::ToFlags)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa500890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandFingerUtils*>(),
                        {"ToFlags", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::Input::HandFingerFlags Oculus::Interaction::Input::HandFingerUtils::ToFlags(::Oculus::Interaction::Input::HandFinger  handFinger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandFingerUtils*>(),
                        {"ToFlags", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFingerFlags>(nullptr, ___internal_method, handFinger);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandFingerUtils::HandFingerUtils()   {
}

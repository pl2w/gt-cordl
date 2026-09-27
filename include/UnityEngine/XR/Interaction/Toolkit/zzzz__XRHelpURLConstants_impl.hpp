#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRHelpURLConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRHelpURLConstants_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants.get_currentDocsVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants::get_currentDocsVersion)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb41d734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants*>(),
                        {"get_currentDocsVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants::get_currentDocsVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants*>(),
                        {"get_currentDocsVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants::XRHelpURLConstants()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderPlatformSetter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderPlatformSetter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShaderPlatformSetter.HandleRuntimeInitializeOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ShaderPlatformSetter::HandleRuntimeInitializeOnLoad)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x569b968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShaderPlatformSetter*>(),
                        {"HandleRuntimeInitializeOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ShaderPlatformSetter::HandleRuntimeInitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShaderPlatformSetter*>(),
                        {"HandleRuntimeInitializeOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderPlatformSetter::ShaderPlatformSetter()   {
}

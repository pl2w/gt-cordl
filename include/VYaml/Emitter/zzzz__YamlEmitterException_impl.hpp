#pragma once
// IWYU pragma private; include "VYaml/Emitter/YamlEmitterException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "VYaml/Emitter/zzzz__YamlEmitterException_def.hpp"
//  Writing Method size for method: ::VYaml::Emitter::YamlEmitterException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::YamlEmitterException::*)(::StringW)>(&::VYaml::Emitter::YamlEmitterException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb96c730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::YamlEmitterException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Emitter::YamlEmitterException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::YamlEmitterException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
/// @brief [NullableContext(1)]
inline ::VYaml::Emitter::YamlEmitterException* VYaml::Emitter::YamlEmitterException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Emitter::YamlEmitterException*>(message));
}
// Ctor Parameters []
constexpr ::VYaml::Emitter::YamlEmitterException::YamlEmitterException()   {
}

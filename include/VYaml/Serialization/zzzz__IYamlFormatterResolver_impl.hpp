#pragma once
// IWYU pragma private; include "VYaml/Serialization/IYamlFormatterResolver.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::IYamlFormatterResolver::GetFormatter()  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::VYaml::Serialization::IYamlFormatterResolver*>(), 0}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::IYamlFormatter_1<T>*>(this, ___internal_method);
}

#pragma once
// IWYU pragma private; include "VYaml/Serialization/IYamlFormatter_1.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
template<typename T>
inline void VYaml::Serialization::IYamlFormatter_1<T>::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, T  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::VYaml::Serialization::IYamlFormatter_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
template<typename T>
inline T VYaml::Serialization::IYamlFormatter_1<T>::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::VYaml::Serialization::IYamlFormatter_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, parser, context);
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
template<typename T>
constexpr  VYaml::Serialization::IYamlFormatter_1<T>::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
template<typename T>
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::IYamlFormatter_1<T>::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}

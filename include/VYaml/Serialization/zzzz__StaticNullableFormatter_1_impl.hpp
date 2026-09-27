#pragma once
// IWYU pragma private; include "VYaml/Serialization/StaticNullableFormatter_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__StaticNullableFormatter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
template<typename T>
constexpr ::VYaml::Serialization::IYamlFormatter_1<T>*& VYaml::Serialization::StaticNullableFormatter_1<T>::__cordl_internal_get_underlyingFormatter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underlyingFormatter;
}
template<typename T>
constexpr ::VYaml::Serialization::IYamlFormatter_1<T>* const& VYaml::Serialization::StaticNullableFormatter_1<T>::__cordl_internal_get_underlyingFormatter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underlyingFormatter;
}
template<typename T>
constexpr void VYaml::Serialization::StaticNullableFormatter_1<T>::__cordl_internal_set_underlyingFormatter(::VYaml::Serialization::IYamlFormatter_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___underlyingFormatter = value;
}
template<typename T>
inline void VYaml::Serialization::StaticNullableFormatter_1<T>::_ctor(/* [Nullable(new[] { 1, 0 })] */ ::VYaml::Serialization::IYamlFormatter_1<T>*  underlyingFormatter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::StaticNullableFormatter_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatter_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, underlyingFormatter);
}
template<typename T>
inline void VYaml::Serialization::StaticNullableFormatter_1<T>::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, ::System::Nullable_1<T>  value, /* [Nullable(1)] */ ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::StaticNullableFormatter_1<T>*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Nullable_1<T>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
template<typename T>
inline ::System::Nullable_1<T> VYaml::Serialization::StaticNullableFormatter_1<T>::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, /* [Nullable(1)] */ ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::StaticNullableFormatter_1<T>*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<T>>(this, ___internal_method, parser, context);
}
template<typename T>
inline ::VYaml::Serialization::StaticNullableFormatter_1<T>* VYaml::Serialization::StaticNullableFormatter_1<T>::New_ctor(/* [Nullable(new[] { 1, 0 })] */ ::VYaml::Serialization::IYamlFormatter_1<T>*  underlyingFormatter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::StaticNullableFormatter_1<T>*>(underlyingFormatter));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<T>>"
template<typename T>
constexpr  VYaml::Serialization::StaticNullableFormatter_1<T>::operator ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<T>>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<T>>"
template<typename T>
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<T>>* VYaml::Serialization::StaticNullableFormatter_1<T>::i___VYaml__Serialization__IYamlFormatter_1___System__Nullable_1_T__() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<T>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
template<typename T>
constexpr  VYaml::Serialization::StaticNullableFormatter_1<T>::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
template<typename T>
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::StaticNullableFormatter_1<T>::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Serialization::StaticNullableFormatter_1<T>::StaticNullableFormatter_1()   {
}

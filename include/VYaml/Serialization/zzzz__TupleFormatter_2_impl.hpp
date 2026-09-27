#pragma once
// IWYU pragma private; include "VYaml/Serialization/TupleFormatter_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__TupleFormatter_2_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
template<typename T1,typename T2>
inline void VYaml::Serialization::TupleFormatter_2<T1,T2>::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 2, 1, 1 })] */ ::System::Tuple_2<T1,T2>*  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::TupleFormatter_2<T1,T2>*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Tuple_2<T1,T2>*>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
template<typename T1,typename T2>
inline ::System::Tuple_2<T1,T2>* VYaml::Serialization::TupleFormatter_2<T1,T2>::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::TupleFormatter_2<T1,T2>*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<T1,T2>*>(this, ___internal_method, parser, context);
}
template<typename T1,typename T2>
inline void VYaml::Serialization::TupleFormatter_2<T1,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::TupleFormatter_2<T1,T2>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2>
inline ::VYaml::Serialization::TupleFormatter_2<T1,T2>* VYaml::Serialization::TupleFormatter_2<T1,T2>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::TupleFormatter_2<T1,T2>*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_2<T1,T2>*>"
template<typename T1,typename T2>
constexpr  VYaml::Serialization::TupleFormatter_2<T1,T2>::operator ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_2<T1,T2>*>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_2<T1,T2>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_2<T1,T2>*>"
template<typename T1,typename T2>
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_2<T1,T2>*>* VYaml::Serialization::TupleFormatter_2<T1,T2>::i___VYaml__Serialization__IYamlFormatter_1___System__Tuple_2_T1_T2___() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_2<T1,T2>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
template<typename T1,typename T2>
constexpr  VYaml::Serialization::TupleFormatter_2<T1,T2>::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
template<typename T1,typename T2>
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::TupleFormatter_2<T1,T2>::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::VYaml::Serialization::TupleFormatter_2<T1,T2>::TupleFormatter_2()   {
}

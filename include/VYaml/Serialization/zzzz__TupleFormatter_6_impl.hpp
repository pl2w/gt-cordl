#pragma once
// IWYU pragma private; include "VYaml/Serialization/TupleFormatter_6.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__TupleFormatter_6_def.hpp"
#include "System/zzzz__Tuple_6_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 2, 1, 1, 1, 1, 1, 1 })] */ ::System::Tuple_6<T1,T2,T3,T4,T5,T6>*  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Tuple_6<T1,T2,T3,T4,T5,T6>*>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline ::System::Tuple_6<T1,T2,T3,T4,T5,T6>* VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Tuple_6<T1,T2,T3,T4,T5,T6>*>(this, ___internal_method, parser, context);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline ::VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>* VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_6<T1,T2,T3,T4,T5,T6>*>"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
constexpr  VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>::operator ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_6<T1,T2,T3,T4,T5,T6>*>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_6<T1,T2,T3,T4,T5,T6>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_6<T1,T2,T3,T4,T5,T6>*>"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_6<T1,T2,T3,T4,T5,T6>*>* VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>::i___VYaml__Serialization__IYamlFormatter_1___System__Tuple_6_T1_T2_T3_T4_T5_T6___() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_6<T1,T2,T3,T4,T5,T6>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
constexpr  VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
constexpr ::VYaml::Serialization::TupleFormatter_6<T1,T2,T3,T4,T5,T6>::TupleFormatter_6()   {
}

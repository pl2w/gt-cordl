#pragma once
// IWYU pragma private; include "VYaml/Serialization/ValueTupleFormatter_8.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__ValueTupleFormatter_8_def.hpp"
#include "System/zzzz__ValueTuple_8_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
inline void VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 0, 1, 1, 1, 1, 1, 1, 1, 0 })] */ ::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
inline ::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest> VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>(this, ___internal_method, parser, context);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
inline void VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
inline ::VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>* VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
constexpr  VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>::operator ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>* VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>::i___VYaml__Serialization__IYamlFormatter_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7_TRest__() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
constexpr  VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
constexpr ::VYaml::Serialization::ValueTupleFormatter_8<T1,T2,T3,T4,T5,T6,T7,TRest>::ValueTupleFormatter_8()   {
}

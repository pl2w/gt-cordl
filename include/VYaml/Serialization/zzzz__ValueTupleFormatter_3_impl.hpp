#pragma once
// IWYU pragma private; include "VYaml/Serialization/ValueTupleFormatter_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__ValueTupleFormatter_3_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
template<typename T1,typename T2,typename T3>
inline void VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 0, 1, 1, 1 })] */ ::System::ValueTuple_3<T1,T2,T3>  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::ValueTuple_3<T1,T2,T3>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
template<typename T1,typename T2,typename T3>
inline ::System::ValueTuple_3<T1,T2,T3> VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<T1,T2,T3>>(this, ___internal_method, parser, context);
}
template<typename T1,typename T2,typename T3>
inline void VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3>
inline ::VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>* VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_3<T1,T2,T3>>"
template<typename T1,typename T2,typename T3>
constexpr  VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>::operator ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_3<T1,T2,T3>>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_3<T1,T2,T3>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_3<T1,T2,T3>>"
template<typename T1,typename T2,typename T3>
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_3<T1,T2,T3>>* VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>::i___VYaml__Serialization__IYamlFormatter_1___System__ValueTuple_3_T1_T2_T3__() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_3<T1,T2,T3>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
template<typename T1,typename T2,typename T3>
constexpr  VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
template<typename T1,typename T2,typename T3>
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3>
constexpr ::VYaml::Serialization::ValueTupleFormatter_3<T1,T2,T3>::ValueTupleFormatter_3()   {
}

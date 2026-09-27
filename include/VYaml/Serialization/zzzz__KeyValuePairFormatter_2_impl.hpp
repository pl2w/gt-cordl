#pragma once
// IWYU pragma private; include "VYaml/Serialization/KeyValuePairFormatter_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__KeyValuePairFormatter_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
template<typename TKey,typename TValue>
inline void VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 0, 1, 1 })] */ ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(this, ___internal_method, parser, context);
}
template<typename TKey,typename TValue>
inline void VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>* VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>::operator ::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>::i___VYaml__Serialization__IYamlFormatter_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
template<typename TKey,typename TValue>
constexpr  VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
template<typename TKey,typename TValue>
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::VYaml::Serialization::KeyValuePairFormatter_2<TKey,TValue>::KeyValuePairFormatter_2()   {
}

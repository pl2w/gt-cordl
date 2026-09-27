#pragma once
// IWYU pragma private; include "VYaml/Serialization/InterfaceReadOnlyListFormatter_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__InterfaceReadOnlyListFormatter_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
template<typename T>
inline void VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::IReadOnlyList_1<T>*  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
template<typename T>
inline ::System::Collections::Generic::IReadOnlyList_1<T>* VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*>(this, ___internal_method, parser, context);
}
template<typename T>
inline void VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>* VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::IReadOnlyList_1<T>*>"
template<typename T>
constexpr  VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>::operator ::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::IReadOnlyList_1<T>*>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::IReadOnlyList_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::IReadOnlyList_1<T>*>"
template<typename T>
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::IReadOnlyList_1<T>*>* VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>::i___VYaml__Serialization__IYamlFormatter_1___System__Collections__Generic__IReadOnlyList_1_T___() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::IReadOnlyList_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
template<typename T>
constexpr  VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
template<typename T>
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Serialization::InterfaceReadOnlyListFormatter_1<T>::InterfaceReadOnlyListFormatter_1()   {
}

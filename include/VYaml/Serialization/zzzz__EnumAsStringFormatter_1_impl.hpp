#pragma once
// IWYU pragma private; include "VYaml/Serialization/EnumAsStringFormatter_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__EnumAsStringFormatter_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__EnumAsStringFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
template<typename T>
inline void VYaml::Serialization::EnumAsStringFormatter_1<T>::setStaticF_NameValueMapping(::System::Collections::Generic::Dictionary_2<::StringW,T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,T>*, "NameValueMapping", ::VYaml::Serialization::EnumAsStringFormatter_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<::StringW,T>* VYaml::Serialization::EnumAsStringFormatter_1<T>::getStaticF_NameValueMapping()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,T>*, "NameValueMapping", ::VYaml::Serialization::EnumAsStringFormatter_1<T>*>();
}
template<typename T>
inline void VYaml::Serialization::EnumAsStringFormatter_1<T>::setStaticF_ValueNameMapping(::System::Collections::Generic::Dictionary_2<T,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<T,::StringW>*, "ValueNameMapping", ::VYaml::Serialization::EnumAsStringFormatter_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<T,::StringW>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<T,::StringW>* VYaml::Serialization::EnumAsStringFormatter_1<T>::getStaticF_ValueNameMapping()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<T,::StringW>*, "ValueNameMapping", ::VYaml::Serialization::EnumAsStringFormatter_1<T>*>();
}
template<typename T>
inline void VYaml::Serialization::EnumAsStringFormatter_1<T>::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, T  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringFormatter_1<T>*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<T>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
template<typename T>
inline T VYaml::Serialization::EnumAsStringFormatter_1<T>::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringFormatter_1<T>*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, parser, context);
}
template<typename T>
inline void VYaml::Serialization::EnumAsStringFormatter_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringFormatter_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::VYaml::Serialization::EnumAsStringFormatter_1<T>* VYaml::Serialization::EnumAsStringFormatter_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::EnumAsStringFormatter_1<T>*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<T>"
template<typename T>
constexpr  VYaml::Serialization::EnumAsStringFormatter_1<T>::operator ::VYaml::Serialization::IYamlFormatter_1<T>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<T>"
template<typename T>
constexpr ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::EnumAsStringFormatter_1<T>::i___VYaml__Serialization__IYamlFormatter_1_T_() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
template<typename T>
constexpr  VYaml::Serialization::EnumAsStringFormatter_1<T>::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
template<typename T>
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::EnumAsStringFormatter_1<T>::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Serialization::EnumAsStringFormatter_1<T>::EnumAsStringFormatter_1()   {
}
template<typename T>
constexpr ::System::Type*& VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
template<typename T>
constexpr ::System::Type* const& VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
template<typename T>
constexpr void VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
template<typename T>
constexpr ::System::Func_2<::System::Reflection::FieldInfo*,bool>*& VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
template<typename T>
constexpr ::System::Func_2<::System::Reflection::FieldInfo*,bool>* const& VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
template<typename T>
constexpr void VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>::__cordl_internal_set___9__0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
template<typename T>
inline void VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>::__cctor_b__0(::System::Reflection::FieldInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>*>(),
                        {"<.cctor>b__0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
template<typename T>
inline ::VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>* VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>::EnumAsStringFormatter_1___c__DisplayClass2_0()   {
}
template<typename T>
inline void VYaml::Serialization::EnumAsStringFormatter_1___c<T>::setStaticF___9(::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*, "<>9", ::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*>(std::forward<::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*>(value));
}
template<typename T>
inline ::VYaml::Serialization::EnumAsStringFormatter_1___c<T>* VYaml::Serialization::EnumAsStringFormatter_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*, "<>9", ::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*>();
}
template<typename T>
inline void VYaml::Serialization::EnumAsStringFormatter_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::ValueTuple_2<::System::Object*,::StringW> VYaml::Serialization::EnumAsStringFormatter_1___c<T>::__cctor_b__2_1(::System::Object*  v, ::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*>(),
                        {"<.cctor>b__2_1", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Object*,::StringW>>(this, ___internal_method, v, n);
}
template<typename T>
inline ::VYaml::Serialization::EnumAsStringFormatter_1___c<T>* VYaml::Serialization::EnumAsStringFormatter_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Serialization::EnumAsStringFormatter_1___c<T>::EnumAsStringFormatter_1___c()   {
}

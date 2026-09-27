#pragma once
// IWYU pragma private; include "VYaml/Serialization/BuiltinResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__BuiltinResolver_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "VYaml/Serialization/zzzz__BuiltinResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::BuiltinResolver.TryCreateGenericFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::VYaml::Serialization::BuiltinResolver::TryCreateGenericFormatter)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xb9556c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::BuiltinResolver*>(),
                        {"TryCreateGenericFormatter", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::BuiltinResolver.TryCreateGenericFormatterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Type*>*)>(&::VYaml::Serialization::BuiltinResolver::TryCreateGenericFormatterType)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb955910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::BuiltinResolver*>(),
                        {"TryCreateGenericFormatterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Type*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::BuiltinResolver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::BuiltinResolver::*)()>(&::VYaml::Serialization::BuiltinResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb955a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::BuiltinResolver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::BuiltinResolver::setStaticF_Instance(::VYaml::Serialization::BuiltinResolver*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::BuiltinResolver*, "Instance", ::VYaml::Serialization::BuiltinResolver*>(std::forward<::VYaml::Serialization::BuiltinResolver*>(value));
}
inline ::VYaml::Serialization::BuiltinResolver* VYaml::Serialization::BuiltinResolver::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::BuiltinResolver*, "Instance", ::VYaml::Serialization::BuiltinResolver*>();
}
inline void VYaml::Serialization::BuiltinResolver::setStaticF_FormatterMap(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*, "FormatterMap", ::VYaml::Serialization::BuiltinResolver*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>* VYaml::Serialization::BuiltinResolver::getStaticF_FormatterMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*, "FormatterMap", ::VYaml::Serialization::BuiltinResolver*>();
}
inline void VYaml::Serialization::BuiltinResolver::setStaticF_KnownGenericTypes(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*, "KnownGenericTypes", ::VYaml::Serialization::BuiltinResolver*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>* VYaml::Serialization::BuiltinResolver::getStaticF_KnownGenericTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*, "KnownGenericTypes", ::VYaml::Serialization::BuiltinResolver*>();
}
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::BuiltinResolver::GetFormatter()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::BuiltinResolver*>(),
                    {"GetFormatter", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::IYamlFormatter_1<T>*>(this, ___internal_method);
}
inline ::System::Object* VYaml::Serialization::BuiltinResolver::TryCreateGenericFormatter(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::BuiltinResolver*>(),
                        {"TryCreateGenericFormatter", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline ::System::Type* VYaml::Serialization::BuiltinResolver::TryCreateGenericFormatterType(::System::Type*  type, ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Type*>*  knownTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::BuiltinResolver*>(),
                        {"TryCreateGenericFormatterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Type*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type, knownTypes);
}
inline void VYaml::Serialization::BuiltinResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::BuiltinResolver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::BuiltinResolver* VYaml::Serialization::BuiltinResolver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::BuiltinResolver*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr  VYaml::Serialization::BuiltinResolver::operator ::VYaml::Serialization::IYamlFormatterResolver*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatterResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr ::VYaml::Serialization::IYamlFormatterResolver* VYaml::Serialization::BuiltinResolver::i___VYaml__Serialization__IYamlFormatterResolver() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatterResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::BuiltinResolver::BuiltinResolver()   {
}
template<typename T>
inline void VYaml::Serialization::BuiltinResolver_FormatterCache_1<T>::setStaticF_Formatter(::VYaml::Serialization::IYamlFormatter_1<T>*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::IYamlFormatter_1<T>*, "Formatter", ::VYaml::Serialization::BuiltinResolver_FormatterCache_1<T>*>(std::forward<::VYaml::Serialization::IYamlFormatter_1<T>*>(value));
}
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::BuiltinResolver_FormatterCache_1<T>::getStaticF_Formatter()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::IYamlFormatter_1<T>*, "Formatter", ::VYaml::Serialization::BuiltinResolver_FormatterCache_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Serialization::BuiltinResolver_FormatterCache_1<T>::BuiltinResolver_FormatterCache_1()   {
}

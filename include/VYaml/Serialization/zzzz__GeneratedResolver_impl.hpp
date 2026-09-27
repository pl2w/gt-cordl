#pragma once
// IWYU pragma private; include "VYaml/Serialization/GeneratedResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__GeneratedResolver_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "VYaml/Serialization/zzzz__GeneratedResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::GeneratedResolver.TryInvokeRegisterYamlFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::VYaml::Serialization::GeneratedResolver::TryInvokeRegisterYamlFormatter)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb9581a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::GeneratedResolver*>(),
                        {"TryInvokeRegisterYamlFormatter", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::GeneratedResolver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::GeneratedResolver::*)()>(&::VYaml::Serialization::GeneratedResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb958258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::GeneratedResolver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::GeneratedResolver::setStaticF_Instance(::VYaml::Serialization::GeneratedResolver*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::GeneratedResolver*, "Instance", ::VYaml::Serialization::GeneratedResolver*>(std::forward<::VYaml::Serialization::GeneratedResolver*>(value));
}
inline ::VYaml::Serialization::GeneratedResolver* VYaml::Serialization::GeneratedResolver::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::GeneratedResolver*, "Instance", ::VYaml::Serialization::GeneratedResolver*>();
}
inline bool VYaml::Serialization::GeneratedResolver::TryInvokeRegisterYamlFormatter(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::GeneratedResolver*>(),
                        {"TryInvokeRegisterYamlFormatter", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
template<typename T>
inline void VYaml::Serialization::GeneratedResolver::Register(::VYaml::Serialization::IYamlFormatter_1<T>*  formatter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::GeneratedResolver*>(),
                    {"Register", {::i2c::class_of<T>()}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatter_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, formatter);
}
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::GeneratedResolver::GetFormatter()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::GeneratedResolver*>(),
                    {"GetFormatter", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::IYamlFormatter_1<T>*>(this, ___internal_method);
}
inline void VYaml::Serialization::GeneratedResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::GeneratedResolver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::GeneratedResolver* VYaml::Serialization::GeneratedResolver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::GeneratedResolver*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr  VYaml::Serialization::GeneratedResolver::operator ::VYaml::Serialization::IYamlFormatterResolver*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatterResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr ::VYaml::Serialization::IYamlFormatterResolver* VYaml::Serialization::GeneratedResolver::i___VYaml__Serialization__IYamlFormatterResolver() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatterResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::GeneratedResolver::GeneratedResolver()   {
}
template<typename T>
inline void VYaml::Serialization::GeneratedResolver_Cache_1<T>::setStaticF_Formatter(::VYaml::Serialization::IYamlFormatter_1<T>*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::IYamlFormatter_1<T>*, "Formatter", ::VYaml::Serialization::GeneratedResolver_Cache_1<T>*>(std::forward<::VYaml::Serialization::IYamlFormatter_1<T>*>(value));
}
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::GeneratedResolver_Cache_1<T>::getStaticF_Formatter()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::IYamlFormatter_1<T>*, "Formatter", ::VYaml::Serialization::GeneratedResolver_Cache_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Serialization::GeneratedResolver_Cache_1<T>::GeneratedResolver_Cache_1()   {
}
template<typename T>
inline void VYaml::Serialization::GeneratedResolver_Check_1<T>::setStaticF_Registered(bool  value)  {
::cordl_internals::setStaticField<bool, "Registered", ::VYaml::Serialization::GeneratedResolver_Check_1<T>*>(std::forward<bool>(value));
}
template<typename T>
inline bool VYaml::Serialization::GeneratedResolver_Check_1<T>::getStaticF_Registered()  {
return ::cordl_internals::getStaticField<bool, "Registered", ::VYaml::Serialization::GeneratedResolver_Check_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Serialization::GeneratedResolver_Check_1<T>::GeneratedResolver_Check_1()   {
}

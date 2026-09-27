#pragma once
// IWYU pragma private; include "VYaml/Serialization/StandardResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_impl.hpp"
#include "VYaml/Serialization/zzzz__StandardResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__StandardResolver_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::StandardResolver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::StandardResolver::*)()>(&::VYaml::Serialization::StandardResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb958338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::StandardResolver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::StandardResolver::setStaticF_Instance(::VYaml::Serialization::StandardResolver*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::StandardResolver*, "Instance", ::VYaml::Serialization::StandardResolver*>(std::forward<::VYaml::Serialization::StandardResolver*>(value));
}
inline ::VYaml::Serialization::StandardResolver* VYaml::Serialization::StandardResolver::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::StandardResolver*, "Instance", ::VYaml::Serialization::StandardResolver*>();
}
inline void VYaml::Serialization::StandardResolver::setStaticF_DefaultResolvers(::ArrayW<::VYaml::Serialization::IYamlFormatterResolver*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::VYaml::Serialization::IYamlFormatterResolver*>, "DefaultResolvers", ::VYaml::Serialization::StandardResolver*>(std::forward<::ArrayW<::VYaml::Serialization::IYamlFormatterResolver*>>(value));
}
inline ::ArrayW<::VYaml::Serialization::IYamlFormatterResolver*> VYaml::Serialization::StandardResolver::getStaticF_DefaultResolvers()  {
return ::cordl_internals::getStaticField<::ArrayW<::VYaml::Serialization::IYamlFormatterResolver*>, "DefaultResolvers", ::VYaml::Serialization::StandardResolver*>();
}
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::StandardResolver::GetFormatter()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::StandardResolver*>(),
                    {"GetFormatter", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::IYamlFormatter_1<T>*>(this, ___internal_method);
}
inline void VYaml::Serialization::StandardResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::StandardResolver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::StandardResolver* VYaml::Serialization::StandardResolver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::StandardResolver*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr  VYaml::Serialization::StandardResolver::operator ::VYaml::Serialization::IYamlFormatterResolver*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatterResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr ::VYaml::Serialization::IYamlFormatterResolver* VYaml::Serialization::StandardResolver::i___VYaml__Serialization__IYamlFormatterResolver() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatterResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::StandardResolver::StandardResolver()   {
}
template<typename T>
inline void VYaml::Serialization::StandardResolver_FormatterCache_1<T>::setStaticF_Formatter(::VYaml::Serialization::IYamlFormatter_1<T>*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::IYamlFormatter_1<T>*, "Formatter", ::VYaml::Serialization::StandardResolver_FormatterCache_1<T>*>(std::forward<::VYaml::Serialization::IYamlFormatter_1<T>*>(value));
}
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::StandardResolver_FormatterCache_1<T>::getStaticF_Formatter()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::IYamlFormatter_1<T>*, "Formatter", ::VYaml::Serialization::StandardResolver_FormatterCache_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Serialization::StandardResolver_FormatterCache_1<T>::StandardResolver_FormatterCache_1()   {
}

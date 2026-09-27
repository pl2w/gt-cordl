#pragma once
// IWYU pragma private; include "VYaml/Serialization/PrimitiveObjectResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__PrimitiveObjectResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__PrimitiveObjectResolver_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::PrimitiveObjectResolver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::PrimitiveObjectResolver::*)()>(&::VYaml::Serialization::PrimitiveObjectResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9582c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::PrimitiveObjectResolver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::PrimitiveObjectResolver::setStaticF_Instance(::VYaml::Serialization::PrimitiveObjectResolver*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::PrimitiveObjectResolver*, "Instance", ::VYaml::Serialization::PrimitiveObjectResolver*>(std::forward<::VYaml::Serialization::PrimitiveObjectResolver*>(value));
}
inline ::VYaml::Serialization::PrimitiveObjectResolver* VYaml::Serialization::PrimitiveObjectResolver::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::PrimitiveObjectResolver*, "Instance", ::VYaml::Serialization::PrimitiveObjectResolver*>();
}
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::PrimitiveObjectResolver::GetFormatter()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::PrimitiveObjectResolver*>(),
                    {"GetFormatter", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::IYamlFormatter_1<T>*>(this, ___internal_method);
}
inline void VYaml::Serialization::PrimitiveObjectResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::PrimitiveObjectResolver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::PrimitiveObjectResolver* VYaml::Serialization::PrimitiveObjectResolver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::PrimitiveObjectResolver*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr  VYaml::Serialization::PrimitiveObjectResolver::operator ::VYaml::Serialization::IYamlFormatterResolver*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatterResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr ::VYaml::Serialization::IYamlFormatterResolver* VYaml::Serialization::PrimitiveObjectResolver::i___VYaml__Serialization__IYamlFormatterResolver() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatterResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::PrimitiveObjectResolver::PrimitiveObjectResolver()   {
}
template<typename T>
inline void VYaml::Serialization::PrimitiveObjectResolver_FormatterCache_1<T>::setStaticF_Formatter(::VYaml::Serialization::IYamlFormatter_1<T>*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::IYamlFormatter_1<T>*, "Formatter", ::VYaml::Serialization::PrimitiveObjectResolver_FormatterCache_1<T>*>(std::forward<::VYaml::Serialization::IYamlFormatter_1<T>*>(value));
}
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::PrimitiveObjectResolver_FormatterCache_1<T>::getStaticF_Formatter()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::IYamlFormatter_1<T>*, "Formatter", ::VYaml::Serialization::PrimitiveObjectResolver_FormatterCache_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Serialization::PrimitiveObjectResolver_FormatterCache_1<T>::PrimitiveObjectResolver_FormatterCache_1()   {
}

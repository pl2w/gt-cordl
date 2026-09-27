#pragma once
// IWYU pragma private; include "VYaml/Internal/KeyNameMutator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Internal/zzzz__KeyNameMutator_def.hpp"
#include "VYaml/Annotations/zzzz__NamingConvention_def.hpp"
//  Writing Method size for method: ::VYaml::Internal::KeyNameMutator.Mutate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::VYaml::Annotations::NamingConvention)>(&::VYaml::Internal::KeyNameMutator::Mutate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb950f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::KeyNameMutator*>(),
                        {"Mutate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::VYaml::Annotations::NamingConvention>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::KeyNameMutator.ToLowerCamelCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::VYaml::Internal::KeyNameMutator::ToLowerCamelCase)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xb9674ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::KeyNameMutator*>(),
                        {"ToLowerCamelCase", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::KeyNameMutator.ToSnakeCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t)>(&::VYaml::Internal::KeyNameMutator::ToSnakeCase)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xb9676c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::KeyNameMutator*>(),
                        {"ToSnakeCase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW VYaml::Internal::KeyNameMutator::Mutate(::StringW  s, ::VYaml::Annotations::NamingConvention  namingConvention)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::KeyNameMutator*>(),
                        {"Mutate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::VYaml::Annotations::NamingConvention>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, namingConvention);
}
inline ::StringW VYaml::Internal::KeyNameMutator::ToLowerCamelCase(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::KeyNameMutator*>(),
                        {"ToLowerCamelCase", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW VYaml::Internal::KeyNameMutator::ToSnakeCase(::StringW  s, char16_t  separator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::KeyNameMutator*>(),
                        {"ToSnakeCase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, separator);
}
// Ctor Parameters []
constexpr ::VYaml::Internal::KeyNameMutator::KeyNameMutator()   {
}

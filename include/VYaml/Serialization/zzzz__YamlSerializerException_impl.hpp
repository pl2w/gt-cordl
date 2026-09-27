#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlSerializerException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializerException_def.hpp"
#include "VYaml/Parser/zzzz__Marker_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializerException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializerException::*)(::StringW)>(&::VYaml::Serialization::YamlSerializerException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb94fbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializerException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializerException::*)(::VYaml::Parser::Marker, ::StringW)>(&::VYaml::Serialization::YamlSerializerException::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb958654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerException*>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Parser::Marker>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline void VYaml::Serialization::YamlSerializerException::ThrowInvalidType(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializerException*>(),
                    {"ThrowInvalidType", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
inline void VYaml::Serialization::YamlSerializerException::ThrowInvalidType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializerException*>(),
                    {"ThrowInvalidType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void VYaml::Serialization::YamlSerializerException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void VYaml::Serialization::YamlSerializerException::_ctor(::VYaml::Parser::Marker  mark, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerException*>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Parser::Marker>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mark, message);
}
inline ::VYaml::Serialization::YamlSerializerException* VYaml::Serialization::YamlSerializerException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::YamlSerializerException*>(message));
}
inline ::VYaml::Serialization::YamlSerializerException* VYaml::Serialization::YamlSerializerException::New_ctor(::VYaml::Parser::Marker  mark, ::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::YamlSerializerException*>(mark, message));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::YamlSerializerException::YamlSerializerException()   {
}

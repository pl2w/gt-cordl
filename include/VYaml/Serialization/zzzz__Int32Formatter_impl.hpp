#pragma once
// IWYU pragma private; include "VYaml/Serialization/Int32Formatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__Int32Formatter_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::Int32Formatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::Int32Formatter::*)(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>, int32_t, ::VYaml::Serialization::YamlSerializationContext*)>(&::VYaml::Serialization::Int32Formatter::Serialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb95206c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int32Formatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::Int32Formatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Serialization::Int32Formatter::*)(::by_ref<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&::VYaml::Serialization::Int32Formatter::Deserialize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb9520d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int32Formatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::Int32Formatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::Int32Formatter::*)()>(&::VYaml::Serialization::Int32Formatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb952108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int32Formatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::Int32Formatter::setStaticF_Instance(::VYaml::Serialization::Int32Formatter*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::Int32Formatter*, "Instance", ::VYaml::Serialization::Int32Formatter*>(std::forward<::VYaml::Serialization::Int32Formatter*>(value));
}
inline ::VYaml::Serialization::Int32Formatter* VYaml::Serialization::Int32Formatter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::Int32Formatter*, "Instance", ::VYaml::Serialization::Int32Formatter*>();
}
inline void VYaml::Serialization::Int32Formatter::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, int32_t  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int32Formatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
inline int32_t VYaml::Serialization::Int32Formatter::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int32Formatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parser, context);
}
inline void VYaml::Serialization::Int32Formatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int32Formatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::Int32Formatter* VYaml::Serialization::Int32Formatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::Int32Formatter*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<int32_t>"
constexpr  VYaml::Serialization::Int32Formatter::operator ::VYaml::Serialization::IYamlFormatter_1<int32_t>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<int32_t>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<int32_t>* VYaml::Serialization::Int32Formatter::i___VYaml__Serialization__IYamlFormatter_1_int32_t_() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr  VYaml::Serialization::Int32Formatter::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::Int32Formatter::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::Int32Formatter::Int32Formatter()   {
}

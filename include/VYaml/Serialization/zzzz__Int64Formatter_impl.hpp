#pragma once
// IWYU pragma private; include "VYaml/Serialization/Int64Formatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__Int64Formatter_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::Int64Formatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::Int64Formatter::*)(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>, int64_t, ::VYaml::Serialization::YamlSerializationContext*)>(&::VYaml::Serialization::Int64Formatter::Serialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb9523f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int64Formatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::Int64Formatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::VYaml::Serialization::Int64Formatter::*)(::by_ref<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&::VYaml::Serialization::Int64Formatter::Deserialize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb952458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int64Formatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::Int64Formatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::Int64Formatter::*)()>(&::VYaml::Serialization::Int64Formatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb95248c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int64Formatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::Int64Formatter::setStaticF_Instance(::VYaml::Serialization::Int64Formatter*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::Int64Formatter*, "Instance", ::VYaml::Serialization::Int64Formatter*>(std::forward<::VYaml::Serialization::Int64Formatter*>(value));
}
inline ::VYaml::Serialization::Int64Formatter* VYaml::Serialization::Int64Formatter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::Int64Formatter*, "Instance", ::VYaml::Serialization::Int64Formatter*>();
}
inline void VYaml::Serialization::Int64Formatter::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, int64_t  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int64Formatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
inline int64_t VYaml::Serialization::Int64Formatter::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int64Formatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, parser, context);
}
inline void VYaml::Serialization::Int64Formatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::Int64Formatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::Int64Formatter* VYaml::Serialization::Int64Formatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::Int64Formatter*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<int64_t>"
constexpr  VYaml::Serialization::Int64Formatter::operator ::VYaml::Serialization::IYamlFormatter_1<int64_t>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<int64_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<int64_t>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<int64_t>* VYaml::Serialization::Int64Formatter::i___VYaml__Serialization__IYamlFormatter_1_int64_t_() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<int64_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr  VYaml::Serialization::Int64Formatter::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::Int64Formatter::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::Int64Formatter::Int64Formatter()   {
}

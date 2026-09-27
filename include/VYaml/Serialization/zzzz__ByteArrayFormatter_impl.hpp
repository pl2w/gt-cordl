#pragma once
// IWYU pragma private; include "VYaml/Serialization/ByteArrayFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__ByteArrayFormatter_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::ByteArrayFormatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::ByteArrayFormatter::*)(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>, ::ArrayW<uint8_t>, ::VYaml::Serialization::YamlSerializationContext*)>(&::VYaml::Serialization::ByteArrayFormatter::Serialize)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb94ef9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteArrayFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::ByteArrayFormatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::VYaml::Serialization::ByteArrayFormatter::*)(::by_ref<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&::VYaml::Serialization::ByteArrayFormatter::Deserialize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb94f0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteArrayFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::ByteArrayFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::ByteArrayFormatter::*)()>(&::VYaml::Serialization::ByteArrayFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94f1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteArrayFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::ByteArrayFormatter::setStaticF_Instance(::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>*, "Instance", ::VYaml::Serialization::ByteArrayFormatter*>(std::forward<::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>*>(value));
}
inline ::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>* VYaml::Serialization::ByteArrayFormatter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>*, "Instance", ::VYaml::Serialization::ByteArrayFormatter*>();
}
inline void VYaml::Serialization::ByteArrayFormatter::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(2)] */ ::ArrayW<uint8_t>  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteArrayFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
inline ::ArrayW<uint8_t> VYaml::Serialization::ByteArrayFormatter::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteArrayFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, parser, context);
}
inline void VYaml::Serialization::ByteArrayFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteArrayFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::ByteArrayFormatter* VYaml::Serialization::ByteArrayFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::ByteArrayFormatter*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>"
constexpr  VYaml::Serialization::ByteArrayFormatter::operator ::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>* VYaml::Serialization::ByteArrayFormatter::i___VYaml__Serialization__IYamlFormatter_1___ArrayW_uint8_t__() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr  VYaml::Serialization::ByteArrayFormatter::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::ByteArrayFormatter::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::ByteArrayFormatter::ByteArrayFormatter()   {
}

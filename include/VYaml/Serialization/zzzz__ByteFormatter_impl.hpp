#pragma once
// IWYU pragma private; include "VYaml/Serialization/ByteFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__ByteFormatter_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::ByteFormatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::ByteFormatter::*)(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>, uint8_t, ::VYaml::Serialization::YamlSerializationContext*)>(&::VYaml::Serialization::ByteFormatter::Serialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb94f21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::ByteFormatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::VYaml::Serialization::ByteFormatter::*)(::by_ref<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&::VYaml::Serialization::ByteFormatter::Deserialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb94f284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::ByteFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::ByteFormatter::*)()>(&::VYaml::Serialization::ByteFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94f2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::ByteFormatter::setStaticF_Instance(::VYaml::Serialization::ByteFormatter*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::ByteFormatter*, "Instance", ::VYaml::Serialization::ByteFormatter*>(std::forward<::VYaml::Serialization::ByteFormatter*>(value));
}
inline ::VYaml::Serialization::ByteFormatter* VYaml::Serialization::ByteFormatter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::ByteFormatter*, "Instance", ::VYaml::Serialization::ByteFormatter*>();
}
inline void VYaml::Serialization::ByteFormatter::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, uint8_t  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
inline uint8_t VYaml::Serialization::ByteFormatter::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, parser, context);
}
inline void VYaml::Serialization::ByteFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::ByteFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::ByteFormatter* VYaml::Serialization::ByteFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::ByteFormatter*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<uint8_t>"
constexpr  VYaml::Serialization::ByteFormatter::operator ::VYaml::Serialization::IYamlFormatter_1<uint8_t>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<uint8_t>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<uint8_t>* VYaml::Serialization::ByteFormatter::i___VYaml__Serialization__IYamlFormatter_1_uint8_t_() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr  VYaml::Serialization::ByteFormatter::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::ByteFormatter::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::ByteFormatter::ByteFormatter()   {
}

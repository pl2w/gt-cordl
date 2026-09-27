#pragma once
// IWYU pragma private; include "VYaml/Serialization/UriFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__UriFormatter_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::UriFormatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::UriFormatter::*)(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>, ::System::Uri*, ::VYaml::Serialization::YamlSerializationContext*)>(&::VYaml::Serialization::UriFormatter::Serialize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb955004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::UriFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::UriFormatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::VYaml::Serialization::UriFormatter::*)(::by_ref<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&::VYaml::Serialization::UriFormatter::Deserialize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb955088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::UriFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::UriFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::UriFormatter::*)()>(&::VYaml::Serialization::UriFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9551c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::UriFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::UriFormatter::setStaticF_Instance(::VYaml::Serialization::UriFormatter*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::UriFormatter*, "Instance", ::VYaml::Serialization::UriFormatter*>(std::forward<::VYaml::Serialization::UriFormatter*>(value));
}
inline ::VYaml::Serialization::UriFormatter* VYaml::Serialization::UriFormatter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::UriFormatter*, "Instance", ::VYaml::Serialization::UriFormatter*>();
}
inline void VYaml::Serialization::UriFormatter::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, ::System::Uri*  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::UriFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
inline ::System::Uri* VYaml::Serialization::UriFormatter::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::UriFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, parser, context);
}
inline void VYaml::Serialization::UriFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::UriFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::UriFormatter* VYaml::Serialization::UriFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::UriFormatter*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Uri*>"
constexpr  VYaml::Serialization::UriFormatter::operator ::VYaml::Serialization::IYamlFormatter_1<::System::Uri*>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Uri*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Uri*>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Uri*>* VYaml::Serialization::UriFormatter::i___VYaml__Serialization__IYamlFormatter_1___System__Uri__() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Uri*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr  VYaml::Serialization::UriFormatter::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::UriFormatter::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::UriFormatter::UriFormatter()   {
}

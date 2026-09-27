#pragma once
// IWYU pragma private; include "VYaml/Serialization/DateTimeOffsetFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__DateTimeOffsetFormatter_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::DateTimeOffsetFormatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::DateTimeOffsetFormatter::*)(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>, ::System::DateTimeOffset, ::VYaml::Serialization::YamlSerializationContext*)>(&::VYaml::Serialization::DateTimeOffsetFormatter::Serialize)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb950530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::DateTimeOffsetFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::DateTimeOffsetFormatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::VYaml::Serialization::DateTimeOffsetFormatter::*)(::by_ref<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&::VYaml::Serialization::DateTimeOffsetFormatter::Deserialize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xb95071c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::DateTimeOffsetFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::DateTimeOffsetFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::DateTimeOffsetFormatter::*)()>(&::VYaml::Serialization::DateTimeOffsetFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb950904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::DateTimeOffsetFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::DateTimeOffsetFormatter::setStaticF_Instance(::VYaml::Serialization::DateTimeOffsetFormatter*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::DateTimeOffsetFormatter*, "Instance", ::VYaml::Serialization::DateTimeOffsetFormatter*>(std::forward<::VYaml::Serialization::DateTimeOffsetFormatter*>(value));
}
inline ::VYaml::Serialization::DateTimeOffsetFormatter* VYaml::Serialization::DateTimeOffsetFormatter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::DateTimeOffsetFormatter*, "Instance", ::VYaml::Serialization::DateTimeOffsetFormatter*>();
}
inline void VYaml::Serialization::DateTimeOffsetFormatter::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, ::System::DateTimeOffset  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::DateTimeOffsetFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
inline ::System::DateTimeOffset VYaml::Serialization::DateTimeOffsetFormatter::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::DateTimeOffsetFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method, parser, context);
}
inline void VYaml::Serialization::DateTimeOffsetFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::DateTimeOffsetFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::DateTimeOffsetFormatter* VYaml::Serialization::DateTimeOffsetFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::DateTimeOffsetFormatter*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>"
constexpr  VYaml::Serialization::DateTimeOffsetFormatter::operator ::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>* VYaml::Serialization::DateTimeOffsetFormatter::i___VYaml__Serialization__IYamlFormatter_1___System__DateTimeOffset_() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr  VYaml::Serialization::DateTimeOffsetFormatter::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::DateTimeOffsetFormatter::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::DateTimeOffsetFormatter::DateTimeOffsetFormatter()   {
}

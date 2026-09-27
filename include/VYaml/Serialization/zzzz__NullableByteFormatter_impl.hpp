#pragma once
// IWYU pragma private; include "VYaml/Serialization/NullableByteFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__NullableByteFormatter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::NullableByteFormatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::NullableByteFormatter::*)(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>, ::System::Nullable_1<uint8_t>, ::VYaml::Serialization::YamlSerializationContext*)>(&::VYaml::Serialization::NullableByteFormatter::Serialize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb94f364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableByteFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Nullable_1<uint8_t>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::NullableByteFormatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint8_t> (::VYaml::Serialization::NullableByteFormatter::*)(::by_ref<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&::VYaml::Serialization::NullableByteFormatter::Deserialize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb94f4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableByteFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::NullableByteFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::NullableByteFormatter::*)()>(&::VYaml::Serialization::NullableByteFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94f58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableByteFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::NullableByteFormatter::setStaticF_Instance(::VYaml::Serialization::NullableByteFormatter*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::NullableByteFormatter*, "Instance", ::VYaml::Serialization::NullableByteFormatter*>(std::forward<::VYaml::Serialization::NullableByteFormatter*>(value));
}
inline ::VYaml::Serialization::NullableByteFormatter* VYaml::Serialization::NullableByteFormatter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::NullableByteFormatter*, "Instance", ::VYaml::Serialization::NullableByteFormatter*>();
}
inline void VYaml::Serialization::NullableByteFormatter::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, ::System::Nullable_1<uint8_t>  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableByteFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Nullable_1<uint8_t>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
inline ::System::Nullable_1<uint8_t> VYaml::Serialization::NullableByteFormatter::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableByteFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint8_t>>(this, ___internal_method, parser, context);
}
inline void VYaml::Serialization::NullableByteFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableByteFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::NullableByteFormatter* VYaml::Serialization::NullableByteFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::NullableByteFormatter*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint8_t>>"
constexpr  VYaml::Serialization::NullableByteFormatter::operator ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint8_t>>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint8_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint8_t>>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint8_t>>* VYaml::Serialization::NullableByteFormatter::i___VYaml__Serialization__IYamlFormatter_1___System__Nullable_1_uint8_t__() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint8_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr  VYaml::Serialization::NullableByteFormatter::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::NullableByteFormatter::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::NullableByteFormatter::NullableByteFormatter()   {
}

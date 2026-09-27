#pragma once
// IWYU pragma private; include "VYaml/Serialization/NullableUInt16Formatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__NullableUInt16Formatter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::NullableUInt16Formatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::NullableUInt16Formatter::*)(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>, ::System::Nullable_1<uint16_t>, ::VYaml::Serialization::YamlSerializationContext*)>(&::VYaml::Serialization::NullableUInt16Formatter::Serialize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb954668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableUInt16Formatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Nullable_1<uint16_t>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::NullableUInt16Formatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint16_t> (::VYaml::Serialization::NullableUInt16Formatter::*)(::by_ref<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&::VYaml::Serialization::NullableUInt16Formatter::Deserialize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb9547c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableUInt16Formatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::NullableUInt16Formatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::NullableUInt16Formatter::*)()>(&::VYaml::Serialization::NullableUInt16Formatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb954890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableUInt16Formatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::NullableUInt16Formatter::setStaticF_Instance(::VYaml::Serialization::NullableUInt16Formatter*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::NullableUInt16Formatter*, "Instance", ::VYaml::Serialization::NullableUInt16Formatter*>(std::forward<::VYaml::Serialization::NullableUInt16Formatter*>(value));
}
inline ::VYaml::Serialization::NullableUInt16Formatter* VYaml::Serialization::NullableUInt16Formatter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::NullableUInt16Formatter*, "Instance", ::VYaml::Serialization::NullableUInt16Formatter*>();
}
inline void VYaml::Serialization::NullableUInt16Formatter::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, ::System::Nullable_1<uint16_t>  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableUInt16Formatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Nullable_1<uint16_t>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
inline ::System::Nullable_1<uint16_t> VYaml::Serialization::NullableUInt16Formatter::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableUInt16Formatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>>(this, ___internal_method, parser, context);
}
inline void VYaml::Serialization::NullableUInt16Formatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableUInt16Formatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::NullableUInt16Formatter* VYaml::Serialization::NullableUInt16Formatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::NullableUInt16Formatter*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint16_t>>"
constexpr  VYaml::Serialization::NullableUInt16Formatter::operator ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint16_t>>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint16_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint16_t>>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint16_t>>* VYaml::Serialization::NullableUInt16Formatter::i___VYaml__Serialization__IYamlFormatter_1___System__Nullable_1_uint16_t__() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint16_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr  VYaml::Serialization::NullableUInt16Formatter::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::NullableUInt16Formatter::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::NullableUInt16Formatter::NullableUInt16Formatter()   {
}

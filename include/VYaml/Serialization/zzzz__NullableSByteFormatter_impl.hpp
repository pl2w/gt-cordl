#pragma once
// IWYU pragma private; include "VYaml/Serialization/NullableSByteFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__NullableSByteFormatter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::NullableSByteFormatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::NullableSByteFormatter::*)(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>, ::System::Nullable_1<int8_t>, ::VYaml::Serialization::YamlSerializationContext*)>(&::VYaml::Serialization::NullableSByteFormatter::Serialize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb953e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableSByteFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Nullable_1<int8_t>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::NullableSByteFormatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int8_t> (::VYaml::Serialization::NullableSByteFormatter::*)(::by_ref<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&::VYaml::Serialization::NullableSByteFormatter::Deserialize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb953fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableSByteFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::NullableSByteFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::NullableSByteFormatter::*)()>(&::VYaml::Serialization::NullableSByteFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb954098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableSByteFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::NullableSByteFormatter::setStaticF_Instance(::VYaml::Serialization::NullableSByteFormatter*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::NullableSByteFormatter*, "Instance", ::VYaml::Serialization::NullableSByteFormatter*>(std::forward<::VYaml::Serialization::NullableSByteFormatter*>(value));
}
inline ::VYaml::Serialization::NullableSByteFormatter* VYaml::Serialization::NullableSByteFormatter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::NullableSByteFormatter*, "Instance", ::VYaml::Serialization::NullableSByteFormatter*>();
}
inline void VYaml::Serialization::NullableSByteFormatter::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, ::System::Nullable_1<int8_t>  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableSByteFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Nullable_1<int8_t>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
inline ::System::Nullable_1<int8_t> VYaml::Serialization::NullableSByteFormatter::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableSByteFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int8_t>>(this, ___internal_method, parser, context);
}
inline void VYaml::Serialization::NullableSByteFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::NullableSByteFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::NullableSByteFormatter* VYaml::Serialization::NullableSByteFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::NullableSByteFormatter*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<int8_t>>"
constexpr  VYaml::Serialization::NullableSByteFormatter::operator ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<int8_t>>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<int8_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<int8_t>>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<int8_t>>* VYaml::Serialization::NullableSByteFormatter::i___VYaml__Serialization__IYamlFormatter_1___System__Nullable_1_int8_t__() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<int8_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr  VYaml::Serialization::NullableSByteFormatter::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::NullableSByteFormatter::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::NullableSByteFormatter::NullableSByteFormatter()   {
}

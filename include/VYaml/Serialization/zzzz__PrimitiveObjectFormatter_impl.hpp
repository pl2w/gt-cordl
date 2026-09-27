#pragma once
// IWYU pragma private; include "VYaml/Serialization/PrimitiveObjectFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__PrimitiveObjectFormatter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::PrimitiveObjectFormatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::PrimitiveObjectFormatter::*)(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>, ::System::Object*, ::VYaml::Serialization::YamlSerializationContext*)>(&::VYaml::Serialization::PrimitiveObjectFormatter::Serialize)> {
  constexpr static std::size_t size = 0xca0;
  constexpr static std::size_t addrs = 0xb952974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::PrimitiveObjectFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::PrimitiveObjectFormatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::VYaml::Serialization::PrimitiveObjectFormatter::*)(::by_ref<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&::VYaml::Serialization::PrimitiveObjectFormatter::Deserialize)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xb953614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::PrimitiveObjectFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::PrimitiveObjectFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::PrimitiveObjectFormatter::*)()>(&::VYaml::Serialization::PrimitiveObjectFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9539e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::PrimitiveObjectFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::PrimitiveObjectFormatter::setStaticF_Instance(::VYaml::Serialization::PrimitiveObjectFormatter*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::PrimitiveObjectFormatter*, "Instance", ::VYaml::Serialization::PrimitiveObjectFormatter*>(std::forward<::VYaml::Serialization::PrimitiveObjectFormatter*>(value));
}
inline ::VYaml::Serialization::PrimitiveObjectFormatter* VYaml::Serialization::PrimitiveObjectFormatter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::PrimitiveObjectFormatter*, "Instance", ::VYaml::Serialization::PrimitiveObjectFormatter*>();
}
inline void VYaml::Serialization::PrimitiveObjectFormatter::setStaticF_TypeToJumpCode(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "TypeToJumpCode", ::VYaml::Serialization::PrimitiveObjectFormatter*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* VYaml::Serialization::PrimitiveObjectFormatter::getStaticF_TypeToJumpCode()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "TypeToJumpCode", ::VYaml::Serialization::PrimitiveObjectFormatter*>();
}
inline void VYaml::Serialization::PrimitiveObjectFormatter::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(2)] */ ::System::Object*  value, ::VYaml::Serialization::YamlSerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::PrimitiveObjectFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value, context);
}
inline ::System::Object* VYaml::Serialization::PrimitiveObjectFormatter::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::PrimitiveObjectFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlDeserializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parser, context);
}
inline void VYaml::Serialization::PrimitiveObjectFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::PrimitiveObjectFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::PrimitiveObjectFormatter* VYaml::Serialization::PrimitiveObjectFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::PrimitiveObjectFormatter*>());
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Object*>"
constexpr  VYaml::Serialization::PrimitiveObjectFormatter::operator ::VYaml::Serialization::IYamlFormatter_1<::System::Object*>*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Object*>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Object*>* VYaml::Serialization::PrimitiveObjectFormatter::i___VYaml__Serialization__IYamlFormatter_1___System__Object__() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr  VYaml::Serialization::PrimitiveObjectFormatter::operator ::VYaml::Serialization::IYamlFormatter*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* VYaml::Serialization::PrimitiveObjectFormatter::i___VYaml__Serialization__IYamlFormatter() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::PrimitiveObjectFormatter::PrimitiveObjectFormatter()   {
}

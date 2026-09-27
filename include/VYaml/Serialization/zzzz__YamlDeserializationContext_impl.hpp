#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlDeserializationContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VYaml/Parser/zzzz__Anchor_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializerOptions_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::YamlDeserializationContext.get_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::YamlSerializerOptions* (::VYaml::Serialization::YamlDeserializationContext::*)()>(&::VYaml::Serialization::YamlDeserializationContext::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9584c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"get_Options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlDeserializationContext.set_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlDeserializationContext::*)(::VYaml::Serialization::YamlSerializerOptions*)>(&::VYaml::Serialization::YamlDeserializationContext::set_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9584d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"set_Options", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlDeserializationContext.get_Resolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::IYamlFormatterResolver* (::VYaml::Serialization::YamlDeserializationContext::*)()>(&::VYaml::Serialization::YamlDeserializationContext::get_Resolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9584d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"get_Resolver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlDeserializationContext.set_Resolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlDeserializationContext::*)(::VYaml::Serialization::IYamlFormatterResolver*)>(&::VYaml::Serialization::YamlDeserializationContext::set_Resolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9584e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"set_Resolver", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlDeserializationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlDeserializationContext::*)(::VYaml::Serialization::YamlSerializerOptions*)>(&::VYaml::Serialization::YamlDeserializationContext::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb9584e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlDeserializationContext.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlDeserializationContext::*)()>(&::VYaml::Serialization::YamlDeserializationContext::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb95859c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlDeserializationContext.RegisterAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlDeserializationContext::*)(::VYaml::Parser::Anchor*, ::System::Object*)>(&::VYaml::Serialization::YamlDeserializationContext::RegisterAnchor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb9585ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"RegisterAnchor", {}, {::i2c::type_of<::VYaml::Parser::Anchor*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::VYaml::Serialization::YamlSerializerOptions*& VYaml::Serialization::YamlDeserializationContext::__cordl_internal_get__Options_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr ::VYaml::Serialization::YamlSerializerOptions* const& VYaml::Serialization::YamlDeserializationContext::__cordl_internal_get__Options_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr void VYaml::Serialization::YamlDeserializationContext::__cordl_internal_set__Options_k__BackingField(::VYaml::Serialization::YamlSerializerOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Options_k__BackingField = value;
}
constexpr ::VYaml::Serialization::IYamlFormatterResolver*& VYaml::Serialization::YamlDeserializationContext::__cordl_internal_get__Resolver_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolver_k__BackingField;
}
constexpr ::VYaml::Serialization::IYamlFormatterResolver* const& VYaml::Serialization::YamlDeserializationContext::__cordl_internal_get__Resolver_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolver_k__BackingField;
}
constexpr void VYaml::Serialization::YamlDeserializationContext::__cordl_internal_set__Resolver_k__BackingField(::VYaml::Serialization::IYamlFormatterResolver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resolver_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::VYaml::Parser::Anchor*,::System::Object*>*& VYaml::Serialization::YamlDeserializationContext::__cordl_internal_get_aliases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aliases;
}
constexpr ::System::Collections::Generic::Dictionary_2<::VYaml::Parser::Anchor*,::System::Object*>* const& VYaml::Serialization::YamlDeserializationContext::__cordl_internal_get_aliases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aliases;
}
constexpr void VYaml::Serialization::YamlDeserializationContext::__cordl_internal_set_aliases(::System::Collections::Generic::Dictionary_2<::VYaml::Parser::Anchor*,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aliases = value;
}
inline ::VYaml::Serialization::YamlSerializerOptions* VYaml::Serialization::YamlDeserializationContext::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::YamlSerializerOptions*>(this, ___internal_method);
}
inline void VYaml::Serialization::YamlDeserializationContext::set_Options(::VYaml::Serialization::YamlSerializerOptions*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"set_Options", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::VYaml::Serialization::IYamlFormatterResolver* VYaml::Serialization::YamlDeserializationContext::get_Resolver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"get_Resolver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::IYamlFormatterResolver*>(this, ___internal_method);
}
inline void VYaml::Serialization::YamlDeserializationContext::set_Resolver(::VYaml::Serialization::IYamlFormatterResolver*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"set_Resolver", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VYaml::Serialization::YamlDeserializationContext::_ctor(::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void VYaml::Serialization::YamlDeserializationContext::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T VYaml::Serialization::YamlDeserializationContext::DeserializeWithAlias(::by_ref<::VYaml::Parser::YamlParser>  parser)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                    {"DeserializeWithAlias", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, parser);
}
template<typename T>
inline T VYaml::Serialization::YamlDeserializationContext::DeserializeWithAlias(::VYaml::Serialization::IYamlFormatter_1<T>*  innerFormatter, ::by_ref<::VYaml::Parser::YamlParser>  parser)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                    {"DeserializeWithAlias", {::i2c::class_of<T>()}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatter_1<T>*>(), ::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, innerFormatter, parser);
}
inline void VYaml::Serialization::YamlDeserializationContext::RegisterAnchor(::VYaml::Parser::Anchor*  anchor, /* [Nullable(2)] */ ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                        {"RegisterAnchor", {}, {::i2c::type_of<::VYaml::Parser::Anchor*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, value);
}
template<typename T>
inline bool VYaml::Serialization::YamlDeserializationContext::TryResolveCurrentAlias(::by_ref<::VYaml::Parser::YamlParser>  parser, ::by_ref<T>  aliasValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlDeserializationContext*>(),
                    {"TryResolveCurrentAlias", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, parser, aliasValue);
}
inline ::VYaml::Serialization::YamlDeserializationContext* VYaml::Serialization::YamlDeserializationContext::New_ctor(::VYaml::Serialization::YamlSerializerOptions*  options)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::YamlDeserializationContext*>(options));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::YamlDeserializationContext::YamlDeserializationContext()   {
}

#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlSerializerOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializerOptions_def.hpp"
#include "VYaml/Emitter/zzzz__YamlEmitOptions_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializerOptions.get_Standard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::YamlSerializerOptions* (*)()>(&::VYaml::Serialization::YamlSerializerOptions::get_Standard)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb958948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"get_Standard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializerOptions.get_Resolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::IYamlFormatterResolver* (::VYaml::Serialization::YamlSerializerOptions::*)()>(&::VYaml::Serialization::YamlSerializerOptions::get_Resolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb958aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"get_Resolver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializerOptions.set_Resolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializerOptions::*)(::VYaml::Serialization::IYamlFormatterResolver*)>(&::VYaml::Serialization::YamlSerializerOptions::set_Resolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb958ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"set_Resolver", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializerOptions.get_EmitOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Emitter::YamlEmitOptions* (::VYaml::Serialization::YamlSerializerOptions::*)()>(&::VYaml::Serialization::YamlSerializerOptions::get_EmitOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb958ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"get_EmitOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializerOptions.set_EmitOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializerOptions::*)(::VYaml::Emitter::YamlEmitOptions*)>(&::VYaml::Serialization::YamlSerializerOptions::set_EmitOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb958ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"set_EmitOptions", {}, {::i2c::type_of<::VYaml::Emitter::YamlEmitOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializerOptions.get_EnableAliasForDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Serialization::YamlSerializerOptions::*)()>(&::VYaml::Serialization::YamlSerializerOptions::get_EnableAliasForDeserialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb958ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"get_EnableAliasForDeserialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializerOptions.set_EnableAliasForDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializerOptions::*)(bool)>(&::VYaml::Serialization::YamlSerializerOptions::set_EnableAliasForDeserialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb958ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"set_EnableAliasForDeserialization", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializerOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializerOptions::*)()>(&::VYaml::Serialization::YamlSerializerOptions::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb958a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::VYaml::Serialization::IYamlFormatterResolver*& VYaml::Serialization::YamlSerializerOptions::__cordl_internal_get__Resolver_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolver_k__BackingField;
}
constexpr ::VYaml::Serialization::IYamlFormatterResolver* const& VYaml::Serialization::YamlSerializerOptions::__cordl_internal_get__Resolver_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolver_k__BackingField;
}
constexpr void VYaml::Serialization::YamlSerializerOptions::__cordl_internal_set__Resolver_k__BackingField(::VYaml::Serialization::IYamlFormatterResolver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resolver_k__BackingField = value;
}
constexpr ::VYaml::Emitter::YamlEmitOptions*& VYaml::Serialization::YamlSerializerOptions::__cordl_internal_get__EmitOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EmitOptions_k__BackingField;
}
constexpr ::VYaml::Emitter::YamlEmitOptions* const& VYaml::Serialization::YamlSerializerOptions::__cordl_internal_get__EmitOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EmitOptions_k__BackingField;
}
constexpr void VYaml::Serialization::YamlSerializerOptions::__cordl_internal_set__EmitOptions_k__BackingField(::VYaml::Emitter::YamlEmitOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EmitOptions_k__BackingField = value;
}
constexpr bool& VYaml::Serialization::YamlSerializerOptions::__cordl_internal_get__EnableAliasForDeserialization_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableAliasForDeserialization_k__BackingField;
}
constexpr bool const& VYaml::Serialization::YamlSerializerOptions::__cordl_internal_get__EnableAliasForDeserialization_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableAliasForDeserialization_k__BackingField;
}
constexpr void VYaml::Serialization::YamlSerializerOptions::__cordl_internal_set__EnableAliasForDeserialization_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableAliasForDeserialization_k__BackingField = value;
}
inline ::VYaml::Serialization::YamlSerializerOptions* VYaml::Serialization::YamlSerializerOptions::get_Standard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"get_Standard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::YamlSerializerOptions*>(nullptr, ___internal_method);
}
inline ::VYaml::Serialization::IYamlFormatterResolver* VYaml::Serialization::YamlSerializerOptions::get_Resolver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"get_Resolver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::IYamlFormatterResolver*>(this, ___internal_method);
}
inline void VYaml::Serialization::YamlSerializerOptions::set_Resolver(::VYaml::Serialization::IYamlFormatterResolver*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"set_Resolver", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::VYaml::Emitter::YamlEmitOptions* VYaml::Serialization::YamlSerializerOptions::get_EmitOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"get_EmitOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Emitter::YamlEmitOptions*>(this, ___internal_method);
}
inline void VYaml::Serialization::YamlSerializerOptions::set_EmitOptions(::VYaml::Emitter::YamlEmitOptions*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"set_EmitOptions", {}, {::i2c::type_of<::VYaml::Emitter::YamlEmitOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool VYaml::Serialization::YamlSerializerOptions::get_EnableAliasForDeserialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"get_EnableAliasForDeserialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void VYaml::Serialization::YamlSerializerOptions::set_EnableAliasForDeserialization(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {"set_EnableAliasForDeserialization", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VYaml::Serialization::YamlSerializerOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializerOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::YamlSerializerOptions* VYaml::Serialization::YamlSerializerOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::YamlSerializerOptions*>());
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::YamlSerializerOptions::YamlSerializerOptions()   {
}

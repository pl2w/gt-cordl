#pragma once
// IWYU pragma private; include "VYaml/Emitter/YamlEmitOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Emitter/zzzz__YamlEmitOptions_def.hpp"
//  Writing Method size for method: ::VYaml::Emitter::YamlEmitOptions.get_IndentWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Emitter::YamlEmitOptions::*)()>(&::VYaml::Emitter::YamlEmitOptions::get_IndentWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb973008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::YamlEmitOptions*>(),
                        {"get_IndentWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::YamlEmitOptions.set_IndentWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::YamlEmitOptions::*)(int32_t)>(&::VYaml::Emitter::YamlEmitOptions::set_IndentWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb973010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::YamlEmitOptions*>(),
                        {"set_IndentWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::YamlEmitOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::YamlEmitOptions::*)()>(&::VYaml::Emitter::YamlEmitOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb973018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::YamlEmitOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VYaml::Emitter::YamlEmitOptions::__cordl_internal_get__IndentWidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IndentWidth_k__BackingField;
}
constexpr int32_t const& VYaml::Emitter::YamlEmitOptions::__cordl_internal_get__IndentWidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IndentWidth_k__BackingField;
}
constexpr void VYaml::Emitter::YamlEmitOptions::__cordl_internal_set__IndentWidth_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IndentWidth_k__BackingField = value;
}
inline void VYaml::Emitter::YamlEmitOptions::setStaticF_Default(::VYaml::Emitter::YamlEmitOptions*  value)  {
::cordl_internals::setStaticField<::VYaml::Emitter::YamlEmitOptions*, "Default", ::VYaml::Emitter::YamlEmitOptions*>(std::forward<::VYaml::Emitter::YamlEmitOptions*>(value));
}
inline ::VYaml::Emitter::YamlEmitOptions* VYaml::Emitter::YamlEmitOptions::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::VYaml::Emitter::YamlEmitOptions*, "Default", ::VYaml::Emitter::YamlEmitOptions*>();
}
inline int32_t VYaml::Emitter::YamlEmitOptions::get_IndentWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::YamlEmitOptions*>(),
                        {"get_IndentWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void VYaml::Emitter::YamlEmitOptions::set_IndentWidth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::YamlEmitOptions*>(),
                        {"set_IndentWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VYaml::Emitter::YamlEmitOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::YamlEmitOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Emitter::YamlEmitOptions* VYaml::Emitter::YamlEmitOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Emitter::YamlEmitOptions*>());
}
// Ctor Parameters []
constexpr ::VYaml::Emitter::YamlEmitOptions::YamlEmitOptions()   {
}

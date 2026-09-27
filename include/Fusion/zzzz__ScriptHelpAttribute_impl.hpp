#pragma once
// IWYU pragma private; include "Fusion/ScriptHelpAttribute.hpp"
#include "Fusion/zzzz__PropertyAttribute_impl.hpp"
#include "Fusion/zzzz__ScriptHeaderBackColor_impl.hpp"
#include "Fusion/zzzz__ScriptHeaderStyle_impl.hpp"
#include "Fusion/zzzz__ScriptHelpAttribute_def.hpp"
#include "Fusion/zzzz__ScriptHeaderBackColor_def.hpp"
//  Writing Method size for method: ::Fusion::ScriptHelpAttribute.set_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ScriptHelpAttribute::*)(::StringW)>(&::Fusion::ScriptHelpAttribute::set_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3d814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScriptHelpAttribute*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ScriptHelpAttribute.set_BackColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ScriptHelpAttribute::*)(::Fusion::ScriptHeaderBackColor)>(&::Fusion::ScriptHelpAttribute::set_BackColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3d81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScriptHelpAttribute*>(),
                        {"set_BackColor", {}, {::i2c::type_of<::Fusion::ScriptHeaderBackColor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ScriptHelpAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ScriptHelpAttribute::*)()>(&::Fusion::ScriptHelpAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f3d824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScriptHelpAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::ScriptHelpAttribute::__cordl_internal_get__Url_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr ::StringW const& Fusion::ScriptHelpAttribute::__cordl_internal_get__Url_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr void Fusion::ScriptHelpAttribute::__cordl_internal_set__Url_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Url_k__BackingField = value;
}
constexpr ::Fusion::ScriptHeaderBackColor& Fusion::ScriptHelpAttribute::__cordl_internal_get__BackColor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BackColor_k__BackingField;
}
constexpr ::Fusion::ScriptHeaderBackColor const& Fusion::ScriptHelpAttribute::__cordl_internal_get__BackColor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BackColor_k__BackingField;
}
constexpr void Fusion::ScriptHelpAttribute::__cordl_internal_set__BackColor_k__BackingField(::Fusion::ScriptHeaderBackColor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BackColor_k__BackingField = value;
}
constexpr ::Fusion::ScriptHeaderStyle& Fusion::ScriptHelpAttribute::__cordl_internal_get__Style_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Style_k__BackingField;
}
constexpr ::Fusion::ScriptHeaderStyle const& Fusion::ScriptHelpAttribute::__cordl_internal_get__Style_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Style_k__BackingField;
}
constexpr void Fusion::ScriptHelpAttribute::__cordl_internal_set__Style_k__BackingField(::Fusion::ScriptHeaderStyle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Style_k__BackingField = value;
}
inline void Fusion::ScriptHelpAttribute::set_Url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScriptHelpAttribute*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::ScriptHelpAttribute::set_BackColor(::Fusion::ScriptHeaderBackColor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScriptHelpAttribute*>(),
                        {"set_BackColor", {}, {::i2c::type_of<::Fusion::ScriptHeaderBackColor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::ScriptHelpAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScriptHelpAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::ScriptHelpAttribute* Fusion::ScriptHelpAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ScriptHelpAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::ScriptHelpAttribute::ScriptHelpAttribute()   {
}

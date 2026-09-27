#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectAttribute::*)(::StringW)>(&::Fusion::FusionGlobalScriptableObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f3e4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectAttribute.get_DefaultPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::FusionGlobalScriptableObjectAttribute::*)()>(&::Fusion::FusionGlobalScriptableObjectAttribute::get_DefaultPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3e514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAttribute*>(),
                        {"get_DefaultPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectAttribute.set_DefaultContentsGeneratorMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectAttribute::*)(::StringW)>(&::Fusion::FusionGlobalScriptableObjectAttribute::set_DefaultContentsGeneratorMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3e51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAttribute*>(),
                        {"set_DefaultContentsGeneratorMethod", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::FusionGlobalScriptableObjectAttribute::__cordl_internal_get__DefaultPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultPath_k__BackingField;
}
constexpr ::StringW const& Fusion::FusionGlobalScriptableObjectAttribute::__cordl_internal_get__DefaultPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultPath_k__BackingField;
}
constexpr void Fusion::FusionGlobalScriptableObjectAttribute::__cordl_internal_set__DefaultPath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultPath_k__BackingField = value;
}
constexpr ::StringW& Fusion::FusionGlobalScriptableObjectAttribute::__cordl_internal_get__DefaultContentsGeneratorMethod_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultContentsGeneratorMethod_k__BackingField;
}
constexpr ::StringW const& Fusion::FusionGlobalScriptableObjectAttribute::__cordl_internal_get__DefaultContentsGeneratorMethod_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultContentsGeneratorMethod_k__BackingField;
}
constexpr void Fusion::FusionGlobalScriptableObjectAttribute::__cordl_internal_set__DefaultContentsGeneratorMethod_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultContentsGeneratorMethod_k__BackingField = value;
}
inline void Fusion::FusionGlobalScriptableObjectAttribute::_ctor(::StringW  defaultPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultPath);
}
inline ::StringW Fusion::FusionGlobalScriptableObjectAttribute::get_DefaultPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAttribute*>(),
                        {"get_DefaultPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::FusionGlobalScriptableObjectAttribute::set_DefaultContentsGeneratorMethod(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAttribute*>(),
                        {"set_DefaultContentsGeneratorMethod", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::FusionGlobalScriptableObjectAttribute* Fusion::FusionGlobalScriptableObjectAttribute::New_ctor(::StringW  defaultPath)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObjectAttribute*>(defaultPath));
}
// Ctor Parameters []
constexpr ::Fusion::FusionGlobalScriptableObjectAttribute::FusionGlobalScriptableObjectAttribute()   {
}

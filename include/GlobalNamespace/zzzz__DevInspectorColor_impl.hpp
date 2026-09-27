#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorColor.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__DevInspectorColor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevInspectorColor.get_Color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DevInspectorColor::*)()>(&::GlobalNamespace::DevInspectorColor::get_Color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566f754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorColor*>(),
                        {"get_Color", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevInspectorColor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevInspectorColor::*)(::StringW)>(&::GlobalNamespace::DevInspectorColor::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x566f75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorColor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::DevInspectorColor::__cordl_internal_get__Color_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Color_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::DevInspectorColor::__cordl_internal_get__Color_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Color_k__BackingField;
}
constexpr void GlobalNamespace::DevInspectorColor::__cordl_internal_set__Color_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Color_k__BackingField = value;
}
inline ::StringW GlobalNamespace::DevInspectorColor::get_Color()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorColor*>(),
                        {"get_Color", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::DevInspectorColor::_ctor(::StringW  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorColor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline ::GlobalNamespace::DevInspectorColor* GlobalNamespace::DevInspectorColor::New_ctor(::StringW  color)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevInspectorColor*>(color));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevInspectorColor::DevInspectorColor()   {
}

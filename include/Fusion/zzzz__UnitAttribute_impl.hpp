#pragma once
// IWYU pragma private; include "Fusion/UnitAttribute.hpp"
#include "Fusion/zzzz__DecoratingPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__Units_impl.hpp"
#include "Fusion/zzzz__UnitAttribute_def.hpp"
#include "Fusion/zzzz__Units_def.hpp"
//  Writing Method size for method: ::Fusion::UnitAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnitAttribute::*)(::Fusion::Units)>(&::Fusion::UnitAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f3d83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnitAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Units>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Units& Fusion::UnitAttribute::__cordl_internal_get__Unit_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Unit_k__BackingField;
}
constexpr ::Fusion::Units const& Fusion::UnitAttribute::__cordl_internal_get__Unit_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Unit_k__BackingField;
}
constexpr void Fusion::UnitAttribute::__cordl_internal_set__Unit_k__BackingField(::Fusion::Units  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Unit_k__BackingField = value;
}
inline void Fusion::UnitAttribute::_ctor(::Fusion::Units  units)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnitAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Units>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, units);
}
inline ::Fusion::UnitAttribute* Fusion::UnitAttribute::New_ctor(::Fusion::Units  units)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnitAttribute*>(units));
}
// Ctor Parameters []
constexpr ::Fusion::UnitAttribute::UnitAttribute()   {
}

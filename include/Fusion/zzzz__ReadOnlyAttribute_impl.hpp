#pragma once
// IWYU pragma private; include "Fusion/ReadOnlyAttribute.hpp"
#include "Fusion/zzzz__DecoratingPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__ReadOnlyAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::ReadOnlyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReadOnlyAttribute::*)()>(&::Fusion::ReadOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f3d7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadOnlyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::ReadOnlyAttribute::__cordl_internal_get__InPlayMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InPlayMode_k__BackingField;
}
constexpr bool const& Fusion::ReadOnlyAttribute::__cordl_internal_get__InPlayMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InPlayMode_k__BackingField;
}
constexpr void Fusion::ReadOnlyAttribute::__cordl_internal_set__InPlayMode_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InPlayMode_k__BackingField = value;
}
constexpr bool& Fusion::ReadOnlyAttribute::__cordl_internal_get__InEditMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InEditMode_k__BackingField;
}
constexpr bool const& Fusion::ReadOnlyAttribute::__cordl_internal_get__InEditMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InEditMode_k__BackingField;
}
constexpr void Fusion::ReadOnlyAttribute::__cordl_internal_set__InEditMode_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InEditMode_k__BackingField = value;
}
inline void Fusion::ReadOnlyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadOnlyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::ReadOnlyAttribute* Fusion::ReadOnlyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ReadOnlyAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::ReadOnlyAttribute::ReadOnlyAttribute()   {
}

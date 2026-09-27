#pragma once
// IWYU pragma private; include "Fusion/ExpandableEnumAttribute.hpp"
#include "Fusion/zzzz__DrawerPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__ExpandableEnumAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::ExpandableEnumAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ExpandableEnumAttribute::*)()>(&::Fusion::ExpandableEnumAttribute::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f3d74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExpandableEnumAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::ExpandableEnumAttribute::__cordl_internal_get__AlwaysExpanded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlwaysExpanded_k__BackingField;
}
constexpr bool const& Fusion::ExpandableEnumAttribute::__cordl_internal_get__AlwaysExpanded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlwaysExpanded_k__BackingField;
}
constexpr void Fusion::ExpandableEnumAttribute::__cordl_internal_set__AlwaysExpanded_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AlwaysExpanded_k__BackingField = value;
}
constexpr bool& Fusion::ExpandableEnumAttribute::__cordl_internal_get__ShowFlagsButtons_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowFlagsButtons_k__BackingField;
}
constexpr bool const& Fusion::ExpandableEnumAttribute::__cordl_internal_get__ShowFlagsButtons_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowFlagsButtons_k__BackingField;
}
constexpr void Fusion::ExpandableEnumAttribute::__cordl_internal_set__ShowFlagsButtons_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowFlagsButtons_k__BackingField = value;
}
constexpr bool& Fusion::ExpandableEnumAttribute::__cordl_internal_get__ShowInlineHelp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowInlineHelp_k__BackingField;
}
constexpr bool const& Fusion::ExpandableEnumAttribute::__cordl_internal_get__ShowInlineHelp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowInlineHelp_k__BackingField;
}
constexpr void Fusion::ExpandableEnumAttribute::__cordl_internal_set__ShowInlineHelp_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowInlineHelp_k__BackingField = value;
}
inline void Fusion::ExpandableEnumAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExpandableEnumAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::ExpandableEnumAttribute* Fusion::ExpandableEnumAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ExpandableEnumAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::ExpandableEnumAttribute::ExpandableEnumAttribute()   {
}

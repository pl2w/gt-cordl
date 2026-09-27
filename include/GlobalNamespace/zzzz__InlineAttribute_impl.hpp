#pragma once
// IWYU pragma private; include "GlobalNamespace/InlineAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__InlineAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InlineAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InlineAttribute::*)(bool, bool)>(&::GlobalNamespace::InlineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56466ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InlineAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::InlineAttribute::__cordl_internal_get_keepLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepLabel;
}
constexpr bool const& GlobalNamespace::InlineAttribute::__cordl_internal_get_keepLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepLabel;
}
constexpr void GlobalNamespace::InlineAttribute::__cordl_internal_set_keepLabel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keepLabel = value;
}
constexpr bool& GlobalNamespace::InlineAttribute::__cordl_internal_get_asGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asGroup;
}
constexpr bool const& GlobalNamespace::InlineAttribute::__cordl_internal_get_asGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asGroup;
}
constexpr void GlobalNamespace::InlineAttribute::__cordl_internal_set_asGroup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asGroup = value;
}
inline void GlobalNamespace::InlineAttribute::_ctor(bool  keepLabel, bool  asGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InlineAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepLabel, asGroup);
}
inline ::GlobalNamespace::InlineAttribute* GlobalNamespace::InlineAttribute::New_ctor(bool  keepLabel, bool  asGroup)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InlineAttribute*>(keepLabel, asGroup));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InlineAttribute::InlineAttribute()   {
}

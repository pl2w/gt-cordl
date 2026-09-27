#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/EventCategoryAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Meta/WitAi/Events/zzzz__EventCategoryAttribute_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::EventCategoryAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::EventCategoryAttribute::*)(::StringW)>(&::Meta::WitAi::Events::EventCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e94eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::EventCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Events::EventCategoryAttribute::__cordl_internal_get_Category()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Category;
}
constexpr ::StringW const& Meta::WitAi::Events::EventCategoryAttribute::__cordl_internal_get_Category() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Category;
}
constexpr void Meta::WitAi::Events::EventCategoryAttribute::__cordl_internal_set_Category(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Category = value;
}
inline void Meta::WitAi::Events::EventCategoryAttribute::_ctor(::StringW  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::EventCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline ::Meta::WitAi::Events::EventCategoryAttribute* Meta::WitAi::Events::EventCategoryAttribute::New_ctor(::StringW  category)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::EventCategoryAttribute*>(category));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::EventCategoryAttribute::EventCategoryAttribute()   {
}

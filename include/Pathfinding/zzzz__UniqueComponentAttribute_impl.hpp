#pragma once
// IWYU pragma private; include "Pathfinding/UniqueComponentAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Pathfinding/zzzz__UniqueComponentAttribute_def.hpp"
//  Writing Method size for method: ::Pathfinding::UniqueComponentAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::UniqueComponentAttribute::*)()>(&::Pathfinding::UniqueComponentAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eab580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::UniqueComponentAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Pathfinding::UniqueComponentAttribute::__cordl_internal_get_tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tag;
}
constexpr ::StringW const& Pathfinding::UniqueComponentAttribute::__cordl_internal_get_tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tag;
}
constexpr void Pathfinding::UniqueComponentAttribute::__cordl_internal_set_tag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tag = value;
}
inline void Pathfinding::UniqueComponentAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::UniqueComponentAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::UniqueComponentAttribute* Pathfinding::UniqueComponentAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::UniqueComponentAttribute*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::UniqueComponentAttribute::UniqueComponentAttribute()   {
}

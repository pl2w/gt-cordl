#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/JsonMemberAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Pathfinding/Serialization/zzzz__JsonMemberAttribute_def.hpp"
//  Writing Method size for method: ::Pathfinding::Serialization::JsonMemberAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::JsonMemberAttribute::*)()>(&::Pathfinding::Serialization::JsonMemberAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed233c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::JsonMemberAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Serialization::JsonMemberAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::JsonMemberAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Serialization::JsonMemberAttribute* Pathfinding::Serialization::JsonMemberAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::JsonMemberAttribute*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::JsonMemberAttribute::JsonMemberAttribute()   {
}

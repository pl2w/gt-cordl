#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/JsonOptInAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Pathfinding/Serialization/zzzz__JsonOptInAttribute_def.hpp"
//  Writing Method size for method: ::Pathfinding::Serialization::JsonOptInAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::JsonOptInAttribute::*)()>(&::Pathfinding::Serialization::JsonOptInAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed2344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::JsonOptInAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Serialization::JsonOptInAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::JsonOptInAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Serialization::JsonOptInAttribute* Pathfinding::Serialization::JsonOptInAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::JsonOptInAttribute*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::JsonOptInAttribute::JsonOptInAttribute()   {
}

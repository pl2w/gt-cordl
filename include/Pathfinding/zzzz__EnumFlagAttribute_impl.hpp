#pragma once
// IWYU pragma private; include "Pathfinding/EnumFlagAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Pathfinding/zzzz__EnumFlagAttribute_def.hpp"
//  Writing Method size for method: ::Pathfinding::EnumFlagAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EnumFlagAttribute::*)()>(&::Pathfinding::EnumFlagAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eab578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EnumFlagAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::EnumFlagAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EnumFlagAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::EnumFlagAttribute* Pathfinding::EnumFlagAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::EnumFlagAttribute*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::EnumFlagAttribute::EnumFlagAttribute()   {
}

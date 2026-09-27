#pragma once
// IWYU pragma private; include "Pathfinding/Util/PreserveAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Pathfinding/Util/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::PreserveAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PreserveAttribute::*)()>(&::Pathfinding::Util::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed5414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Util::PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Util::PreserveAttribute* Pathfinding::Util::PreserveAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::PreserveAttribute::PreserveAttribute()   {
}

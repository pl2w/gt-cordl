#pragma once
// IWYU pragma private; include "GorillaTag/AssignInCorePrefabAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GorillaTag/zzzz__AssignInCorePrefabAttribute_def.hpp"
//  Writing Method size for method: ::GorillaTag::AssignInCorePrefabAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::AssignInCorePrefabAttribute::*)()>(&::GorillaTag::AssignInCorePrefabAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d22b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::AssignInCorePrefabAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::AssignInCorePrefabAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::AssignInCorePrefabAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::AssignInCorePrefabAttribute* GorillaTag::AssignInCorePrefabAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::AssignInCorePrefabAttribute*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::AssignInCorePrefabAttribute::AssignInCorePrefabAttribute()   {
}

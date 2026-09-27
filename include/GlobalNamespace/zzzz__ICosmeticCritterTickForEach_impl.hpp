#pragma once
// IWYU pragma private; include "GlobalNamespace/ICosmeticCritterTickForEach.hpp"
#include "GlobalNamespace/zzzz__ICosmeticCritterTickForEach_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICosmeticCritterTickForEach.TickForEachCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ICosmeticCritterTickForEach::*)(::GlobalNamespace::CosmeticCritter*)>(&::GlobalNamespace::ICosmeticCritterTickForEach::TickForEachCritter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ICosmeticCritterTickForEach*>(),
                    {::i2c::class_of<::GlobalNamespace::ICosmeticCritterTickForEach*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ICosmeticCritterTickForEach::TickForEachCritter(::GlobalNamespace::CosmeticCritter*  critter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ICosmeticCritterTickForEach*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter);
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestGorillaTeleportManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerfTestGorillaTeleportManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerfTestGorillaTeleportManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestGorillaTeleportManager::*)()>(&::GlobalNamespace::PerfTestGorillaTeleportManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bceb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaTeleportManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PerfTestGorillaTeleportManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestGorillaTeleportManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerfTestGorillaTeleportManager* GlobalNamespace::PerfTestGorillaTeleportManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerfTestGorillaTeleportManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerfTestGorillaTeleportManager::PerfTestGorillaTeleportManager()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIToggleGroupManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUIToggleGroupManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggleGroupManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggleGroupManager::*)()>(&::GlobalNamespace::KIDUIToggleGroupManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4d034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggleGroupManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDUIToggleGroupManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggleGroupManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIToggleGroupManager* GlobalNamespace::KIDUIToggleGroupManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIToggleGroupManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIToggleGroupManager::KIDUIToggleGroupManager()   {
}

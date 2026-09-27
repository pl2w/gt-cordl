#pragma once
// IWYU pragma private; include "GlobalNamespace/LckCococamManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LckCococamManager_def.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckCococamManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCococamManager::*)()>(&::GlobalNamespace::LckCococamManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c58a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCococamManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LckSocialCamera>& GlobalNamespace::LckCococamManager::__cordl_internal_get_Instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Instance;
}
constexpr ::UnityW<::GlobalNamespace::LckSocialCamera> const& GlobalNamespace::LckCococamManager::__cordl_internal_get_Instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Instance;
}
constexpr void GlobalNamespace::LckCococamManager::__cordl_internal_set_Instance(::UnityW<::GlobalNamespace::LckSocialCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Instance = value;
}
inline void GlobalNamespace::LckCococamManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCococamManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LckCococamManager* GlobalNamespace::LckCococamManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckCococamManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckCococamManager::LckCococamManager()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevInspectorManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevInspectorManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::DevInspectorManager> (*)()>(&::GlobalNamespace::DevInspectorManager::get_instance)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x566f970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevInspectorManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevInspectorManager::*)()>(&::GlobalNamespace::DevInspectorManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566fa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DevInspectorManager::setStaticF__instance(::UnityW<::GlobalNamespace::DevInspectorManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::DevInspectorManager>, "_instance", ::GlobalNamespace::DevInspectorManager*>(std::forward<::UnityW<::GlobalNamespace::DevInspectorManager>>(value));
}
inline ::UnityW<::GlobalNamespace::DevInspectorManager> GlobalNamespace::DevInspectorManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::DevInspectorManager>, "_instance", ::GlobalNamespace::DevInspectorManager*>();
}
inline ::UnityW<::GlobalNamespace::DevInspectorManager> GlobalNamespace::DevInspectorManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::DevInspectorManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::DevInspectorManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevInspectorManager* GlobalNamespace::DevInspectorManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevInspectorManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevInspectorManager::DevInspectorManager()   {
}

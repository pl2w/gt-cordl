#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCameraSceneTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaCameraSceneTrigger_def.hpp"
#include "GlobalNamespace/zzzz__GorillaCameraTriggerIndex_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSceneCamera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraSceneTrigger.ChangeScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraSceneTrigger::*)(::GlobalNamespace::GorillaCameraTriggerIndex*)>(&::GlobalNamespace::GorillaCameraSceneTrigger::ChangeScene)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x579d5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraSceneTrigger*>(),
                        {"ChangeScene", {}, {::i2c::type_of<::GlobalNamespace::GorillaCameraTriggerIndex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraSceneTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraSceneTrigger::*)()>(&::GlobalNamespace::GorillaCameraSceneTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579d77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraSceneTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaSceneCamera>& GlobalNamespace::GorillaCameraSceneTrigger::__cordl_internal_get_sceneCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneCamera;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSceneCamera> const& GlobalNamespace::GorillaCameraSceneTrigger::__cordl_internal_get_sceneCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneCamera;
}
constexpr void GlobalNamespace::GorillaCameraSceneTrigger::__cordl_internal_set_sceneCamera(::UnityW<::GlobalNamespace::GorillaSceneCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneCamera = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>& GlobalNamespace::GorillaCameraSceneTrigger::__cordl_internal_get_currentSceneTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSceneTrigger;
}
constexpr ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex> const& GlobalNamespace::GorillaCameraSceneTrigger::__cordl_internal_get_currentSceneTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSceneTrigger;
}
constexpr void GlobalNamespace::GorillaCameraSceneTrigger::__cordl_internal_set_currentSceneTrigger(::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSceneTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>& GlobalNamespace::GorillaCameraSceneTrigger::__cordl_internal_get_mostRecentSceneTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mostRecentSceneTrigger;
}
constexpr ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex> const& GlobalNamespace::GorillaCameraSceneTrigger::__cordl_internal_get_mostRecentSceneTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mostRecentSceneTrigger;
}
constexpr void GlobalNamespace::GorillaCameraSceneTrigger::__cordl_internal_set_mostRecentSceneTrigger(::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mostRecentSceneTrigger = value;
}
inline void GlobalNamespace::GorillaCameraSceneTrigger::ChangeScene(::GlobalNamespace::GorillaCameraTriggerIndex*  triggerLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraSceneTrigger*>(),
                        {"ChangeScene", {}, {::i2c::type_of<::GlobalNamespace::GorillaCameraTriggerIndex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerLeft);
}
inline void GlobalNamespace::GorillaCameraSceneTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraSceneTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaCameraSceneTrigger* GlobalNamespace::GorillaCameraSceneTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaCameraSceneTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaCameraSceneTrigger::GorillaCameraSceneTrigger()   {
}

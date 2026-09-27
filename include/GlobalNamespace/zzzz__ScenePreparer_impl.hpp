#pragma once
// IWYU pragma private; include "GlobalNamespace/ScenePreparer.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScenePreparer_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScenePreparer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenePreparer::*)()>(&::GlobalNamespace::ScenePreparer::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56ad740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScenePreparer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenePreparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenePreparer::*)()>(&::GlobalNamespace::ScenePreparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ad7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScenePreparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRManager>& GlobalNamespace::ScenePreparer::__cordl_internal_get_ovrManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ovrManager;
}
constexpr ::UnityW<::GlobalNamespace::OVRManager> const& GlobalNamespace::ScenePreparer::__cordl_internal_get_ovrManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ovrManager;
}
constexpr void GlobalNamespace::ScenePreparer::__cordl_internal_set_ovrManager(::UnityW<::GlobalNamespace::OVRManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ovrManager = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ScenePreparer::__cordl_internal_get_betaDisableObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaDisableObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ScenePreparer::__cordl_internal_get_betaDisableObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaDisableObjects;
}
constexpr void GlobalNamespace::ScenePreparer::__cordl_internal_set_betaDisableObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betaDisableObjects = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ScenePreparer::__cordl_internal_get_betaEnableObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaEnableObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ScenePreparer::__cordl_internal_get_betaEnableObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaEnableObjects;
}
constexpr void GlobalNamespace::ScenePreparer::__cordl_internal_set_betaEnableObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betaEnableObjects = value;
}
inline void GlobalNamespace::ScenePreparer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScenePreparer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScenePreparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScenePreparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScenePreparer* GlobalNamespace::ScenePreparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScenePreparer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScenePreparer::ScenePreparer()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/BuildTargetManager.hpp"
#include "GlobalNamespace/zzzz__BuildTargetManager_BuildTowards_impl.hpp"
#include "GlobalNamespace/zzzz__BuildTargetManager_NetworkBackend_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuildTargetManager_def.hpp"
#include "GlobalNamespace/zzzz__BuildTargetManager_BuildTowards_def.hpp"
#include "GlobalNamespace/zzzz__BuildTargetManager_NetworkBackend_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuildTargetManager.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BuildTargetManager::*)()>(&::GlobalNamespace::BuildTargetManager::GetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adf5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuildTargetManager*>(),
                        {"GetPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuildTargetManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuildTargetManager::*)()>(&::GlobalNamespace::BuildTargetManager::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5adf5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuildTargetManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BuildTargetManager_BuildTowards& GlobalNamespace::BuildTargetManager::__cordl_internal_get_newBuildTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newBuildTarget;
}
constexpr ::GlobalNamespace::BuildTargetManager_BuildTowards const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_newBuildTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newBuildTarget;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_newBuildTarget(::GlobalNamespace::BuildTargetManager_BuildTowards  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newBuildTarget = value;
}
constexpr bool& GlobalNamespace::BuildTargetManager::__cordl_internal_get_isBeta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBeta;
}
constexpr bool const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_isBeta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBeta;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_isBeta(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBeta = value;
}
constexpr bool& GlobalNamespace::BuildTargetManager::__cordl_internal_get_isQA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isQA;
}
constexpr bool const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_isQA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isQA;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_isQA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isQA = value;
}
constexpr bool& GlobalNamespace::BuildTargetManager::__cordl_internal_get_spoofIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spoofIDs;
}
constexpr bool const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_spoofIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spoofIDs;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_spoofIDs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spoofIDs = value;
}
constexpr bool& GlobalNamespace::BuildTargetManager::__cordl_internal_get_spoofChild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spoofChild;
}
constexpr bool const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_spoofChild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spoofChild;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_spoofChild(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spoofChild = value;
}
constexpr bool& GlobalNamespace::BuildTargetManager::__cordl_internal_get_enableAllCosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableAllCosmetics;
}
constexpr bool const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_enableAllCosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableAllCosmetics;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_enableAllCosmetics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableAllCosmetics = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRManager>& GlobalNamespace::BuildTargetManager::__cordl_internal_get_ovrManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ovrManager;
}
constexpr ::UnityW<::GlobalNamespace::OVRManager> const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_ovrManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ovrManager;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_ovrManager(::UnityW<::GlobalNamespace::OVRManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ovrManager = value;
}
constexpr ::StringW& GlobalNamespace::BuildTargetManager::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::GlobalNamespace::BuildTargetManager_BuildTowards& GlobalNamespace::BuildTargetManager::__cordl_internal_get_currentBuildTargetDONOTCHANGE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBuildTargetDONOTCHANGE;
}
constexpr ::GlobalNamespace::BuildTargetManager_BuildTowards const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_currentBuildTargetDONOTCHANGE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBuildTargetDONOTCHANGE;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_currentBuildTargetDONOTCHANGE(::GlobalNamespace::BuildTargetManager_BuildTowards  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentBuildTargetDONOTCHANGE = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagger>& GlobalNamespace::BuildTargetManager::__cordl_internal_get_gorillaTagger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaTagger;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagger> const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_gorillaTagger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaTagger;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_gorillaTagger(::UnityW<::GlobalNamespace::GorillaTagger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaTagger = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BuildTargetManager::__cordl_internal_get_betaDisableObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaDisableObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_betaDisableObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaDisableObjects;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_betaDisableObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betaDisableObjects = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BuildTargetManager::__cordl_internal_get_betaEnableObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaEnableObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_betaEnableObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaEnableObjects;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_betaEnableObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betaEnableObjects = value;
}
constexpr ::GlobalNamespace::BuildTargetManager_NetworkBackend& GlobalNamespace::BuildTargetManager::__cordl_internal_get_networkBackend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkBackend;
}
constexpr ::GlobalNamespace::BuildTargetManager_NetworkBackend const& GlobalNamespace::BuildTargetManager::__cordl_internal_get_networkBackend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkBackend;
}
constexpr void GlobalNamespace::BuildTargetManager::__cordl_internal_set_networkBackend(::GlobalNamespace::BuildTargetManager_NetworkBackend  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkBackend = value;
}
inline ::StringW GlobalNamespace::BuildTargetManager::GetPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuildTargetManager*>(),
                        {"GetPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BuildTargetManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuildTargetManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuildTargetManager* GlobalNamespace::BuildTargetManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuildTargetManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuildTargetManager::BuildTargetManager()   {
}

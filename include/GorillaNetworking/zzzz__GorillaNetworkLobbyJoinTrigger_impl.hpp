#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkLobbyJoinTrigger.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkLobbyJoinTrigger_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkLobbyJoinTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkLobbyJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkLobbyJoinTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8bfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkLobbyJoinTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_makeSureThisIsDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsDisabled;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_makeSureThisIsDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsDisabled;
}
constexpr void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_set_makeSureThisIsDisabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___makeSureThisIsDisabled = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_makeSureThisIsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsEnabled;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_makeSureThisIsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsEnabled;
}
constexpr void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_set_makeSureThisIsEnabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___makeSureThisIsEnabled = value;
}
constexpr ::StringW& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_gameModeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeName;
}
constexpr ::StringW const& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_gameModeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeName;
}
constexpr void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_set_gameModeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeName = value;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_photonNetworkController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonNetworkController;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_photonNetworkController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonNetworkController;
}
constexpr void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_set_photonNetworkController(::UnityW<::GorillaNetworking::PhotonNetworkController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonNetworkController = value;
}
constexpr ::StringW& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_componentTypeToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTypeToRemove;
}
constexpr ::StringW const& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_componentTypeToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTypeToRemove;
}
constexpr void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_set_componentTypeToRemove(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentTypeToRemove = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_componentRemoveTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentRemoveTarget;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_componentRemoveTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentRemoveTarget;
}
constexpr void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_set_componentRemoveTarget(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentRemoveTarget = value;
}
constexpr ::StringW& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_componentTypeToAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTypeToAdd;
}
constexpr ::StringW const& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_componentTypeToAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTypeToAdd;
}
constexpr void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_set_componentTypeToAdd(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentTypeToAdd = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_componentAddTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentAddTarget;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_componentAddTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentAddTarget;
}
constexpr void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_set_componentAddTarget(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentAddTarget = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_gorillaParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_gorillaParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaParent;
}
constexpr void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_set_gorillaParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaParent = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_joinFailedBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinFailedBlock;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_get_joinFailedBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinFailedBlock;
}
constexpr void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::__cordl_internal_set_joinFailedBlock(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinFailedBlock = value;
}
inline void GorillaNetworking::GorillaNetworkLobbyJoinTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkLobbyJoinTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaNetworkLobbyJoinTrigger* GorillaNetworking::GorillaNetworkLobbyJoinTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaNetworkLobbyJoinTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaNetworkLobbyJoinTrigger::GorillaNetworkLobbyJoinTrigger()   {
}

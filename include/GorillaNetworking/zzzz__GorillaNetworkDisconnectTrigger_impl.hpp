#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkDisconnectTrigger.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkDisconnectTrigger_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkDisconnectTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkDisconnectTrigger::*)()>(&::GorillaNetworking::GorillaNetworkDisconnectTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5c898dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaNetworkDisconnectTrigger*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaNetworkDisconnectTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkDisconnectTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkDisconnectTrigger::*)()>(&::GorillaNetworking::GorillaNetworkDisconnectTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c89b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkDisconnectTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_photonNetworkController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonNetworkController;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_photonNetworkController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonNetworkController;
}
constexpr void GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_set_photonNetworkController(::UnityW<::GorillaNetworking::PhotonNetworkController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonNetworkController = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_offlineVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineVRRig;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_offlineVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineVRRig;
}
constexpr void GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_set_offlineVRRig(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlineVRRig = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_makeSureThisIsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsEnabled;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_makeSureThisIsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsEnabled;
}
constexpr void GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_set_makeSureThisIsEnabled(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___makeSureThisIsEnabled = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_makeSureTheseAreEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureTheseAreEnabled;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_makeSureTheseAreEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureTheseAreEnabled;
}
constexpr void GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_set_makeSureTheseAreEnabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___makeSureTheseAreEnabled = value;
}
constexpr ::StringW& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_componentTypeToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTypeToRemove;
}
constexpr ::StringW const& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_componentTypeToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTypeToRemove;
}
constexpr void GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_set_componentTypeToRemove(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentTypeToRemove = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_componentTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTarget;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_get_componentTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTarget;
}
constexpr void GorillaNetworking::GorillaNetworkDisconnectTrigger::__cordl_internal_set_componentTarget(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentTarget = value;
}
inline void GorillaNetworking::GorillaNetworkDisconnectTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaNetworkDisconnectTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkDisconnectTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkDisconnectTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaNetworkDisconnectTrigger* GorillaNetworking::GorillaNetworkDisconnectTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaNetworkDisconnectTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaNetworkDisconnectTrigger::GorillaNetworkDisconnectTrigger()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNetworkPublicTestJoin2.hpp"
#include "GlobalNamespace/zzzz__GorillaLevelScreen_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaNetworkPublicTestJoin2_def.hpp"
#include "GlobalNamespace/zzzz__GorillaNetworkPublicTestJoin2_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkPublicTestJoin2.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkPublicTestJoin2::*)()>(&::GlobalNamespace::GorillaNetworkPublicTestJoin2::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aadfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkPublicTestJoin2.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkPublicTestJoin2::*)()>(&::GlobalNamespace::GorillaNetworkPublicTestJoin2::LateUpdate)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x5aadfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkPublicTestJoin2.GracePeriod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaNetworkPublicTestJoin2::*)()>(&::GlobalNamespace::GorillaNetworkPublicTestJoin2::GracePeriod)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5aae544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2*>(),
                        {"GracePeriod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkPublicTestJoin2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkPublicTestJoin2::*)()>(&::GlobalNamespace::GorillaNetworkPublicTestJoin2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aae5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_makeSureThisIsDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsDisabled;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_makeSureThisIsDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsDisabled;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_makeSureThisIsDisabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___makeSureThisIsDisabled = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_makeSureThisIsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsEnabled;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_makeSureThisIsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___makeSureThisIsEnabled;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_makeSureThisIsEnabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___makeSureThisIsEnabled = value;
}
constexpr ::StringW& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_gameModeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeName;
}
constexpr ::StringW const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_gameModeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeName;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_gameModeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeName = value;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_photonNetworkController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonNetworkController;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_photonNetworkController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonNetworkController;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_photonNetworkController(::UnityW<::GorillaNetworking::PhotonNetworkController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonNetworkController = value;
}
constexpr ::StringW& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_componentTypeToAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTypeToAdd;
}
constexpr ::StringW const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_componentTypeToAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTypeToAdd;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_componentTypeToAdd(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentTypeToAdd = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_componentTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTarget;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_componentTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentTarget;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_componentTarget(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentTarget = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_joinScreens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinScreens;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>> const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_joinScreens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinScreens;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_joinScreens(::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinScreens = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_leaveScreens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveScreens;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>> const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_leaveScreens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveScreens;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_leaveScreens(::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leaveScreens = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_tosPition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tosPition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_tosPition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tosPition;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_tosPition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tosPition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_othsTosPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___othsTosPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_othsTosPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___othsTosPosition;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_othsTosPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___othsTosPosition = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_fotVew()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fotVew;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_fotVew() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fotVew;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_fotVew(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fotVew = value;
}
constexpr bool& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_waiting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waiting;
}
constexpr bool const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_waiting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waiting;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_waiting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waiting = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_tempRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_get_tempRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRig;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2::__cordl_internal_set_tempRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRig = value;
}
inline void GlobalNamespace::GorillaNetworkPublicTestJoin2::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkPublicTestJoin2::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaNetworkPublicTestJoin2::GracePeriod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2*>(),
                        {"GracePeriod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkPublicTestJoin2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaNetworkPublicTestJoin2* GlobalNamespace::GorillaNetworkPublicTestJoin2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaNetworkPublicTestJoin2*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaNetworkPublicTestJoin2::GorillaNetworkPublicTestJoin2()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::*)(int32_t)>(&::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5aae5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::*)()>(&::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aae5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::*)()>(&::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x5aae5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::*)()>(&::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aaee1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::*)()>(&::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5aaee24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::*)()>(&::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aaee5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaNetworkPublicTestJoin2>& GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaNetworkPublicTestJoin2> const& GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaNetworkPublicTestJoin2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16* GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16::GorillaNetworkPublicTestJoin2__GracePeriod_d__16()   {
}

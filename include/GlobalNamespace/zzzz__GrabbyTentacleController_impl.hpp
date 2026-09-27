#pragma once
// IWYU pragma private; include "GlobalNamespace/GrabbyTentacleController.hpp"
#include "GlobalNamespace/zzzz__TentacleTracker_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GrabbyTentacleController_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleController::*)()>(&::GlobalNamespace::GrabbyTentacleController::OnEnable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5641264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleController::*)()>(&::GlobalNamespace::GrabbyTentacleController::OnDisable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56413b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleController::*)()>(&::GlobalNamespace::GrabbyTentacleController::Update)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5641528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleController.PickTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::GlobalNamespace::GrabbyTentacleController::*)()>(&::GlobalNamespace::GrabbyTentacleController::PickTarget)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5641838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"PickTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleController.IsRigCurrentlyGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GrabbyTentacleController::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GrabbyTentacleController::IsRigCurrentlyGrabbed)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5641fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"IsRigCurrentlyGrabbed", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleController.OnGrabReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleController::*)(int32_t, ::GlobalNamespace::VRRig*, bool)>(&::GlobalNamespace::GrabbyTentacleController::OnGrabReceived)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5641f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"OnGrabReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrabbyTentacleController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrabbyTentacleController::*)()>(&::GlobalNamespace::GrabbyTentacleController::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5642204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TentacleTracker>>& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_tentacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacles;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TentacleTracker>> const& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_tentacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacles;
}
constexpr void GlobalNamespace::GrabbyTentacleController::__cordl_internal_set_tentacles(::ArrayW<::UnityW<::GlobalNamespace::TentacleTracker>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacles = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_grabRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabRegion;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_grabRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabRegion;
}
constexpr void GlobalNamespace::GrabbyTentacleController::__cordl_internal_set_grabRegion(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabRegion = value;
}
constexpr float_t& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_minRetryDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRetryDelay;
}
constexpr float_t const& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_minRetryDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRetryDelay;
}
constexpr void GlobalNamespace::GrabbyTentacleController::__cordl_internal_set_minRetryDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minRetryDelay = value;
}
constexpr float_t& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_maxRetryDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetryDelay;
}
constexpr float_t const& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_maxRetryDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetryDelay;
}
constexpr void GlobalNamespace::GrabbyTentacleController::__cordl_internal_set_maxRetryDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRetryDelay = value;
}
constexpr float_t& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_nextAttemptTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextAttemptTimestamp;
}
constexpr float_t const& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_nextAttemptTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextAttemptTimestamp;
}
constexpr void GlobalNamespace::GrabbyTentacleController::__cordl_internal_set_nextAttemptTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextAttemptTimestamp = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_grabbedBefore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedBefore;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_grabbedBefore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedBefore;
}
constexpr void GlobalNamespace::GrabbyTentacleController::__cordl_internal_set_grabbedBefore(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedBefore = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_candidateBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidateBuffer;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_candidateBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidateBuffer;
}
constexpr void GlobalNamespace::GrabbyTentacleController::__cordl_internal_set_candidateBuffer(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___candidateBuffer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_freshCandidates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freshCandidates;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::GrabbyTentacleController::__cordl_internal_get_freshCandidates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freshCandidates;
}
constexpr void GlobalNamespace::GrabbyTentacleController::__cordl_internal_set_freshCandidates(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freshCandidates = value;
}
inline void GlobalNamespace::GrabbyTentacleController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrabbyTentacleController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrabbyTentacleController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::Player* GlobalNamespace::GrabbyTentacleController::PickTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"PickTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method);
}
inline bool GlobalNamespace::GrabbyTentacleController::IsRigCurrentlyGrabbed(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"IsRigCurrentlyGrabbed", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rig);
}
inline void GlobalNamespace::GrabbyTentacleController::OnGrabReceived(int32_t  tentacleIndex, ::GlobalNamespace::VRRig*  targetRig, bool  isLocalPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {"OnGrabReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tentacleIndex, targetRig, isLocalPlayer);
}
inline void GlobalNamespace::GrabbyTentacleController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrabbyTentacleController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GrabbyTentacleController* GlobalNamespace::GrabbyTentacleController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GrabbyTentacleController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GrabbyTentacleController::GrabbyTentacleController()   {
}

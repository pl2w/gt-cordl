#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsChaseBehaviour.hpp"
#include "GlobalNamespace/zzzz__CustomMapsBehaviourBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsChaseBehaviour_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AIAgent_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAIBehaviourController_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsChaseBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsChaseBehaviour::*)(::GlobalNamespace::CustomMapsAIBehaviourController*, ::GT_CustomMapSupportRuntime::AIAgent*)>(&::GlobalNamespace::CustomMapsChaseBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59c2df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(), ::i2c::type_of<::GT_CustomMapSupportRuntime::AIAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsChaseBehaviour.CanExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsChaseBehaviour::*)()>(&::GlobalNamespace::CustomMapsChaseBehaviour::CanExecute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59c2e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsChaseBehaviour.CanContinueExecuting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsChaseBehaviour::*)()>(&::GlobalNamespace::CustomMapsChaseBehaviour::CanContinueExecuting)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59c2efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsChaseBehaviour.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsChaseBehaviour::*)()>(&::GlobalNamespace::CustomMapsChaseBehaviour::Execute)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59c3034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsChaseBehaviour.IsTargetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsChaseBehaviour::*)()>(&::GlobalNamespace::CustomMapsChaseBehaviour::IsTargetVisible)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59c30fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                        {"IsTargetVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsChaseBehaviour.IsTargetInChaseRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsChaseBehaviour::*)(::by_ref<bool>)>(&::GlobalNamespace::CustomMapsChaseBehaviour::IsTargetInChaseRange)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59c2f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                        {"IsTargetInChaseRange", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsChaseBehaviour.NetExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsChaseBehaviour::*)()>(&::GlobalNamespace::CustomMapsChaseBehaviour::NetExecute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c31f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsChaseBehaviour.ResetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsChaseBehaviour::*)()>(&::GlobalNamespace::CustomMapsChaseBehaviour::ResetBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c31f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsChaseBehaviour.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsChaseBehaviour::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CustomMapsChaseBehaviour::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c3200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_navMeshAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_navMeshAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshAgent;
}
constexpr void GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_set_navMeshAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navMeshAgent = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController> const& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr void GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_set_controller(::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controller = value;
}
constexpr float_t& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_loseSightDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loseSightDist;
}
constexpr float_t const& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_loseSightDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loseSightDist;
}
constexpr void GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_set_loseSightDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loseSightDist = value;
}
constexpr float_t& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_loseSightDistSq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loseSightDistSq;
}
constexpr float_t const& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_loseSightDistSq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loseSightDistSq;
}
constexpr void GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_set_loseSightDistSq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loseSightDistSq = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_sightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_sightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightOffset;
}
constexpr void GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_set_sightOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightOffset = value;
}
constexpr bool& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_rememberLoseSightPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rememberLoseSightPos;
}
constexpr bool const& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_rememberLoseSightPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rememberLoseSightPos;
}
constexpr void GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_set_rememberLoseSightPos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rememberLoseSightPos = value;
}
constexpr float_t& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_stopDistSq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopDistSq;
}
constexpr float_t const& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_stopDistSq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopDistSq;
}
constexpr void GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_set_stopDistSq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopDistSq = value;
}
constexpr bool& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_isChasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isChasing;
}
constexpr bool const& GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_get_isChasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isChasing;
}
constexpr void GlobalNamespace::CustomMapsChaseBehaviour::__cordl_internal_set_isChasing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isChasing = value;
}
inline void GlobalNamespace::CustomMapsChaseBehaviour::_ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIController, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(), ::i2c::type_of<::GT_CustomMapSupportRuntime::AIAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, AIController, agentSettings);
}
inline bool GlobalNamespace::CustomMapsChaseBehaviour::CanExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsChaseBehaviour::CanContinueExecuting()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsChaseBehaviour::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsChaseBehaviour::IsTargetVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                        {"IsTargetVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsChaseBehaviour::IsTargetInChaseRange(::by_ref<bool>  withinStopDist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(),
                        {"IsTargetInChaseRange", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, withinStopDist);
}
inline void GlobalNamespace::CustomMapsChaseBehaviour::NetExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsChaseBehaviour::ResetBehavior()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsChaseBehaviour::OnTriggerEnter(::UnityEngine::Collider*  otherCollider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsChaseBehaviour*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherCollider);
}
inline ::GlobalNamespace::CustomMapsChaseBehaviour* GlobalNamespace::CustomMapsChaseBehaviour::New_ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIController, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsChaseBehaviour*>(AIController, agentSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsChaseBehaviour::CustomMapsChaseBehaviour()   {
}

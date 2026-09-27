#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsSearchBehaviour.hpp"
#include "GlobalNamespace/zzzz__CustomMapsBehaviourBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsSearchBehaviour_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AIAgent_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAIBehaviourController_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsSearchBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsSearchBehaviour::*)(::GlobalNamespace::CustomMapsAIBehaviourController*, ::GT_CustomMapSupportRuntime::AIAgent*)>(&::GlobalNamespace::CustomMapsSearchBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59c3204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(), ::i2c::type_of<::GT_CustomMapSupportRuntime::AIAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsSearchBehaviour.CanExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsSearchBehaviour::*)()>(&::GlobalNamespace::CustomMapsSearchBehaviour::CanExecute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59c327c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsSearchBehaviour.CanContinueExecuting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsSearchBehaviour::*)()>(&::GlobalNamespace::CustomMapsSearchBehaviour::CanContinueExecuting)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59c32e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsSearchBehaviour.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsSearchBehaviour::*)()>(&::GlobalNamespace::CustomMapsSearchBehaviour::Execute)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59c3374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsSearchBehaviour.NetExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsSearchBehaviour::*)()>(&::GlobalNamespace::CustomMapsSearchBehaviour::NetExecute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c34d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsSearchBehaviour.ResetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsSearchBehaviour::*)()>(&::GlobalNamespace::CustomMapsSearchBehaviour::ResetBehavior)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c34d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsSearchBehaviour.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsSearchBehaviour::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CustomMapsSearchBehaviour::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c34d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController> const& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr void GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_set_controller(::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controller = value;
}
constexpr float_t& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_sightDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightDist;
}
constexpr float_t const& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_sightDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightDist;
}
constexpr void GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_set_sightDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightDist = value;
}
constexpr float_t& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_sightDistSq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightDistSq;
}
constexpr float_t const& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_sightDistSq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightDistSq;
}
constexpr void GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_set_sightDistSq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightDistSq = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_sightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_sightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightOffset;
}
constexpr void GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_set_sightOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightOffset = value;
}
constexpr float_t& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_sightFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightFOV;
}
constexpr float_t const& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_sightFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightFOV;
}
constexpr void GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_set_sightFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightFOV = value;
}
constexpr float_t& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_sightMinDot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightMinDot;
}
constexpr float_t const& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_sightMinDot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightMinDot;
}
constexpr void GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_set_sightMinDot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightMinDot = value;
}
constexpr float_t& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_lastSearchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSearchTime;
}
constexpr float_t const& GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_get_lastSearchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSearchTime;
}
constexpr void GlobalNamespace::CustomMapsSearchBehaviour::__cordl_internal_set_lastSearchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSearchTime = value;
}
inline void GlobalNamespace::CustomMapsSearchBehaviour::_ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIcontroller, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(), ::i2c::type_of<::GT_CustomMapSupportRuntime::AIAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, AIcontroller, agentSettings);
}
inline bool GlobalNamespace::CustomMapsSearchBehaviour::CanExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsSearchBehaviour::CanContinueExecuting()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsSearchBehaviour::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsSearchBehaviour::NetExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsSearchBehaviour::ResetBehavior()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsSearchBehaviour::OnTriggerEnter(::UnityEngine::Collider*  otherCollider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsSearchBehaviour*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherCollider);
}
inline ::GlobalNamespace::CustomMapsSearchBehaviour* GlobalNamespace::CustomMapsSearchBehaviour::New_ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIcontroller, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsSearchBehaviour*>(AIcontroller, agentSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsSearchBehaviour::CustomMapsSearchBehaviour()   {
}

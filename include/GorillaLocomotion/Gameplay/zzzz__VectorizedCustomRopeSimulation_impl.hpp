#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/VectorizedCustomRopeSimulation.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__VectorizedBurstRopeData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__VectorizedCustomRopeSimulation_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaRopeSwing_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cf19fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Register)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ce9e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Unregister)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cea0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.RegenerateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::RegenerateData)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x5cf1a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"RegenerateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Dispose)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5cf2280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cf237c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.SetRopePos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*, ::ArrayW<::UnityEngine::Vector3>, bool, bool, int32_t)>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetRopePos)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5cf2380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"SetRopePos", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*, ::UnityEngine::Vector3, bool, int32_t)>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetVelocity)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5cec470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.GetNodeVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*, int32_t)>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::GetNodeVelocity)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5cea9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"GetNodeVelocity", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.SetMassForPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*, bool, int32_t)>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetMassForPlayers)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5cec138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"SetMassForPlayers", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Update)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x5cf25d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::*)()>(&::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cf2a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_set_nodes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_nodeDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeDistance;
}
constexpr float_t const& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_nodeDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeDistance;
}
constexpr void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_set_nodeDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeDistance = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_applyConstraintIterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyConstraintIterations;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_applyConstraintIterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyConstraintIterations;
}
constexpr void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_set_applyConstraintIterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyConstraintIterations = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_finalPassIterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalPassIterations;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_finalPassIterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalPassIterations;
}
constexpr void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_set_finalPassIterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalPassIterations = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_gravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr float_t const& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_gravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_set_gravity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravity = value;
}
constexpr ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_burstData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___burstData;
}
constexpr ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData const& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_burstData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___burstData;
}
constexpr void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_set_burstData(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___burstData = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_lastDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDelta;
}
constexpr float_t const& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_lastDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDelta;
}
constexpr void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_set_lastDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDelta = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_ropes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>* const& GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_get_ropes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropes;
}
constexpr void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::__cordl_internal_set_ropes(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropes = value;
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::setStaticF_instance(::UnityW<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation>, "instance", ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(std::forward<::UnityW<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation>>(value));
}
inline ::UnityW<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation> GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation>, "instance", ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>();
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::setStaticF_registerQueue(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*, "registerQueue", ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>* GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::getStaticF_registerQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*, "registerQueue", ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>();
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::setStaticF_deregisterQueue(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*, "deregisterQueue", ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>* GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::getStaticF_deregisterQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*, "deregisterQueue", ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>();
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Register(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  rope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rope);
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Unregister(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  rope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rope);
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::RegenerateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"RegenerateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetRopePos(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  ropeTarget, ::ArrayW<::UnityEngine::Vector3>  positions, bool  setCurPos, bool  setLastPos, int32_t  onlySetIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"SetRopePos", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ropeTarget, positions, setCurPos, setLastPos, onlySetIndex);
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetVelocity(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  ropeTarget, ::UnityEngine::Vector3  velocity, bool  wholeRope, int32_t  boneIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ropeTarget, velocity, wholeRope, boneIndex);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::GetNodeVelocity(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  ropeTarget, int32_t  nodeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"GetNodeVelocity", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, ropeTarget, nodeIndex);
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::SetMassForPlayers(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  ropeTarget, bool  hasPlayers, int32_t  furthestBoneIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"SetMassForPlayers", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ropeTarget, hasPlayers, furthestBoneIndex);
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation* GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation::VectorizedCustomRopeSimulation()   {
}

#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/CustomRopeSimulation.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__BurstRopeNode_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__CustomRopeSimulation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::CustomRopeSimulation.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::CustomRopeSimulation::*)()>(&::GorillaLocomotion::Gameplay::CustomRopeSimulation::Start)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5ce8bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::CustomRopeSimulation*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::CustomRopeSimulation.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::CustomRopeSimulation::*)()>(&::GorillaLocomotion::Gameplay::CustomRopeSimulation::OnDestroy)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ce8e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::CustomRopeSimulation*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::CustomRopeSimulation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::CustomRopeSimulation::*)()>(&::GorillaLocomotion::Gameplay::CustomRopeSimulation::Update)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5ce8eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::CustomRopeSimulation*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::CustomRopeSimulation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::CustomRopeSimulation::*)()>(&::GorillaLocomotion::Gameplay::CustomRopeSimulation::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ce9084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::CustomRopeSimulation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_set_nodes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_ropeNodePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeNodePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_ropeNodePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeNodePrefab;
}
constexpr void GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_set_ropeNodePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeNodePrefab = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_nodeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeCount;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_nodeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeCount;
}
constexpr void GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_set_nodeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeCount = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_nodeDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeDistance;
}
constexpr float_t const& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_nodeDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeDistance;
}
constexpr void GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_set_nodeDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeDistance = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_gravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_gravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr void GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_set_gravity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravity = value;
}
constexpr ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_burstNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___burstNodes;
}
constexpr ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode> const& GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_get_burstNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___burstNodes;
}
constexpr void GorillaLocomotion::Gameplay::CustomRopeSimulation::__cordl_internal_set_burstNodes(::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___burstNodes = value;
}
inline void GorillaLocomotion::Gameplay::CustomRopeSimulation::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::CustomRopeSimulation*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::CustomRopeSimulation::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::CustomRopeSimulation*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::CustomRopeSimulation::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::CustomRopeSimulation*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::CustomRopeSimulation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::CustomRopeSimulation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::CustomRopeSimulation* GorillaLocomotion::Gameplay::CustomRopeSimulation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::CustomRopeSimulation*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::CustomRopeSimulation::CustomRopeSimulation()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoCatchThrowBall.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AutoCatchThrowBall_def.hpp"
#include "GlobalNamespace/zzzz__AutoCatchThrowBall_HeldBall_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutoCatchThrowBall.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoCatchThrowBall::*)()>(&::GlobalNamespace::AutoCatchThrowBall::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ade774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCatchThrowBall*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoCatchThrowBall.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoCatchThrowBall::*)()>(&::GlobalNamespace::AutoCatchThrowBall::Update)> {
  constexpr static std::size_t size = 0xb5c;
  constexpr static std::size_t addrs = 0x5ade7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCatchThrowBall*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoCatchThrowBall.Throw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoCatchThrowBall::*)(::GlobalNamespace::TransferrableObject*, ::UnityEngine::Vector3)>(&::GlobalNamespace::AutoCatchThrowBall::Throw)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5adf328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCatchThrowBall*>(),
                        {"Throw", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoCatchThrowBall._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoCatchThrowBall::*)()>(&::GlobalNamespace::AutoCatchThrowBall::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5adf4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCatchThrowBall*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_ballPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_ballPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballPrefab;
}
constexpr void GlobalNamespace::AutoCatchThrowBall::__cordl_internal_set_ballPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballPrefab = value;
}
constexpr float_t& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_throwPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwPitch;
}
constexpr float_t const& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_throwPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwPitch;
}
constexpr void GlobalNamespace::AutoCatchThrowBall::__cordl_internal_set_throwPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwPitch = value;
}
constexpr float_t& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_throwSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSpeed;
}
constexpr float_t const& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_throwSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSpeed;
}
constexpr void GlobalNamespace::AutoCatchThrowBall::__cordl_internal_set_throwSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSpeed = value;
}
constexpr float_t& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_throwWaitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwWaitTime;
}
constexpr float_t const& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_throwWaitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwWaitTime;
}
constexpr void GlobalNamespace::AutoCatchThrowBall::__cordl_internal_set_throwWaitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwWaitTime = value;
}
constexpr float_t& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_catchWaitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchWaitTime;
}
constexpr float_t const& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_catchWaitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchWaitTime;
}
constexpr void GlobalNamespace::AutoCatchThrowBall::__cordl_internal_set_catchWaitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchWaitTime = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_ballLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLayer;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_ballLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLayer;
}
constexpr void GlobalNamespace::AutoCatchThrowBall::__cordl_internal_set_ballLayer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballLayer = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_vrRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_vrRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRig;
}
constexpr void GlobalNamespace::AutoCatchThrowBall::__cordl_internal_set_vrRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrRig = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_overlapResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapResults;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_overlapResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapResults;
}
constexpr void GlobalNamespace::AutoCatchThrowBall::__cordl_internal_set_overlapResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapResults = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall_HeldBall>*& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_heldBalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldBalls;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall_HeldBall>* const& GlobalNamespace::AutoCatchThrowBall::__cordl_internal_get_heldBalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldBalls;
}
constexpr void GlobalNamespace::AutoCatchThrowBall::__cordl_internal_set_heldBalls(::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall_HeldBall>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldBalls = value;
}
inline void GlobalNamespace::AutoCatchThrowBall::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCatchThrowBall*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AutoCatchThrowBall::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCatchThrowBall*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AutoCatchThrowBall::Throw(::GlobalNamespace::TransferrableObject*  transferrable, ::UnityEngine::Vector3  throwDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCatchThrowBall*>(),
                        {"Throw", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transferrable, throwDir);
}
inline void GlobalNamespace::AutoCatchThrowBall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCatchThrowBall*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AutoCatchThrowBall* GlobalNamespace::AutoCatchThrowBall::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AutoCatchThrowBall*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoCatchThrowBall::AutoCatchThrowBall()   {
}

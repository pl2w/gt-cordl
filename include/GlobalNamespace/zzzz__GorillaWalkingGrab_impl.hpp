#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaWalkingGrab.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaWalkingGrab_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaWalkingGrab.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWalkingGrab::*)()>(&::GlobalNamespace::GorillaWalkingGrab::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x579e1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWalkingGrab*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWalkingGrab.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWalkingGrab::*)()>(&::GlobalNamespace::GorillaWalkingGrab::FixedUpdate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x579e29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWalkingGrab*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWalkingGrab.MakeJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaWalkingGrab::*)()>(&::GlobalNamespace::GorillaWalkingGrab::MakeJump)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWalkingGrab*>(),
                        {"MakeJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWalkingGrab.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWalkingGrab::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::GorillaWalkingGrab::OnCollisionStay)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x579e388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWalkingGrab*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWalkingGrab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWalkingGrab::*)()>(&::GlobalNamespace::GorillaWalkingGrab::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579e5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWalkingGrab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_handToStickTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handToStickTo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_handToStickTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handToStickTo;
}
constexpr void GlobalNamespace::GorillaWalkingGrab::__cordl_internal_set_handToStickTo(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handToStickTo = value;
}
constexpr float_t& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_ratioToUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ratioToUse;
}
constexpr float_t const& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_ratioToUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ratioToUse;
}
constexpr void GlobalNamespace::GorillaWalkingGrab::__cordl_internal_set_ratioToUse(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ratioToUse = value;
}
constexpr float_t& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_forceMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceMultiplier;
}
constexpr float_t const& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_forceMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceMultiplier;
}
constexpr void GlobalNamespace::GorillaWalkingGrab::__cordl_internal_set_forceMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceMultiplier = value;
}
constexpr int32_t& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_historySteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___historySteps;
}
constexpr int32_t const& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_historySteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___historySteps;
}
constexpr void GlobalNamespace::GorillaWalkingGrab::__cordl_internal_set_historySteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___historySteps = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_playspaceRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playspaceRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_playspaceRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playspaceRigidbody;
}
constexpr void GlobalNamespace::GorillaWalkingGrab::__cordl_internal_set_playspaceRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playspaceRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_thisRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_thisRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisRigidbody;
}
constexpr void GlobalNamespace::GorillaWalkingGrab::__cordl_internal_set_thisRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thisRigidbody = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GlobalNamespace::GorillaWalkingGrab::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_maybeLastPositionIDK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maybeLastPositionIDK;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_maybeLastPositionIDK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maybeLastPositionIDK;
}
constexpr void GlobalNamespace::GorillaWalkingGrab::__cordl_internal_set_maybeLastPositionIDK(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maybeLastPositionIDK = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_positionHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionHistory;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_positionHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionHistory;
}
constexpr void GlobalNamespace::GorillaWalkingGrab::__cordl_internal_set_positionHistory(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionHistory = value;
}
constexpr int32_t& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_historyIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___historyIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaWalkingGrab::__cordl_internal_get_historyIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___historyIndex;
}
constexpr void GlobalNamespace::GorillaWalkingGrab::__cordl_internal_set_historyIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___historyIndex = value;
}
inline void GlobalNamespace::GorillaWalkingGrab::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWalkingGrab*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWalkingGrab::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWalkingGrab*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaWalkingGrab::MakeJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWalkingGrab*>(),
                        {"MakeJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWalkingGrab::OnCollisionStay(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWalkingGrab*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::GorillaWalkingGrab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWalkingGrab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaWalkingGrab* GlobalNamespace::GorillaWalkingGrab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaWalkingGrab*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaWalkingGrab::GorillaWalkingGrab()   {
}

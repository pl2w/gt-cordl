#pragma once
// IWYU pragma private; include "GlobalNamespace/HangingClaw.hpp"
#include "GlobalNamespace/zzzz__HangingClaw_RopeSegment_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HangingClaw_def.hpp"
#include "GlobalNamespace/zzzz__HangingClaw_RopeSegment_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HangingClaw.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HangingClaw::*)()>(&::GlobalNamespace::HangingClaw::Awake)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x589cb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HangingClaw.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HangingClaw::*)()>(&::GlobalNamespace::HangingClaw::PostTick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x589ce78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                    {::i2c::class_of<::GlobalNamespace::HangingClaw*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HangingClaw.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HangingClaw::*)()>(&::GlobalNamespace::HangingClaw::Simulate)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x589ced4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {"Simulate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HangingClaw.ApplyConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HangingClaw::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::HangingClaw::ApplyConstraints)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x589d1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {"ApplyConstraints", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HangingClaw.ApplyConstraintSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HangingClaw::*)(::by_ref<::GlobalNamespace::HangingClaw_RopeSegment>, ::by_ref<::GlobalNamespace::HangingClaw_RopeSegment>, float_t, float_t, float_t)>(&::GlobalNamespace::HangingClaw::ApplyConstraintSegment)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x589d2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {"ApplyConstraintSegment", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::HangingClaw_RopeSegment>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HangingClaw_RopeSegment>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HangingClaw.DrawRope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HangingClaw::*)()>(&::GlobalNamespace::HangingClaw::DrawRope)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x589d090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {"DrawRope", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HangingClaw._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HangingClaw::*)()>(&::GlobalNamespace::HangingClaw::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x589d434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HangingClaw::__cordl_internal_get_endTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HangingClaw::__cordl_internal_get_endTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTransform;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_endTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HangingClaw::__cordl_internal_get_heightCap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightCap;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HangingClaw::__cordl_internal_get_heightCap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightCap;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_heightCap(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightCap = value;
}
constexpr int32_t& GlobalNamespace::HangingClaw::__cordl_internal_get_segmentCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentCount;
}
constexpr int32_t const& GlobalNamespace::HangingClaw::__cordl_internal_get_segmentCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentCount;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_segmentCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentCount = value;
}
constexpr float_t& GlobalNamespace::HangingClaw::__cordl_internal_get_segmentMassKg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentMassKg;
}
constexpr float_t const& GlobalNamespace::HangingClaw::__cordl_internal_get_segmentMassKg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentMassKg;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_segmentMassKg(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentMassKg = value;
}
constexpr float_t& GlobalNamespace::HangingClaw::__cordl_internal_get_endMassKg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endMassKg;
}
constexpr float_t const& GlobalNamespace::HangingClaw::__cordl_internal_get_endMassKg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endMassKg;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_endMassKg(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endMassKg = value;
}
constexpr float_t& GlobalNamespace::HangingClaw::__cordl_internal_get_ropeStiffness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeStiffness;
}
constexpr float_t const& GlobalNamespace::HangingClaw::__cordl_internal_get_ropeStiffness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeStiffness;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_ropeStiffness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeStiffness = value;
}
constexpr float_t& GlobalNamespace::HangingClaw::__cordl_internal_get_slackFraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slackFraction;
}
constexpr float_t const& GlobalNamespace::HangingClaw::__cordl_internal_get_slackFraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slackFraction;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_slackFraction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slackFraction = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HangingClaw::__cordl_internal_get_gravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HangingClaw::__cordl_internal_get_gravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_gravity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravity = value;
}
constexpr float_t& GlobalNamespace::HangingClaw::__cordl_internal_get_velocityDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityDamping;
}
constexpr float_t const& GlobalNamespace::HangingClaw::__cordl_internal_get_velocityDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityDamping;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_velocityDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityDamping = value;
}
constexpr float_t& GlobalNamespace::HangingClaw::__cordl_internal_get_maxY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxY;
}
constexpr float_t const& GlobalNamespace::HangingClaw::__cordl_internal_get_maxY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxY;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_maxY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxY = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::HangingClaw::__cordl_internal_get_lineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::HangingClaw::__cordl_internal_get_lineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineRenderer = value;
}
constexpr ::ArrayW<::GlobalNamespace::HangingClaw_RopeSegment>& GlobalNamespace::HangingClaw::__cordl_internal_get_ropeSegs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSegs;
}
constexpr ::ArrayW<::GlobalNamespace::HangingClaw_RopeSegment> const& GlobalNamespace::HangingClaw::__cordl_internal_get_ropeSegs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSegs;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_ropeSegs(::ArrayW<::GlobalNamespace::HangingClaw_RopeSegment>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeSegs = value;
}
constexpr float_t& GlobalNamespace::HangingClaw::__cordl_internal_get_baseSegLen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseSegLen;
}
constexpr float_t const& GlobalNamespace::HangingClaw::__cordl_internal_get_baseSegLen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseSegLen;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_baseSegLen(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseSegLen = value;
}
constexpr float_t& GlobalNamespace::HangingClaw::__cordl_internal_get_targetSegLenScaled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSegLenScaled;
}
constexpr float_t const& GlobalNamespace::HangingClaw::__cordl_internal_get_targetSegLenScaled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSegLenScaled;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_targetSegLenScaled(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSegLenScaled = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::HangingClaw::__cordl_internal_get_invMass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invMass;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::HangingClaw::__cordl_internal_get_invMass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invMass;
}
constexpr void GlobalNamespace::HangingClaw::__cordl_internal_set_invMass(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invMass = value;
}
inline void GlobalNamespace::HangingClaw::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HangingClaw::PostTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HangingClaw*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HangingClaw::Simulate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {"Simulate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HangingClaw::ApplyConstraints(::UnityEngine::Vector3  topPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {"ApplyConstraints", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topPos);
}
inline void GlobalNamespace::HangingClaw::ApplyConstraintSegment(::by_ref<::GlobalNamespace::HangingClaw_RopeSegment>  a, ::by_ref<::GlobalNamespace::HangingClaw_RopeSegment>  b, float_t  wA, float_t  wB, float_t  stiffness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {"ApplyConstraintSegment", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::HangingClaw_RopeSegment>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HangingClaw_RopeSegment>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, wA, wB, stiffness);
}
inline void GlobalNamespace::HangingClaw::DrawRope()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {"DrawRope", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HangingClaw::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HangingClaw* GlobalNamespace::HangingClaw::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HangingClaw*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HangingClaw::HangingClaw()   {
}

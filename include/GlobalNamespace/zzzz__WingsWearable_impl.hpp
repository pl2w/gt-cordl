#pragma once
// IWYU pragma private; include "GlobalNamespace/WingsWearable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__WingsWearable_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WingsWearable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WingsWearable::*)()>(&::GlobalNamespace::WingsWearable::Awake)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e062e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WingsWearable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WingsWearable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WingsWearable::*)()>(&::GlobalNamespace::WingsWearable::OnEnable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e06420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WingsWearable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WingsWearable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WingsWearable::*)()>(&::GlobalNamespace::WingsWearable::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e06464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WingsWearable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WingsWearable.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WingsWearable::*)()>(&::GlobalNamespace::WingsWearable::SliceUpdate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5e06470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WingsWearable*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WingsWearable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WingsWearable::*)()>(&::GlobalNamespace::WingsWearable::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e065ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WingsWearable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::WingsWearable::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::WingsWearable::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::WingsWearable::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::WingsWearable::__cordl_internal_get_flapSpeedCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flapSpeedCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::WingsWearable::__cordl_internal_get_flapSpeedCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flapSpeedCurve;
}
constexpr void GlobalNamespace::WingsWearable::__cordl_internal_set_flapSpeedCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flapSpeedCurve = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WingsWearable::__cordl_internal_get_xform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WingsWearable::__cordl_internal_get_xform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xform;
}
constexpr void GlobalNamespace::WingsWearable::__cordl_internal_set_xform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::WingsWearable::__cordl_internal_get_oldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::WingsWearable::__cordl_internal_get_oldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldPos;
}
constexpr void GlobalNamespace::WingsWearable::__cordl_internal_set_oldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldPos = value;
}
constexpr float_t& GlobalNamespace::WingsWearable::__cordl_internal_get_lastSliceTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceTime;
}
constexpr float_t const& GlobalNamespace::WingsWearable::__cordl_internal_get_lastSliceTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceTime;
}
constexpr void GlobalNamespace::WingsWearable::__cordl_internal_set_lastSliceTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSliceTime = value;
}
constexpr int32_t& GlobalNamespace::WingsWearable::__cordl_internal_get_flapSpeedParamID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flapSpeedParamID;
}
constexpr int32_t const& GlobalNamespace::WingsWearable::__cordl_internal_get_flapSpeedParamID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flapSpeedParamID;
}
constexpr void GlobalNamespace::WingsWearable::__cordl_internal_set_flapSpeedParamID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flapSpeedParamID = value;
}
inline void GlobalNamespace::WingsWearable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WingsWearable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WingsWearable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WingsWearable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WingsWearable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WingsWearable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WingsWearable::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WingsWearable*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WingsWearable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WingsWearable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WingsWearable* GlobalNamespace::WingsWearable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WingsWearable*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::WingsWearable::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::WingsWearable::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WingsWearable::WingsWearable()   {
}

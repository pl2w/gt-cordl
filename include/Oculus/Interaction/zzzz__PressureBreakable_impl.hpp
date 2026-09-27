#pragma once
// IWYU pragma private; include "Oculus/Interaction/PressureBreakable.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Rigidbody_impl.hpp"
#include "Oculus/Interaction/zzzz__PressureBreakable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabUseDelegate_def.hpp"
#include "Oculus/Interaction/zzzz__PressureBreakable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureBreakable::*)()>(&::Oculus::Interaction::PressureBreakable::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa42c184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                    {::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureBreakable::*)()>(&::Oculus::Interaction::PressureBreakable::Start)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa42c1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                    {::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureBreakable::*)()>(&::Oculus::Interaction::PressureBreakable::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa42c350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                    {::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable.BeginUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureBreakable::*)()>(&::Oculus::Interaction::PressureBreakable::BeginUse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa42c50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {"BeginUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable.EndUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureBreakable::*)()>(&::Oculus::Interaction::PressureBreakable::EndUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42c510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {"EndUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable.ComputeUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PressureBreakable::*)(float_t)>(&::Oculus::Interaction::PressureBreakable::ComputeUseStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42c518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {"ComputeUseStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable.Break
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureBreakable::*)()>(&::Oculus::Interaction::PressureBreakable::Break)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa42c368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {"Break", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable.Unbreak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::PressureBreakable::*)()>(&::Oculus::Interaction::PressureBreakable::Unbreak)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa42c520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {"Unbreak", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureBreakable::*)()>(&::Oculus::Interaction::PressureBreakable::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa42c5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::PressureBreakable::__cordl_internal_get__breakThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breakThreshold;
}
constexpr float_t const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__breakThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breakThreshold;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__breakThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breakThreshold = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::PressureBreakable::__cordl_internal_get__unbrokenObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unbrokenObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__unbrokenObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unbrokenObject;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__unbrokenObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unbrokenObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::PressureBreakable::__cordl_internal_get__brokenObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____brokenObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__brokenObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____brokenObject;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__brokenObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____brokenObject = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>& Oculus::Interaction::PressureBreakable::__cordl_internal_get__brokenBodies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____brokenBodies;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>> const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__brokenBodies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____brokenBodies;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__brokenBodies(::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____brokenBodies = value;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>& Oculus::Interaction::PressureBreakable::__cordl_internal_get__grabInteractables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabInteractables;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>> const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__grabInteractables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabInteractables;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__grabInteractables(::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabInteractables = value;
}
constexpr float_t& Oculus::Interaction::PressureBreakable::__cordl_internal_get__explosionForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____explosionForce;
}
constexpr float_t const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__explosionForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____explosionForce;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__explosionForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____explosionForce = value;
}
constexpr float_t& Oculus::Interaction::PressureBreakable::__cordl_internal_get__explosionRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____explosionRadius;
}
constexpr float_t const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__explosionRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____explosionRadius;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__explosionRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____explosionRadius = value;
}
constexpr float_t& Oculus::Interaction::PressureBreakable::__cordl_internal_get__unbreakDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unbreakDelay;
}
constexpr float_t const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__unbreakDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unbreakDelay;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__unbreakDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unbreakDelay = value;
}
constexpr float_t& Oculus::Interaction::PressureBreakable::__cordl_internal_get__useStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useStrength;
}
constexpr float_t const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__useStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useStrength;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__useStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useStrength = value;
}
constexpr bool& Oculus::Interaction::PressureBreakable::__cordl_internal_get__isBroken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isBroken;
}
constexpr bool const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__isBroken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isBroken;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__isBroken(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isBroken = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::PressureBreakable::__cordl_internal_get__brokenBodiesInitialPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____brokenBodiesInitialPoses;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::PressureBreakable::__cordl_internal_get__brokenBodiesInitialPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____brokenBodiesInitialPoses;
}
constexpr void Oculus::Interaction::PressureBreakable::__cordl_internal_set__brokenBodiesInitialPoses(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____brokenBodiesInitialPoses = value;
}
inline void Oculus::Interaction::PressureBreakable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PressureBreakable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PressureBreakable::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PressureBreakable::BeginUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {"BeginUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PressureBreakable::EndUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {"EndUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PressureBreakable::ComputeUseStrength(float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {"ComputeUseStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, strength);
}
inline void Oculus::Interaction::PressureBreakable::Break()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {"Break", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::PressureBreakable::Unbreak()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {"Unbreak", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Oculus::Interaction::PressureBreakable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PressureBreakable* Oculus::Interaction::PressureBreakable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PressureBreakable*>());
}
/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr  Oculus::Interaction::PressureBreakable::operator ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* Oculus::Interaction::PressureBreakable::i___Oculus__Interaction__HandGrab__IHandGrabUseDelegate() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PressureBreakable::PressureBreakable()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable__Unbreak_d__18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureBreakable__Unbreak_d__18::*)(int32_t)>(&::Oculus::Interaction::PressureBreakable__Unbreak_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa42c58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable__Unbreak_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureBreakable__Unbreak_d__18::*)()>(&::Oculus::Interaction::PressureBreakable__Unbreak_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa42c5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable__Unbreak_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PressureBreakable__Unbreak_d__18::*)()>(&::Oculus::Interaction::PressureBreakable__Unbreak_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xa42c5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable__Unbreak_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::PressureBreakable__Unbreak_d__18::*)()>(&::Oculus::Interaction::PressureBreakable__Unbreak_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42c878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable__Unbreak_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureBreakable__Unbreak_d__18::*)()>(&::Oculus::Interaction::PressureBreakable__Unbreak_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa42c880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureBreakable__Unbreak_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::PressureBreakable__Unbreak_d__18::*)()>(&::Oculus::Interaction::PressureBreakable__Unbreak_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42c8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::PressureBreakable__Unbreak_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::PressureBreakable__Unbreak_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::PressureBreakable__Unbreak_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::PressureBreakable__Unbreak_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::PressureBreakable__Unbreak_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::PressureBreakable__Unbreak_d__18::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Interaction::PressureBreakable>& Oculus::Interaction::PressureBreakable__Unbreak_d__18::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::PressureBreakable> const& Oculus::Interaction::PressureBreakable__Unbreak_d__18::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::PressureBreakable__Unbreak_d__18::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::PressureBreakable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Oculus::Interaction::PressureBreakable__Unbreak_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::PressureBreakable__Unbreak_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PressureBreakable__Unbreak_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::PressureBreakable__Unbreak_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::PressureBreakable__Unbreak_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::PressureBreakable__Unbreak_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::PressureBreakable__Unbreak_d__18* Oculus::Interaction::PressureBreakable__Unbreak_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PressureBreakable__Unbreak_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::PressureBreakable__Unbreak_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::PressureBreakable__Unbreak_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::PressureBreakable__Unbreak_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::PressureBreakable__Unbreak_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::PressureBreakable__Unbreak_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::PressureBreakable__Unbreak_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PressureBreakable__Unbreak_d__18::PressureBreakable__Unbreak_d__18()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericTriggerReactor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__GenericTriggerReactor_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GenericTriggerReactor.IBuildValidation_BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GenericTriggerReactor::*)()>(&::GlobalNamespace::GenericTriggerReactor::IBuildValidation_BuildValidationCheck)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x57ec8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericTriggerReactor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericTriggerReactor::*)()>(&::GlobalNamespace::GenericTriggerReactor::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57ec9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericTriggerReactor.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericTriggerReactor::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GenericTriggerReactor::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57eca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericTriggerReactor.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericTriggerReactor::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GenericTriggerReactor::OnTriggerExit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57ecc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericTriggerReactor.OnTriggerTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericTriggerReactor::*)(::UnityEngine::Collider*, ::UnityEngine::Vector2, ::UnityEngine::Events::UnityEvent*, ::UnityEngine::Vector2)>(&::GlobalNamespace::GenericTriggerReactor::OnTriggerTest)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x57eca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {"OnTriggerTest", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericTriggerReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericTriggerReactor::*)()>(&::GlobalNamespace::GenericTriggerReactor::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x57eccac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_ComponentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComponentName;
}
constexpr ::StringW const& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_ComponentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComponentName;
}
constexpr void GlobalNamespace::GenericTriggerReactor::__cordl_internal_set_ComponentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ComponentName = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_speedRangeEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedRangeEnter;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_speedRangeEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedRangeEnter;
}
constexpr void GlobalNamespace::GenericTriggerReactor::__cordl_internal_set_speedRangeEnter(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedRangeEnter = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_speedRangeExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedRangeExit;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_speedRangeExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedRangeExit;
}
constexpr void GlobalNamespace::GenericTriggerReactor::__cordl_internal_set_speedRangeExit(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedRangeExit = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_idealMotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealMotion;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_idealMotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealMotion;
}
constexpr void GlobalNamespace::GenericTriggerReactor::__cordl_internal_set_idealMotion(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idealMotion = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_idealMotionPlayRangeEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealMotionPlayRangeEnter;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_idealMotionPlayRangeEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealMotionPlayRangeEnter;
}
constexpr void GlobalNamespace::GenericTriggerReactor::__cordl_internal_set_idealMotionPlayRangeEnter(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idealMotionPlayRangeEnter = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_idealMotionPlayRangeExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealMotionPlayRangeExit;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_idealMotionPlayRangeExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealMotionPlayRangeExit;
}
constexpr void GlobalNamespace::GenericTriggerReactor::__cordl_internal_set_idealMotionPlayRangeExit(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idealMotionPlayRangeExit = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_GTOnTriggerEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GTOnTriggerEnter;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_GTOnTriggerEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GTOnTriggerEnter;
}
constexpr void GlobalNamespace::GenericTriggerReactor::__cordl_internal_set_GTOnTriggerEnter(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GTOnTriggerEnter = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_GTOnTriggerExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GTOnTriggerExit;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_GTOnTriggerExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GTOnTriggerExit;
}
constexpr void GlobalNamespace::GenericTriggerReactor::__cordl_internal_set_GTOnTriggerExit(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GTOnTriggerExit = value;
}
constexpr ::System::Type*& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_componentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentType;
}
constexpr ::System::Type* const& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_componentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentType;
}
constexpr void GlobalNamespace::GenericTriggerReactor::__cordl_internal_set_componentType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentType = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_gorillaVelocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaVelocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::GenericTriggerReactor::__cordl_internal_get_gorillaVelocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaVelocityEstimator;
}
constexpr void GlobalNamespace::GenericTriggerReactor::__cordl_internal_set_gorillaVelocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaVelocityEstimator = value;
}
inline bool GlobalNamespace::GenericTriggerReactor::IBuildValidation_BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GenericTriggerReactor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GenericTriggerReactor::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GenericTriggerReactor::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GenericTriggerReactor::OnTriggerTest(::UnityEngine::Collider*  other, ::UnityEngine::Vector2  speedRange, ::UnityEngine::Events::UnityEvent*  unityEvent, ::UnityEngine::Vector2  idealMotionPlay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {"OnTriggerTest", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, speedRange, unityEvent, idealMotionPlay);
}
inline void GlobalNamespace::GenericTriggerReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericTriggerReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GenericTriggerReactor* GlobalNamespace::GenericTriggerReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GenericTriggerReactor*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::GenericTriggerReactor::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::GenericTriggerReactor::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GenericTriggerReactor::GenericTriggerReactor()   {
}

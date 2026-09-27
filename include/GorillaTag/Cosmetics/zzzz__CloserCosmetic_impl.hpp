#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CloserCosmetic.hpp"
#include "GorillaTag/Cosmetics/zzzz__CloserCosmetic_State_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CloserCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CloserCosmetic_State_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CloserCosmetic::*)()>(&::GorillaTag::Cosmetics::CloserCosmetic::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d807d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CloserCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::CloserCosmetic::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d807e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CloserCosmetic::*)()>(&::GorillaTag::Cosmetics::CloserCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d807e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CloserCosmetic::*)()>(&::GorillaTag::Cosmetics::CloserCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d808ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CloserCosmetic::*)()>(&::GorillaTag::Cosmetics::CloserCosmetic::Tick)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d80918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CloserCosmetic::*)(bool, float_t)>(&::GorillaTag::Cosmetics::CloserCosmetic::Close)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d80de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"Close", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CloserCosmetic::*)(bool, float_t)>(&::GorillaTag::Cosmetics::CloserCosmetic::Open)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d80df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"Open", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic.Closing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CloserCosmetic::*)()>(&::GorillaTag::Cosmetics::CloserCosmetic::Closing)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5d80934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"Closing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic.Opening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CloserCosmetic::*)()>(&::GorillaTag::Cosmetics::CloserCosmetic::Opening)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5d80bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"Opening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CloserCosmetic::*)(::GlobalNamespace::CloserCosmetic_State)>(&::GorillaTag::Cosmetics::CloserCosmetic::UpdateState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d80e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::CloserCosmetic_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CloserCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CloserCosmetic::*)()>(&::GorillaTag::Cosmetics::CloserCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d80e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_sideA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sideA;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_sideA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sideA;
}
constexpr void GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_set_sideA(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sideA = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_sideB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sideB;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_sideB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sideB;
}
constexpr void GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_set_sideB(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sideB = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_maxRotationA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRotationA;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_maxRotationA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRotationA;
}
constexpr void GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_set_maxRotationA(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRotationA = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_maxRotationB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRotationB;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_maxRotationB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRotationB;
}
constexpr void GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_set_maxRotationB(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRotationB = value;
}
constexpr bool& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_useFingerFlexValueAsStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useFingerFlexValueAsStrength;
}
constexpr bool const& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_useFingerFlexValueAsStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useFingerFlexValueAsStrength;
}
constexpr void GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_set_useFingerFlexValueAsStrength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useFingerFlexValueAsStrength = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_localRotA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotA;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_localRotA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotA;
}
constexpr void GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_set_localRotA(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRotA = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_localRotB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotB;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_localRotB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotB;
}
constexpr void GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_set_localRotB(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRotB = value;
}
constexpr ::GlobalNamespace::CloserCosmetic_State& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::CloserCosmetic_State const& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_set_currentState(::GlobalNamespace::CloserCosmetic_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr float_t& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_fingerValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerValue;
}
constexpr float_t const& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get_fingerValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerValue;
}
constexpr void GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_set_fingerValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerValue = value;
}
constexpr bool& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::CloserCosmetic::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::CloserCosmetic::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CloserCosmetic::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::CloserCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CloserCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CloserCosmetic::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CloserCosmetic::Close(bool  leftHand, float_t  fingerFlexValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"Close", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand, fingerFlexValue);
}
inline void GorillaTag::Cosmetics::CloserCosmetic::Open(bool  leftHand, float_t  fingerFlexValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"Open", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand, fingerFlexValue);
}
inline void GorillaTag::Cosmetics::CloserCosmetic::Closing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"Closing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CloserCosmetic::Opening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"Opening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CloserCosmetic::UpdateState(::GlobalNamespace::CloserCosmetic_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::CloserCosmetic_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GorillaTag::Cosmetics::CloserCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CloserCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::CloserCosmetic* GorillaTag::Cosmetics::CloserCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::CloserCosmetic*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Cosmetics::CloserCosmetic::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Cosmetics::CloserCosmetic::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::CloserCosmetic::CloserCosmetic()   {
}

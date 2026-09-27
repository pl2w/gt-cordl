#pragma once
// IWYU pragma private; include "GlobalNamespace/MouthReactorCosmetic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MouthReactorCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic.ResetReactorTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouthReactorCosmetic::*)()>(&::GlobalNamespace::MouthReactorCosmetic::ResetReactorTransform)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x596b928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"ResetReactorTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic.ResetRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouthReactorCosmetic::*)()>(&::GlobalNamespace::MouthReactorCosmetic::ResetRadius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x596b9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"ResetRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic.get_IsRadiusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MouthReactorCosmetic::*)()>(&::GlobalNamespace::MouthReactorCosmetic::get_IsRadiusChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x596b9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"get_IsRadiusChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic.ResetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouthReactorCosmetic::*)()>(&::GlobalNamespace::MouthReactorCosmetic::ResetOffset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x596b9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"ResetOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic.get_IsOffsetChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MouthReactorCosmetic::*)()>(&::GlobalNamespace::MouthReactorCosmetic::get_IsOffsetChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x596ba48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"get_IsOffsetChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouthReactorCosmetic::*)()>(&::GlobalNamespace::MouthReactorCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x596bae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouthReactorCosmetic::*)()>(&::GlobalNamespace::MouthReactorCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x596bb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MouthReactorCosmetic::*)()>(&::GlobalNamespace::MouthReactorCosmetic::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596bbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouthReactorCosmetic::*)(bool)>(&::GlobalNamespace::MouthReactorCosmetic::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596bbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouthReactorCosmetic::*)()>(&::GlobalNamespace::MouthReactorCosmetic::Tick)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x596bc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouthReactorCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouthReactorCosmetic::*)()>(&::GlobalNamespace::MouthReactorCosmetic::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x596bd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_reactorTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_reactorTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorTransform;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_reactorTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactorTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_reactorOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_reactorOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorOffset;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_reactorOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactorOffset = value;
}
constexpr float_t& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_reactorRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorRadius;
}
constexpr float_t const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_reactorRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorRadius;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_reactorRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactorRadius = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
constexpr float_t& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_eventRefireDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventRefireDelay;
}
constexpr float_t const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_eventRefireDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventRefireDelay;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_eventRefireDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventRefireDelay = value;
}
constexpr bool& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_mustExitBeforeRefire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mustExitBeforeRefire;
}
constexpr bool const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_mustExitBeforeRefire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mustExitBeforeRefire;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_mustExitBeforeRefire(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mustExitBeforeRefire = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_onInsideMouth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onInsideMouth;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_onInsideMouth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onInsideMouth;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_onInsideMouth(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onInsideMouth = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_mouthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouthOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_mouthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouthOffset;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_mouthOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouthOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr float_t& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_lastInsideTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastInsideTime;
}
constexpr float_t const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_lastInsideTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastInsideTime;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_lastInsideTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastInsideTime = value;
}
constexpr bool& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_wasInside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInside;
}
constexpr bool const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get_wasInside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInside;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set_wasInside(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasInside = value;
}
constexpr bool& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::MouthReactorCosmetic::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::MouthReactorCosmetic::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GlobalNamespace::MouthReactorCosmetic::setStaticF_DEFAULT_OFFSET(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "DEFAULT_OFFSET", ::GlobalNamespace::MouthReactorCosmetic*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::MouthReactorCosmetic::getStaticF_DEFAULT_OFFSET()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "DEFAULT_OFFSET", ::GlobalNamespace::MouthReactorCosmetic*>();
}
inline void GlobalNamespace::MouthReactorCosmetic::ResetReactorTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"ResetReactorTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MouthReactorCosmetic::ResetRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"ResetRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MouthReactorCosmetic::get_IsRadiusChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"get_IsRadiusChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MouthReactorCosmetic::ResetOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"ResetOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MouthReactorCosmetic::get_IsOffsetChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"get_IsOffsetChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MouthReactorCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MouthReactorCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MouthReactorCosmetic::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MouthReactorCosmetic::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MouthReactorCosmetic::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MouthReactorCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MouthReactorCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MouthReactorCosmetic* GlobalNamespace::MouthReactorCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MouthReactorCosmetic*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::MouthReactorCosmetic::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::MouthReactorCosmetic::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MouthReactorCosmetic::MouthReactorCosmetic()   {
}

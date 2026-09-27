#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableLighterCosmetic.hpp"
#include "GlobalNamespace/zzzz__HoldableLighterCosmetic_LighterResult_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HoldableLighterCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__HoldableLighterCosmetic_LighterResult_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HoldableLighterCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableLighterCosmetic::*)()>(&::GlobalNamespace::HoldableLighterCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57f1e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableLighterCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableLighterCosmetic::*)()>(&::GlobalNamespace::HoldableLighterCosmetic::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57f1e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableLighterCosmetic.IsMyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HoldableLighterCosmetic::*)()>(&::GlobalNamespace::HoldableLighterCosmetic::IsMyItem)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57f1f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"IsMyItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableLighterCosmetic.DebugPull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableLighterCosmetic::*)()>(&::GlobalNamespace::HoldableLighterCosmetic::DebugPull)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57f1f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"DebugPull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableLighterCosmetic.DebugRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableLighterCosmetic::*)()>(&::GlobalNamespace::HoldableLighterCosmetic::DebugRelease)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57f21b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"DebugRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableLighterCosmetic.TriggerPulled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableLighterCosmetic::*)()>(&::GlobalNamespace::HoldableLighterCosmetic::TriggerPulled)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x57f1f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"TriggerPulled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableLighterCosmetic.GetResultAtTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HoldableLighterCosmetic_LighterResult (::GlobalNamespace::HoldableLighterCosmetic::*)(double_t, int32_t)>(&::GlobalNamespace::HoldableLighterCosmetic::GetResultAtTime)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x57f2334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"GetResultAtTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableLighterCosmetic.TriggerReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableLighterCosmetic::*)()>(&::GlobalNamespace::HoldableLighterCosmetic::TriggerReleased)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57f21cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"TriggerReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableLighterCosmetic.TrySetID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableLighterCosmetic::*)()>(&::GlobalNamespace::HoldableLighterCosmetic::TrySetID)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57f21e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"TrySetID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableLighterCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableLighterCosmetic::*)()>(&::GlobalNamespace::HoldableLighterCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57f2424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_OwnerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OwnerID;
}
constexpr int32_t const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_OwnerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OwnerID;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_OwnerID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OwnerID = value;
}
constexpr float_t& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_flickerWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flickerWeight;
}
constexpr float_t const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_flickerWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flickerWeight;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_flickerWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flickerWeight = value;
}
constexpr float_t& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_lightWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightWeight;
}
constexpr float_t const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_lightWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightWeight;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_lightWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightWeight = value;
}
constexpr float_t& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_explodeWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explodeWeight;
}
constexpr float_t const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_explodeWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explodeWeight;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_explodeWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___explodeWeight = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_OnFlicker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFlicker;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_OnFlicker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFlicker;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_OnFlicker(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFlicker = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_OnLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLight;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_OnLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLight;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_OnLight(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLight = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_OnExplode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnExplode;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_OnExplode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnExplode;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_OnExplode(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnExplode = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_OnTriggerRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTriggerRelease;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_OnTriggerRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTriggerRelease;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_OnTriggerRelease(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTriggerRelease = value;
}
constexpr ::ArrayW<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_resultTimeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultTimeline;
}
constexpr ::ArrayW<::GlobalNamespace::HoldableLighterCosmetic_LighterResult> const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_resultTimeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultTimeline;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_resultTimeline(::ArrayW<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultTimeline = value;
}
constexpr bool& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_triggerHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerHeld;
}
constexpr bool const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_triggerHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerHeld;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_triggerHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerHeld = value;
}
constexpr float_t& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_lastCheckTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheckTime;
}
constexpr float_t const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_lastCheckTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheckTime;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_lastCheckTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCheckTime = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_parentTransferable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTransferable;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_get_parentTransferable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTransferable;
}
constexpr void GlobalNamespace::HoldableLighterCosmetic::__cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentTransferable = value;
}
inline void GlobalNamespace::HoldableLighterCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoldableLighterCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HoldableLighterCosmetic::IsMyItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"IsMyItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HoldableLighterCosmetic::DebugPull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"DebugPull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoldableLighterCosmetic::DebugRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"DebugRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoldableLighterCosmetic::TriggerPulled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"TriggerPulled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HoldableLighterCosmetic_LighterResult GlobalNamespace::HoldableLighterCosmetic::GetResultAtTime(double_t  photonTime, int32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"GetResultAtTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>(this, ___internal_method, photonTime, seed);
}
inline void GlobalNamespace::HoldableLighterCosmetic::TriggerReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"TriggerReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoldableLighterCosmetic::TrySetID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {"TrySetID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoldableLighterCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLighterCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HoldableLighterCosmetic* GlobalNamespace::HoldableLighterCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HoldableLighterCosmetic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HoldableLighterCosmetic::HoldableLighterCosmetic()   {
}

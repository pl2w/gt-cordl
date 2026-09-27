#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ThrowablePickupableCosmetic.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ThrowablePickupableCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__PickupableVariant_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d79e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5d79e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5d7a1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnGrab)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5d7a3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnRelease)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x5d7a78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic.OnReleaseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnReleaseEvent)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5d7aeb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {"OnReleaseEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic.OnReturnToDockEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnReturnToDockEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d7b228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {"OnReturnToDockEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic.OnReleaseEventLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnReleaseEventLocal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d7ae94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {"OnReleaseEventLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic.DistanceToDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::DistanceToDock)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5d7ad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {"DistanceToDock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d7b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Cosmetics::PickupableVariant>& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_pickupableVariant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupableVariant;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::PickupableVariant> const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_pickupableVariant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupableVariant;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set_pickupableVariant(::UnityW<::GorillaTag::Cosmetics::PickupableVariant>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickupableVariant = value;
}
constexpr float_t& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_returnToDockDistanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnToDockDistanceThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_returnToDockDistanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnToDockDistanceThreshold;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set_returnToDockDistanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnToDockDistanceThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_OnReturnToDockPositionLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReturnToDockPositionLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_OnReturnToDockPositionLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReturnToDockPositionLocal;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set_OnReturnToDockPositionLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReturnToDockPositionLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_OnReturnToDockPositionShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReturnToDockPositionShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_OnReturnToDockPositionShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReturnToDockPositionShared;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set_OnReturnToDockPositionShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReturnToDockPositionShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_OnGrabLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_OnGrabLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabLocal;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set_OnGrabLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGrabLocal = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_transferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_transferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableObject = value;
}
constexpr bool& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_isLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr bool const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_isLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set_isLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocal = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr ::GlobalNamespace::NetPlayer* const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set_owner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owner = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_callLimiterRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiterRelease;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_callLimiterRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiterRelease;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set_callLimiterRelease(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiterRelease = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_callLimiterReturn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiterReturn;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_get_callLimiterReturn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiterReturn;
}
constexpr void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::__cordl_internal_set_callLimiterReturn(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiterReturn = value;
}
inline void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnReleaseEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {"OnReleaseEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnReturnToDockEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {"OnReturnToDockEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::OnReleaseEventLocal(::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  releaseVelocity, float_t  playerScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {"OnReleaseEventLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPosition, releaseVelocity, playerScale);
}
inline float_t GorillaTag::Cosmetics::ThrowablePickupableCosmetic::DistanceToDock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {"DistanceToDock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ThrowablePickupableCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic* GorillaTag::Cosmetics::ThrowablePickupableCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic::ThrowablePickupableCosmetic()   {
}

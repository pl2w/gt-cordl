#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportStationTappable.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "GlobalNamespace/zzzz__TeleportStationTappable_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__TeleportStation_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TeleportStationTappable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationTappable::*)()>(&::GlobalNamespace::TeleportStationTappable::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ade45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationTappable*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationTappable.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationTappable::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TeleportStationTappable::OnTapLocal)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5ade4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TeleportStationTappable*>(),
                    {::i2c::class_of<::GlobalNamespace::TeleportStationTappable*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationTappable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationTappable::*)()>(&::GlobalNamespace::TeleportStationTappable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ade76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationTappable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__teleportStationRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportStationRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__teleportStationRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportStationRef;
}
constexpr void GlobalNamespace::TeleportStationTappable::__cordl_internal_set__teleportStationRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____teleportStationRef = value;
}
constexpr ::UnityW<::GlobalNamespace::TeleportStation>& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__teleportStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportStation;
}
constexpr ::UnityW<::GlobalNamespace::TeleportStation> const& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__teleportStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportStation;
}
constexpr void GlobalNamespace::TeleportStationTappable::__cordl_internal_set__teleportStation(::UnityW<::GlobalNamespace::TeleportStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____teleportStation = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__firstPersonEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__firstPersonEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonEffect;
}
constexpr void GlobalNamespace::TeleportStationTappable::__cordl_internal_set__firstPersonEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonEffect = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__thirdPersonEffectStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonEffectStart;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__thirdPersonEffectStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonEffectStart;
}
constexpr void GlobalNamespace::TeleportStationTappable::__cordl_internal_set__thirdPersonEffectStart(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonEffectStart = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__thirdPersonEffectEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonEffectEnd;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__thirdPersonEffectEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonEffectEnd;
}
constexpr void GlobalNamespace::TeleportStationTappable::__cordl_internal_set__thirdPersonEffectEnd(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonEffectEnd = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__on3PTeleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____on3PTeleport;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__on3PTeleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____on3PTeleport;
}
constexpr void GlobalNamespace::TeleportStationTappable::__cordl_internal_set__on3PTeleport(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____on3PTeleport = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__on1PTeleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____on1PTeleport;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TeleportStationTappable::__cordl_internal_get__on1PTeleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____on1PTeleport;
}
constexpr void GlobalNamespace::TeleportStationTappable::__cordl_internal_set__on1PTeleport(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____on1PTeleport = value;
}
inline void GlobalNamespace::TeleportStationTappable::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationTappable*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportStationTappable::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TeleportStationTappable*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, sender);
}
inline void GlobalNamespace::TeleportStationTappable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationTappable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TeleportStationTappable* GlobalNamespace::TeleportStationTappable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportStationTappable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportStationTappable::TeleportStationTappable()   {
}

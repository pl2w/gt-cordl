#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapEffect.hpp"
#include "GlobalNamespace/zzzz__HandTapBehaviour_impl.hpp"
#include "GorillaTag/zzzz__HashWrapper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HandTapEffect_def.hpp"
#include "GlobalNamespace/zzzz__HandEffectContext_def.hpp"
#include "GlobalNamespace/zzzz__HandTapEffect_def.hpp"
#include "GlobalNamespace/zzzz__HandTapOverrides_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandTapEffect.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapEffect::*)()>(&::GlobalNamespace::HandTapEffect::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x565321c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapEffect.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapEffect::*)()>(&::GlobalNamespace::HandTapEffect::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5653298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapEffect.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapEffect::*)()>(&::GlobalNamespace::HandTapEffect::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5653440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapEffect::*)()>(&::GlobalNamespace::HandTapEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5653638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*& GlobalNamespace::HandTapEffect::__cordl_internal_get_leftHandEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandEffect;
}
constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight* const& GlobalNamespace::HandTapEffect::__cordl_internal_get_leftHandEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandEffect;
}
constexpr void GlobalNamespace::HandTapEffect::__cordl_internal_set_leftHandEffect(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandEffect = value;
}
constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*& GlobalNamespace::HandTapEffect::__cordl_internal_get_rightHandEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandEffect;
}
constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight* const& GlobalNamespace::HandTapEffect::__cordl_internal_get_rightHandEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandEffect;
}
constexpr void GlobalNamespace::HandTapEffect::__cordl_internal_set_rightHandEffect(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandEffect = value;
}
inline void GlobalNamespace::HandTapEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandTapEffect::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandTapEffect::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandTapEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandTapEffect* GlobalNamespace::HandTapEffect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandTapEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandTapEffect::HandTapEffect()   {
}
//  Writing Method size for method: ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::*)()>(&::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::OnEnable)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x56532c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::*)()>(&::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::OnDisable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5653468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::*)()>(&::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56536fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_get_separateUpTapCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___separateUpTapCooldown;
}
constexpr bool const& GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_get_separateUpTapCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___separateUpTapCooldown;
}
constexpr void GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_set_separateUpTapCooldown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___separateUpTapCooldown = value;
}
constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*& GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_get_downTapEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downTapEffect;
}
constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp* const& GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_get_downTapEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downTapEffect;
}
constexpr void GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_set_downTapEffect(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downTapEffect = value;
}
constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*& GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_get_upTapEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upTapEffect;
}
constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp* const& GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_get_upTapEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upTapEffect;
}
constexpr void GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_set_upTapEffect(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upTapEffect = value;
}
constexpr ::GlobalNamespace::HandEffectContext*& GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_get_handContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handContext;
}
constexpr ::GlobalNamespace::HandEffectContext* const& GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_get_handContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handContext;
}
constexpr void GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::__cordl_internal_set_handContext(::GlobalNamespace::HandEffectContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handContext = value;
}
inline void GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight* GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight::HandTapEffect_HandTapEffectLeftRight()   {
}
//  Writing Method size for method: ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp.get_HasOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandTapEffect_HandTapEffectDownUp::*)()>(&::GlobalNamespace::HandTapEffect_HandTapEffectDownUp::get_HasOverrides)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5653640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*>(),
                        {"get_HasOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp.OnTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapEffect_HandTapEffectDownUp::*)(::GlobalNamespace::HandEffectContext*)>(&::GlobalNamespace::HandTapEffect_HandTapEffectDownUp::OnTap)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5653678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*>(),
                        {"OnTap", {}, {::i2c::type_of<::GlobalNamespace::HandEffectContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapEffect_HandTapEffectDownUp::*)()>(&::GlobalNamespace::HandTapEffect_HandTapEffectDownUp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56536f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::HandTapBehaviour>>& GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_get_onTapBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTapBehaviours;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::HandTapBehaviour>> const& GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_get_onTapBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTapBehaviours;
}
constexpr void GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_set_onTapBehaviours(::ArrayW<::UnityW<::GlobalNamespace::HandTapBehaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTapBehaviours = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_get_onTapUnityEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTapUnityEvents;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_get_onTapUnityEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTapUnityEvents;
}
constexpr void GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_set_onTapUnityEvents(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTapUnityEvents = value;
}
constexpr ::GorillaTag::HashWrapper& GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_get_onTapPrefabToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTapPrefabToSpawn;
}
constexpr ::GorillaTag::HashWrapper const& GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_get_onTapPrefabToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTapPrefabToSpawn;
}
constexpr void GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_set_onTapPrefabToSpawn(::GorillaTag::HashWrapper  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTapPrefabToSpawn = value;
}
constexpr ::GlobalNamespace::HandTapOverrides*& GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_get_overrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrides;
}
constexpr ::GlobalNamespace::HandTapOverrides* const& GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_get_overrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrides;
}
constexpr void GlobalNamespace::HandTapEffect_HandTapEffectDownUp::__cordl_internal_set_overrides(::GlobalNamespace::HandTapOverrides*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrides = value;
}
inline bool GlobalNamespace::HandTapEffect_HandTapEffectDownUp::get_HasOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*>(),
                        {"get_HasOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HandTapEffect_HandTapEffectDownUp::OnTap(::GlobalNamespace::HandEffectContext*  handContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*>(),
                        {"OnTap", {}, {::i2c::type_of<::GlobalNamespace::HandEffectContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handContext);
}
inline void GlobalNamespace::HandTapEffect_HandTapEffectDownUp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp* GlobalNamespace::HandTapEffect_HandTapEffectDownUp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp::HandTapEffect_HandTapEffectDownUp()   {
}

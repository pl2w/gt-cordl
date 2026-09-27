#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/GlowBugsInJar.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__GlowBugsInJar_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::GlowBugsInJar.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::GlowBugsInJar::*)()>(&::GorillaTag::Cosmetics::GlowBugsInJar::OnEnable)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5d97dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::GlowBugsInJar.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::GlowBugsInJar::*)()>(&::GorillaTag::Cosmetics::GlowBugsInJar::OnDisable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5d98134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::GlowBugsInJar.OnShakeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::GlowBugsInJar::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::GlowBugsInJar::OnShakeEvent)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d9826c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"OnShakeEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::GlowBugsInJar.HandleOnShakeStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::GlowBugsInJar::*)()>(&::GorillaTag::Cosmetics::GlowBugsInJar::HandleOnShakeStart)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5d983c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"HandleOnShakeStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::GlowBugsInJar.ShakeStartLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::GlowBugsInJar::*)()>(&::GorillaTag::Cosmetics::GlowBugsInJar::ShakeStartLocal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d983a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"ShakeStartLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::GlowBugsInJar.HandleOnShakeEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::GlowBugsInJar::*)()>(&::GorillaTag::Cosmetics::GlowBugsInJar::HandleOnShakeEnd)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5d98560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"HandleOnShakeEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::GlowBugsInJar.ShakeEndLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::GlowBugsInJar::*)()>(&::GorillaTag::Cosmetics::GlowBugsInJar::ShakeEndLocal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d983b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"ShakeEndLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::GlowBugsInJar.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::GlowBugsInJar::*)()>(&::GorillaTag::Cosmetics::GlowBugsInJar::Update)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d986f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::GlowBugsInJar.UpdateGlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::GlowBugsInJar::*)(float_t)>(&::GorillaTag::Cosmetics::GlowBugsInJar::UpdateGlow)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d98058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"UpdateGlow", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::GlowBugsInJar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::GlowBugsInJar::*)()>(&::GorillaTag::Cosmetics::GlowBugsInJar::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d9876c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_transferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_transferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableObject = value;
}
constexpr float_t& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_glowUpdateInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowUpdateInterval;
}
constexpr float_t const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_glowUpdateInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowUpdateInterval;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set_glowUpdateInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___glowUpdateInterval = value;
}
constexpr float_t& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_glowIncreaseStepAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowIncreaseStepAmount;
}
constexpr float_t const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_glowIncreaseStepAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowIncreaseStepAmount;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set_glowIncreaseStepAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___glowIncreaseStepAmount = value;
}
constexpr float_t& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_glowDecreaseStepAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowDecreaseStepAmount;
}
constexpr float_t const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_glowDecreaseStepAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowDecreaseStepAmount;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set_glowDecreaseStepAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___glowDecreaseStepAmount = value;
}
constexpr ::StringW& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_shaderProperty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderProperty;
}
constexpr ::StringW const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_shaderProperty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderProperty;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set_shaderProperty(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaderProperty = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr bool& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_shakeStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeStarted;
}
constexpr bool const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_shakeStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeStarted;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set_shakeStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shakeStarted = value;
}
constexpr float_t& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_currentGlowAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGlowAmount;
}
constexpr float_t const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_currentGlowAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGlowAmount;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set_currentGlowAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGlowAmount = value;
}
constexpr float_t& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_shakeTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeTimer;
}
constexpr float_t const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_shakeTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeTimer;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set_shakeTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shakeTimer = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_callLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_get_callLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr void GorillaTag::Cosmetics::GlowBugsInJar::__cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiter = value;
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::setStaticF_EmissionColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "EmissionColor", ::GorillaTag::Cosmetics::GlowBugsInJar*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTag::Cosmetics::GlowBugsInJar::getStaticF_EmissionColor()  {
return ::cordl_internals::getStaticField<int32_t, "EmissionColor", ::GorillaTag::Cosmetics::GlowBugsInJar*>();
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::OnShakeEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"OnShakeEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::HandleOnShakeStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"HandleOnShakeStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::ShakeStartLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"ShakeStartLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::HandleOnShakeEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"HandleOnShakeEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::ShakeEndLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"ShakeEndLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::UpdateGlow(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {"UpdateGlow", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::GlowBugsInJar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::GlowBugsInJar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::GlowBugsInJar* GorillaTag::Cosmetics::GlowBugsInJar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::GlowBugsInJar*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::GlowBugsInJar::GlowBugsInJar()   {
}

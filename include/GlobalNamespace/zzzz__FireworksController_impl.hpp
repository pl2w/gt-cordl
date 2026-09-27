#pragma once
// IWYU pragma private; include "GlobalNamespace/FireworksController.hpp"
#include "GlobalNamespace/zzzz__Firework_impl.hpp"
#include "GlobalNamespace/zzzz__FireworksController_ExplosionEvent_impl.hpp"
#include "GlobalNamespace/zzzz__SRand_impl.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FireworksController_def.hpp"
#include "GlobalNamespace/zzzz__Firework_def.hpp"
#include "GlobalNamespace/zzzz__FireworksController_ExplosionEvent_def.hpp"
#include "GlobalNamespace/zzzz__TimeEvent_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FireworksController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksController::*)()>(&::GlobalNamespace::FireworksController::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b23060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksController.LaunchVolley
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksController::*)()>(&::GlobalNamespace::FireworksController::LaunchVolley)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b230e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"LaunchVolley", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksController.LaunchVolleyRound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksController::*)()>(&::GlobalNamespace::FireworksController::LaunchVolleyRound)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b231e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"LaunchVolleyRound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksController.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksController::*)(::GlobalNamespace::Firework*)>(&::GlobalNamespace::FireworksController::Launch)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5b22540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"Launch", {}, {::i2c::type_of<::GlobalNamespace::Firework*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksController.PostExplosionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksController::*)(::GlobalNamespace::FireworksController_ExplosionEvent)>(&::GlobalNamespace::FireworksController::PostExplosionEvent)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b2326c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"PostExplosionEvent", {}, {::i2c::type_of<::GlobalNamespace::FireworksController_ExplosionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksController::*)()>(&::GlobalNamespace::FireworksController::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b232f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksController.ProcessEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksController::*)()>(&::GlobalNamespace::FireworksController::ProcessEvents)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5b232f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"ProcessEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksController.DoExplosion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksController::*)(::GlobalNamespace::FireworksController_ExplosionEvent)>(&::GlobalNamespace::FireworksController::DoExplosion)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5b23454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"DoExplosion", {}, {::i2c::type_of<::GlobalNamespace::FireworksController_ExplosionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksController.RenderGizmo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksController::*)(::GlobalNamespace::Firework*, ::UnityEngine::Color)>(&::GlobalNamespace::FireworksController::RenderGizmo)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5b22cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"RenderGizmo", {}, {::i2c::type_of<::GlobalNamespace::Firework*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksController::*)()>(&::GlobalNamespace::FireworksController::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b235e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Firework>>& GlobalNamespace::FireworksController::__cordl_internal_get_fireworks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireworks;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Firework>> const& GlobalNamespace::FireworksController::__cordl_internal_get_fireworks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireworks;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set_fireworks(::ArrayW<::UnityW<::GlobalNamespace::Firework>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireworks = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::FireworksController::__cordl_internal_get_whistles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whistles;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::FireworksController::__cordl_internal_get_whistles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whistles;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set_whistles(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whistles = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::FireworksController::__cordl_internal_get_bursts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bursts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::FireworksController::__cordl_internal_get_bursts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bursts;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set_bursts(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bursts = value;
}
constexpr float_t& GlobalNamespace::FireworksController::__cordl_internal_get_whistleVolumeMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whistleVolumeMin;
}
constexpr float_t const& GlobalNamespace::FireworksController::__cordl_internal_get_whistleVolumeMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whistleVolumeMin;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set_whistleVolumeMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whistleVolumeMin = value;
}
constexpr float_t& GlobalNamespace::FireworksController::__cordl_internal_get_whistleVolumeMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whistleVolumeMax;
}
constexpr float_t const& GlobalNamespace::FireworksController::__cordl_internal_get_whistleVolumeMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whistleVolumeMax;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set_whistleVolumeMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whistleVolumeMax = value;
}
constexpr float_t& GlobalNamespace::FireworksController::__cordl_internal_get_minWhistleDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minWhistleDelay;
}
constexpr float_t const& GlobalNamespace::FireworksController::__cordl_internal_get_minWhistleDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minWhistleDelay;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set_minWhistleDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minWhistleDelay = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::FireworksController::__cordl_internal_get__lastWhistle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWhistle;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::FireworksController::__cordl_internal_get__lastWhistle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWhistle;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set__lastWhistle(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWhistle = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::FireworksController::__cordl_internal_get__lastBurst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBurst;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::FireworksController::__cordl_internal_get__lastBurst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBurst;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set__lastBurst(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastBurst = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Firework>>& GlobalNamespace::FireworksController::__cordl_internal_get__launchOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchOrder;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Firework>> const& GlobalNamespace::FireworksController::__cordl_internal_get__launchOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchOrder;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set__launchOrder(::ArrayW<::UnityW<::GlobalNamespace::Firework>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____launchOrder = value;
}
constexpr ::GlobalNamespace::SRand& GlobalNamespace::FireworksController::__cordl_internal_get__rnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rnd;
}
constexpr ::GlobalNamespace::SRand const& GlobalNamespace::FireworksController::__cordl_internal_get__rnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rnd;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set__rnd(::GlobalNamespace::SRand  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rnd = value;
}
constexpr ::ArrayW<::GlobalNamespace::FireworksController_ExplosionEvent>& GlobalNamespace::FireworksController::__cordl_internal_get__explosionQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____explosionQueue;
}
constexpr ::ArrayW<::GlobalNamespace::FireworksController_ExplosionEvent> const& GlobalNamespace::FireworksController::__cordl_internal_get__explosionQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____explosionQueue;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set__explosionQueue(::ArrayW<::GlobalNamespace::FireworksController_ExplosionEvent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____explosionQueue = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::FireworksController::__cordl_internal_get__timeSinceLastWhistle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceLastWhistle;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::FireworksController::__cordl_internal_get__timeSinceLastWhistle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceLastWhistle;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set__timeSinceLastWhistle(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSinceLastWhistle = value;
}
constexpr ::StringW& GlobalNamespace::FireworksController::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr ::StringW const& GlobalNamespace::FireworksController::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set_seed(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
constexpr uint32_t& GlobalNamespace::FireworksController::__cordl_internal_get_roundNumVolleys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundNumVolleys;
}
constexpr uint32_t const& GlobalNamespace::FireworksController::__cordl_internal_get_roundNumVolleys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundNumVolleys;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set_roundNumVolleys(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roundNumVolleys = value;
}
constexpr uint32_t& GlobalNamespace::FireworksController::__cordl_internal_get_roundLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundLength;
}
constexpr uint32_t const& GlobalNamespace::FireworksController::__cordl_internal_get_roundLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundLength;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set_roundLength(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roundLength = value;
}
constexpr ::UnityW<::GlobalNamespace::TimeEvent>& GlobalNamespace::FireworksController::__cordl_internal_get__fireworksEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fireworksEvent;
}
constexpr ::UnityW<::GlobalNamespace::TimeEvent> const& GlobalNamespace::FireworksController::__cordl_internal_get__fireworksEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fireworksEvent;
}
constexpr void GlobalNamespace::FireworksController::__cordl_internal_set__fireworksEvent(::UnityW<::GlobalNamespace::TimeEvent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fireworksEvent = value;
}
inline void GlobalNamespace::FireworksController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireworksController::LaunchVolley()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"LaunchVolley", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireworksController::LaunchVolleyRound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"LaunchVolleyRound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireworksController::Launch(::GlobalNamespace::Firework*  fw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"Launch", {}, {::i2c::type_of<::GlobalNamespace::Firework*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fw);
}
inline void GlobalNamespace::FireworksController::PostExplosionEvent(::GlobalNamespace::FireworksController_ExplosionEvent  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"PostExplosionEvent", {}, {::i2c::type_of<::GlobalNamespace::FireworksController_ExplosionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void GlobalNamespace::FireworksController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireworksController::ProcessEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"ProcessEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireworksController::DoExplosion(::GlobalNamespace::FireworksController_ExplosionEvent  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"DoExplosion", {}, {::i2c::type_of<::GlobalNamespace::FireworksController_ExplosionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void GlobalNamespace::FireworksController::RenderGizmo(::GlobalNamespace::Firework*  fw, ::UnityEngine::Color  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {"RenderGizmo", {}, {::i2c::type_of<::GlobalNamespace::Firework*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fw, c);
}
inline void GlobalNamespace::FireworksController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FireworksController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FireworksController* GlobalNamespace::FireworksController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FireworksController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireworksController::FireworksController()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/LightningManager.hpp"
#include "GlobalNamespace/zzzz__SRand_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightningManager_def.hpp"
#include "GlobalNamespace/zzzz__LightningManager_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightningManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningManager::*)()>(&::GlobalNamespace::LightningManager::Start)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a6363c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager.OnTimeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningManager::*)()>(&::GlobalNamespace::LightningManager::OnTimeChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a63774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"OnTimeChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager.GetHourStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningManager::*)(::by_ref<int64_t>, ::by_ref<float_t>)>(&::GlobalNamespace::LightningManager::GetHourStart)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5a63a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"GetHourStart", {}, {::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager.InitializeRng
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningManager::*)()>(&::GlobalNamespace::LightningManager::InitializeRng)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5a637cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"InitializeRng", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager.DoLightningStrike
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningManager::*)()>(&::GlobalNamespace::LightningManager::DoLightningStrike)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a63ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"DoLightningStrike", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager.LightningEffectRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::LightningManager::*)()>(&::GlobalNamespace::LightningManager::LightningEffectRunner)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a6399c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"LightningEffectRunner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningManager::*)()>(&::GlobalNamespace::LightningManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a63c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightningManager::__cordl_internal_get_lightMapIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMapIndex;
}
constexpr int32_t const& GlobalNamespace::LightningManager::__cordl_internal_get_lightMapIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMapIndex;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_lightMapIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightMapIndex = value;
}
constexpr float_t& GlobalNamespace::LightningManager::__cordl_internal_get_minTimeBetweenFlashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenFlashes;
}
constexpr float_t const& GlobalNamespace::LightningManager::__cordl_internal_get_minTimeBetweenFlashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenFlashes;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_minTimeBetweenFlashes(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTimeBetweenFlashes = value;
}
constexpr float_t& GlobalNamespace::LightningManager::__cordl_internal_get_maxTimeBetweenFlashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimeBetweenFlashes;
}
constexpr float_t const& GlobalNamespace::LightningManager::__cordl_internal_get_maxTimeBetweenFlashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimeBetweenFlashes;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_maxTimeBetweenFlashes(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTimeBetweenFlashes = value;
}
constexpr float_t& GlobalNamespace::LightningManager::__cordl_internal_get_flashFadeInDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashFadeInDuration;
}
constexpr float_t const& GlobalNamespace::LightningManager::__cordl_internal_get_flashFadeInDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashFadeInDuration;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_flashFadeInDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashFadeInDuration = value;
}
constexpr float_t& GlobalNamespace::LightningManager::__cordl_internal_get_flashHoldDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashHoldDuration;
}
constexpr float_t const& GlobalNamespace::LightningManager::__cordl_internal_get_flashHoldDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashHoldDuration;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_flashHoldDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashHoldDuration = value;
}
constexpr float_t& GlobalNamespace::LightningManager::__cordl_internal_get_flashFadeOutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashFadeOutDuration;
}
constexpr float_t const& GlobalNamespace::LightningManager::__cordl_internal_get_flashFadeOutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashFadeOutDuration;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_flashFadeOutDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashFadeOutDuration = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::LightningManager::__cordl_internal_get_lightningAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::LightningManager::__cordl_internal_get_lightningAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningAudio;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_lightningAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightningAudio = value;
}
constexpr ::GlobalNamespace::SRand& GlobalNamespace::LightningManager::__cordl_internal_get_rng()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rng;
}
constexpr ::GlobalNamespace::SRand const& GlobalNamespace::LightningManager::__cordl_internal_get_rng() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rng;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_rng(::GlobalNamespace::SRand  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rng = value;
}
constexpr int64_t& GlobalNamespace::LightningManager::__cordl_internal_get_currentHourlySeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHourlySeed;
}
constexpr int64_t const& GlobalNamespace::LightningManager::__cordl_internal_get_currentHourlySeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHourlySeed;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_currentHourlySeed(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentHourlySeed = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::LightningManager::__cordl_internal_get_lightningTimestampsRealtime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningTimestampsRealtime;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::LightningManager::__cordl_internal_get_lightningTimestampsRealtime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningTimestampsRealtime;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_lightningTimestampsRealtime(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightningTimestampsRealtime = value;
}
constexpr int32_t& GlobalNamespace::LightningManager::__cordl_internal_get_nextLightningTimestampIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLightningTimestampIndex;
}
constexpr int32_t const& GlobalNamespace::LightningManager::__cordl_internal_get_nextLightningTimestampIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLightningTimestampIndex;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_nextLightningTimestampIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextLightningTimestampIndex = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::LightningManager::__cordl_internal_get_regularLightning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regularLightning;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::LightningManager::__cordl_internal_get_regularLightning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regularLightning;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_regularLightning(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regularLightning = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::LightningManager::__cordl_internal_get_muffledLightning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muffledLightning;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::LightningManager::__cordl_internal_get_muffledLightning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muffledLightning;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_muffledLightning(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muffledLightning = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::LightningManager::__cordl_internal_get_lightningRunner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningRunner;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::LightningManager::__cordl_internal_get_lightningRunner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningRunner;
}
constexpr void GlobalNamespace::LightningManager::__cordl_internal_set_lightningRunner(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightningRunner = value;
}
inline void GlobalNamespace::LightningManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightningManager::OnTimeChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"OnTimeChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightningManager::GetHourStart(::by_ref<int64_t>  seed, ::by_ref<float_t>  timestampRealtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"GetHourStart", {}, {::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed, timestampRealtime);
}
inline void GlobalNamespace::LightningManager::InitializeRng()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"InitializeRng", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightningManager::DoLightningStrike()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"DoLightningStrike", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::LightningManager::LightningEffectRunner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {"LightningEffectRunner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::LightningManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightningManager* GlobalNamespace::LightningManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightningManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightningManager::LightningManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::LightningManager__LightningEffectRunner_d__19._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::*)(int32_t)>(&::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a63c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager__LightningEffectRunner_d__19.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::*)()>(&::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a63d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager__LightningEffectRunner_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::*)()>(&::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5a63d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager__LightningEffectRunner_d__19.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::*)()>(&::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a63ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager__LightningEffectRunner_d__19.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::*)()>(&::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a63ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningManager__LightningEffectRunner_d__19.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::*)()>(&::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a63efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightningManager__LightningEffectRunner_d__19::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::LightningManager__LightningEffectRunner_d__19::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::LightningManager__LightningEffectRunner_d__19::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::LightningManager__LightningEffectRunner_d__19::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::LightningManager__LightningEffectRunner_d__19::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::LightningManager__LightningEffectRunner_d__19::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::LightningManager>& GlobalNamespace::LightningManager__LightningEffectRunner_d__19::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LightningManager> const& GlobalNamespace::LightningManager__LightningEffectRunner_d__19::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::LightningManager__LightningEffectRunner_d__19::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LightningManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::LightningManager__LightningEffectRunner_d__19::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::LightningManager__LightningEffectRunner_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LightningManager__LightningEffectRunner_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LightningManager__LightningEffectRunner_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::LightningManager__LightningEffectRunner_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LightningManager__LightningEffectRunner_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::LightningManager__LightningEffectRunner_d__19* GlobalNamespace::LightningManager__LightningEffectRunner_d__19::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::LightningManager__LightningEffectRunner_d__19::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::LightningManager__LightningEffectRunner_d__19::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::LightningManager__LightningEffectRunner_d__19::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LightningManager__LightningEffectRunner_d__19::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::LightningManager__LightningEffectRunner_d__19::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LightningManager__LightningEffectRunner_d__19::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightningManager__LightningEffectRunner_d__19::LightningManager__LightningEffectRunner_d__19()   {
}

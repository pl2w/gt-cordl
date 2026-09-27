#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicManager_def.hpp"
#include "GlobalNamespace/zzzz__MusicManager_def.hpp"
#include "GlobalNamespace/zzzz__MusicSource_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x596d244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.RegisterMusicSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(::GlobalNamespace::MusicSource*)>(&::GlobalNamespace::MusicManager::RegisterMusicSource)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x596d318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"RegisterMusicSource", {}, {::i2c::type_of<::GlobalNamespace::MusicSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.UnregisterMusicSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(::GlobalNamespace::MusicSource*)>(&::GlobalNamespace::MusicManager::UnregisterMusicSource)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x596d3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"UnregisterMusicSource", {}, {::i2c::type_of<::GlobalNamespace::MusicSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.FadeOutMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(float_t)>(&::GlobalNamespace::MusicManager::FadeOutMusic)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x596c6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"FadeOutMusic", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.FadeInMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)(float_t)>(&::GlobalNamespace::MusicManager::FadeInMusic)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x596ca44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"FadeInMusic", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.FadeInVolumeCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MusicManager::*)(float_t)>(&::GlobalNamespace::MusicManager::FadeInVolumeCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x596d594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"FadeInVolumeCoroutine", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.FadeOutVolumeCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MusicManager::*)(float_t)>(&::GlobalNamespace::MusicManager::FadeOutVolumeCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x596d468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"FadeOutVolumeCoroutine", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.StopAllMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MusicManager::StopAllMusic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596d660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"StopAllMusic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager.StopAllMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::MusicManager::StopAllMusic)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x596d668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"StopAllMusic", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager::*)()>(&::GlobalNamespace::MusicManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x596d8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicSource>>*& GlobalNamespace::MusicManager::__cordl_internal_get_activeSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSources;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicSource>>* const& GlobalNamespace::MusicManager::__cordl_internal_get_activeSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSources;
}
constexpr void GlobalNamespace::MusicManager::__cordl_internal_set_activeSources(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicSource>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeSources = value;
}
inline void GlobalNamespace::MusicManager::setStaticF_Instance(::UnityW<::GlobalNamespace::MusicManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MusicManager>, "Instance", ::GlobalNamespace::MusicManager*>(std::forward<::UnityW<::GlobalNamespace::MusicManager>>(value));
}
inline ::UnityW<::GlobalNamespace::MusicManager> GlobalNamespace::MusicManager::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MusicManager>, "Instance", ::GlobalNamespace::MusicManager*>();
}
inline void GlobalNamespace::MusicManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager::RegisterMusicSource(::GlobalNamespace::MusicSource*  musicSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"RegisterMusicSource", {}, {::i2c::type_of<::GlobalNamespace::MusicSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, musicSource);
}
inline void GlobalNamespace::MusicManager::UnregisterMusicSource(::GlobalNamespace::MusicSource*  musicSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"UnregisterMusicSource", {}, {::i2c::type_of<::GlobalNamespace::MusicSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, musicSource);
}
inline void GlobalNamespace::MusicManager::FadeOutMusic(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"FadeOutMusic", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void GlobalNamespace::MusicManager::FadeInMusic(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"FadeInMusic", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MusicManager::FadeInVolumeCoroutine(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"FadeInVolumeCoroutine", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, duration);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MusicManager::FadeOutVolumeCoroutine(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"FadeOutVolumeCoroutine", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, duration);
}
inline void GlobalNamespace::MusicManager::StopAllMusic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"StopAllMusic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MusicManager::StopAllMusic(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {"StopAllMusic", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip);
}
inline void GlobalNamespace::MusicManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MusicManager* GlobalNamespace::MusicManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicManager::MusicManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::*)(int32_t)>(&::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x596d638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::*)()>(&::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596dc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::*)()>(&::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x596dc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::*)()>(&::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596ded4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::*)()>(&::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x596dedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::*)()>(&::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596df14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MusicManager>& GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MusicManager> const& GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MusicManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr bool& GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_get__complete_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complete_5__2;
}
constexpr bool const& GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_get__complete_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complete_5__2;
}
constexpr void GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::__cordl_internal_set__complete_5__2(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____complete_5__2 = value;
}
inline void GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8* GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8::MusicManager__FadeOutVolumeCoroutine_d__8()   {
}
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::*)(int32_t)>(&::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x596d610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::*)()>(&::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596d938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::*)()>(&::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x596d93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::*)()>(&::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596dc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::*)()>(&::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x596dc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::*)()>(&::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596dc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MusicManager>& GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MusicManager> const& GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MusicManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr bool& GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_get__complete_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complete_5__2;
}
constexpr bool const& GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_get__complete_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complete_5__2;
}
constexpr void GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::__cordl_internal_set__complete_5__2(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____complete_5__2 = value;
}
inline void GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7* GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7::MusicManager__FadeInVolumeCoroutine_d__7()   {
}

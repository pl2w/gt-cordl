#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAdaptiveMusicController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRAdaptiveMusicController_def.hpp"
#include "GlobalNamespace/zzzz__GRAdaptiveMusicController_def.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)()>(&::GlobalNamespace::GRAdaptiveMusicController::Start)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59473c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.PlayCurrentTrack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)()>(&::GlobalNamespace::GRAdaptiveMusicController::PlayCurrentTrack)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5947440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"PlayCurrentTrack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.TransitionToNextTrack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)()>(&::GlobalNamespace::GRAdaptiveMusicController::TransitionToNextTrack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59476a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"TransitionToNextTrack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.TransitionToLastTrack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)()>(&::GlobalNamespace::GRAdaptiveMusicController::TransitionToLastTrack)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59479f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"TransitionToLastTrack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.GoToTrack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)(int32_t, bool)>(&::GlobalNamespace::GRAdaptiveMusicController::GoToTrack)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x59476b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"GoToTrack", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.Restart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)()>(&::GlobalNamespace::GRAdaptiveMusicController::Restart)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5947a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"Restart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.RestartAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)(int32_t)>(&::GlobalNamespace::GRAdaptiveMusicController::RestartAt)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5947dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"RestartAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.GetCurrentAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::GRAdaptiveMusicController::*)()>(&::GlobalNamespace::GRAdaptiveMusicController::GetCurrentAudioSource)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5947598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"GetCurrentAudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.GetNextAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::GRAdaptiveMusicController::*)()>(&::GlobalNamespace::GRAdaptiveMusicController::GetNextAudioSource)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59475ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"GetNextAudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.get_NextAudioSourceIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRAdaptiveMusicController::*)()>(&::GlobalNamespace::GRAdaptiveMusicController::get_NextAudioSourceIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x594764c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"get_NextAudioSourceIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.StopAllAudioSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)()>(&::GlobalNamespace::GRAdaptiveMusicController::StopAllAudioSources)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5947bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"StopAllAudioSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.UpdateAudioSourcesVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)(float_t)>(&::GlobalNamespace::GRAdaptiveMusicController::UpdateAudioSourcesVolume)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5947c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"UpdateAudioSourcesVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.UpdateAudioSourcesPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRAdaptiveMusicController::UpdateAudioSourcesPosition)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5947d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"UpdateAudioSourcesPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)(float_t)>(&::GlobalNamespace::GRAdaptiveMusicController::Finish)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5947a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"Finish", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController.TryFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GRAdaptiveMusicController::*)(float_t)>(&::GlobalNamespace::GRAdaptiveMusicController::TryFinish)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5947f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"TryFinish", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController::*)()>(&::GlobalNamespace::GRAdaptiveMusicController::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5948000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>*& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_Tracks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tracks;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>* const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_Tracks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tracks;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_Tracks(::System::Collections::Generic::List_1<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tracks = value;
}
constexpr ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_CurrentTrack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTrack;
}
constexpr ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack* const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_CurrentTrack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTrack;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_CurrentTrack(::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentTrack = value;
}
constexpr int32_t& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_trackIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackIndex;
}
constexpr int32_t const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_trackIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackIndex;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_trackIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_AudioSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSources;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_AudioSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSources;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_AudioSources(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioSources = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_RepositionAudioSourcePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RepositionAudioSourcePoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_RepositionAudioSourcePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RepositionAudioSourcePoint;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_RepositionAudioSourcePoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RepositionAudioSourcePoint = value;
}
constexpr float_t& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_AdjustedSourceVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdjustedSourceVolume;
}
constexpr float_t const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_AdjustedSourceVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdjustedSourceVolume;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_AdjustedSourceVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdjustedSourceVolume = value;
}
constexpr int32_t& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_currentAudioSourceIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAudioSourceIndex;
}
constexpr int32_t const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_currentAudioSourceIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAudioSourceIndex;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_currentAudioSourceIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAudioSourceIndex = value;
}
constexpr float_t& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_cachedSourceVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSourceVolume;
}
constexpr float_t const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_cachedSourceVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSourceVolume;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_cachedSourceVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSourceVolume = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_cachedSourcePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSourcePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_cachedSourcePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSourcePosition;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_cachedSourcePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSourcePosition = value;
}
constexpr ::UnityW<::GlobalNamespace::SynchedMusicController>& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_synchedMusicController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchedMusicController;
}
constexpr ::UnityW<::GlobalNamespace::SynchedMusicController> const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_synchedMusicController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchedMusicController;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_synchedMusicController(::UnityW<::GlobalNamespace::SynchedMusicController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synchedMusicController = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_finishCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_get_finishCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishCoroutine;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController::__cordl_internal_set_finishCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishCoroutine = value;
}
inline void GlobalNamespace::GRAdaptiveMusicController::setStaticF_BAR_DURATION(double_t  value)  {
::cordl_internals::setStaticField<double_t, "BAR_DURATION", ::GlobalNamespace::GRAdaptiveMusicController*>(std::forward<double_t>(value));
}
inline double_t GlobalNamespace::GRAdaptiveMusicController::getStaticF_BAR_DURATION()  {
return ::cordl_internals::getStaticField<double_t, "BAR_DURATION", ::GlobalNamespace::GRAdaptiveMusicController*>();
}
inline void GlobalNamespace::GRAdaptiveMusicController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAdaptiveMusicController::PlayCurrentTrack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"PlayCurrentTrack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAdaptiveMusicController::TransitionToNextTrack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"TransitionToNextTrack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAdaptiveMusicController::TransitionToLastTrack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"TransitionToLastTrack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAdaptiveMusicController::GoToTrack(int32_t  nextIndex, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"GoToTrack", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextIndex, force);
}
inline void GlobalNamespace::GRAdaptiveMusicController::Restart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"Restart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAdaptiveMusicController::RestartAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"RestartAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::GRAdaptiveMusicController::GetCurrentAudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"GetCurrentAudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::GRAdaptiveMusicController::GetNextAudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"GetNextAudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRAdaptiveMusicController::get_NextAudioSourceIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"get_NextAudioSourceIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRAdaptiveMusicController::StopAllAudioSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"StopAllAudioSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAdaptiveMusicController::UpdateAudioSourcesVolume(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"UpdateAudioSourcesVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume);
}
inline void GlobalNamespace::GRAdaptiveMusicController::UpdateAudioSourcesPosition(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"UpdateAudioSourcesPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void GlobalNamespace::GRAdaptiveMusicController::Finish(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"Finish", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GRAdaptiveMusicController::TryFinish(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {"TryFinish", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, delay);
}
inline void GlobalNamespace::GRAdaptiveMusicController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAdaptiveMusicController* GlobalNamespace::GRAdaptiveMusicController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAdaptiveMusicController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAdaptiveMusicController::GRAdaptiveMusicController()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::*)(int32_t)>(&::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5947fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::*)()>(&::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59480d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::*)()>(&::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x59480dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::*)()>(&::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5948204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::*)()>(&::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x594820c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::*)()>(&::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5948244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAdaptiveMusicController>& GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GRAdaptiveMusicController> const& GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRAdaptiveMusicController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28* GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28::GRAdaptiveMusicController__TryFinish_d__28()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAdaptiveMusicController_SingleTrack::*)()>(&::GlobalNamespace::GRAdaptiveMusicController_SingleTrack::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59480d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRAdaptiveMusicController_SingleTrack::__cordl_internal_get_IntroClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntroClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRAdaptiveMusicController_SingleTrack::__cordl_internal_get_IntroClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntroClip;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController_SingleTrack::__cordl_internal_set_IntroClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IntroClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRAdaptiveMusicController_SingleTrack::__cordl_internal_get_LoopedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRAdaptiveMusicController_SingleTrack::__cordl_internal_get_LoopedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopedClip;
}
constexpr void GlobalNamespace::GRAdaptiveMusicController_SingleTrack::__cordl_internal_set_LoopedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoopedClip = value;
}
inline void GlobalNamespace::GRAdaptiveMusicController_SingleTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack* GlobalNamespace::GRAdaptiveMusicController_SingleTrack::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack::GRAdaptiveMusicController_SingleTrack()   {
}

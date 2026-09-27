#pragma once
// IWYU pragma private; include "GorillaTag/Audio/GTAudioOneShot.hpp"
#include "GorillaTag/Audio/zzzz__GTAudioOneShot_DelayedPlayData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Audio/zzzz__GTAudioOneShot_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "GorillaTag/Audio/zzzz__GTAudioOneShot_DelayedPlayData_def.hpp"
#include "GorillaTag/Audio/zzzz__GTAudioOneShot_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.get_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTag::Audio::GTAudioOneShot::get_isInitialized)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d4e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"get_isInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.set_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTag::Audio::GTAudioOneShot::set_isInitialized)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d4e888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"set_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::Audio::GTAudioOneShot::Initialize)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5d4e8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioClip*, ::UnityEngine::Vector3, float_t, float_t)>(&::GorillaTag::Audio::GTAudioOneShot::Play)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5d4eb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioClip*, ::UnityEngine::Vector3, ::UnityEngine::AnimationCurve*, float_t, float_t)>(&::GorillaTag::Audio::GTAudioOneShot::Play)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5d4eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.PlayDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::AudioClip*, ::UnityEngine::Vector3, float_t, float_t, float_t)>(&::GorillaTag::Audio::GTAudioOneShot::PlayDelayed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d4ee24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"PlayDelayed", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.PlayDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::AudioClip*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, float_t, float_t, float_t)>(&::GorillaTag::Audio::GTAudioOneShot::PlayDelayed)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5d4eec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"PlayDelayed", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.CancelDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GorillaTag::Audio::GTAudioOneShot::CancelDelayed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d4f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"CancelDelayed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.UpdateDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Transform*)>(&::GorillaTag::Audio::GTAudioOneShot::UpdateDelayed)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d4f288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"UpdateDelayed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.UpdateDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Vector3)>(&::GorillaTag::Audio::GTAudioOneShot::UpdateDelayed)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d4f394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"UpdateDelayed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot.UpdateDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::GorillaTag::Audio::GTAudioOneShot::UpdateDelayed)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5d4f4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"UpdateDelayed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Audio::GTAudioOneShot::setStaticF__isInitialized_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<isInitialized>k__BackingField", ::GorillaTag::Audio::GTAudioOneShot*>(std::forward<bool>(value));
}
inline bool GorillaTag::Audio::GTAudioOneShot::getStaticF__isInitialized_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<isInitialized>k__BackingField", ::GorillaTag::Audio::GTAudioOneShot*>();
}
inline void GorillaTag::Audio::GTAudioOneShot::setStaticF_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::AudioSource>, "audioSource", ::GorillaTag::Audio::GTAudioOneShot*>(std::forward<::UnityW<::UnityEngine::AudioSource>>(value));
}
inline ::UnityW<::UnityEngine::AudioSource> GorillaTag::Audio::GTAudioOneShot::getStaticF_audioSource()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::AudioSource>, "audioSource", ::GorillaTag::Audio::GTAudioOneShot*>();
}
inline void GorillaTag::Audio::GTAudioOneShot::setStaticF_defaultCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AnimationCurve*, "defaultCurve", ::GorillaTag::Audio::GTAudioOneShot*>(std::forward<::UnityEngine::AnimationCurve*>(value));
}
inline ::UnityEngine::AnimationCurve* GorillaTag::Audio::GTAudioOneShot::getStaticF_defaultCurve()  {
return ::cordl_internals::getStaticField<::UnityEngine::AnimationCurve*, "defaultCurve", ::GorillaTag::Audio::GTAudioOneShot*>();
}
inline void GorillaTag::Audio::GTAudioOneShot::setStaticF__delayedHighWater(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_delayedHighWater", ::GorillaTag::Audio::GTAudioOneShot*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTag::Audio::GTAudioOneShot::getStaticF__delayedHighWater()  {
return ::cordl_internals::getStaticField<int32_t, "_delayedHighWater", ::GorillaTag::Audio::GTAudioOneShot*>();
}
inline void GorillaTag::Audio::GTAudioOneShot::setStaticF__delayedFreeHead(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_delayedFreeHead", ::GorillaTag::Audio::GTAudioOneShot*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTag::Audio::GTAudioOneShot::getStaticF__delayedFreeHead()  {
return ::cordl_internals::getStaticField<int32_t, "_delayedFreeHead", ::GorillaTag::Audio::GTAudioOneShot*>();
}
inline void GorillaTag::Audio::GTAudioOneShot::setStaticF__delayedData(::ArrayW<::GlobalNamespace::GTAudioOneShot_DelayedPlayData>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::GTAudioOneShot_DelayedPlayData>, "_delayedData", ::GorillaTag::Audio::GTAudioOneShot*>(std::forward<::ArrayW<::GlobalNamespace::GTAudioOneShot_DelayedPlayData>>(value));
}
inline ::ArrayW<::GlobalNamespace::GTAudioOneShot_DelayedPlayData> GorillaTag::Audio::GTAudioOneShot::getStaticF__delayedData()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::GTAudioOneShot_DelayedPlayData>, "_delayedData", ::GorillaTag::Audio::GTAudioOneShot*>();
}
inline void GorillaTag::Audio::GTAudioOneShot::setStaticF__delayedFreeNext(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_delayedFreeNext", ::GorillaTag::Audio::GTAudioOneShot*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GorillaTag::Audio::GTAudioOneShot::getStaticF__delayedFreeNext()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_delayedFreeNext", ::GorillaTag::Audio::GTAudioOneShot*>();
}
inline void GorillaTag::Audio::GTAudioOneShot::setStaticF__delayedListener(::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*  value)  {
::cordl_internals::setStaticField<::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*, "_delayedListener", ::GorillaTag::Audio::GTAudioOneShot*>(std::forward<::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*>(value));
}
inline ::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener* GorillaTag::Audio::GTAudioOneShot::getStaticF__delayedListener()  {
return ::cordl_internals::getStaticField<::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*, "_delayedListener", ::GorillaTag::Audio::GTAudioOneShot*>();
}
inline bool GorillaTag::Audio::GTAudioOneShot::get_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"get_isInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTag::Audio::GTAudioOneShot::set_isInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"set_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTag::Audio::GTAudioOneShot::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::Audio::GTAudioOneShot::Play(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position, float_t  volume, float_t  pitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip, position, volume, pitch);
}
inline void GorillaTag::Audio::GTAudioOneShot::Play(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position, ::UnityEngine::AnimationCurve*  curve, float_t  volume, float_t  pitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip, position, curve, volume, pitch);
}
inline int32_t GorillaTag::Audio::GTAudioOneShot::PlayDelayed(::UnityEngine::AudioClip*  sound, ::UnityEngine::Vector3  pos, float_t  delay, float_t  volume, float_t  pitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"PlayDelayed", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sound, pos, delay, volume, pitch);
}
inline int32_t GorillaTag::Audio::GTAudioOneShot::PlayDelayed(::UnityEngine::AudioClip*  sound, ::UnityEngine::Transform*  xform, ::UnityEngine::Vector3  pos, float_t  delay, float_t  volume, float_t  pitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"PlayDelayed", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sound, xform, pos, delay, volume, pitch);
}
inline void GorillaTag::Audio::GTAudioOneShot::CancelDelayed(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"CancelDelayed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx);
}
inline void GorillaTag::Audio::GTAudioOneShot::UpdateDelayed(int32_t  idx, ::UnityEngine::Transform*  xform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"UpdateDelayed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx, xform);
}
inline void GorillaTag::Audio::GTAudioOneShot::UpdateDelayed(int32_t  idx, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"UpdateDelayed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx, pos);
}
inline void GorillaTag::Audio::GTAudioOneShot::UpdateDelayed(int32_t  idx, ::UnityEngine::Transform*  xform, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot*>(),
                        {"UpdateDelayed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx, xform, pos);
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::GTAudioOneShot::GTAudioOneShot()   {
}
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener.OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener::*)(int32_t)>(&::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener::OnDelayedAction)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5d4f6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*>(),
                        {"OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener::*)()>(&::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4f6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener::OnDelayedAction(int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*>(),
                        {"OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextId);
}
inline void GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener* GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener::GTAudioOneShot_DelayedPlayListener()   {
}

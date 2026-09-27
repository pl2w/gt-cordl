#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioClipPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioClipPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioClipPlayable (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, bool)>(&::UnityEngine::Audio::AudioClipPlayable::Create)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb558894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.CreateHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, bool)>(&::UnityEngine::Audio::AudioClipPlayable::CreateHandle)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb558998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"CreateHandle", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Audio::AudioClipPlayable::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb558a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb558bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.op_Implicit___UnityEngine__Playables__Playable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (*)(::UnityEngine::Audio::AudioClipPlayable)>(&::UnityEngine::Audio::AudioClipPlayable::op_Implicit___UnityEngine__Playables__Playable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb558be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Audio::AudioClipPlayable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.op_Explicit___UnityEngine__Audio__AudioClipPlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioClipPlayable (*)(::UnityEngine::Playables::Playable)>(&::UnityEngine::Audio::AudioClipPlayable::op_Explicit___UnityEngine__Audio__AudioClipPlayable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb558c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioClipPlayable::*)(::UnityEngine::Audio::AudioClipPlayable)>(&::UnityEngine::Audio::AudioClipPlayable::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb558c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Audio::AudioClipPlayable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetVolume)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb558d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetStereoPan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetStereoPan)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb558e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetStereoPan", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetSpatialBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetSpatialBlend)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb558f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetSpatialBlend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(double_t, double_t, double_t)>(&::UnityEngine::Audio::AudioClipPlayable::Seek)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb559068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"Seek", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetVolumeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetVolumeInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb558de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetVolumeInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetStereoPanInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetStereoPanInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb558f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetStereoPanInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetSpatialBlendInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetSpatialBlendInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb55901c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetSpatialBlendInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetStartDelayInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, double_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetStartDelayInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb559214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetStartDelayInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetPauseDelayInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, double_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetPauseDelayInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb559260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetPauseDelayInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.InternalCreateAudioClipPlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::UnityEngine::AudioClip*, bool, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::InternalCreateAudioClipPlayable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb558b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"InternalCreateAudioClipPlayable", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.InternalCreateAudioClipPlayable_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::System::IntPtr, bool, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::InternalCreateAudioClipPlayable_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5592ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"InternalCreateAudioClipPlayable_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::AudioClipPlayable UnityEngine::Audio::AudioClipPlayable::Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AudioClip*  clip, bool  looping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioClipPlayable>(nullptr, ___internal_method, graph, clip, looping);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Audio::AudioClipPlayable::CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AudioClip*  clip, bool  looping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"CreateHandle", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(nullptr, ___internal_method, graph, clip, looping);
}
inline void UnityEngine::Audio::AudioClipPlayable::_ctor(::UnityEngine::Playables::PlayableHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Audio::AudioClipPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Audio::AudioClipPlayable::op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioClipPlayable  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Audio::AudioClipPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable);
}
inline ::UnityEngine::Audio::AudioClipPlayable UnityEngine::Audio::AudioClipPlayable::op_Explicit___UnityEngine__Audio__AudioClipPlayable(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioClipPlayable>(nullptr, ___internal_method, playable);
}
inline bool UnityEngine::Audio::AudioClipPlayable::Equals(::UnityEngine::Audio::AudioClipPlayable  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Audio::AudioClipPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetStereoPan(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetStereoPan", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetSpatialBlend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetSpatialBlend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Audio::AudioClipPlayable::Seek(double_t  startTime, double_t  startDelay, /* [DefaultValue("0")] */ double_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"Seek", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startTime, startDelay, duration);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetVolumeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetVolumeInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, volume);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetStereoPanInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  stereoPan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetStereoPanInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, stereoPan);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetSpatialBlendInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  spatialBlend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetSpatialBlendInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, spatialBlend);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetStartDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  hdl, double_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetStartDelayInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, delay);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetPauseDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  hdl, double_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"SetPauseDelayInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, delay);
}
inline bool UnityEngine::Audio::AudioClipPlayable::InternalCreateAudioClipPlayable(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::UnityEngine::AudioClip*  clip, bool  looping, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"InternalCreateAudioClipPlayable", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, clip, looping, handle);
}
inline bool UnityEngine::Audio::AudioClipPlayable::InternalCreateAudioClipPlayable_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::System::IntPtr  clip, bool  looping, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"InternalCreateAudioClipPlayable_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, clip, looping, handle);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr  UnityEngine::Audio::AudioClipPlayable::operator ::UnityEngine::Playables::IPlayable*()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Audio::AudioClipPlayable::i___UnityEngine__Playables__IPlayable()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr  UnityEngine::Audio::AudioClipPlayable::operator ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>* UnityEngine::Audio::AudioClipPlayable::i___System__IEquatable_1___UnityEngine__Audio__AudioClipPlayable_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::AudioClipPlayable::AudioClipPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioClipPlayable::AudioClipPlayable()   {
}

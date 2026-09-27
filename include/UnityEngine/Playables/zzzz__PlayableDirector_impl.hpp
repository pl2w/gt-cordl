#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableDirector.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__DirectorWrapMode_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameRate_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayState_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_state)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb630ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_extrapolationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::DirectorWrapMode)>(&::UnityEngine::Playables::PlayableDirector::set_extrapolationMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb630f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_extrapolationMode", {}, {::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_extrapolationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DirectorWrapMode (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_extrapolationMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb630ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_extrapolationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_playableAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Playables::PlayableAsset> (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_playableAsset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb631070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_playableAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_playableAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::PlayableAsset*)>(&::UnityEngine::Playables::PlayableDirector::set_playableAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb631184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_playableAsset", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_playableGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_playableGraph)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb63123c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_playableGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::FrameRate)>(&::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb6312d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Playables::FrameRate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::DirectorWrapMode)>(&::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb63135c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(double_t)>(&::UnityEngine::Playables::PlayableDirector::set_time)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb6314ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_time", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_time)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb631580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_initialTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(double_t)>(&::UnityEngine::Playables::PlayableDirector::set_initialTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb631634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_initialTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_duration)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb631708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Evaluate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb6317bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Evaluate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.PlayOnFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::FrameRate)>(&::UnityEngine::Playables::PlayableDirector::PlayOnFrame)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb6312d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"PlayOnFrame", {}, {::i2c::type_of<::UnityEngine::Playables::FrameRate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb631434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Stop)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb6318f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Pause)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb6319a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Pause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetReferenceValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::PropertyName, ::by_ref<bool>)>(&::UnityEngine::Playables::PlayableDirector::GetReferenceValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb631a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetReferenceValue", {}, {::i2c::type_of<::UnityEngine::PropertyName>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGenericBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*)>(&::UnityEngine::Playables::PlayableDirector::GetGenericBinding)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb631b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetGenericBinding", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetPlayState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::GetPlayState)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb630ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetPlayState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetWrapMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::DirectorWrapMode)>(&::UnityEngine::Playables::PlayableDirector::SetWrapMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb630f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetWrapMode", {}, {::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetWrapMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DirectorWrapMode (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::GetWrapMode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb630ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetWrapMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGraphHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::GetGraphHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb631240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetGraphHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetPlayableAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::Playables::PlayableDirector::SetPlayableAsset)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb631188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetPlayableAsset", {}, {::i2c::type_of<::UnityEngine::ScriptableObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Internal_GetPlayableAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb6310f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Internal_GetPlayableAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb631df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorPlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb631e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorPause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb631e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb631e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_time_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::Playables::PlayableDirector::set_time_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb631534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_time_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_time_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::get_time_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb6315f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_time_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_initialTime_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::Playables::PlayableDirector::set_initialTime_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb6316bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_initialTime_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_duration_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::get_duration_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb631780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_duration_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Evaluate_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Evaluate_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb631834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Evaluate_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.PlayOnFrame_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Playables::FrameRate>)>(&::UnityEngine::Playables::PlayableDirector::PlayOnFrame_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb631870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"PlayOnFrame_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::FrameRate>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Play_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb6318b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Play_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Stop_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Stop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb631968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Stop_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Pause_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Pause_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb631a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Pause_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetReferenceValue_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::PropertyName>, ::by_ref<bool>)>(&::UnityEngine::Playables::PlayableDirector::GetReferenceValue_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb631b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetReferenceValue_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::PropertyName>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGenericBinding_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::GetGenericBinding_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb631c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetGenericBinding_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetPlayState_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayState (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::GetPlayState_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb631c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetPlayState_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetWrapMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Playables::DirectorWrapMode)>(&::UnityEngine::Playables::PlayableDirector::SetWrapMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb631cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetWrapMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetWrapMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DirectorWrapMode (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::GetWrapMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb631cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetWrapMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGraphHandle_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Playables::PlayableGraph>)>(&::UnityEngine::Playables::PlayableDirector::GetGraphHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb631d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetGraphHandle_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetPlayableAsset_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::SetPlayableAsset_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb631d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetPlayableAsset_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Internal_GetPlayableAsset_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb631db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Internal_GetPlayableAsset_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_played()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___played;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_played() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___played;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___played = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_paused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paused;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_paused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paused;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paused = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_stopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopped;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_stopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopped;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopped = value;
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_extrapolationMode", {}, {::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::DirectorWrapMode UnityEngine::Playables::PlayableDirector::get_extrapolationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_extrapolationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorWrapMode>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> UnityEngine::Playables::PlayableDirector::get_playableAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_playableAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Playables::PlayableAsset>>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_playableAsset(::UnityEngine::Playables::PlayableAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_playableAsset", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableDirector::get_playableGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_playableGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Play(::UnityEngine::Playables::FrameRate  frameRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Playables::FrameRate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameRate);
}
inline void UnityEngine::Playables::PlayableDirector::Play(::UnityEngine::Playables::PlayableAsset*  asset, ::UnityEngine::Playables::DirectorWrapMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset, mode);
}
inline void UnityEngine::Playables::PlayableDirector::set_time(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_time", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_initialTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_initialTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Evaluate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Evaluate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::PlayOnFrame(::UnityEngine::Playables::FrameRate  frameRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"PlayOnFrame", {}, {::i2c::type_of<::UnityEngine::Playables::FrameRate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameRate);
}
inline void UnityEngine::Playables::PlayableDirector::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Pause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Pause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableDirector::GetReferenceValue(::UnityEngine::PropertyName  id, ::by_ref<bool>  idValid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetReferenceValue", {}, {::i2c::type_of<::UnityEngine::PropertyName>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, id, idValid);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableDirector::GetGenericBinding(::UnityEngine::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetGenericBinding", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, key);
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::GetPlayState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetPlayState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SetWrapMode(::UnityEngine::Playables::DirectorWrapMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetWrapMode", {}, {::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline ::UnityEngine::Playables::DirectorWrapMode UnityEngine::Playables::PlayableDirector::GetWrapMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetWrapMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorWrapMode>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableDirector::GetGraphHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetGraphHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SetPlayableAsset(::UnityEngine::ScriptableObject*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetPlayableAsset", {}, {::i2c::type_of<::UnityEngine::ScriptableObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Internal_GetPlayableAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorPlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorPause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SendOnPlayableDirectorStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_time_Injected(::System::IntPtr  _unity_self, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_time_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_time_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_time_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::set_initialTime_Injected(::System::IntPtr  _unity_self, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"set_initialTime_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_duration_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"get_duration_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::Evaluate_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Evaluate_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::PlayOnFrame_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Playables::FrameRate>  frameRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"PlayOnFrame_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::FrameRate>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, frameRate);
}
inline void UnityEngine::Playables::PlayableDirector::Play_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Play_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::Stop_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Stop_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::Pause_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Pause_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Playables::PlayableDirector::GetReferenceValue_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::PropertyName>  id, ::by_ref<bool>  idValid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetReferenceValue_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::PropertyName>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, id, idValid);
}
inline ::System::IntPtr UnityEngine::Playables::PlayableDirector::GetGenericBinding_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetGenericBinding_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, key);
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::GetPlayState_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetPlayState_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::SetWrapMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Playables::DirectorWrapMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetWrapMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, mode);
}
inline ::UnityEngine::Playables::DirectorWrapMode UnityEngine::Playables::PlayableDirector::GetWrapMode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetWrapMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorWrapMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::GetGraphHandle_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"GetGraphHandle_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Playables::PlayableDirector::SetPlayableAsset_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"SetPlayableAsset_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, asset);
}
inline ::System::IntPtr UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                        {"Internal_GetPlayableAsset_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Playables::PlayableDirector* UnityEngine::Playables::PlayableDirector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Playables::PlayableDirector*>());
}
/// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
constexpr  UnityEngine::Playables::PlayableDirector::operator ::UnityEngine::IExposedPropertyTable*() noexcept {
return static_cast<::UnityEngine::IExposedPropertyTable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::IExposedPropertyTable"
constexpr ::UnityEngine::IExposedPropertyTable* UnityEngine::Playables::PlayableDirector::i___UnityEngine__IExposedPropertyTable() noexcept {
return static_cast<::UnityEngine::IExposedPropertyTable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableDirector::PlayableDirector()   {
}

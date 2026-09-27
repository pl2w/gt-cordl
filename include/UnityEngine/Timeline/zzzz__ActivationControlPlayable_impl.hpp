#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationControlPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_InitialState_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_PostPlaybackState_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_InitialState_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_PostPlaybackState_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState)>(&::UnityEngine::Timeline::ActivationControlPlayable::Create)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb3c57f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::ActivationControlPlayable_PostPlaybackState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnBehaviourPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb3ca9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(),
                    {::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnBehaviourPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPause)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb3caa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(),
                    {::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.ProcessFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::UnityEngine::Timeline::ActivationControlPlayable::ProcessFrame)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb3cab18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(),
                    {::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnGraphStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::ActivationControlPlayable::OnGraphStart)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb3caba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(),
                    {::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnPlayableDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::ActivationControlPlayable::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb3cac34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(),
                    {::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)()>(&::UnityEngine::Timeline::ActivationControlPlayable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb3cad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Timeline::ActivationControlPlayable::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Timeline::ActivationControlPlayable::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState& UnityEngine::Timeline::ActivationControlPlayable::__cordl_internal_get_postPlayback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postPlayback;
}
constexpr ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState const& UnityEngine::Timeline::ActivationControlPlayable::__cordl_internal_get_postPlayback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postPlayback;
}
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__cordl_internal_set_postPlayback(::GlobalNamespace::ActivationControlPlayable_PostPlaybackState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postPlayback = value;
}
constexpr ::GlobalNamespace::ActivationControlPlayable_InitialState& UnityEngine::Timeline::ActivationControlPlayable::__cordl_internal_get_m_InitialState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialState;
}
constexpr ::GlobalNamespace::ActivationControlPlayable_InitialState const& UnityEngine::Timeline::ActivationControlPlayable::__cordl_internal_get_m_InitialState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialState;
}
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__cordl_internal_set_m_InitialState(::GlobalNamespace::ActivationControlPlayable_InitialState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitialState = value;
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> UnityEngine::Timeline::ActivationControlPlayable::Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  gameObject, ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState  postPlaybackState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::ActivationControlPlayable_PostPlaybackState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*>>(nullptr, ___internal_method, graph, gameObject, postPlaybackState);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPause(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info, userData);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnGraphStart(::UnityEngine::Playables::Playable  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnPlayableDestroy(::UnityEngine::Playables::Playable  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Timeline::ActivationControlPlayable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::ActivationControlPlayable* UnityEngine::Timeline::ActivationControlPlayable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::ActivationControlPlayable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::ActivationControlPlayable::ActivationControlPlayable()   {
}

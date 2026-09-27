#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTrack.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTrack_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTrack.CreateTrackMixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::Unity::Cinemachine::CinemachineTrack::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::Unity::Cinemachine::CinemachineTrack::CreateTrackMixer)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xaf011c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTrack*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTrack*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTrack._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTrack::*)()>(&::Unity::Cinemachine::CinemachineTrack::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf012d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTrack*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::CinemachineTrack::__cordl_internal_get_TrackPriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackPriority;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineTrack::__cordl_internal_get_TrackPriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackPriority;
}
constexpr void Unity::Cinemachine::CinemachineTrack::__cordl_internal_set_TrackPriority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackPriority = value;
}
inline ::UnityEngine::Playables::Playable Unity::Cinemachine::CinemachineTrack::CreateTrackMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTrack*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, inputCount);
}
inline void Unity::Cinemachine::CinemachineTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTrack*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineTrack* Unity::Cinemachine::CinemachineTrack::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineTrack*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineTrack::CinemachineTrack()   {
}

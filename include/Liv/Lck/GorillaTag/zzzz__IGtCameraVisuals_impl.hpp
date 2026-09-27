#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/IGtCameraVisuals.hpp"
#include "Liv/Lck/GorillaTag/zzzz__IGtCameraVisuals_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::IGtCameraVisuals.SetVisualsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::IGtCameraVisuals::*)(bool)>(&::Liv::Lck::GorillaTag::IGtCameraVisuals::SetVisualsActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::IGtCameraVisuals.SetNetworkedVisualsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::IGtCameraVisuals::*)(bool)>(&::Liv::Lck::GorillaTag::IGtCameraVisuals::SetNetworkedVisualsActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::IGtCameraVisuals.SetRecordingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::IGtCameraVisuals::*)(bool)>(&::Liv::Lck::GorillaTag::IGtCameraVisuals::SetRecordingState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::GorillaTag::IGtCameraVisuals::SetVisualsActive(bool  active)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Liv::Lck::GorillaTag::IGtCameraVisuals::SetNetworkedVisualsActive(bool  active)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Liv::Lck::GorillaTag::IGtCameraVisuals::SetRecordingState(bool  isRecording)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isRecording);
}

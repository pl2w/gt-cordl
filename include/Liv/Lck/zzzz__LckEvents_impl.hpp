#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_ActiveCameraChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_ActiveCameraTrackTextureChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_CameraFramerateChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_CameraResolutionChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_CaptureErrorEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EchoDisabledEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EchoEnabledEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EchoSavedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EncoderStartedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EncoderStoppedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_LowStorageSpaceDetectedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_PhotoCaptureSavedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_RecordingPausedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_RecordingResumedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_RecordingSavedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_RecordingStartedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_RecordingStoppedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_StreamingStartedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_StreamingStoppedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEvents::*)()>(&::Liv::Lck::LckEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce17d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckEvents* Liv::Lck::LckEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckEvents*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckEvents::LckEvents()   {
}
template<typename TResult>
inline TResult Liv::Lck::LckEvents_IEventWithResult_1<TResult>::get_Result()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckEvents_IEventWithResult_1<TResult>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}

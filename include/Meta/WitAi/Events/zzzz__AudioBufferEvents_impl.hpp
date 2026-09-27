#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/AudioBufferEvents.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Events/zzzz__AudioBufferEvents_def.hpp"
#include "Meta/Voice/zzzz__VoiceAudioInputState_def.hpp"
#include "Meta/WitAi/Data/zzzz__RingBuffer_1_def.hpp"
#include "Meta/WitAi/Events/zzzz__AudioBufferEvents_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitByteDataEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitMicLevelChangedEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitSampleEvent_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::AudioBufferEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::AudioBufferEvents::*)()>(&::Meta::WitAi::Events::AudioBufferEvents::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e94cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::AudioBufferEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Meta::Voice::VoiceAudioInputState>*& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnAudioStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioStateChange;
}
constexpr ::System::Action_1<::Meta::Voice::VoiceAudioInputState>* const& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnAudioStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioStateChange;
}
constexpr void Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_set_OnAudioStateChange(::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAudioStateChange = value;
}
constexpr ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnSampleReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSampleReady;
}
constexpr ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent* const& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnSampleReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSampleReady;
}
constexpr void Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_set_OnSampleReady(::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSampleReady = value;
}
constexpr ::Meta::WitAi::Events::WitSampleEvent*& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnSampleReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSampleReceived;
}
constexpr ::Meta::WitAi::Events::WitSampleEvent* const& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnSampleReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSampleReceived;
}
constexpr void Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_set_OnSampleReceived(::Meta::WitAi::Events::WitSampleEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSampleReceived = value;
}
constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent*& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnMicLevelChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicLevelChanged;
}
constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent* const& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnMicLevelChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicLevelChanged;
}
constexpr void Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_set_OnMicLevelChanged(::Meta::WitAi::Events::WitMicLevelChangedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMicLevelChanged = value;
}
constexpr ::Meta::WitAi::Events::WitByteDataEvent*& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnByteDataReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnByteDataReady;
}
constexpr ::Meta::WitAi::Events::WitByteDataEvent* const& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnByteDataReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnByteDataReady;
}
constexpr void Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_set_OnByteDataReady(::Meta::WitAi::Events::WitByteDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnByteDataReady = value;
}
constexpr ::Meta::WitAi::Events::WitByteDataEvent*& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnByteDataSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnByteDataSent;
}
constexpr ::Meta::WitAi::Events::WitByteDataEvent* const& Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_get_OnByteDataSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnByteDataSent;
}
constexpr void Meta::WitAi::Events::AudioBufferEvents::__cordl_internal_set_OnByteDataSent(::Meta::WitAi::Events::WitByteDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnByteDataSent = value;
}
inline void Meta::WitAi::Events::AudioBufferEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::AudioBufferEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::AudioBufferEvents* Meta::WitAi::Events::AudioBufferEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::AudioBufferEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::AudioBufferEvents::AudioBufferEvents()   {
}
//  Writing Method size for method: ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent::*)(::System::Object*, ::System::IntPtr)>(&::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e84280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent::*)(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*, float_t)>(&::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e94e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*>(),
                    {::i2c::class_of<::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent::Invoke(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  marker, float_t  levelMax)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, marker, levelMax);
}
inline ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent* Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent::AudioBufferEvents_OnSampleReadyEvent()   {
}

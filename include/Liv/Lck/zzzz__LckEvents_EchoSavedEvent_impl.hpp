#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_EchoSavedEvent.hpp"
#include "Liv/Lck/zzzz__LckEvents_EchoSavedEvent_def.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEvents_EchoSavedEvent.get_SaveResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* (::GlobalNamespace::LckEvents_EchoSavedEvent::*)()>(&::GlobalNamespace::LckEvents_EchoSavedEvent::get_SaveResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoSavedEvent>(),
                        {"get_SaveResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_EchoSavedEvent.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* (::GlobalNamespace::LckEvents_EchoSavedEvent::*)()>(&::GlobalNamespace::LckEvents_EchoSavedEvent::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoSavedEvent>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_EchoSavedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEvents_EchoSavedEvent::*)(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*)>(&::GlobalNamespace::LckEvents_EchoSavedEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoSavedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* GlobalNamespace::LckEvents_EchoSavedEvent::get_SaveResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoSavedEvent>(),
                        {"get_SaveResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>(*this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* GlobalNamespace::LckEvents_EchoSavedEvent::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoSavedEvent>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>(*this, ___internal_method);
}
inline void GlobalNamespace::LckEvents_EchoSavedEvent::_ctor(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  saveResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoSavedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, saveResult);
}
/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>"
constexpr  GlobalNamespace::LckEvents_EchoSavedEvent::operator ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* GlobalNamespace::LckEvents_EchoSavedEvent::i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1___Liv__Lck__Recorder__RecordingData___()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_SaveResult_k__BackingField", ty: "::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEvents_EchoSavedEvent::LckEvents_EchoSavedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  _SaveResult_k__BackingField) noexcept  {
this->_SaveResult_k__BackingField = _SaveResult_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEvents_EchoSavedEvent::LckEvents_EchoSavedEvent()   {
}

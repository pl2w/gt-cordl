#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_RecordingSavedEvent.hpp"
#include "Liv/Lck/zzzz__LckEvents_RecordingSavedEvent_def.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEvents_RecordingSavedEvent.get_SaveResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* (::GlobalNamespace::LckEvents_RecordingSavedEvent::*)()>(&::GlobalNamespace::LckEvents_RecordingSavedEvent::get_SaveResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_RecordingSavedEvent>(),
                        {"get_SaveResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_RecordingSavedEvent.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* (::GlobalNamespace::LckEvents_RecordingSavedEvent::*)()>(&::GlobalNamespace::LckEvents_RecordingSavedEvent::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_RecordingSavedEvent>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_RecordingSavedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEvents_RecordingSavedEvent::*)(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*)>(&::GlobalNamespace::LckEvents_RecordingSavedEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_RecordingSavedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* GlobalNamespace::LckEvents_RecordingSavedEvent::get_SaveResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_RecordingSavedEvent>(),
                        {"get_SaveResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>(*this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* GlobalNamespace::LckEvents_RecordingSavedEvent::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_RecordingSavedEvent>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>(*this, ___internal_method);
}
inline void GlobalNamespace::LckEvents_RecordingSavedEvent::_ctor(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  saveResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_RecordingSavedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, saveResult);
}
/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>"
constexpr  GlobalNamespace::LckEvents_RecordingSavedEvent::operator ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* GlobalNamespace::LckEvents_RecordingSavedEvent::i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1___Liv__Lck__Recorder__RecordingData___()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_SaveResult_k__BackingField", ty: "::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEvents_RecordingSavedEvent::LckEvents_RecordingSavedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  _SaveResult_k__BackingField) noexcept  {
this->_SaveResult_k__BackingField = _SaveResult_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEvents_RecordingSavedEvent::LckEvents_RecordingSavedEvent()   {
}

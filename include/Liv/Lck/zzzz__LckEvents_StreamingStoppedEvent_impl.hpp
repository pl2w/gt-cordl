#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_StreamingStoppedEvent.hpp"
#include "Liv/Lck/zzzz__LckEvents_StreamingStoppedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEvents_StreamingStoppedEvent.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::GlobalNamespace::LckEvents_StreamingStoppedEvent::*)()>(&::GlobalNamespace::LckEvents_StreamingStoppedEvent::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce18c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_StreamingStoppedEvent>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_StreamingStoppedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEvents_StreamingStoppedEvent::*)(::Liv::Lck::LckResult*)>(&::GlobalNamespace::LckEvents_StreamingStoppedEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce18c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_StreamingStoppedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult* GlobalNamespace::LckEvents_StreamingStoppedEvent::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_StreamingStoppedEvent>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(*this, ___internal_method);
}
inline void GlobalNamespace::LckEvents_StreamingStoppedEvent::_ctor(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_StreamingStoppedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>"
constexpr  GlobalNamespace::LckEvents_StreamingStoppedEvent::operator ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>*()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>* GlobalNamespace::LckEvents_StreamingStoppedEvent::i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult__()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Result_k__BackingField", ty: "::Liv::Lck::LckResult*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEvents_StreamingStoppedEvent::LckEvents_StreamingStoppedEvent(::Liv::Lck::LckResult*  _Result_k__BackingField) noexcept  {
this->_Result_k__BackingField = _Result_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEvents_StreamingStoppedEvent::LckEvents_StreamingStoppedEvent()   {
}

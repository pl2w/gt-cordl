#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_CameraFramerateChangedEvent.hpp"
#include "Liv/Lck/zzzz__LckEvents_CameraFramerateChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEvents_CameraFramerateChangedEvent.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<uint32_t>* (::GlobalNamespace::LckEvents_CameraFramerateChangedEvent::*)()>(&::GlobalNamespace::LckEvents_CameraFramerateChangedEvent::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CameraFramerateChangedEvent>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_CameraFramerateChangedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEvents_CameraFramerateChangedEvent::*)(::Liv::Lck::LckResult_1<uint32_t>*)>(&::GlobalNamespace::LckEvents_CameraFramerateChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CameraFramerateChangedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<uint32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult_1<uint32_t>* GlobalNamespace::LckEvents_CameraFramerateChangedEvent::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CameraFramerateChangedEvent>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<uint32_t>*>(*this, ___internal_method);
}
inline void GlobalNamespace::LckEvents_CameraFramerateChangedEvent::_ctor(::Liv::Lck::LckResult_1<uint32_t>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CameraFramerateChangedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<uint32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<uint32_t>*>"
constexpr  GlobalNamespace::LckEvents_CameraFramerateChangedEvent::operator ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<uint32_t>*>*()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<uint32_t>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<uint32_t>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<uint32_t>*>* GlobalNamespace::LckEvents_CameraFramerateChangedEvent::i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1_uint32_t___()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<uint32_t>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Result_k__BackingField", ty: "::Liv::Lck::LckResult_1<uint32_t>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEvents_CameraFramerateChangedEvent::LckEvents_CameraFramerateChangedEvent(::Liv::Lck::LckResult_1<uint32_t>*  _Result_k__BackingField) noexcept  {
this->_Result_k__BackingField = _Result_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEvents_CameraFramerateChangedEvent::LckEvents_CameraFramerateChangedEvent()   {
}

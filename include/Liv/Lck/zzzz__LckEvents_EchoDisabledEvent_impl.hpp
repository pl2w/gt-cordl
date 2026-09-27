#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_EchoDisabledEvent.hpp"
#include "Liv/Lck/zzzz__EchoDisableReason_impl.hpp"
#include "Liv/Lck/zzzz__LckEvents_EchoDisabledEvent_def.hpp"
#include "Liv/Lck/zzzz__EchoDisableReason_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEvents_EchoDisabledEvent.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::GlobalNamespace::LckEvents_EchoDisabledEvent::*)()>(&::GlobalNamespace::LckEvents_EchoDisabledEvent::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoDisabledEvent>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_EchoDisabledEvent.get_Reason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::EchoDisableReason (::GlobalNamespace::LckEvents_EchoDisabledEvent::*)()>(&::GlobalNamespace::LckEvents_EchoDisabledEvent::get_Reason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoDisabledEvent>(),
                        {"get_Reason", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_EchoDisabledEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEvents_EchoDisabledEvent::*)(::Liv::Lck::LckResult*, ::Liv::Lck::EchoDisableReason)>(&::GlobalNamespace::LckEvents_EchoDisabledEvent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ce1888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoDisabledEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult*>(), ::i2c::type_of<::Liv::Lck::EchoDisableReason>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult* GlobalNamespace::LckEvents_EchoDisabledEvent::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoDisabledEvent>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(*this, ___internal_method);
}
inline ::Liv::Lck::EchoDisableReason GlobalNamespace::LckEvents_EchoDisabledEvent::get_Reason()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoDisabledEvent>(),
                        {"get_Reason", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::EchoDisableReason>(*this, ___internal_method);
}
inline void GlobalNamespace::LckEvents_EchoDisabledEvent::_ctor(::Liv::Lck::LckResult*  result, ::Liv::Lck::EchoDisableReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_EchoDisabledEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult*>(), ::i2c::type_of<::Liv::Lck::EchoDisableReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result, reason);
}
/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>"
constexpr  GlobalNamespace::LckEvents_EchoDisabledEvent::operator ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>*()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>* GlobalNamespace::LckEvents_EchoDisabledEvent::i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult__()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Result_k__BackingField", ty: "::Liv::Lck::LckResult*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Reason_k__BackingField", ty: "::Liv::Lck::EchoDisableReason", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEvents_EchoDisabledEvent::LckEvents_EchoDisabledEvent(::Liv::Lck::LckResult*  _Result_k__BackingField, ::Liv::Lck::EchoDisableReason  _Reason_k__BackingField) noexcept  {
this->_Result_k__BackingField = _Result_k__BackingField;
this->_Reason_k__BackingField = _Reason_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEvents_EchoDisabledEvent::LckEvents_EchoDisabledEvent()   {
}

#pragma once
// IWYU pragma private; include "GorillaNetworking/SubCosmeticSignalReceiver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/zzzz__SubCosmeticSignalReceiver_def.hpp"
#include "GorillaNetworking/zzzz__SubCosmeticSignalReceiver_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticSignalReceiver.ReceiveSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticSignalReceiver::*)(int32_t)>(&::GorillaNetworking::SubCosmeticSignalReceiver::ReceiveSignal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c71694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticSignalReceiver*>(),
                        {"ReceiveSignal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticSignalReceiver.ResetTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticSignalReceiver::*)()>(&::GorillaNetworking::SubCosmeticSignalReceiver::ResetTriggers)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c71824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticSignalReceiver*>(),
                        {"ResetTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticSignalReceiver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticSignalReceiver::*)()>(&::GorillaNetworking::SubCosmeticSignalReceiver::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c718c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticSignalReceiver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>*& GorillaNetworking::SubCosmeticSignalReceiver::__cordl_internal_get_triggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggers;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>* const& GorillaNetworking::SubCosmeticSignalReceiver::__cordl_internal_get_triggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggers;
}
constexpr void GorillaNetworking::SubCosmeticSignalReceiver::__cordl_internal_set_triggers(::System::Collections::Generic::List_1<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggers = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GorillaNetworking::SubCosmeticSignalReceiver::__cordl_internal_get_onAnySignal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAnySignal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GorillaNetworking::SubCosmeticSignalReceiver::__cordl_internal_get_onAnySignal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAnySignal;
}
constexpr void GorillaNetworking::SubCosmeticSignalReceiver::__cordl_internal_set_onAnySignal(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAnySignal = value;
}
inline void GorillaNetworking::SubCosmeticSignalReceiver::ReceiveSignal(int32_t  signal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticSignalReceiver*>(),
                        {"ReceiveSignal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
inline void GorillaNetworking::SubCosmeticSignalReceiver::ResetTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticSignalReceiver*>(),
                        {"ResetTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::SubCosmeticSignalReceiver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticSignalReceiver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::SubCosmeticSignalReceiver* GorillaNetworking::SubCosmeticSignalReceiver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::SubCosmeticSignalReceiver*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::SubCosmeticSignalReceiver::SubCosmeticSignalReceiver()   {
}
//  Writing Method size for method: ::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::*)()>(&::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7194c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_get_signal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signal;
}
constexpr int32_t const& GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_get_signal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signal;
}
constexpr void GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_set_signal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___signal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_get_onSignalReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSignalReceived;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_get_onSignalReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSignalReceived;
}
constexpr void GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_set_onSignalReceived(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSignalReceived = value;
}
constexpr bool& GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_get_triggerOnce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOnce;
}
constexpr bool const& GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_get_triggerOnce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOnce;
}
constexpr void GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_set_triggerOnce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerOnce = value;
}
constexpr bool& GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_get_hasTriggered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTriggered;
}
constexpr bool const& GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_get_hasTriggered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTriggered;
}
constexpr void GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::__cordl_internal_set_hasTriggered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasTriggered = value;
}
inline void GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger* GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger::SubCosmeticSignalReceiver_SignalTrigger()   {
}

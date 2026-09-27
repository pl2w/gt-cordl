#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMicrogestureEventSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMicrogestureEventSource_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_MicrogestureType_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRMicrogestureEventSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRHand> (::GlobalNamespace::OVRMicrogestureEventSource::*)()>(&::GlobalNamespace::OVRMicrogestureEventSource::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5daf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)(::GlobalNamespace::OVRHand*)>(&::GlobalNamespace::OVRMicrogestureEventSource::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5daf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                        {"set_Hand", {}, {::i2c::type_of<::GlobalNamespace::OVRHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)()>(&::GlobalNamespace::OVRMicrogestureEventSource::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa5daf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.RaiseGestureRecognized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)(::GlobalNamespace::OVRHand_MicrogestureType)>(&::GlobalNamespace::OVRMicrogestureEventSource::RaiseGestureRecognized)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa5daf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                        {"RaiseGestureRecognized", {}, {::i2c::type_of<::GlobalNamespace::OVRHand_MicrogestureType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)()>(&::GlobalNamespace::OVRMicrogestureEventSource::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa5db00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRHand>& GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand> const& GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_set__hand(::UnityW<::GlobalNamespace::OVRHand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>*& GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_get_GestureRecognizedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GestureRecognizedEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>* const& GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_get_GestureRecognizedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GestureRecognizedEvent;
}
constexpr void GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_set_GestureRecognizedEvent(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GestureRecognizedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*& GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_get_WhenGestureRecognized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenGestureRecognized;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>* const& GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_get_WhenGestureRecognized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenGestureRecognized;
}
constexpr void GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_set_WhenGestureRecognized(::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenGestureRecognized = value;
}
inline ::UnityW<::GlobalNamespace::OVRHand> GlobalNamespace::OVRMicrogestureEventSource::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRHand>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::set_Hand(::GlobalNamespace::OVRHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                        {"set_Hand", {}, {::i2c::type_of<::GlobalNamespace::OVRHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::RaiseGestureRecognized(::GlobalNamespace::OVRHand_MicrogestureType  gesture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                        {"RaiseGestureRecognized", {}, {::i2c::type_of<::GlobalNamespace::OVRHand_MicrogestureType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gesture);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMicrogestureEventSource* GlobalNamespace::OVRMicrogestureEventSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRMicrogestureEventSource*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMicrogestureEventSource::OVRMicrogestureEventSource()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource___c::*)()>(&::GlobalNamespace::OVRMicrogestureEventSource___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5db16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource___c.__ctor_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource___c::*)(::GlobalNamespace::OVRHand_MicrogestureType)>(&::GlobalNamespace::OVRMicrogestureEventSource___c::__ctor_b__8_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa5db174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource___c*>(),
                        {"<.ctor>b__8_0", {}, {::i2c::type_of<::GlobalNamespace::OVRHand_MicrogestureType>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMicrogestureEventSource___c::setStaticF___9(::GlobalNamespace::OVRMicrogestureEventSource___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRMicrogestureEventSource___c*, "<>9", ::GlobalNamespace::OVRMicrogestureEventSource___c*>(std::forward<::GlobalNamespace::OVRMicrogestureEventSource___c*>(value));
}
inline ::GlobalNamespace::OVRMicrogestureEventSource___c* GlobalNamespace::OVRMicrogestureEventSource___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRMicrogestureEventSource___c*, "<>9", ::GlobalNamespace::OVRMicrogestureEventSource___c*>();
}
inline void GlobalNamespace::OVRMicrogestureEventSource___c::setStaticF___9__8_0(::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*, "<>9__8_0", ::GlobalNamespace::OVRMicrogestureEventSource___c*>(std::forward<::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>* GlobalNamespace::OVRMicrogestureEventSource___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*, "<>9__8_0", ::GlobalNamespace::OVRMicrogestureEventSource___c*>();
}
inline void GlobalNamespace::OVRMicrogestureEventSource___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMicrogestureEventSource___c::__ctor_b__8_0(::GlobalNamespace::OVRHand_MicrogestureType  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource___c*>(),
                        {"<.ctor>b__8_0", {}, {::i2c::type_of<::GlobalNamespace::OVRHand_MicrogestureType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::GlobalNamespace::OVRMicrogestureEventSource___c* GlobalNamespace::OVRMicrogestureEventSource___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRMicrogestureEventSource___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMicrogestureEventSource___c::OVRMicrogestureEventSource___c()   {
}

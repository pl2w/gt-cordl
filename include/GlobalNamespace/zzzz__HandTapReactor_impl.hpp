#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapReactor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HandTapReactor_def.hpp"
#include "GlobalNamespace/zzzz__FlagEvents_1_def.hpp"
#include "GlobalNamespace/zzzz__HandEffectContext_def.hpp"
#include "GlobalNamespace/zzzz__HandTapReactor_TapType_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_Mode_def.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandTapReactor.LeftDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapReactor::*)(::GlobalNamespace::HandEffectContext*)>(&::GlobalNamespace::HandTapReactor::LeftDown)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5653704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"LeftDown", {}, {::i2c::type_of<::GlobalNamespace::HandEffectContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapReactor.LeftUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapReactor::*)(::GlobalNamespace::HandEffectContext*)>(&::GlobalNamespace::HandTapReactor::LeftUp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x565375c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"LeftUp", {}, {::i2c::type_of<::GlobalNamespace::HandEffectContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapReactor.LeftGesture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapReactor::*)(::GlobalNamespace::IHandEffectsTrigger_Mode)>(&::GlobalNamespace::HandTapReactor::LeftGesture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56537b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"LeftGesture", {}, {::i2c::type_of<::GlobalNamespace::IHandEffectsTrigger_Mode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapReactor.RightDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapReactor::*)(::GlobalNamespace::HandEffectContext*)>(&::GlobalNamespace::HandTapReactor::RightDown)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5653864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"RightDown", {}, {::i2c::type_of<::GlobalNamespace::HandEffectContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapReactor.RightUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapReactor::*)(::GlobalNamespace::HandEffectContext*)>(&::GlobalNamespace::HandTapReactor::RightUp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56538bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"RightUp", {}, {::i2c::type_of<::GlobalNamespace::HandEffectContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapReactor.RightGesture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapReactor::*)(::GlobalNamespace::IHandEffectsTrigger_Mode)>(&::GlobalNamespace::HandTapReactor::RightGesture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5653914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"RightGesture", {}, {::i2c::type_of<::GlobalNamespace::IHandEffectsTrigger_Mode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapReactor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapReactor::*)()>(&::GlobalNamespace::HandTapReactor::OnEnable)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x56539c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapReactor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapReactor::*)()>(&::GlobalNamespace::HandTapReactor::OnDisable)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x5653fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTapReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapReactor::*)()>(&::GlobalNamespace::HandTapReactor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5654448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::HandTapReactor_TapType>*& GlobalNamespace::HandTapReactor::__cordl_internal_get_handTapEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapEvents;
}
constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::HandTapReactor_TapType>* const& GlobalNamespace::HandTapReactor::__cordl_internal_get_handTapEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapEvents;
}
constexpr void GlobalNamespace::HandTapReactor::__cordl_internal_set_handTapEvents(::GlobalNamespace::FlagEvents_1<::GlobalNamespace::HandTapReactor_TapType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTapEvents = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::HandTapReactor::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::HandTapReactor::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::HandTapReactor::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::TagEffects::IHandEffectsTrigger*& GlobalNamespace::HandTapReactor::__cordl_internal_get_leftHandTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTrigger;
}
constexpr ::TagEffects::IHandEffectsTrigger* const& GlobalNamespace::HandTapReactor::__cordl_internal_get_leftHandTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTrigger;
}
constexpr void GlobalNamespace::HandTapReactor::__cordl_internal_set_leftHandTrigger(::TagEffects::IHandEffectsTrigger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandTrigger = value;
}
constexpr ::TagEffects::IHandEffectsTrigger*& GlobalNamespace::HandTapReactor::__cordl_internal_get_rightHandTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTrigger;
}
constexpr ::TagEffects::IHandEffectsTrigger* const& GlobalNamespace::HandTapReactor::__cordl_internal_get_rightHandTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTrigger;
}
constexpr void GlobalNamespace::HandTapReactor::__cordl_internal_set_rightHandTrigger(::TagEffects::IHandEffectsTrigger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandTrigger = value;
}
inline void GlobalNamespace::HandTapReactor::LeftDown(::GlobalNamespace::HandEffectContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"LeftDown", {}, {::i2c::type_of<::GlobalNamespace::HandEffectContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void GlobalNamespace::HandTapReactor::LeftUp(::GlobalNamespace::HandEffectContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"LeftUp", {}, {::i2c::type_of<::GlobalNamespace::HandEffectContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void GlobalNamespace::HandTapReactor::LeftGesture(::GlobalNamespace::IHandEffectsTrigger_Mode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"LeftGesture", {}, {::i2c::type_of<::GlobalNamespace::IHandEffectsTrigger_Mode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void GlobalNamespace::HandTapReactor::RightDown(::GlobalNamespace::HandEffectContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"RightDown", {}, {::i2c::type_of<::GlobalNamespace::HandEffectContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void GlobalNamespace::HandTapReactor::RightUp(::GlobalNamespace::HandEffectContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"RightUp", {}, {::i2c::type_of<::GlobalNamespace::HandEffectContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void GlobalNamespace::HandTapReactor::RightGesture(::GlobalNamespace::IHandEffectsTrigger_Mode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"RightGesture", {}, {::i2c::type_of<::GlobalNamespace::IHandEffectsTrigger_Mode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void GlobalNamespace::HandTapReactor::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandTapReactor::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandTapReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandTapReactor* GlobalNamespace::HandTapReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandTapReactor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandTapReactor::HandTapReactor()   {
}

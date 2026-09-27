#pragma once
// IWYU pragma private; include "GorillaTag/Audio/LoudSpeakerTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Audio/zzzz__LoudSpeakerTrigger_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Audio/zzzz__GTRecorder_def.hpp"
#include "GorillaTag/Audio/zzzz__LoudSpeakerNetwork_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerTrigger.SetRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerTrigger::*)(::GorillaTag::Audio::GTRecorder*)>(&::GorillaTag::Audio::LoudSpeakerTrigger::SetRecorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d53e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerTrigger*>(),
                        {"SetRecorder", {}, {::i2c::type_of<::GorillaTag::Audio::GTRecorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerTrigger.OnPlayerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerTrigger::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Audio::LoudSpeakerTrigger::OnPlayerEnter)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d53e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerTrigger*>(),
                        {"OnPlayerEnter", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerTrigger.OnPlayerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerTrigger::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Audio::LoudSpeakerTrigger::OnPlayerExit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d53f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerTrigger*>(),
                        {"OnPlayerExit", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerTrigger::*)()>(&::GorillaTag::Audio::LoudSpeakerTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d54010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Audio::LoudSpeakerTrigger::__cordl_internal_get_PitchAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PitchAdjustment;
}
constexpr float_t const& GorillaTag::Audio::LoudSpeakerTrigger::__cordl_internal_get_PitchAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PitchAdjustment;
}
constexpr void GorillaTag::Audio::LoudSpeakerTrigger::__cordl_internal_set_PitchAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PitchAdjustment = value;
}
constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>& GorillaTag::Audio::LoudSpeakerTrigger::__cordl_internal_get__network()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork> const& GorillaTag::Audio::LoudSpeakerTrigger::__cordl_internal_get__network() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr void GorillaTag::Audio::LoudSpeakerTrigger::__cordl_internal_set__network(::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____network = value;
}
constexpr ::UnityW<::GorillaTag::Audio::GTRecorder>& GorillaTag::Audio::LoudSpeakerTrigger::__cordl_internal_get__recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr ::UnityW<::GorillaTag::Audio::GTRecorder> const& GorillaTag::Audio::LoudSpeakerTrigger::__cordl_internal_get__recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr void GorillaTag::Audio::LoudSpeakerTrigger::__cordl_internal_set__recorder(::UnityW<::GorillaTag::Audio::GTRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recorder = value;
}
inline void GorillaTag::Audio::LoudSpeakerTrigger::SetRecorder(::GorillaTag::Audio::GTRecorder*  recorder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerTrigger*>(),
                        {"SetRecorder", {}, {::i2c::type_of<::GorillaTag::Audio::GTRecorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recorder);
}
inline void GorillaTag::Audio::LoudSpeakerTrigger::OnPlayerEnter(::GlobalNamespace::VRRig*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerTrigger*>(),
                        {"OnPlayerEnter", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTag::Audio::LoudSpeakerTrigger::OnPlayerExit(::GlobalNamespace::VRRig*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerTrigger*>(),
                        {"OnPlayerExit", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTag::Audio::LoudSpeakerTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::LoudSpeakerTrigger* GorillaTag::Audio::LoudSpeakerTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::LoudSpeakerTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::LoudSpeakerTrigger::LoudSpeakerTrigger()   {
}

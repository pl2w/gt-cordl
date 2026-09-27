#pragma once
// IWYU pragma private; include "GorillaTag/Audio/LoudSpeakerActivator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Audio/zzzz__LoudSpeakerActivator_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Audio/zzzz__GTRecorder_def.hpp"
#include "GorillaTag/Audio/zzzz__LoudSpeakerNetwork_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerActivator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerActivator::*)()>(&::GorillaTag::Audio::LoudSpeakerActivator::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d525bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerActivator.IsParentedToLocalRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Audio::LoudSpeakerActivator::*)()>(&::GorillaTag::Audio::LoudSpeakerActivator::IsParentedToLocalRig)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5d52650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {"IsParentedToLocalRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerActivator.SetRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerActivator::*)(::GorillaTag::Audio::GTRecorder*)>(&::GorillaTag::Audio::LoudSpeakerActivator::SetRecorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d52810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {"SetRecorder", {}, {::i2c::type_of<::GorillaTag::Audio::GTRecorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerActivator.StartLocalBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerActivator::*)()>(&::GorillaTag::Audio::LoudSpeakerActivator::StartLocalBroadcast)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5d52818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {"StartLocalBroadcast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerActivator.StopLocalBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerActivator::*)()>(&::GorillaTag::Audio::LoudSpeakerActivator::StopLocalBroadcast)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5d52bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {"StopLocalBroadcast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerActivator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerActivator::*)()>(&::GorillaTag::Audio::LoudSpeakerActivator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d52f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get_PitchAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PitchAdjustment;
}
constexpr float_t const& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get_PitchAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PitchAdjustment;
}
constexpr void GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_set_PitchAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PitchAdjustment = value;
}
constexpr float_t& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get_VolumeAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeAdjustment;
}
constexpr float_t const& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get_VolumeAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeAdjustment;
}
constexpr void GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_set_VolumeAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VolumeAdjustment = value;
}
constexpr bool& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get_IsBroadcasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsBroadcasting;
}
constexpr bool const& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get_IsBroadcasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsBroadcasting;
}
constexpr void GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_set_IsBroadcasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsBroadcasting = value;
}
constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get__network()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork> const& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get__network() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr void GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_set__network(::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____network = value;
}
constexpr ::UnityW<::GorillaTag::Audio::GTRecorder>& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get__recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr ::UnityW<::GorillaTag::Audio::GTRecorder> const& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get__recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr void GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_set__recorder(::UnityW<::GorillaTag::Audio::GTRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recorder = value;
}
constexpr bool& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get__isLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocal;
}
constexpr bool const& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get__isLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocal;
}
constexpr void GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_set__isLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLocal = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get__nonlocalRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonlocalRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_get__nonlocalRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonlocalRig;
}
constexpr void GorillaTag::Audio::LoudSpeakerActivator::__cordl_internal_set__nonlocalRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonlocalRig = value;
}
inline void GorillaTag::Audio::LoudSpeakerActivator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Audio::LoudSpeakerActivator::IsParentedToLocalRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {"IsParentedToLocalRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Audio::LoudSpeakerActivator::SetRecorder(::GorillaTag::Audio::GTRecorder*  recorder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {"SetRecorder", {}, {::i2c::type_of<::GorillaTag::Audio::GTRecorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recorder);
}
inline void GorillaTag::Audio::LoudSpeakerActivator::StartLocalBroadcast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {"StartLocalBroadcast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::LoudSpeakerActivator::StopLocalBroadcast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {"StopLocalBroadcast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::LoudSpeakerActivator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerActivator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::LoudSpeakerActivator* GorillaTag::Audio::LoudSpeakerActivator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::LoudSpeakerActivator*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::LoudSpeakerActivator::LoudSpeakerActivator()   {
}

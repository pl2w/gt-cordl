#pragma once
// IWYU pragma private; include "GorillaTag/Audio/VoiceToLoudness.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Audio/zzzz__VoiceToLoudness_def.hpp"
#include "Photon/Voice/Unity/zzzz__PhotonVoiceCreatedParams_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::VoiceToLoudness.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::VoiceToLoudness::*)()>(&::GorillaTag::Audio::VoiceToLoudness::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d4fb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::VoiceToLoudness*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::VoiceToLoudness.PhotonVoiceCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::VoiceToLoudness::*)(::Photon::Voice::Unity::PhotonVoiceCreatedParams*)>(&::GorillaTag::Audio::VoiceToLoudness::PhotonVoiceCreated)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d4fb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::VoiceToLoudness*>(),
                        {"PhotonVoiceCreated", {}, {::i2c::type_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::VoiceToLoudness.CreateProcessVoiceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::VoiceToLoudness::*)(::Photon::Voice::LocalVoice*)>(&::GorillaTag::Audio::VoiceToLoudness::CreateProcessVoiceData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5d4fb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::VoiceToLoudness*>(),
                        {"CreateProcessVoiceData", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::VoiceToLoudness.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::VoiceToLoudness::*)()>(&::GorillaTag::Audio::VoiceToLoudness::Update)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d4fcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::VoiceToLoudness*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::VoiceToLoudness._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::VoiceToLoudness::*)()>(&::GorillaTag::Audio::VoiceToLoudness::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4fd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::VoiceToLoudness*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Audio::VoiceToLoudness::__cordl_internal_get_Loudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Loudness;
}
constexpr float_t const& GorillaTag::Audio::VoiceToLoudness::__cordl_internal_get_Loudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Loudness;
}
constexpr void GorillaTag::Audio::VoiceToLoudness::__cordl_internal_set_Loudness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Loudness = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& GorillaTag::Audio::VoiceToLoudness::__cordl_internal_get__recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& GorillaTag::Audio::VoiceToLoudness::__cordl_internal_get__recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr void GorillaTag::Audio::VoiceToLoudness::__cordl_internal_set__recorder(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recorder = value;
}
constexpr bool& GorillaTag::Audio::VoiceToLoudness::__cordl_internal_get__photonVoiceCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photonVoiceCreated;
}
constexpr bool const& GorillaTag::Audio::VoiceToLoudness::__cordl_internal_get__photonVoiceCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photonVoiceCreated;
}
constexpr void GorillaTag::Audio::VoiceToLoudness::__cordl_internal_set__photonVoiceCreated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____photonVoiceCreated = value;
}
constexpr float_t& GorillaTag::Audio::VoiceToLoudness::__cordl_internal_get__checkVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkVoice;
}
constexpr float_t const& GorillaTag::Audio::VoiceToLoudness::__cordl_internal_get__checkVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkVoice;
}
constexpr void GorillaTag::Audio::VoiceToLoudness::__cordl_internal_set__checkVoice(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkVoice = value;
}
inline void GorillaTag::Audio::VoiceToLoudness::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::VoiceToLoudness*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::VoiceToLoudness::PhotonVoiceCreated(::Photon::Voice::Unity::PhotonVoiceCreatedParams*  photonVoiceCreatedParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::VoiceToLoudness*>(),
                        {"PhotonVoiceCreated", {}, {::i2c::type_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, photonVoiceCreatedParams);
}
inline void GorillaTag::Audio::VoiceToLoudness::CreateProcessVoiceData(::Photon::Voice::LocalVoice*  voice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::VoiceToLoudness*>(),
                        {"CreateProcessVoiceData", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voice);
}
inline void GorillaTag::Audio::VoiceToLoudness::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::VoiceToLoudness*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::VoiceToLoudness::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::VoiceToLoudness*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::VoiceToLoudness* GorillaTag::Audio::VoiceToLoudness::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::VoiceToLoudness*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::VoiceToLoudness::VoiceToLoudness()   {
}

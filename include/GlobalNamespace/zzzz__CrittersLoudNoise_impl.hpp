#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersLoudNoise.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersLoudNoise_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)()>(&::GlobalNamespace::CrittersLoudNoise::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x55ff3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.SpawnData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)(float_t, float_t, float_t, bool)>(&::GlobalNamespace::CrittersLoudNoise::SpawnData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x55ff49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {"SpawnData", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.ProcessLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersLoudNoise::*)()>(&::GlobalNamespace::CrittersLoudNoise::ProcessLocal)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x55ff4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.ProcessRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)()>(&::GlobalNamespace::CrittersLoudNoise::ProcessRemote)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55ff67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.SetTimeEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)()>(&::GlobalNamespace::CrittersLoudNoise::SetTimeEnabled)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x55ff414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {"SetTimeEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.CalculateFear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)(::GlobalNamespace::CrittersPawn*, float_t)>(&::GlobalNamespace::CrittersLoudNoise::CalculateFear)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55ff694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.CalculateAttraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)(::GlobalNamespace::CrittersPawn*, float_t)>(&::GlobalNamespace::CrittersLoudNoise::CalculateAttraction)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55ff818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.UpdateSpecificActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersLoudNoise::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersLoudNoise::UpdateSpecificActor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x55ff99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.SendDataByCrittersActorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersLoudNoise::SendDataByCrittersActorType)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55ffb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.AddActorDataToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersLoudNoise::*)(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>)>(&::GlobalNamespace::CrittersLoudNoise::AddActorDataToList)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x55ffbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.TotalActorDataLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersLoudNoise::*)()>(&::GlobalNamespace::CrittersLoudNoise::TotalActorDataLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55ffe48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.UpdateFromRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersLoudNoise::*)(::ArrayW<::System::Object*>, int32_t)>(&::GlobalNamespace::CrittersLoudNoise::UpdateFromRPC)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x55ffe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.PlayHandTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)(bool)>(&::GlobalNamespace::CrittersLoudNoise::PlayHandTapLocal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x560001c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {"PlayHandTapLocal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.PlayHandTapRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)(double_t, bool)>(&::GlobalNamespace::CrittersLoudNoise::PlayHandTapRemote)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56000b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {"PlayHandTapRemote", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise.PlayVoiceSpeechLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)(double_t, float_t, float_t)>(&::GlobalNamespace::CrittersLoudNoise::PlayVoiceSpeechLocal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56000c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {"PlayVoiceSpeechLocal", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoise._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoise::*)()>(&::GlobalNamespace::CrittersLoudNoise::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56000dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_soundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundVolume;
}
constexpr float_t const& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_soundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundVolume;
}
constexpr void GlobalNamespace::CrittersLoudNoise::__cordl_internal_set_soundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundVolume = value;
}
constexpr float_t& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_volumeFearAttractionMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeFearAttractionMultiplier;
}
constexpr float_t const& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_volumeFearAttractionMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeFearAttractionMultiplier;
}
constexpr void GlobalNamespace::CrittersLoudNoise::__cordl_internal_set_volumeFearAttractionMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumeFearAttractionMultiplier = value;
}
constexpr float_t& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_soundDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundDuration;
}
constexpr float_t const& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_soundDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundDuration;
}
constexpr void GlobalNamespace::CrittersLoudNoise::__cordl_internal_set_soundDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundDuration = value;
}
constexpr double_t& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_timeSoundEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSoundEnabled;
}
constexpr double_t const& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_timeSoundEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSoundEnabled;
}
constexpr void GlobalNamespace::CrittersLoudNoise::__cordl_internal_set_timeSoundEnabled(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSoundEnabled = value;
}
constexpr bool& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_soundEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundEnabled;
}
constexpr bool const& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_soundEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundEnabled;
}
constexpr void GlobalNamespace::CrittersLoudNoise::__cordl_internal_set_soundEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundEnabled = value;
}
constexpr bool& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_wasSoundEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSoundEnabled;
}
constexpr bool const& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_wasSoundEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSoundEnabled;
}
constexpr void GlobalNamespace::CrittersLoudNoise::__cordl_internal_set_wasSoundEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasSoundEnabled = value;
}
constexpr bool& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_disableWhenSoundDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenSoundDisabled;
}
constexpr bool const& GlobalNamespace::CrittersLoudNoise::__cordl_internal_get_disableWhenSoundDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenSoundDisabled;
}
constexpr void GlobalNamespace::CrittersLoudNoise::__cordl_internal_set_disableWhenSoundDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableWhenSoundDisabled = value;
}
inline void GlobalNamespace::CrittersLoudNoise::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersLoudNoise::SpawnData(float_t  _soundVolume, float_t  _soundDuration, float_t  _soundMultiplier, bool  _soundEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {"SpawnData", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _soundVolume, _soundDuration, _soundMultiplier, _soundEnabled);
}
inline bool GlobalNamespace::CrittersLoudNoise::ProcessLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersLoudNoise::ProcessRemote()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersLoudNoise::SetTimeEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {"SetTimeEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersLoudNoise::CalculateFear(::GlobalNamespace::CrittersPawn*  critter, float_t  multiplier)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter, multiplier);
}
inline void GlobalNamespace::CrittersLoudNoise::CalculateAttraction(::GlobalNamespace::CrittersPawn*  critter, float_t  multiplier)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter, multiplier);
}
inline bool GlobalNamespace::CrittersLoudNoise::UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline void GlobalNamespace::CrittersLoudNoise::SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline int32_t GlobalNamespace::CrittersLoudNoise::AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, objList);
}
inline int32_t GlobalNamespace::CrittersLoudNoise::TotalActorDataLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CrittersLoudNoise::UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, startingIndex);
}
inline void GlobalNamespace::CrittersLoudNoise::PlayHandTapLocal(bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {"PlayHandTapLocal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft);
}
inline void GlobalNamespace::CrittersLoudNoise::PlayHandTapRemote(double_t  serverTime, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {"PlayHandTapRemote", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverTime, isLeft);
}
inline void GlobalNamespace::CrittersLoudNoise::PlayVoiceSpeechLocal(double_t  serverTime, float_t  duration, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {"PlayVoiceSpeechLocal", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverTime, duration, volume);
}
inline void GlobalNamespace::CrittersLoudNoise::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoise*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersLoudNoise* GlobalNamespace::CrittersLoudNoise::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersLoudNoise*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersLoudNoise::CrittersLoudNoise()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpTeleporterSerializer.hpp"
#include "GlobalNamespace/zzzz__GorillaSerializer_impl.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpTeleporterSerializer_def.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpTeleporter_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporterSerializer.NotifyPlayerTeleporting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporterSerializer::*)(int16_t, ::UnityEngine::AudioSource*)>(&::GlobalNamespace::VirtualStumpTeleporterSerializer::NotifyPlayerTeleporting)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a0ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporterSerializer*>(),
                        {"NotifyPlayerTeleporting", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporterSerializer.NotifyPlayerReturning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporterSerializer::*)(int16_t)>(&::GlobalNamespace::VirtualStumpTeleporterSerializer::NotifyPlayerReturning)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5a1023c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporterSerializer*>(),
                        {"NotifyPlayerReturning", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporterSerializer.ActivateTeleportVFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporterSerializer::*)(bool, int16_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VirtualStumpTeleporterSerializer::ActivateTeleportVFX)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5a1043c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporterSerializer*>(),
                        {"ActivateTeleportVFX", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporterSerializer.GetTeleporterIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::GlobalNamespace::VirtualStumpTeleporterSerializer::*)(::GlobalNamespace::VirtualStumpTeleporter*)>(&::GlobalNamespace::VirtualStumpTeleporterSerializer::GetTeleporterIndex)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a0fb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporterSerializer*>(),
                        {"GetTeleporterIndex", {}, {::i2c::type_of<::GlobalNamespace::VirtualStumpTeleporter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporterSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporterSerializer::*)()>(&::GlobalNamespace::VirtualStumpTeleporterSerializer::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5a106bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporterSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>>*& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_teleporters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleporters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>>* const& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_teleporters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleporters;
}
constexpr void GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_set_teleporters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleporters = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_teleporterVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleporterVFX;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* const& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_teleporterVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleporterVFX;
}
constexpr void GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_set_teleporterVFX(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleporterVFX = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_returnVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnVFX;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* const& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_returnVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnVFX;
}
constexpr void GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_set_returnVFX(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnVFX = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_teleportAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportAudioSource;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* const& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_teleportAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportAudioSource;
}
constexpr void GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_set_teleportAudioSource(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportAudioSource = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_teleportingPlayerSoundClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportingPlayerSoundClips;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_teleportingPlayerSoundClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportingPlayerSoundClips;
}
constexpr void GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_set_teleportingPlayerSoundClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportingPlayerSoundClips = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_observerSoundClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observerSoundClips;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_get_observerSoundClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observerSoundClips;
}
constexpr void GlobalNamespace::VirtualStumpTeleporterSerializer::__cordl_internal_set_observerSoundClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observerSoundClips = value;
}
inline void GlobalNamespace::VirtualStumpTeleporterSerializer::NotifyPlayerTeleporting(int16_t  teleporterIdx, ::UnityEngine::AudioSource*  localPlayerTeleporterAudioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporterSerializer*>(),
                        {"NotifyPlayerTeleporting", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teleporterIdx, localPlayerTeleporterAudioSource);
}
inline void GlobalNamespace::VirtualStumpTeleporterSerializer::NotifyPlayerReturning(int16_t  teleporterIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporterSerializer*>(),
                        {"NotifyPlayerReturning", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teleporterIdx);
}
inline void GlobalNamespace::VirtualStumpTeleporterSerializer::ActivateTeleportVFX(bool  returning, int16_t  teleporterIdx, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporterSerializer*>(),
                        {"ActivateTeleportVFX", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returning, teleporterIdx, info);
}
inline int16_t GlobalNamespace::VirtualStumpTeleporterSerializer::GetTeleporterIndex(::GlobalNamespace::VirtualStumpTeleporter*  teleporter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporterSerializer*>(),
                        {"GetTeleporterIndex", {}, {::i2c::type_of<::GlobalNamespace::VirtualStumpTeleporter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, teleporter);
}
inline void GlobalNamespace::VirtualStumpTeleporterSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporterSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VirtualStumpTeleporterSerializer* GlobalNamespace::VirtualStumpTeleporterSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VirtualStumpTeleporterSerializer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VirtualStumpTeleporterSerializer::VirtualStumpTeleporterSerializer()   {
}

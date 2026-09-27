#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpTeleporterSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaSerializer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualStumpTeleporterSerializer)
namespace GlobalNamespace {
class VirtualStumpTeleporter;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class VirtualStumpTeleporterSerializer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VirtualStumpTeleporterSerializer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualStumpTeleporterSerializer*, "", "VirtualStumpTeleporterSerializer");
// Dependencies GorillaSerializer
namespace GlobalNamespace {
// Is value type: false
// CS Name: VirtualStumpTeleporterSerializer
class CORDL_TYPE VirtualStumpTeleporterSerializer : public ::GlobalNamespace::GorillaSerializer {
public:
// Declarations
/// @brief Field observerSoundClips, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_observerSoundClips, put=__cordl_internal_set_observerSoundClips)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  observerSoundClips;

/// @brief Field returnVFX, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnVFX, put=__cordl_internal_set_returnVFX)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  returnVFX;

/// @brief Field teleportAudioSource, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportAudioSource, put=__cordl_internal_set_teleportAudioSource)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  teleportAudioSource;

/// @brief Field teleporterVFX, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleporterVFX, put=__cordl_internal_set_teleporterVFX)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  teleporterVFX;

/// @brief Field teleporters, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleporters, put=__cordl_internal_set_teleporters)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>>*  teleporters;

/// @brief Field teleportingPlayerSoundClips, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportingPlayerSoundClips, put=__cordl_internal_set_teleportingPlayerSoundClips)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  teleportingPlayerSoundClips;

/// [PunRPC]
/// @brief Method ActivateTeleportVFX, addr 0x5a1043c, size 0x280, virtual false, abstract: false, final false
inline void ActivateTeleportVFX(bool  returning, int16_t  teleporterIdx, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method GetTeleporterIndex, addr 0x5a0fb8c, size 0xdc, virtual false, abstract: false, final false
inline int16_t GetTeleporterIndex(::GlobalNamespace::VirtualStumpTeleporter*  teleporter) ;

static inline ::GlobalNamespace::VirtualStumpTeleporterSerializer* New_ctor() ;

/// @brief Method NotifyPlayerReturning, addr 0x5a1023c, size 0x200, virtual false, abstract: false, final false
inline void NotifyPlayerReturning(int16_t  teleporterIdx) ;

/// @brief Method NotifyPlayerTeleporting, addr 0x5a0ff60, size 0x18c, virtual false, abstract: false, final false
inline void NotifyPlayerTeleporting(int16_t  teleporterIdx, ::UnityEngine::AudioSource*  localPlayerTeleporterAudioSource) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_observerSoundClips() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_observerSoundClips() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* const& __cordl_internal_get_returnVFX() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*& __cordl_internal_get_returnVFX() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* const& __cordl_internal_get_teleportAudioSource() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*& __cordl_internal_get_teleportAudioSource() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* const& __cordl_internal_get_teleporterVFX() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*& __cordl_internal_get_teleporterVFX() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>>* const& __cordl_internal_get_teleporters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>>*& __cordl_internal_get_teleporters() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_teleportingPlayerSoundClips() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_teleportingPlayerSoundClips() ;

constexpr void __cordl_internal_set_observerSoundClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_returnVFX(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  value) ;

constexpr void __cordl_internal_set_teleportAudioSource(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  value) ;

constexpr void __cordl_internal_set_teleporterVFX(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  value) ;

constexpr void __cordl_internal_set_teleporters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>>*  value) ;

constexpr void __cordl_internal_set_teleportingPlayerSoundClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

/// @brief Method .ctor, addr 0x5a106bc, size 0x1cc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpTeleporterSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpTeleporterSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpTeleporterSerializer(VirtualStumpTeleporterSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpTeleporterSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpTeleporterSerializer(VirtualStumpTeleporterSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2775};

/// [SerializeField]
/// @brief Field teleporters, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VirtualStumpTeleporter>>*  ___teleporters;

/// [SerializeField]
/// @brief Field teleporterVFX, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  ___teleporterVFX;

/// [SerializeField]
/// @brief Field returnVFX, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  ___returnVFX;

/// [SerializeField]
/// @brief Field teleportAudioSource, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  ___teleportAudioSource;

/// [SerializeField]
/// @brief Field teleportingPlayerSoundClips, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___teleportingPlayerSoundClips;

/// [SerializeField]
/// @brief Field observerSoundClips, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___observerSoundClips;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporterSerializer, ___teleporters) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporterSerializer, ___teleporterVFX) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporterSerializer, ___returnVFX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporterSerializer, ___teleportAudioSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporterSerializer, ___teleportingPlayerSoundClips) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporterSerializer, ___observerSoundClips) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VirtualStumpTeleporterSerializer) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace

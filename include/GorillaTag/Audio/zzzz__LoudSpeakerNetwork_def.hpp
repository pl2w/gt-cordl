#pragma once
// IWYU pragma private; include "GorillaTag/Audio/LoudSpeakerNetwork.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoudSpeakerNetwork)
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Audio {
class GTRecorder;
}
namespace Photon::Voice::Unity {
class Speaker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GorillaTag::Audio {
class LoudSpeakerNetwork;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::LoudSpeakerNetwork*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::LoudSpeakerNetwork*, "GorillaTag.Audio", "LoudSpeakerNetwork");
// Dependencies UnityEngine.AudioSource, UnityEngine.MonoBehaviour
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.LoudSpeakerNetwork
class CORDL_TYPE LoudSpeakerNetwork : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ReparentLocalSpeaker, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_ReparentLocalSpeaker, put=__cordl_internal_set_ReparentLocalSpeaker)) bool  ReparentLocalSpeaker;

 __declspec(property(get=get_SpeakerSources)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  SpeakerSources;

/// @brief Field _currentSpeakerActor, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSpeakerActor, put=__cordl_internal_set__currentSpeakerActor)) int32_t  _currentSpeakerActor;

/// @brief Field _currentSpeakers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSpeakers, put=__cordl_internal_set__currentSpeakers)) ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  _currentSpeakers;

/// @brief Field _localRecorder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__localRecorder, put=__cordl_internal_set__localRecorder)) ::UnityW<::GorillaTag::Audio::GTRecorder>  _localRecorder;

/// @brief Field _rigContainer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigContainer, put=__cordl_internal_set__rigContainer)) ::UnityW<::GlobalNamespace::RigContainer>  _rigContainer;

/// @brief Field _speakerSources, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__speakerSources, put=__cordl_internal_set__speakerSources)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  _speakerSources;

/// @brief Method AddSpeaker, addr 0x5d532b8, size 0xe4, virtual false, abstract: false, final false
inline void AddSpeaker(::Photon::Voice::Unity::Speaker*  speaker) ;

/// @brief Method Awake, addr 0x5d52f64, size 0xc8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BroadcastLoudSpeakerNetwork, addr 0x5d533f4, size 0x52c, virtual false, abstract: false, final false
inline void BroadcastLoudSpeakerNetwork(int32_t  actorNumber, bool  isLocal) ;

/// @brief Method GetParentRigContainer, addr 0x5d53150, size 0xe8, virtual false, abstract: false, final false
inline bool GetParentRigContainer(::by_ref<::GlobalNamespace::RigContainer*>  rigContainer) ;

static inline ::GorillaTag::Audio::LoudSpeakerNetwork* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d53278, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d53238, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveSpeaker, addr 0x5d5339c, size 0x58, virtual false, abstract: false, final false
inline void RemoveSpeaker(::Photon::Voice::Unity::Speaker*  speaker) ;

/// @brief Method Start, addr 0x5d5302c, size 0x124, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartBroadcastSpeakerOutput, addr 0x5d52ae8, size 0xcc, virtual false, abstract: false, final false
inline void StartBroadcastSpeakerOutput(::GlobalNamespace::VRRig*  player) ;

/// @brief Method StopBroadcastLoudSpeakerNetwork, addr 0x5d53920, size 0x52c, virtual false, abstract: false, final false
inline void StopBroadcastLoudSpeakerNetwork(int32_t  actorNumber, bool  isLocal) ;

/// @brief Method StopBroadcastSpeakerOutput, addr 0x5d52e7c, size 0xcc, virtual false, abstract: false, final false
inline void StopBroadcastSpeakerOutput(::GlobalNamespace::VRRig*  player) ;

constexpr bool const& __cordl_internal_get_ReparentLocalSpeaker() const;

constexpr bool& __cordl_internal_get_ReparentLocalSpeaker() ;

constexpr int32_t const& __cordl_internal_get__currentSpeakerActor() const;

constexpr int32_t& __cordl_internal_get__currentSpeakerActor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>* const& __cordl_internal_get__currentSpeakers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*& __cordl_internal_get__currentSpeakers() ;

constexpr ::UnityW<::GorillaTag::Audio::GTRecorder> const& __cordl_internal_get__localRecorder() const;

constexpr ::UnityW<::GorillaTag::Audio::GTRecorder>& __cordl_internal_get__localRecorder() ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get__rigContainer() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get__rigContainer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get__speakerSources() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get__speakerSources() ;

constexpr void __cordl_internal_set_ReparentLocalSpeaker(bool  value) ;

constexpr void __cordl_internal_set__currentSpeakerActor(int32_t  value) ;

constexpr void __cordl_internal_set__currentSpeakers(::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value) ;

constexpr void __cordl_internal_set__localRecorder(::UnityW<::GorillaTag::Audio::GTRecorder>  value) ;

constexpr void __cordl_internal_set__rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value) ;

constexpr void __cordl_internal_set__speakerSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

/// @brief Method .ctor, addr 0x5d53e4c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SpeakerSources, addr 0x5d52f5c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::AudioSource>> get_SpeakerSources() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoudSpeakerNetwork() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoudSpeakerNetwork", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoudSpeakerNetwork(LoudSpeakerNetwork && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoudSpeakerNetwork", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoudSpeakerNetwork(LoudSpeakerNetwork const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4794};

/// [SerializeField]
/// @brief Field _speakerSources, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ____speakerSources;

/// [SerializeField]
/// @brief Field _currentSpeakers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  ____currentSpeakers;

/// [SerializeField]
/// @brief Field _currentSpeakerActor, offset: 0x30, size: 0x4, def value: None
 int32_t  ____currentSpeakerActor;

/// @brief Field ReparentLocalSpeaker, offset: 0x34, size: 0x1, def value: None
 bool  ___ReparentLocalSpeaker;

/// @brief Field _rigContainer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ____rigContainer;

/// @brief Field _localRecorder, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::GTRecorder>  ____localRecorder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerNetwork, ____speakerSources) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerNetwork, ____currentSpeakers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerNetwork, ____currentSpeakerActor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerNetwork, ___ReparentLocalSpeaker) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerNetwork, ____rigContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerNetwork, ____localRecorder) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::LoudSpeakerNetwork) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Audio

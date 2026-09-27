#pragma once
// IWYU pragma private; include "GorillaTag/Audio/VoiceToLoudness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceToLoudness)
namespace Photon::Voice::Unity {
class PhotonVoiceCreatedParams;
}
namespace Photon::Voice::Unity {
class Recorder;
}
namespace Photon::Voice {
class LocalVoice;
}
// Forward declare root types
namespace GorillaTag::Audio {
class VoiceToLoudness;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::VoiceToLoudness*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::VoiceToLoudness*, "GorillaTag.Audio", "VoiceToLoudness");
// [RequireComponent(typeof(Photon.Voice.Unity.Recorder))]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.VoiceToLoudness
class CORDL_TYPE VoiceToLoudness : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Loudness, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Loudness, put=__cordl_internal_set_Loudness)) float_t  Loudness;

/// @brief Field _checkVoice, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__checkVoice, put=__cordl_internal_set__checkVoice)) float_t  _checkVoice;

/// @brief Field _photonVoiceCreated, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__photonVoiceCreated, put=__cordl_internal_set__photonVoiceCreated)) bool  _photonVoiceCreated;

/// @brief Field _recorder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__recorder, put=__cordl_internal_set__recorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  _recorder;

/// @brief Method Awake, addr 0x5d4fb08, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateProcessVoiceData, addr 0x5d4fb74, size 0x158, virtual false, abstract: false, final false
inline void CreateProcessVoiceData(::Photon::Voice::LocalVoice*  voice) ;

static inline ::GorillaTag::Audio::VoiceToLoudness* New_ctor() ;

/// @brief Method PhotonVoiceCreated, addr 0x5d4fb60, size 0x14, virtual false, abstract: false, final false
inline void PhotonVoiceCreated(::Photon::Voice::Unity::PhotonVoiceCreatedParams*  photonVoiceCreatedParams) ;

/// @brief Method Update, addr 0x5d4fcfc, size 0x94, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_Loudness() const;

constexpr float_t& __cordl_internal_get_Loudness() ;

constexpr float_t const& __cordl_internal_get__checkVoice() const;

constexpr float_t& __cordl_internal_get__checkVoice() ;

constexpr bool const& __cordl_internal_get__photonVoiceCreated() const;

constexpr bool& __cordl_internal_get__photonVoiceCreated() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get__recorder() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get__recorder() ;

constexpr void __cordl_internal_set_Loudness(float_t  value) ;

constexpr void __cordl_internal_set__checkVoice(float_t  value) ;

constexpr void __cordl_internal_set__photonVoiceCreated(bool  value) ;

constexpr void __cordl_internal_set__recorder(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

/// @brief Method .ctor, addr 0x5d4fd90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceToLoudness() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceToLoudness", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceToLoudness(VoiceToLoudness && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceToLoudness", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceToLoudness(VoiceToLoudness const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4785};

/// @brief Field Loudness, offset: 0x20, size: 0x4, def value: None
 float_t  ___Loudness;

/// @brief Field _recorder, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ____recorder;

/// @brief Field _photonVoiceCreated, offset: 0x30, size: 0x1, def value: None
 bool  ____photonVoiceCreated;

/// @brief Field _checkVoice, offset: 0x34, size: 0x4, def value: None
 float_t  ____checkVoice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::VoiceToLoudness, ___Loudness) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::VoiceToLoudness, ____recorder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::VoiceToLoudness, ____photonVoiceCreated) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::VoiceToLoudness, ____checkVoice) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::VoiceToLoudness) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag::Audio

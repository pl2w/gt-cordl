#pragma once
// IWYU pragma private; include "GorillaTag/Audio/LoudSpeakerTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoudSpeakerTrigger)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Audio {
class GTRecorder;
}
namespace GorillaTag::Audio {
class LoudSpeakerNetwork;
}
// Forward declare root types
namespace GorillaTag::Audio {
class LoudSpeakerTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::LoudSpeakerTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::LoudSpeakerTrigger*, "GorillaTag.Audio", "LoudSpeakerTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.LoudSpeakerTrigger
class CORDL_TYPE LoudSpeakerTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PitchAdjustment, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PitchAdjustment, put=__cordl_internal_set_PitchAdjustment)) float_t  PitchAdjustment;

/// @brief Field _network, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__network, put=__cordl_internal_set__network)) ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>  _network;

/// @brief Field _recorder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__recorder, put=__cordl_internal_set__recorder)) ::UnityW<::GorillaTag::Audio::GTRecorder>  _recorder;

static inline ::GorillaTag::Audio::LoudSpeakerTrigger* New_ctor() ;

/// @brief Method OnPlayerEnter, addr 0x5d53e6c, size 0xd4, virtual false, abstract: false, final false
inline void OnPlayerEnter(::GlobalNamespace::VRRig*  player) ;

/// @brief Method OnPlayerExit, addr 0x5d53f40, size 0xd0, virtual false, abstract: false, final false
inline void OnPlayerExit(::GlobalNamespace::VRRig*  player) ;

/// @brief Method SetRecorder, addr 0x5d53e64, size 0x8, virtual false, abstract: false, final false
inline void SetRecorder(::GorillaTag::Audio::GTRecorder*  recorder) ;

constexpr float_t const& __cordl_internal_get_PitchAdjustment() const;

constexpr float_t& __cordl_internal_get_PitchAdjustment() ;

constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork> const& __cordl_internal_get__network() const;

constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>& __cordl_internal_get__network() ;

constexpr ::UnityW<::GorillaTag::Audio::GTRecorder> const& __cordl_internal_get__recorder() const;

constexpr ::UnityW<::GorillaTag::Audio::GTRecorder>& __cordl_internal_get__recorder() ;

constexpr void __cordl_internal_set_PitchAdjustment(float_t  value) ;

constexpr void __cordl_internal_set__network(::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>  value) ;

constexpr void __cordl_internal_set__recorder(::UnityW<::GorillaTag::Audio::GTRecorder>  value) ;

/// @brief Method .ctor, addr 0x5d54010, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoudSpeakerTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoudSpeakerTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoudSpeakerTrigger(LoudSpeakerTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoudSpeakerTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoudSpeakerTrigger(LoudSpeakerTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4795};

/// @brief Field PitchAdjustment, offset: 0x20, size: 0x4, def value: None
 float_t  ___PitchAdjustment;

/// [SerializeField]
/// @brief Field _network, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>  ____network;

/// [SerializeField]
/// @brief Field _recorder, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::GTRecorder>  ____recorder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerTrigger, ___PitchAdjustment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerTrigger, ____network) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerTrigger, ____recorder) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::LoudSpeakerTrigger) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag::Audio

#pragma once
// IWYU pragma private; include "GorillaTag/Audio/LoudSpeakerActivator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoudSpeakerActivator)
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
class LoudSpeakerActivator;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::LoudSpeakerActivator*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::LoudSpeakerActivator*, "GorillaTag.Audio", "LoudSpeakerActivator");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.LoudSpeakerActivator
class CORDL_TYPE LoudSpeakerActivator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field IsBroadcasting, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsBroadcasting, put=__cordl_internal_set_IsBroadcasting)) bool  IsBroadcasting;

/// @brief Field PitchAdjustment, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PitchAdjustment, put=__cordl_internal_set_PitchAdjustment)) float_t  PitchAdjustment;

/// @brief Field VolumeAdjustment, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_VolumeAdjustment, put=__cordl_internal_set_VolumeAdjustment)) float_t  VolumeAdjustment;

/// @brief Field _isLocal, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLocal, put=__cordl_internal_set__isLocal)) bool  _isLocal;

/// @brief Field _network, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__network, put=__cordl_internal_set__network)) ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>  _network;

/// @brief Field _nonlocalRig, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__nonlocalRig, put=__cordl_internal_set__nonlocalRig)) ::UnityW<::GlobalNamespace::VRRig>  _nonlocalRig;

/// @brief Field _recorder, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__recorder, put=__cordl_internal_set__recorder)) ::UnityW<::GorillaTag::Audio::GTRecorder>  _recorder;

/// @brief Method Awake, addr 0x5d525bc, size 0x94, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsParentedToLocalRig, addr 0x5d52650, size 0x1c0, virtual false, abstract: false, final false
inline bool IsParentedToLocalRig() ;

static inline ::GorillaTag::Audio::LoudSpeakerActivator* New_ctor() ;

/// @brief Method SetRecorder, addr 0x5d52810, size 0x8, virtual false, abstract: false, final false
inline void SetRecorder(::GorillaTag::Audio::GTRecorder*  recorder) ;

/// @brief Method StartLocalBroadcast, addr 0x5d52818, size 0x2d0, virtual false, abstract: false, final false
inline void StartLocalBroadcast() ;

/// @brief Method StopLocalBroadcast, addr 0x5d52bb4, size 0x2c8, virtual false, abstract: false, final false
inline void StopLocalBroadcast() ;

constexpr bool const& __cordl_internal_get_IsBroadcasting() const;

constexpr bool& __cordl_internal_get_IsBroadcasting() ;

constexpr float_t const& __cordl_internal_get_PitchAdjustment() const;

constexpr float_t& __cordl_internal_get_PitchAdjustment() ;

constexpr float_t const& __cordl_internal_get_VolumeAdjustment() const;

constexpr float_t& __cordl_internal_get_VolumeAdjustment() ;

constexpr bool const& __cordl_internal_get__isLocal() const;

constexpr bool& __cordl_internal_get__isLocal() ;

constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork> const& __cordl_internal_get__network() const;

constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>& __cordl_internal_get__network() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__nonlocalRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__nonlocalRig() ;

constexpr ::UnityW<::GorillaTag::Audio::GTRecorder> const& __cordl_internal_get__recorder() const;

constexpr ::UnityW<::GorillaTag::Audio::GTRecorder>& __cordl_internal_get__recorder() ;

constexpr void __cordl_internal_set_IsBroadcasting(bool  value) ;

constexpr void __cordl_internal_set_PitchAdjustment(float_t  value) ;

constexpr void __cordl_internal_set_VolumeAdjustment(float_t  value) ;

constexpr void __cordl_internal_set__isLocal(bool  value) ;

constexpr void __cordl_internal_set__network(::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>  value) ;

constexpr void __cordl_internal_set__nonlocalRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__recorder(::UnityW<::GorillaTag::Audio::GTRecorder>  value) ;

/// @brief Method .ctor, addr 0x5d52f48, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoudSpeakerActivator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoudSpeakerActivator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoudSpeakerActivator(LoudSpeakerActivator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoudSpeakerActivator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoudSpeakerActivator(LoudSpeakerActivator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4793};

/// @brief Field PitchAdjustment, offset: 0x20, size: 0x4, def value: None
 float_t  ___PitchAdjustment;

/// @brief Field VolumeAdjustment, offset: 0x24, size: 0x4, def value: None
 float_t  ___VolumeAdjustment;

/// @brief Field IsBroadcasting, offset: 0x28, size: 0x1, def value: None
 bool  ___IsBroadcasting;

/// [SerializeField]
/// @brief Field _network, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>  ____network;

/// [SerializeField]
/// @brief Field _recorder, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::GTRecorder>  ____recorder;

/// @brief Field _isLocal, offset: 0x40, size: 0x1, def value: None
 bool  ____isLocal;

/// @brief Field _nonlocalRig, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____nonlocalRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerActivator, ___PitchAdjustment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerActivator, ___VolumeAdjustment) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerActivator, ___IsBroadcasting) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerActivator, ____network) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerActivator, ____recorder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerActivator, ____isLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::LoudSpeakerActivator, ____nonlocalRig) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::LoudSpeakerActivator) == 0x50, "Size mismatch!");

} // namespace end def GorillaTag::Audio

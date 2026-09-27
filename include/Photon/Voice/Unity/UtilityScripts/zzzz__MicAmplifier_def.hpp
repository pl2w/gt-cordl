#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/MicAmplifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MicAmplifier)
namespace Photon::Voice::Unity::UtilityScripts {
class MicAmplifierFloat;
}
namespace Photon::Voice::Unity::UtilityScripts {
class MicAmplifierShort;
}
namespace Photon::Voice::Unity {
class PhotonVoiceCreatedParams;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class MicAmplifier;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::MicAmplifier*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::MicAmplifier*, "Photon.Voice.Unity.UtilityScripts", "MicAmplifier");
// [RequireComponent(typeof(Photon.Voice.Unity.Recorder))]
// Dependencies Photon.Voice.Unity.VoiceComponent
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.MicAmplifier
class CORDL_TYPE MicAmplifier : public ::Photon::Voice::Unity::VoiceComponent {
public:
// Declarations
 __declspec(property(get=get_AmplificationFactor, put=set_AmplificationFactor)) float_t  AmplificationFactor;

 __declspec(property(get=get_BoostValue, put=set_BoostValue)) float_t  BoostValue;

/// @brief Field amplificationFactor, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_amplificationFactor, put=__cordl_internal_set_amplificationFactor)) float_t  amplificationFactor;

/// @brief Field boostValue, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_boostValue, put=__cordl_internal_set_boostValue)) float_t  boostValue;

/// @brief Field floatProcessor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_floatProcessor, put=__cordl_internal_set_floatProcessor)) ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*  floatProcessor;

/// @brief Field shortProcessor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_shortProcessor, put=__cordl_internal_set_shortProcessor)) ::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort*  shortProcessor;

static inline ::Photon::Voice::Unity::UtilityScripts::MicAmplifier* New_ctor() ;

/// @brief Method OnDisable, addr 0xa788e28, size 0x24, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa788e0c, size 0x1c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PhotonVoiceCreated, addr 0xa788e4c, size 0x414, virtual false, abstract: false, final false
inline void PhotonVoiceCreated(::Photon::Voice::Unity::PhotonVoiceCreatedParams*  p) ;

constexpr float_t const& __cordl_internal_get_amplificationFactor() const;

constexpr float_t& __cordl_internal_get_amplificationFactor() ;

constexpr float_t const& __cordl_internal_get_boostValue() const;

constexpr float_t& __cordl_internal_get_boostValue() ;

constexpr ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat* const& __cordl_internal_get_floatProcessor() const;

constexpr ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*& __cordl_internal_get_floatProcessor() ;

constexpr ::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort* const& __cordl_internal_get_shortProcessor() const;

constexpr ::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort*& __cordl_internal_get_shortProcessor() ;

constexpr void __cordl_internal_set_amplificationFactor(float_t  value) ;

constexpr void __cordl_internal_set_boostValue(float_t  value) ;

constexpr void __cordl_internal_set_floatProcessor(::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*  value) ;

constexpr void __cordl_internal_set_shortProcessor(::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort*  value) ;

/// @brief Method .ctor, addr 0xa7892bc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AmplificationFactor, addr 0xa788d44, size 0x8, virtual false, abstract: false, final false
inline float_t get_AmplificationFactor() ;

/// @brief Method get_BoostValue, addr 0xa788da8, size 0x8, virtual false, abstract: false, final false
inline float_t get_BoostValue() ;

/// @brief Method set_AmplificationFactor, addr 0xa788d4c, size 0x5c, virtual false, abstract: false, final false
inline void set_AmplificationFactor(float_t  value) ;

/// @brief Method set_BoostValue, addr 0xa788db0, size 0x5c, virtual false, abstract: false, final false
inline void set_BoostValue(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicAmplifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicAmplifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicAmplifier(MicAmplifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicAmplifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicAmplifier(MicAmplifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28896};

/// [SerializeField]
/// @brief Field boostValue, offset: 0x2c, size: 0x4, def value: None
 float_t  ___boostValue;

/// [SerializeField]
/// @brief Field amplificationFactor, offset: 0x30, size: 0x4, def value: None
 float_t  ___amplificationFactor;

/// @brief Field floatProcessor, offset: 0x38, size: 0x8, def value: None
 ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*  ___floatProcessor;

/// @brief Field shortProcessor, offset: 0x40, size: 0x8, def value: None
 ::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort*  ___shortProcessor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifier, ___boostValue) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifier, ___amplificationFactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifier, ___floatProcessor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifier, ___shortProcessor) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::MicAmplifier) == 0x48, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts

#pragma once
// IWYU pragma private; include "Photon/Voice/IOS/AudioSessionParametersPresets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/IOS/zzzz__AudioSessionParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioSessionParametersPresets)
// Forward declare root types
namespace Photon::Voice::IOS {
class AudioSessionParametersPresets;
}
// Write type traits
MARK_REF_T(::Photon::Voice::IOS::AudioSessionParametersPresets*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IOS::AudioSessionParametersPresets*, "Photon.Voice.IOS", "AudioSessionParametersPresets");
// Dependencies Photon.Voice.IOS.AudioSessionParameters, System.Object
namespace Photon::Voice::IOS {
// Is value type: false
// CS Name: Photon.Voice.IOS.AudioSessionParametersPresets
class CORDL_TYPE AudioSessionParametersPresets : public ::System::Object {
public:
// Declarations
/// @brief Field Game, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Game, put=setStaticF_Game)) ::Photon::Voice::IOS::AudioSessionParameters  Game;

/// @brief Field VoIP, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_VoIP, put=setStaticF_VoIP)) ::Photon::Voice::IOS::AudioSessionParameters  VoIP;

static inline ::Photon::Voice::IOS::AudioSessionParameters getStaticF_Game() ;

static inline ::Photon::Voice::IOS::AudioSessionParameters getStaticF_VoIP() ;

static inline void setStaticF_Game(::Photon::Voice::IOS::AudioSessionParameters  value) ;

static inline void setStaticF_VoIP(::Photon::Voice::IOS::AudioSessionParameters  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSessionParametersPresets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSessionParametersPresets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSessionParametersPresets(AudioSessionParametersPresets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSessionParametersPresets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSessionParametersPresets(AudioSessionParametersPresets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28524};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::IOS::AudioSessionParametersPresets) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice::IOS

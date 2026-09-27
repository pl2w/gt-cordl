#pragma once
// IWYU pragma private; include "GlobalNamespace/ISpeakerLoudness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ISpeakerLoudness)
// Forward declare root types
namespace GlobalNamespace {
class ISpeakerLoudness;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ISpeakerLoudness*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ISpeakerLoudness*, "", "ISpeakerLoudness");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISpeakerLoudness
class CORDL_TYPE ISpeakerLoudness {
public:
// Declarations
 __declspec(property(get=get_IsMicEnabled)) bool  IsMicEnabled;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

 __declspec(property(get=get_Loudness)) float_t  Loudness;

/// @brief Method get_IsMicEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsMicEnabled() ;

/// @brief Method get_IsSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsSpeaking() ;

/// @brief Method get_Loudness, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Loudness() ;

// Ctor Parameters [CppParam { name: "", ty: "ISpeakerLoudness", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISpeakerLoudness(ISpeakerLoudness const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

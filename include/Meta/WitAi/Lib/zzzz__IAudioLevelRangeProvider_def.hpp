#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/IAudioLevelRangeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IAudioLevelRangeProvider)
// Forward declare root types
namespace Meta::WitAi::Lib {
class IAudioLevelRangeProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Lib::IAudioLevelRangeProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Lib::IAudioLevelRangeProvider*, "Meta.WitAi.Lib", "IAudioLevelRangeProvider");
// Dependencies 
namespace Meta::WitAi::Lib {
// Is value type: false
// CS Name: Meta.WitAi.Lib.IAudioLevelRangeProvider
class CORDL_TYPE IAudioLevelRangeProvider {
public:
// Declarations
 __declspec(property(get=get_MaxAudioLevel)) float_t  MaxAudioLevel;

 __declspec(property(get=get_MinAudioLevel)) float_t  MinAudioLevel;

/// @brief Method get_MaxAudioLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_MaxAudioLevel() ;

/// @brief Method get_MinAudioLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_MinAudioLevel() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioLevelRangeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioLevelRangeProvider(IAudioLevelRangeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Lib

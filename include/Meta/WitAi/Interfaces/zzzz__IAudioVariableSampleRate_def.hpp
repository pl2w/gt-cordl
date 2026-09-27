#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IAudioVariableSampleRate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioVariableSampleRate)
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class IAudioVariableSampleRate;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::IAudioVariableSampleRate*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::IAudioVariableSampleRate*, "Meta.WitAi.Interfaces", "IAudioVariableSampleRate");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.IAudioVariableSampleRate
class CORDL_TYPE IAudioVariableSampleRate {
public:
// Declarations
 __declspec(property(get=get_NeedsSampleRateCalculation)) bool  NeedsSampleRateCalculation;

/// @brief Method get_NeedsSampleRateCalculation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_NeedsSampleRateCalculation() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioVariableSampleRate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioVariableSampleRate(IAudioVariableSampleRate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32767};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces

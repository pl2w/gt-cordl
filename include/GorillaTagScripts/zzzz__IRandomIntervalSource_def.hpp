#pragma once
// IWYU pragma private; include "GorillaTagScripts/IRandomIntervalSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IRandomIntervalSource)
// Forward declare root types
namespace GorillaTagScripts {
class IRandomIntervalSource;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::IRandomIntervalSource*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::IRandomIntervalSource*, "GorillaTagScripts", "IRandomIntervalSource");
// Dependencies 
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.IRandomIntervalSource
class CORDL_TYPE IRandomIntervalSource {
public:
// Declarations
/// @brief Method GetNextIntervalSeconds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetNextIntervalSeconds() ;

// Ctor Parameters [CppParam { name: "", ty: "IRandomIntervalSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRandomIntervalSource(IRandomIntervalSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3995};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTagScripts

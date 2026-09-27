#pragma once
// IWYU pragma private; include "Fusion/IBeforeAllTicks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IBeforeAllTicks)
namespace Fusion {
class IPublicFacingInterface;
}
// Forward declare root types
namespace Fusion {
class IBeforeAllTicks;
}
// Write type traits
MARK_REF_T(::Fusion::IBeforeAllTicks*);
DEFINE_IL2CPP_CLASS(::Fusion::IBeforeAllTicks*, "Fusion", "IBeforeAllTicks");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IBeforeAllTicks
class CORDL_TYPE IBeforeAllTicks {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method BeforeAllTicks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void BeforeAllTicks(bool  resimulation, int32_t  tickCount) ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IBeforeAllTicks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBeforeAllTicks(IBeforeAllTicks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18880};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion

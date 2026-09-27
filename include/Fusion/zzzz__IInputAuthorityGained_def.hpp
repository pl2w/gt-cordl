#pragma once
// IWYU pragma private; include "Fusion/IInputAuthorityGained.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputAuthorityGained)
namespace Fusion {
class IPublicFacingInterface;
}
// Forward declare root types
namespace Fusion {
class IInputAuthorityGained;
}
// Write type traits
MARK_REF_T(::Fusion::IInputAuthorityGained*);
DEFINE_IL2CPP_CLASS(::Fusion::IInputAuthorityGained*, "Fusion", "IInputAuthorityGained");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IInputAuthorityGained
class CORDL_TYPE IInputAuthorityGained {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method InputAuthorityGained, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void InputAuthorityGained() ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IInputAuthorityGained", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInputAuthorityGained(IInputAuthorityGained const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18871};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion

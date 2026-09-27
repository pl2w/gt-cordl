#pragma once
// IWYU pragma private; include "Fusion/IAfterTick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAfterTick)
namespace Fusion {
class IPublicFacingInterface;
}
// Forward declare root types
namespace Fusion {
class IAfterTick;
}
// Write type traits
MARK_REF_T(::Fusion::IAfterTick*);
DEFINE_IL2CPP_CLASS(::Fusion::IAfterTick*, "Fusion", "IAfterTick");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IAfterTick
class CORDL_TYPE IAfterTick {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method AfterTick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AfterTick() ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAfterTick", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAfterTick(IAfterTick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18879};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion

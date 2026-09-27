#pragma once
// IWYU pragma private; include "Fusion/IAfterUpdateRemotePrefabs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAfterUpdateRemotePrefabs)
namespace Fusion {
class IPublicFacingInterface;
}
// Forward declare root types
namespace Fusion {
class IAfterUpdateRemotePrefabs;
}
// Write type traits
MARK_REF_T(::Fusion::IAfterUpdateRemotePrefabs*);
DEFINE_IL2CPP_CLASS(::Fusion::IAfterUpdateRemotePrefabs*, "Fusion", "IAfterUpdateRemotePrefabs");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IAfterUpdateRemotePrefabs
class CORDL_TYPE IAfterUpdateRemotePrefabs {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method AfterUpdateRemotePrefabs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AfterUpdateRemotePrefabs() ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAfterUpdateRemotePrefabs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAfterUpdateRemotePrefabs(IAfterUpdateRemotePrefabs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18877};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion

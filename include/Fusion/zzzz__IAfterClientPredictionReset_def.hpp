#pragma once
// IWYU pragma private; include "Fusion/IAfterClientPredictionReset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAfterClientPredictionReset)
namespace Fusion {
class IPublicFacingInterface;
}
// Forward declare root types
namespace Fusion {
class IAfterClientPredictionReset;
}
// Write type traits
MARK_REF_T(::Fusion::IAfterClientPredictionReset*);
DEFINE_IL2CPP_CLASS(::Fusion::IAfterClientPredictionReset*, "Fusion", "IAfterClientPredictionReset");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IAfterClientPredictionReset
class CORDL_TYPE IAfterClientPredictionReset {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method AfterClientPredictionReset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AfterClientPredictionReset() ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAfterClientPredictionReset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAfterClientPredictionReset(IAfterClientPredictionReset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18875};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion

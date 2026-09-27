#pragma once
// IWYU pragma private; include "Fusion/ResolveNetworkPrefabSourceAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(ResolveNetworkPrefabSourceAttribute)
// Forward declare root types
namespace Fusion {
class ResolveNetworkPrefabSourceAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::ResolveNetworkPrefabSourceAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::ResolveNetworkPrefabSourceAttribute*, "Fusion", "ResolveNetworkPrefabSourceAttribute");
// Dependencies Fusion.PropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ResolveNetworkPrefabSourceAttribute
class CORDL_TYPE ResolveNetworkPrefabSourceAttribute : public ::Fusion::PropertyAttribute {
public:
// Declarations
static inline ::Fusion::ResolveNetworkPrefabSourceAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f703ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResolveNetworkPrefabSourceAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResolveNetworkPrefabSourceAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ResolveNetworkPrefabSourceAttribute(ResolveNetworkPrefabSourceAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResolveNetworkPrefabSourceAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResolveNetworkPrefabSourceAttribute(ResolveNetworkPrefabSourceAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ResolveNetworkPrefabSourceAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion

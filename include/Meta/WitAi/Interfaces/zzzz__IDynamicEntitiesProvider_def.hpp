#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IDynamicEntitiesProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDynamicEntitiesProvider)
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class IDynamicEntitiesProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*, "Meta.WitAi.Interfaces", "IDynamicEntitiesProvider");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.IDynamicEntitiesProvider
class CORDL_TYPE IDynamicEntitiesProvider {
public:
// Declarations
/// @brief Method GetDynamicEntities, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* GetDynamicEntities() ;

// Ctor Parameters [CppParam { name: "", ty: "IDynamicEntitiesProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDynamicEntitiesProvider(IDynamicEntitiesProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25661};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces

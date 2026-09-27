#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/DynamicEntityProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DynamicEntityProvider)
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities;
}
namespace Meta::WitAi::Interfaces {
class IDynamicEntitiesProvider;
}
// Forward declare root types
namespace Meta::WitAi::Data::Entities {
class DynamicEntityProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Entities::DynamicEntityProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::DynamicEntityProvider*, "Meta.WitAi.Data.Entities", "DynamicEntityProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.DynamicEntityProvider
class CORDL_TYPE DynamicEntityProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entities, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entities, put=__cordl_internal_set_entities)) ::Meta::WitAi::Data::Entities::WitDynamicEntities*  entities;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept;

/// @brief Method GetDynamicEntities, addr 0x9e9af04, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* GetDynamicEntities() ;

static inline ::Meta::WitAi::Data::Entities::DynamicEntityProvider* New_ctor() ;

constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities* const& __cordl_internal_get_entities() const;

constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities*& __cordl_internal_get_entities() ;

constexpr void __cordl_internal_set_entities(::Meta::WitAi::Data::Entities::WitDynamicEntities*  value) ;

/// @brief Method .ctor, addr 0x9e9af0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicEntityProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicEntityProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicEntityProvider(DynamicEntityProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicEntityProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicEntityProvider(DynamicEntityProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25709};

/// [SerializeField]
/// @brief Field entities, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Data::Entities::WitDynamicEntities*  ___entities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Entities::DynamicEntityProvider, ___entities) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Entities::DynamicEntityProvider) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities

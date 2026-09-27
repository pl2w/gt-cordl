#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/DynamicEntityDataProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntitiesData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DynamicEntityDataProvider)
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities;
}
namespace Meta::WitAi::Interfaces {
class IDynamicEntitiesProvider;
}
// Forward declare root types
namespace Meta::WitAi::Data::Entities {
class DynamicEntityDataProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Entities::DynamicEntityDataProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::DynamicEntityDataProvider*, "Meta.WitAi.Data.Entities", "DynamicEntityDataProvider");
// Dependencies Meta.WitAi.Data.Entities.WitDynamicEntitiesData, UnityEngine.MonoBehaviour
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.DynamicEntityDataProvider
class CORDL_TYPE DynamicEntityDataProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entitiesDefinition, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entitiesDefinition, put=__cordl_internal_set_entitiesDefinition)) ::ArrayW<::UnityW<::Meta::WitAi::Data::Entities::WitDynamicEntitiesData>>  entitiesDefinition;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept;

/// @brief Method GetDynamicEntities, addr 0x9e9acf0, size 0xac, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* GetDynamicEntities() ;

static inline ::Meta::WitAi::Data::Entities::DynamicEntityDataProvider* New_ctor() ;

constexpr ::ArrayW<::UnityW<::Meta::WitAi::Data::Entities::WitDynamicEntitiesData>> const& __cordl_internal_get_entitiesDefinition() const;

constexpr ::ArrayW<::UnityW<::Meta::WitAi::Data::Entities::WitDynamicEntitiesData>>& __cordl_internal_get_entitiesDefinition() ;

constexpr void __cordl_internal_set_entitiesDefinition(::ArrayW<::UnityW<::Meta::WitAi::Data::Entities::WitDynamicEntitiesData>>  value) ;

/// @brief Method .ctor, addr 0x9e9aefc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicEntityDataProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicEntityDataProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicEntityDataProvider(DynamicEntityDataProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicEntityDataProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicEntityDataProvider(DynamicEntityDataProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25708};

/// [SerializeField]
/// @brief Field entitiesDefinition, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Meta::WitAi::Data::Entities::WitDynamicEntitiesData>>  ___entitiesDefinition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Entities::DynamicEntityDataProvider, ___entitiesDefinition) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Entities::DynamicEntityDataProvider) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities

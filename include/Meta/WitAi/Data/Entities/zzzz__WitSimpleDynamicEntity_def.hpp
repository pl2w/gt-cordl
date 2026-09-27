#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitSimpleDynamicEntity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitSimpleDynamicEntity)
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities;
}
namespace Meta::WitAi::Interfaces {
class IDynamicEntitiesProvider;
}
// Forward declare root types
namespace Meta::WitAi::Data::Entities {
class WitSimpleDynamicEntity;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity*, "Meta.WitAi.Data.Entities", "WitSimpleDynamicEntity");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.WitSimpleDynamicEntity
class CORDL_TYPE WitSimpleDynamicEntity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entityName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityName, put=__cordl_internal_set_entityName)) ::StringW  entityName;

/// @brief Field keywords, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_keywords, put=__cordl_internal_set_keywords)) ::ArrayW<::StringW>  keywords;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept;

/// @brief Method GetDynamicEntities, addr 0x9e9c280, size 0x100, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* GetDynamicEntities() ;

static inline ::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_entityName() const;

constexpr ::StringW& __cordl_internal_get_entityName() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_keywords() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_keywords() ;

constexpr void __cordl_internal_set_entityName(::StringW  value) ;

constexpr void __cordl_internal_set_keywords(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x9e9c380, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitSimpleDynamicEntity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitSimpleDynamicEntity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitSimpleDynamicEntity(WitSimpleDynamicEntity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitSimpleDynamicEntity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitSimpleDynamicEntity(WitSimpleDynamicEntity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25721};

/// [SerializeField]
/// @brief Field entityName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___entityName;

/// [SerializeField]
/// @brief Field keywords, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___keywords;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity, ___entityName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity, ___keywords) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities

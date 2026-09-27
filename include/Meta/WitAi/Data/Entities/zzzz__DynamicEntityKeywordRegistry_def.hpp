#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/DynamicEntityKeywordRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DynamicEntityKeywordRegistry)
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities;
}
namespace Meta::WitAi::Data::Info {
struct WitEntityKeywordInfo;
}
namespace Meta::WitAi::Interfaces {
class IDynamicEntitiesProvider;
}
// Forward declare root types
namespace Meta::WitAi::Data::Entities {
class DynamicEntityKeywordRegistry;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry*, "Meta.WitAi.Data.Entities", "DynamicEntityKeywordRegistry");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry
class CORDL_TYPE DynamicEntityKeywordRegistry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entities, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entities, put=__cordl_internal_set_entities)) ::Meta::WitAi::Data::Entities::WitDynamicEntities*  entities;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry>  instance;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept;

/// @brief Method GetDynamicEntities, addr 0x9e9b5a4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* GetDynamicEntities() ;

static inline ::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e9b0b0, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e9b058, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterDynamicEntity, addr 0x9e9b104, size 0x14, virtual false, abstract: false, final false
inline void RegisterDynamicEntity(::StringW  entity, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo  keyword) ;

/// @brief Method UnregisterDynamicEntity, addr 0x9e9b3cc, size 0x14, virtual false, abstract: false, final false
inline void UnregisterDynamicEntity(::StringW  entity, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo  keyword) ;

constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities* const& __cordl_internal_get_entities() const;

constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities*& __cordl_internal_get_entities() ;

constexpr void __cordl_internal_set_entities(::Meta::WitAi::Data::Entities::WitDynamicEntities*  value) ;

/// @brief Method .ctor, addr 0x9e9b5ac, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry> getStaticF_instance() ;

/// @brief Method get_HasDynamicEntityRegistry, addr 0x9e9af14, size 0x74, virtual false, abstract: false, final false
static inline bool get_HasDynamicEntityRegistry() ;

/// @brief Method get_Instance, addr 0x9e9af88, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry> get_Instance() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept;

static inline void setStaticF_instance(::UnityW<::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicEntityKeywordRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicEntityKeywordRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicEntityKeywordRegistry(DynamicEntityKeywordRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicEntityKeywordRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicEntityKeywordRegistry(DynamicEntityKeywordRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25710};

/// @brief Field entities, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Data::Entities::WitDynamicEntities*  ___entities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry, ___entities) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Entities::DynamicEntityKeywordRegistry) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities

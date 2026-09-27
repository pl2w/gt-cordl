#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitDynamicEntity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitDynamicEntity)
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities;
}
namespace Meta::WitAi::Data::Info {
struct WitEntityKeywordInfo;
}
namespace Meta::WitAi::Interfaces {
class IDynamicEntitiesProvider;
}
namespace Meta::WitAi::Json {
class WitResponseArray;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntity;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Entities::WitDynamicEntity*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::WitDynamicEntity*, "Meta.WitAi.Data.Entities", "WitDynamicEntity");
// Dependencies System.Object
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.WitDynamicEntity
class CORDL_TYPE WitDynamicEntity : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AsJson)) ::Meta::WitAi::Json::WitResponseArray*  AsJson;

/// @brief Field entity, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::StringW  entity;

/// @brief Field keywords, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_keywords, put=__cordl_internal_set_keywords)) ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>*  keywords;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept;

/// @brief Method GetDynamicEntities, addr 0x9e9be20, size 0x128, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* GetDynamicEntities() ;

static inline ::Meta::WitAi::Data::Entities::WitDynamicEntity* New_ctor() ;

static inline ::Meta::WitAi::Data::Entities::WitDynamicEntity* New_ctor(::StringW  entity, /* [ParamArray] */ ::ArrayW<::StringW>  keywords) ;

constexpr ::StringW const& __cordl_internal_get_entity() const;

constexpr ::StringW& __cordl_internal_get_entity() ;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>* const& __cordl_internal_get_keywords() const;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>*& __cordl_internal_get_keywords() ;

constexpr void __cordl_internal_set_entity(::StringW  value) ;

constexpr void __cordl_internal_set_keywords(::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>*  value) ;

/// @brief Method .ctor, addr 0x9e9bae0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9e9bb68, size 0x228, virtual false, abstract: false, final false
inline void _ctor(::StringW  entity, /* [ParamArray] */ ::ArrayW<::StringW>  keywords) ;

/// @brief Method get_AsJson, addr 0x9e9bd90, size 0x90, virtual false, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseArray* get_AsJson() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitDynamicEntity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitDynamicEntity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitDynamicEntity(WitDynamicEntity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitDynamicEntity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitDynamicEntity(WitDynamicEntity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25716};

/// @brief Field entity, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___entity;

/// @brief Field keywords, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>*  ___keywords;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Entities::WitDynamicEntity, ___entity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Entities::WitDynamicEntity, ___keywords) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Entities::WitDynamicEntity) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities

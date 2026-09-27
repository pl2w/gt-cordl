#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/RegisteredDynamicEntityKeyword.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/Info/zzzz__WitEntityKeywordInfo_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RegisteredDynamicEntityKeyword)
// Forward declare root types
namespace Meta::WitAi::Data::Entities {
class RegisteredDynamicEntityKeyword;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword*, "Meta.WitAi.Data.Entities", "RegisteredDynamicEntityKeyword");
// Dependencies Meta.WitAi.Data.Info.WitEntityKeywordInfo, UnityEngine.MonoBehaviour
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword
class CORDL_TYPE RegisteredDynamicEntityKeyword : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::StringW  entity;

/// @brief Field keyword, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_keyword, put=__cordl_internal_set_keyword)) ::Meta::WitAi::Data::Info::WitEntityKeywordInfo  keyword;

static inline ::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e9b720, size 0x5c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e9b614, size 0x10c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::StringW const& __cordl_internal_get_entity() const;

constexpr ::StringW& __cordl_internal_get_entity() ;

constexpr ::Meta::WitAi::Data::Info::WitEntityKeywordInfo const& __cordl_internal_get_keyword() const;

constexpr ::Meta::WitAi::Data::Info::WitEntityKeywordInfo& __cordl_internal_get_keyword() ;

constexpr void __cordl_internal_set_entity(::StringW  value) ;

constexpr void __cordl_internal_set_keyword(::Meta::WitAi::Data::Info::WitEntityKeywordInfo  value) ;

/// @brief Method .ctor, addr 0x9e9b77c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisteredDynamicEntityKeyword() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisteredDynamicEntityKeyword", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisteredDynamicEntityKeyword(RegisteredDynamicEntityKeyword && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisteredDynamicEntityKeyword", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisteredDynamicEntityKeyword(RegisteredDynamicEntityKeyword const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25711};

/// [SerializeField]
/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___entity;

/// [SerializeField]
/// @brief Field keyword, offset: 0x28, size: 0x10, def value: None
 ::Meta::WitAi::Data::Info::WitEntityKeywordInfo  ___keyword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword, ___keyword) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities

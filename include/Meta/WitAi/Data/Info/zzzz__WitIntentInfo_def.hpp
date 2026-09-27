#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitIntentInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/Info/zzzz__WitIntentEntityInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WitIntentInfo)
namespace Meta::WitAi::Data::Info {
struct WitIntentEntityInfo;
}
// Forward declare root types
namespace Meta::WitAi::Data::Info {
struct WitIntentInfo;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Data::Info::WitIntentInfo);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Info::WitIntentInfo, "Meta.WitAi.Data.Info", "WitIntentInfo");
// Dependencies Meta.WitAi.Data.Info.WitIntentEntityInfo
namespace Meta::WitAi::Data::Info {
// Is value type: true
// CS Name: Meta.WitAi.Data.Info.WitIntentInfo
struct CORDL_TYPE WitIntentInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WitIntentInfo() ;

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "entities", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitIntentEntityInfo>", modifiers: "", def_value: None, comment: None }]
constexpr WitIntentInfo(::StringW  id, ::StringW  name, ::ArrayW<::Meta::WitAi::Data::Info::WitIntentEntityInfo>  entities) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [SerializeField]
/// @brief Field id, offset: 0x0, size: 0x8, def value: None
 ::StringW  id;

/// [SerializeField]
/// @brief Field name, offset: 0x8, size: 0x8, def value: None
 ::StringW  name;

/// [SerializeField]
/// @brief Field entities, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Data::Info::WitIntentEntityInfo>  entities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Info::WitIntentInfo, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitIntentInfo, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitIntentInfo, entities) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Info::WitIntentInfo) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Info

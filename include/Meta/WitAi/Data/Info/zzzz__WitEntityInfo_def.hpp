#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitEntityInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/Info/zzzz__WitEntityKeywordInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityRoleInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitEntityInfo)
namespace Meta::WitAi::Data::Info {
struct WitEntityKeywordInfo;
}
namespace Meta::WitAi::Data::Info {
struct WitEntityRoleInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Data::Info {
struct WitEntityInfo;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Data::Info::WitEntityInfo);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Info::WitEntityInfo, "Meta.WitAi.Data.Info", "WitEntityInfo");
// Dependencies Meta.WitAi.Data.Info.WitEntityKeywordInfo, Meta.WitAi.Data.Info.WitEntityRoleInfo
namespace Meta::WitAi::Data::Info {
// Is value type: true
// CS Name: Meta.WitAi.Data.Info.WitEntityInfo
struct CORDL_TYPE WitEntityInfo {
public:
// Declarations
/// @brief Method Equals, addr 0x9e479f8, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9e47a88, size 0xd8, virtual false, abstract: false, final false
inline bool Equals(::Meta::WitAi::Data::Info::WitEntityInfo  other) ;

/// @brief Method GetHashCode, addr 0x9e47b60, size 0xd4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

// Ctor Parameters []
// @brief default ctor
constexpr WitEntityInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "lookups", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "roles", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitEntityRoleInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "keywords", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>", modifiers: "", def_value: None, comment: None }]
constexpr WitEntityInfo(::StringW  name, ::StringW  id, ::ArrayW<::StringW>  lookups, ::ArrayW<::Meta::WitAi::Data::Info::WitEntityRoleInfo>  roles, ::ArrayW<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>  keywords) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31040};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [SerializeField]
/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// [SerializeField]
/// @brief Field id, offset: 0x8, size: 0x8, def value: None
 ::StringW  id;

/// [SerializeField]
/// @brief Field lookups, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  lookups;

/// [SerializeField]
/// @brief Field roles, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Data::Info::WitEntityRoleInfo>  roles;

/// [SerializeField]
/// @brief Field keywords, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>  keywords;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Info::WitEntityInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitEntityInfo, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitEntityInfo, lookups) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitEntityInfo, roles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitEntityInfo, keywords) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Info::WitEntityInfo) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Info

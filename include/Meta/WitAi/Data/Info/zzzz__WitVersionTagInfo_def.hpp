#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitVersionTagInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WitVersionTagInfo)
// Forward declare root types
namespace Meta::WitAi::Data::Info {
struct WitVersionTagInfo;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Data::Info::WitVersionTagInfo);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Info::WitVersionTagInfo, "Meta.WitAi.Data.Info", "WitVersionTagInfo");
// Dependencies 
namespace Meta::WitAi::Data::Info {
// Is value type: true
// CS Name: Meta.WitAi.Data.Info.WitVersionTagInfo
struct CORDL_TYPE WitVersionTagInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WitVersionTagInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "created_at", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "updated_at", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "desc", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr WitVersionTagInfo(::StringW  name, ::StringW  created_at, ::StringW  updated_at, ::StringW  desc) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [SerializeField]
/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// [SerializeField]
/// @brief Field created_at, offset: 0x8, size: 0x8, def value: None
 ::StringW  created_at;

/// [SerializeField]
/// @brief Field updated_at, offset: 0x10, size: 0x8, def value: None
 ::StringW  updated_at;

/// [SerializeField]
/// @brief Field desc, offset: 0x18, size: 0x8, def value: None
 ::StringW  desc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Info::WitVersionTagInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitVersionTagInfo, created_at) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitVersionTagInfo, updated_at) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitVersionTagInfo, desc) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Info::WitVersionTagInfo) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Info

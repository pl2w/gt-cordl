#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/Editor/EEdCosBrowserCategoryFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EEdCosBrowserCategoryFilter)
// Forward declare root types
namespace GorillaTag::CosmeticSystem::Editor {
struct EEdCosBrowserCategoryFilter;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter, "GorillaTag.CosmeticSystem.Editor", "EEdCosBrowserCategoryFilter");
// [Flags]
// Dependencies 
namespace GorillaTag::CosmeticSystem::Editor {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.Editor.EEdCosBrowserCategoryFilter
struct CORDL_TYPE EEdCosBrowserCategoryFilter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EEdCosBrowserCategoryFilter_Unwrapped
enum struct __EEdCosBrowserCategoryFilter_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Hat = static_cast<int32_t>(0x1),
__E_Badge = static_cast<int32_t>(0x2),
__E_Face = static_cast<int32_t>(0x4),
__E_Paw = static_cast<int32_t>(0x8),
__E_Chest = static_cast<int32_t>(0x10),
__E_Fur = static_cast<int32_t>(0x20),
__E_Shirt = static_cast<int32_t>(0x40),
__E_Back = static_cast<int32_t>(0x80),
__E_Arms = static_cast<int32_t>(0x100),
__E_Pants = static_cast<int32_t>(0x200),
__E_TagEffect = static_cast<int32_t>(0x400),
__E_Set = static_cast<int32_t>(0x1000),
__E_All = static_cast<int32_t>(0x17ff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EEdCosBrowserCategoryFilter_Unwrapped () const noexcept {
return static_cast<__EEdCosBrowserCategoryFilter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EEdCosBrowserCategoryFilter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EEdCosBrowserCategoryFilter(int32_t  value__) noexcept;

/// @brief Field All value: I32(6143)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const All;

/// @brief Field Arms value: I32(256)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Arms;

/// @brief Field Back value: I32(128)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Back;

/// @brief Field Badge value: I32(2)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Badge;

/// @brief Field Chest value: I32(16)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Chest;

/// @brief Field Face value: I32(4)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Face;

/// @brief Field Fur value: I32(32)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Fur;

/// @brief Field Hat value: I32(1)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Hat;

/// @brief Field None value: I32(0)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const None;

/// @brief Field Pants value: I32(512)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Pants;

/// @brief Field Paw value: I32(8)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Paw;

/// @brief Field Set value: I32(4096)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Set;

/// @brief Field Shirt value: I32(64)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const Shirt;

/// @brief Field TagEffect value: I32(1024)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter const TagEffect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4764};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserCategoryFilter) == 0x4, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem::Editor

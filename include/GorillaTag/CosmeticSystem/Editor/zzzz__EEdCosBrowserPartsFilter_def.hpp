#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/Editor/EEdCosBrowserPartsFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EEdCosBrowserPartsFilter)
// Forward declare root types
namespace GorillaTag::CosmeticSystem::Editor {
struct EEdCosBrowserPartsFilter;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter, "GorillaTag.CosmeticSystem.Editor", "EEdCosBrowserPartsFilter");
// [Flags]
// Dependencies 
namespace GorillaTag::CosmeticSystem::Editor {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.Editor.EEdCosBrowserPartsFilter
struct CORDL_TYPE EEdCosBrowserPartsFilter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EEdCosBrowserPartsFilter_Unwrapped
enum struct __EEdCosBrowserPartsFilter_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_NoParts = static_cast<int32_t>(0x1),
__E_Holdable = static_cast<int32_t>(0x2),
__E_Functional = static_cast<int32_t>(0x4),
__E_Wardrobe = static_cast<int32_t>(0x8),
__E_Store = static_cast<int32_t>(0x10),
__E_FirstPerson = static_cast<int32_t>(0x20),
__E_LocalRig = static_cast<int32_t>(0x40),
__E_All = static_cast<int32_t>(0x7f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EEdCosBrowserPartsFilter_Unwrapped () const noexcept {
return static_cast<__EEdCosBrowserPartsFilter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EEdCosBrowserPartsFilter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EEdCosBrowserPartsFilter(int32_t  value__) noexcept;

/// @brief Field All value: I32(127)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter const All;

/// @brief Field FirstPerson value: I32(32)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter const FirstPerson;

/// @brief Field Functional value: I32(4)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter const Functional;

/// @brief Field Holdable value: I32(2)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter const Holdable;

/// @brief Field LocalRig value: I32(64)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter const LocalRig;

/// @brief Field NoParts value: I32(1)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter const NoParts;

/// @brief Field None value: I32(0)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter const None;

/// @brief Field Store value: I32(16)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter const Store;

/// @brief Field Wardrobe value: I32(8)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter const Wardrobe;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4765};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserPartsFilter) == 0x4, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem::Editor

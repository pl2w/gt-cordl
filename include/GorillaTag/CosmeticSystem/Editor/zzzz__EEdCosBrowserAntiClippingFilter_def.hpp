#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/Editor/EEdCosBrowserAntiClippingFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EEdCosBrowserAntiClippingFilter)
// Forward declare root types
namespace GorillaTag::CosmeticSystem::Editor {
struct EEdCosBrowserAntiClippingFilter;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter, "GorillaTag.CosmeticSystem.Editor", "EEdCosBrowserAntiClippingFilter");
// [Flags]
// Dependencies 
namespace GorillaTag::CosmeticSystem::Editor {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.Editor.EEdCosBrowserAntiClippingFilter
struct CORDL_TYPE EEdCosBrowserAntiClippingFilter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EEdCosBrowserAntiClippingFilter_Unwrapped
enum struct __EEdCosBrowserAntiClippingFilter_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_NameTag = static_cast<int32_t>(0x1),
__E_LeftArm = static_cast<int32_t>(0x2),
__E_RightArm = static_cast<int32_t>(0x4),
__E_Chest = static_cast<int32_t>(0x8),
__E_HuntComputer = static_cast<int32_t>(0x10),
__E_Badge = static_cast<int32_t>(0x20),
__E_BuilderWatch = static_cast<int32_t>(0x40),
__E_FriendshipBraceletLeft = static_cast<int32_t>(0x80),
__E_FriendshipBraceletRight = static_cast<int32_t>(0x100),
__E_All = static_cast<int32_t>(0x1ff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EEdCosBrowserAntiClippingFilter_Unwrapped () const noexcept {
return static_cast<__EEdCosBrowserAntiClippingFilter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EEdCosBrowserAntiClippingFilter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EEdCosBrowserAntiClippingFilter(int32_t  value__) noexcept;

/// @brief Field All value: I32(511)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const All;

/// @brief Field Badge value: I32(32)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const Badge;

/// @brief Field BuilderWatch value: I32(64)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const BuilderWatch;

/// @brief Field Chest value: I32(8)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const Chest;

/// @brief Field FriendshipBraceletLeft value: I32(128)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const FriendshipBraceletLeft;

/// @brief Field FriendshipBraceletRight value: I32(256)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const FriendshipBraceletRight;

/// @brief Field HuntComputer value: I32(16)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const HuntComputer;

/// @brief Field LeftArm value: I32(2)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const LeftArm;

/// @brief Field NameTag value: I32(1)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const NameTag;

/// @brief Field None value: I32(0)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const None;

/// @brief Field RightArm value: I32(4)
static ::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter const RightArm;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4763};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::Editor::EEdCosBrowserAntiClippingFilter) == 0x4, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem::Editor

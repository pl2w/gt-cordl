#pragma once
// IWYU pragma private; include "FXP/CosmeticItemPrefab_EDisplayMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticItemPrefab_EDisplayMode)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticItemPrefab_EDisplayMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticItemPrefab_EDisplayMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticItemPrefab_EDisplayMode, "FXP", "CosmeticItemPrefab/EDisplayMode");
// [SerializeField]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FXP.CosmeticItemPrefab/EDisplayMode
struct CORDL_TYPE CosmeticItemPrefab_EDisplayMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticItemPrefab_EDisplayMode_Unwrapped
enum struct __CosmeticItemPrefab_EDisplayMode_Unwrapped : int32_t {
__E_NULL = static_cast<int32_t>(0x0),
__E_HIDDEN = static_cast<int32_t>(0x1),
__E_PREVIEW = static_cast<int32_t>(0x2),
__E_ATTRACT = static_cast<int32_t>(0x3),
__E_PURCHASE = static_cast<int32_t>(0x4),
__E_POSTPURCHASE = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticItemPrefab_EDisplayMode_Unwrapped () const noexcept {
return static_cast<__CosmeticItemPrefab_EDisplayMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticItemPrefab_EDisplayMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticItemPrefab_EDisplayMode(int32_t  value__) noexcept;

/// @brief Field ATTRACT value: I32(3)
static ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode const ATTRACT;

/// @brief Field HIDDEN value: I32(1)
static ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode const HIDDEN;

/// @brief Field POSTPURCHASE value: I32(5)
static ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode const POSTPURCHASE;

/// @brief Field PREVIEW value: I32(2)
static ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode const PREVIEW;

/// @brief Field PURCHASE value: I32(4)
static ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode const PURCHASE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4230};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NULL value: I32(0)
static ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode const _cordl_NULL;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticItemPrefab_EDisplayMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticItemPrefab_EDisplayMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

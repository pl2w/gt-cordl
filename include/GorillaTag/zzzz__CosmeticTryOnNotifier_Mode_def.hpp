#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticTryOnNotifier_Mode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticTryOnNotifier_Mode)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticTryOnNotifier_Mode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticTryOnNotifier_Mode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticTryOnNotifier_Mode, "GorillaTag", "CosmeticTryOnNotifier/Mode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.CosmeticTryOnNotifier/Mode
struct CORDL_TYPE CosmeticTryOnNotifier_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticTryOnNotifier_Mode_Unwrapped
enum struct __CosmeticTryOnNotifier_Mode_Unwrapped : int32_t {
__E_TRY_ON = static_cast<int32_t>(0x0),
__E_ENABLE_LIST = static_cast<int32_t>(0x1),
__E_ENABLE_LIST_TITLEDATA = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticTryOnNotifier_Mode_Unwrapped () const noexcept {
return static_cast<__CosmeticTryOnNotifier_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticTryOnNotifier_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticTryOnNotifier_Mode(int32_t  value__) noexcept;

/// @brief Field ENABLE_LIST value: I32(1)
static ::GlobalNamespace::CosmeticTryOnNotifier_Mode const ENABLE_LIST;

/// @brief Field ENABLE_LIST_TITLEDATA value: I32(2)
static ::GlobalNamespace::CosmeticTryOnNotifier_Mode const ENABLE_LIST_TITLEDATA;

/// @brief Field TRY_ON value: I32(0)
static ::GlobalNamespace::CosmeticTryOnNotifier_Mode const TRY_ON;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4627};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticTryOnNotifier_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticTryOnNotifier_Mode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

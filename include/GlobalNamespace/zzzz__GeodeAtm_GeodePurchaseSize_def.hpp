#pragma once
// IWYU pragma private; include "GlobalNamespace/GeodeAtm_GeodePurchaseSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeodeAtm_GeodePurchaseSize)
// Forward declare root types
namespace GlobalNamespace {
struct GeodeAtm_GeodePurchaseSize;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GeodeAtm_GeodePurchaseSize);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GeodeAtm_GeodePurchaseSize, "", "GeodeAtm/GeodePurchaseSize");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GeodeAtm/GeodePurchaseSize
struct CORDL_TYPE GeodeAtm_GeodePurchaseSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GeodeAtm_GeodePurchaseSize_Unwrapped
enum struct __GeodeAtm_GeodePurchaseSize_Unwrapped : int32_t {
__E_SMALL = static_cast<int32_t>(0x0),
__E_MEDIUM = static_cast<int32_t>(0x1),
__E_LARGE = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GeodeAtm_GeodePurchaseSize_Unwrapped () const noexcept {
return static_cast<__GeodeAtm_GeodePurchaseSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GeodeAtm_GeodePurchaseSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GeodeAtm_GeodePurchaseSize(int32_t  value__) noexcept;

/// @brief Field LARGE value: I32(2)
static ::GlobalNamespace::GeodeAtm_GeodePurchaseSize const LARGE;

/// @brief Field MEDIUM value: I32(1)
static ::GlobalNamespace::GeodeAtm_GeodePurchaseSize const MEDIUM;

/// @brief Field SMALL value: I32(0)
static ::GlobalNamespace::GeodeAtm_GeodePurchaseSize const SMALL;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1395};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GeodeAtm_GeodePurchaseSize, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GeodeAtm_GeodePurchaseSize) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

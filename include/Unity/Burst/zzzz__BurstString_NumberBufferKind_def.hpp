#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_NumberBufferKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString_NumberBufferKind)
// Forward declare root types
namespace GlobalNamespace {
struct BurstString_NumberBufferKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstString_NumberBufferKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstString_NumberBufferKind, "Unity.Burst", "BurstString/NumberBufferKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Burst.BurstString/NumberBufferKind
struct CORDL_TYPE BurstString_NumberBufferKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BurstString_NumberBufferKind_Unwrapped
enum struct __BurstString_NumberBufferKind_Unwrapped : int32_t {
__E_Integer = static_cast<int32_t>(0x0),
__E_Float = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BurstString_NumberBufferKind_Unwrapped () const noexcept {
return static_cast<__BurstString_NumberBufferKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BurstString_NumberBufferKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BurstString_NumberBufferKind(int32_t  value__) noexcept;

/// @brief Field Float value: I32(1)
static ::GlobalNamespace::BurstString_NumberBufferKind const Float;

/// @brief Field Integer value: I32(0)
static ::GlobalNamespace::BurstString_NumberBufferKind const Integer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32176};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstString_NumberBufferKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstString_NumberBufferKind) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

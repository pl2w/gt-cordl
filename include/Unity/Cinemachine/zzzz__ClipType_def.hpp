#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipType)
// Forward declare root types
namespace Unity::Cinemachine {
struct ClipType;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::ClipType);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ClipType, "Unity.Cinemachine", "ClipType");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.ClipType
struct CORDL_TYPE ClipType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClipType_Unwrapped
enum struct __ClipType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Intersection = static_cast<int32_t>(0x1),
__E_Union = static_cast<int32_t>(0x2),
__E_Difference = static_cast<int32_t>(0x3),
__E_Xor = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClipType_Unwrapped () const noexcept {
return static_cast<__ClipType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClipType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ClipType(int32_t  value__) noexcept;

/// @brief Field Difference value: I32(3)
static ::Unity::Cinemachine::ClipType const Difference;

/// @brief Field Intersection value: I32(1)
static ::Unity::Cinemachine::ClipType const Intersection;

/// @brief Field None value: I32(0)
static ::Unity::Cinemachine::ClipType const None;

/// @brief Field Union value: I32(2)
static ::Unity::Cinemachine::ClipType const Union;

/// @brief Field Xor value: I32(4)
static ::Unity::Cinemachine::ClipType const Xor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::ClipType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::ClipType) == 0x4, "Size mismatch!");

} // namespace end def Unity::Cinemachine

#pragma once
// IWYU pragma private; include "GlobalNamespace/GTContactType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTContactType)
// Forward declare root types
namespace GlobalNamespace {
struct GTContactType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTContactType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTContactType, "", "GTContactType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTContactType
struct CORDL_TYPE GTContactType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GTContactType_Unwrapped
enum struct __GTContactType_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_HandPrint = static_cast<uint32_t>(0x1u),
__E_Crater = static_cast<uint32_t>(0x2u),
__E_WaterSplash = static_cast<uint32_t>(0x4u),
__E_PaintSplat = static_cast<uint32_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTContactType_Unwrapped () const noexcept {
return static_cast<__GTContactType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTContactType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTContactType(uint32_t  value__) noexcept;

/// @brief Field Crater value: U32(2)
static ::GlobalNamespace::GTContactType const Crater;

/// @brief Field HandPrint value: U32(1)
static ::GlobalNamespace::GTContactType const HandPrint;

/// @brief Field None value: U32(0)
static ::GlobalNamespace::GTContactType const None;

/// @brief Field PaintSplat value: U32(8)
static ::GlobalNamespace::GTContactType const PaintSplat;

/// @brief Field WaterSplash value: U32(4)
static ::GlobalNamespace::GTContactType const WaterSplash;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{831};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTContactType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTContactType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

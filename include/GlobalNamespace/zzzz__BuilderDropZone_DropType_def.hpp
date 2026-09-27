#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderDropZone_DropType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderDropZone_DropType)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderDropZone_DropType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderDropZone_DropType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderDropZone_DropType, "", "BuilderDropZone/DropType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderDropZone/DropType
struct CORDL_TYPE BuilderDropZone_DropType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderDropZone_DropType_Unwrapped
enum struct __BuilderDropZone_DropType_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_Repel = static_cast<int32_t>(0x0),
__E_ReturnToShelf = static_cast<int32_t>(0x1),
__E_BreakApart = static_cast<int32_t>(0x2),
__E_Recycle = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderDropZone_DropType_Unwrapped () const noexcept {
return static_cast<__BuilderDropZone_DropType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderDropZone_DropType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderDropZone_DropType(int32_t  value__) noexcept;

/// @brief Field BreakApart value: I32(2)
static ::GlobalNamespace::BuilderDropZone_DropType const BreakApart;

/// @brief Field Invalid value: I32(-1)
static ::GlobalNamespace::BuilderDropZone_DropType const Invalid;

/// @brief Field Recycle value: I32(3)
static ::GlobalNamespace::BuilderDropZone_DropType const Recycle;

/// @brief Field Repel value: I32(0)
static ::GlobalNamespace::BuilderDropZone_DropType const Repel;

/// @brief Field ReturnToShelf value: I32(1)
static ::GlobalNamespace::BuilderDropZone_DropType const ReturnToShelf;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1586};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderDropZone_DropType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderDropZone_DropType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

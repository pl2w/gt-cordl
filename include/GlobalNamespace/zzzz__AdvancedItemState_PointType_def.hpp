#pragma once
// IWYU pragma private; include "GlobalNamespace/AdvancedItemState_PointType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdvancedItemState_PointType)
// Forward declare root types
namespace GlobalNamespace {
struct AdvancedItemState_PointType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AdvancedItemState_PointType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AdvancedItemState_PointType, "", "AdvancedItemState/PointType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AdvancedItemState/PointType
struct CORDL_TYPE AdvancedItemState_PointType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AdvancedItemState_PointType_Unwrapped
enum struct __AdvancedItemState_PointType_Unwrapped : int32_t {
__E_Standard = static_cast<int32_t>(0x0),
__E_DistanceBased = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AdvancedItemState_PointType_Unwrapped () const noexcept {
return static_cast<__AdvancedItemState_PointType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AdvancedItemState_PointType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AdvancedItemState_PointType(int32_t  value__) noexcept;

/// @brief Field DistanceBased value: I32(1)
static ::GlobalNamespace::AdvancedItemState_PointType const DistanceBased;

/// @brief Field Standard value: I32(0)
static ::GlobalNamespace::AdvancedItemState_PointType const Standard;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdvancedItemState_PointType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AdvancedItemState_PointType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

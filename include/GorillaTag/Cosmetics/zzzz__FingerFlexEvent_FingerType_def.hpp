#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FingerFlexEvent_FingerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFlexEvent_FingerType)
// Forward declare root types
namespace GlobalNamespace {
struct FingerFlexEvent_FingerType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FingerFlexEvent_FingerType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FingerFlexEvent_FingerType, "GorillaTag.Cosmetics", "FingerFlexEvent/FingerType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.FingerFlexEvent/FingerType
struct CORDL_TYPE FingerFlexEvent_FingerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FingerFlexEvent_FingerType_Unwrapped
enum struct __FingerFlexEvent_FingerType_Unwrapped : int32_t {
__E_Thumb = static_cast<int32_t>(0x0),
__E_Index = static_cast<int32_t>(0x1),
__E_Middle = static_cast<int32_t>(0x2),
__E_IndexAndMiddleMin = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FingerFlexEvent_FingerType_Unwrapped () const noexcept {
return static_cast<__FingerFlexEvent_FingerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FingerFlexEvent_FingerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FingerFlexEvent_FingerType(int32_t  value__) noexcept;

/// @brief Field Index value: I32(1)
static ::GlobalNamespace::FingerFlexEvent_FingerType const Index;

/// @brief Field IndexAndMiddleMin value: I32(3)
static ::GlobalNamespace::FingerFlexEvent_FingerType const IndexAndMiddleMin;

/// @brief Field Middle value: I32(2)
static ::GlobalNamespace::FingerFlexEvent_FingerType const Middle;

/// @brief Field Thumb value: I32(0)
static ::GlobalNamespace::FingerFlexEvent_FingerType const Thumb;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4933};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FingerFlexEvent_FingerType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FingerFlexEvent_FingerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

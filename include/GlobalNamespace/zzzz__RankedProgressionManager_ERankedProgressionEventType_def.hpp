#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedProgressionManager_ERankedProgressionEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RankedProgressionManager_ERankedProgressionEventType)
// Forward declare root types
namespace GlobalNamespace {
struct RankedProgressionManager_ERankedProgressionEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType, "", "RankedProgressionManager/ERankedProgressionEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RankedProgressionManager/ERankedProgressionEventType
struct CORDL_TYPE RankedProgressionManager_ERankedProgressionEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RankedProgressionManager_ERankedProgressionEventType_Unwrapped
enum struct __RankedProgressionManager_ERankedProgressionEventType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Progress = static_cast<int32_t>(0x1),
__E_Promotion = static_cast<int32_t>(0x2),
__E_Relegation = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RankedProgressionManager_ERankedProgressionEventType_Unwrapped () const noexcept {
return static_cast<__RankedProgressionManager_ERankedProgressionEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RankedProgressionManager_ERankedProgressionEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RankedProgressionManager_ERankedProgressionEventType(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType const None;

/// @brief Field Progress value: I32(1)
static ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType const Progress;

/// @brief Field Promotion value: I32(2)
static ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType const Promotion;

/// @brief Field Relegation value: I32(3)
static ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType const Relegation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

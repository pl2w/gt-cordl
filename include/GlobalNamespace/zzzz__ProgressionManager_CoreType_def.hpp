#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionManager_CoreType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressionManager_CoreType)
// Forward declare root types
namespace GlobalNamespace {
struct ProgressionManager_CoreType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProgressionManager_CoreType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_CoreType, "", "ProgressionManager/CoreType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProgressionManager/CoreType
struct CORDL_TYPE ProgressionManager_CoreType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProgressionManager_CoreType_Unwrapped
enum struct __ProgressionManager_CoreType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Core = static_cast<int32_t>(0x1),
__E_SuperCore = static_cast<int32_t>(0x2),
__E_ChaosSeed = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProgressionManager_CoreType_Unwrapped () const noexcept {
return static_cast<__ProgressionManager_CoreType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_CoreType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProgressionManager_CoreType(int32_t  value__) noexcept;

/// @brief Field ChaosSeed value: I32(3)
static ::GlobalNamespace::ProgressionManager_CoreType const ChaosSeed;

/// @brief Field Core value: I32(1)
static ::GlobalNamespace::ProgressionManager_CoreType const Core;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ProgressionManager_CoreType const None;

/// @brief Field SuperCore value: I32(2)
static ::GlobalNamespace::ProgressionManager_CoreType const SuperCore;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_CoreType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_CoreType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

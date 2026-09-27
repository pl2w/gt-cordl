#pragma once
// IWYU pragma private; include "Unity/Burst/LowLevel/BurstCompilerService_BurstLogType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstCompilerService_BurstLogType)
// Forward declare root types
namespace GlobalNamespace {
struct BurstCompilerService_BurstLogType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstCompilerService_BurstLogType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstCompilerService_BurstLogType, "Unity.Burst.LowLevel", "BurstCompilerService/BurstLogType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Burst.LowLevel.BurstCompilerService/BurstLogType
struct CORDL_TYPE BurstCompilerService_BurstLogType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BurstCompilerService_BurstLogType_Unwrapped
enum struct __BurstCompilerService_BurstLogType_Unwrapped : int32_t {
__E_Info = static_cast<int32_t>(0x0),
__E_Warning = static_cast<int32_t>(0x1),
__E_Error = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BurstCompilerService_BurstLogType_Unwrapped () const noexcept {
return static_cast<__BurstCompilerService_BurstLogType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BurstCompilerService_BurstLogType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BurstCompilerService_BurstLogType(int32_t  value__) noexcept;

/// @brief Field Error value: I32(2)
static ::GlobalNamespace::BurstCompilerService_BurstLogType const Error;

/// @brief Field Info value: I32(0)
static ::GlobalNamespace::BurstCompilerService_BurstLogType const Info;

/// @brief Field Warning value: I32(1)
static ::GlobalNamespace::BurstCompilerService_BurstLogType const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstCompilerService_BurstLogType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstCompilerService_BurstLogType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

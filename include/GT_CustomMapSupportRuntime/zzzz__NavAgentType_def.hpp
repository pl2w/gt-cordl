#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/NavAgentType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavAgentType)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct NavAgentType;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::NavAgentType);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::NavAgentType, "GT_CustomMapSupportRuntime", "NavAgentType");
// Dependencies 
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.NavAgentType
struct CORDL_TYPE NavAgentType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NavAgentType_Unwrapped
enum struct __NavAgentType_Unwrapped : int32_t {
__E_Humanoid = static_cast<int32_t>(0x0),
__E_Small = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_Large = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NavAgentType_Unwrapped () const noexcept {
return static_cast<__NavAgentType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NavAgentType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavAgentType(int32_t  value__) noexcept;

/// @brief Field Humanoid value: I32(0)
static ::GT_CustomMapSupportRuntime::NavAgentType const Humanoid;

/// @brief Field Large value: I32(3)
static ::GT_CustomMapSupportRuntime::NavAgentType const Large;

/// @brief Field Medium value: I32(2)
static ::GT_CustomMapSupportRuntime::NavAgentType const Medium;

/// @brief Field Small value: I32(1)
static ::GT_CustomMapSupportRuntime::NavAgentType const Small;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30874};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::NavAgentType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::NavAgentType) == 0x4, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime

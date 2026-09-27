#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaControllerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaControllerType)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaControllerType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaControllerType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaControllerType, "", "GorillaControllerType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaControllerType
struct CORDL_TYPE GorillaControllerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaControllerType_Unwrapped
enum struct __GorillaControllerType_Unwrapped : int32_t {
__E_OCULUS_DEFAULT = static_cast<int32_t>(0x0),
__E_INDEX = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaControllerType_Unwrapped () const noexcept {
return static_cast<__GorillaControllerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaControllerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaControllerType(int32_t  value__) noexcept;

/// @brief Field INDEX value: I32(1)
static ::GlobalNamespace::GorillaControllerType const INDEX;

/// @brief Field OCULUS_DEFAULT value: I32(0)
static ::GlobalNamespace::GorillaControllerType const OCULUS_DEFAULT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1656};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaControllerType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaControllerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

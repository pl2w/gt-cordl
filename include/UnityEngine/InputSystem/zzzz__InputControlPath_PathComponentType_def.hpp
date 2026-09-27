#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlPath_PathComponentType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlPath_PathComponentType)
// Forward declare root types
namespace GlobalNamespace {
struct InputControlPath_PathComponentType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlPath_PathComponentType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlPath_PathComponentType, "UnityEngine.InputSystem", "InputControlPath/PathComponentType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlPath/PathComponentType
struct CORDL_TYPE InputControlPath_PathComponentType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputControlPath_PathComponentType_Unwrapped
enum struct __InputControlPath_PathComponentType_Unwrapped : int32_t {
__E_Name = static_cast<int32_t>(0x0),
__E_DisplayName = static_cast<int32_t>(0x1),
__E_Usage = static_cast<int32_t>(0x2),
__E_Layout = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputControlPath_PathComponentType_Unwrapped () const noexcept {
return static_cast<__InputControlPath_PathComponentType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputControlPath_PathComponentType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputControlPath_PathComponentType(int32_t  value__) noexcept;

/// @brief Field DisplayName value: I32(1)
static ::GlobalNamespace::InputControlPath_PathComponentType const DisplayName;

/// @brief Field Layout value: I32(3)
static ::GlobalNamespace::InputControlPath_PathComponentType const Layout;

/// @brief Field Name value: I32(0)
static ::GlobalNamespace::InputControlPath_PathComponentType const Name;

/// @brief Field Usage value: I32(2)
static ::GlobalNamespace::InputControlPath_PathComponentType const Usage;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlPath_PathComponentType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlPath_PathComponentType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

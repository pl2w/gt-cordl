#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderDebugPrintManager_DebugValueType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderDebugPrintManager_DebugValueType)
// Forward declare root types
namespace GlobalNamespace {
struct ShaderDebugPrintManager_DebugValueType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderDebugPrintManager_DebugValueType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderDebugPrintManager_DebugValueType, "UnityEngine.Rendering", "ShaderDebugPrintManager/DebugValueType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShaderDebugPrintManager/DebugValueType
struct CORDL_TYPE ShaderDebugPrintManager_DebugValueType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShaderDebugPrintManager_DebugValueType_Unwrapped
enum struct __ShaderDebugPrintManager_DebugValueType_Unwrapped : int32_t {
__E_TypeUint = static_cast<int32_t>(0x1),
__E_TypeInt = static_cast<int32_t>(0x2),
__E_TypeFloat = static_cast<int32_t>(0x3),
__E_TypeUint2 = static_cast<int32_t>(0x4),
__E_TypeInt2 = static_cast<int32_t>(0x5),
__E_TypeFloat2 = static_cast<int32_t>(0x6),
__E_TypeUint3 = static_cast<int32_t>(0x7),
__E_TypeInt3 = static_cast<int32_t>(0x8),
__E_TypeFloat3 = static_cast<int32_t>(0x9),
__E_TypeUint4 = static_cast<int32_t>(0xa),
__E_TypeInt4 = static_cast<int32_t>(0xb),
__E_TypeFloat4 = static_cast<int32_t>(0xc),
__E_TypeBool = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShaderDebugPrintManager_DebugValueType_Unwrapped () const noexcept {
return static_cast<__ShaderDebugPrintManager_DebugValueType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShaderDebugPrintManager_DebugValueType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ShaderDebugPrintManager_DebugValueType(int32_t  value__) noexcept;

/// @brief Field TypeBool value: I32(13)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeBool;

/// @brief Field TypeFloat value: I32(3)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeFloat;

/// @brief Field TypeFloat2 value: I32(6)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeFloat2;

/// @brief Field TypeFloat3 value: I32(9)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeFloat3;

/// @brief Field TypeFloat4 value: I32(12)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeFloat4;

/// @brief Field TypeInt value: I32(2)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeInt;

/// @brief Field TypeInt2 value: I32(5)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeInt2;

/// @brief Field TypeInt3 value: I32(8)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeInt3;

/// @brief Field TypeInt4 value: I32(11)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeInt4;

/// @brief Field TypeUint value: I32(1)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeUint;

/// @brief Field TypeUint2 value: I32(4)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeUint2;

/// @brief Field TypeUint3 value: I32(7)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeUint3;

/// @brief Field TypeUint4 value: I32(10)
static ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType const TypeUint4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16774};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderDebugPrintManager_DebugValueType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderDebugPrintManager_DebugValueType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

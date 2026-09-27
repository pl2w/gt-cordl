#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionState_DebugActionKeyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugActionState_DebugActionKeyType)
// Forward declare root types
namespace GlobalNamespace {
struct DebugActionState_DebugActionKeyType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugActionState_DebugActionKeyType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugActionState_DebugActionKeyType, "UnityEngine.Rendering", "DebugActionState/DebugActionKeyType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugActionState/DebugActionKeyType
struct CORDL_TYPE DebugActionState_DebugActionKeyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugActionState_DebugActionKeyType_Unwrapped
enum struct __DebugActionState_DebugActionKeyType_Unwrapped : int32_t {
__E_Button = static_cast<int32_t>(0x0),
__E_Axis = static_cast<int32_t>(0x1),
__E_Key = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugActionState_DebugActionKeyType_Unwrapped () const noexcept {
return static_cast<__DebugActionState_DebugActionKeyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugActionState_DebugActionKeyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugActionState_DebugActionKeyType(int32_t  value__) noexcept;

/// @brief Field Axis value: I32(1)
static ::GlobalNamespace::DebugActionState_DebugActionKeyType const Axis;

/// @brief Field Button value: I32(0)
static ::GlobalNamespace::DebugActionState_DebugActionKeyType const Button;

/// @brief Field Key value: I32(2)
static ::GlobalNamespace::DebugActionState_DebugActionKeyType const Key;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16701};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugActionState_DebugActionKeyType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugActionState_DebugActionKeyType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

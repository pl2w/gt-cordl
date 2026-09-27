#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugManager_UIMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugManager_UIMode)
// Forward declare root types
namespace GlobalNamespace {
struct DebugManager_UIMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugManager_UIMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugManager_UIMode, "UnityEngine.Rendering", "DebugManager/UIMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugManager/UIMode
struct CORDL_TYPE DebugManager_UIMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugManager_UIMode_Unwrapped
enum struct __DebugManager_UIMode_Unwrapped : int32_t {
__E_EditorMode = static_cast<int32_t>(0x0),
__E_RuntimeMode = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugManager_UIMode_Unwrapped () const noexcept {
return static_cast<__DebugManager_UIMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugManager_UIMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugManager_UIMode(int32_t  value__) noexcept;

/// @brief Field EditorMode value: I32(0)
static ::GlobalNamespace::DebugManager_UIMode const EditorMode;

/// @brief Field RuntimeMode value: I32(1)
static ::GlobalNamespace::DebugManager_UIMode const RuntimeMode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16695};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugManager_UIMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugManager_UIMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

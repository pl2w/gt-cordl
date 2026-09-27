#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugUI_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUI_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct DebugUI_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugUI_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugUI_Flags, "UnityEngine.Rendering", "DebugUI/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugUI/Flags
struct CORDL_TYPE DebugUI_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugUI_Flags_Unwrapped
enum struct __DebugUI_Flags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_EditorOnly = static_cast<int32_t>(0x2),
__E_RuntimeOnly = static_cast<int32_t>(0x4),
__E_EditorForceUpdate = static_cast<int32_t>(0x8),
__E_FrequentlyUsed = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugUI_Flags_Unwrapped () const noexcept {
return static_cast<__DebugUI_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugUI_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugUI_Flags(int32_t  value__) noexcept;

/// @brief Field EditorForceUpdate value: I32(8)
static ::GlobalNamespace::DebugUI_Flags const EditorForceUpdate;

/// @brief Field EditorOnly value: I32(2)
static ::GlobalNamespace::DebugUI_Flags const EditorOnly;

/// @brief Field FrequentlyUsed value: I32(16)
static ::GlobalNamespace::DebugUI_Flags const FrequentlyUsed;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::DebugUI_Flags const None;

/// @brief Field RuntimeOnly value: I32(4)
static ::GlobalNamespace::DebugUI_Flags const RuntimeOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16713};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugUI_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugUI_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

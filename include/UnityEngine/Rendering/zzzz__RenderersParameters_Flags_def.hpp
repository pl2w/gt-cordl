#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersParameters_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderersParameters_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct RenderersParameters_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderersParameters_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderersParameters_Flags, "UnityEngine.Rendering", "RenderersParameters/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderersParameters/Flags
struct CORDL_TYPE RenderersParameters_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderersParameters_Flags_Unwrapped
enum struct __RenderersParameters_Flags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_UseBoundingSphereParameter = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderersParameters_Flags_Unwrapped () const noexcept {
return static_cast<__RenderersParameters_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderersParameters_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderersParameters_Flags(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RenderersParameters_Flags const None;

/// @brief Field UseBoundingSphereParameter value: I32(1)
static ::GlobalNamespace::RenderersParameters_Flags const UseBoundingSphereParameter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26722};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderersParameters_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderersParameters_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

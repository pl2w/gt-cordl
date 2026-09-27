#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventTrace_FileFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventTrace_FileFlags)
// Forward declare root types
namespace GlobalNamespace {
struct InputEventTrace_FileFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputEventTrace_FileFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputEventTrace_FileFlags, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/FileFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace/FileFlags
struct CORDL_TYPE InputEventTrace_FileFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputEventTrace_FileFlags_Unwrapped
enum struct __InputEventTrace_FileFlags_Unwrapped : int32_t {
__E_FixedUpdate = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputEventTrace_FileFlags_Unwrapped () const noexcept {
return static_cast<__InputEventTrace_FileFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputEventTrace_FileFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputEventTrace_FileFlags(int32_t  value__) noexcept;

/// @brief Field FixedUpdate value: I32(1)
static ::GlobalNamespace::InputEventTrace_FileFlags const FixedUpdate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13763};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputEventTrace_FileFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputEventTrace_FileFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

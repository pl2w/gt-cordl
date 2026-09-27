#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXTypeAttribute_Usage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXTypeAttribute_Usage)
// Forward declare root types
namespace GlobalNamespace {
struct VFXTypeAttribute_Usage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VFXTypeAttribute_Usage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VFXTypeAttribute_Usage, "UnityEngine.VFX", "VFXTypeAttribute/Usage");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.VFXTypeAttribute/Usage
struct CORDL_TYPE VFXTypeAttribute_Usage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VFXTypeAttribute_Usage_Unwrapped
enum struct __VFXTypeAttribute_Usage_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x1),
__E_GraphicsBuffer = static_cast<int32_t>(0x2),
__E_ExcludeFromProperty = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VFXTypeAttribute_Usage_Unwrapped () const noexcept {
return static_cast<__VFXTypeAttribute_Usage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VFXTypeAttribute_Usage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VFXTypeAttribute_Usage(int32_t  value__) noexcept;

/// @brief Field Default value: I32(1)
static ::GlobalNamespace::VFXTypeAttribute_Usage const Default;

/// @brief Field ExcludeFromProperty value: I32(4)
static ::GlobalNamespace::VFXTypeAttribute_Usage const ExcludeFromProperty;

/// @brief Field GraphicsBuffer value: I32(2)
static ::GlobalNamespace::VFXTypeAttribute_Usage const GraphicsBuffer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30000};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VFXTypeAttribute_Usage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VFXTypeAttribute_Usage) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

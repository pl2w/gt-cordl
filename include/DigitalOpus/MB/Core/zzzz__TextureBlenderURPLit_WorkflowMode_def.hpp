#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderURPLit_WorkflowMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlenderURPLit_WorkflowMode)
// Forward declare root types
namespace GlobalNamespace {
struct TextureBlenderURPLit_WorkflowMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureBlenderURPLit_WorkflowMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureBlenderURPLit_WorkflowMode, "DigitalOpus.MB.Core", "TextureBlenderURPLit/WorkflowMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode
struct CORDL_TYPE TextureBlenderURPLit_WorkflowMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureBlenderURPLit_WorkflowMode_Unwrapped
enum struct __TextureBlenderURPLit_WorkflowMode_Unwrapped : int32_t {
__E_unknown = static_cast<int32_t>(0x0),
__E_metallic = static_cast<int32_t>(0x1),
__E_specular = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureBlenderURPLit_WorkflowMode_Unwrapped () const noexcept {
return static_cast<__TextureBlenderURPLit_WorkflowMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderURPLit_WorkflowMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextureBlenderURPLit_WorkflowMode(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22862};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field metallic value: I32(1)
static ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode const metallic;

/// @brief Field specular value: I32(2)
static ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode const specular;

/// @brief Field unknown value: I32(0)
static ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode const unknown;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureBlenderURPLit_WorkflowMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureBlenderURPLit_WorkflowMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

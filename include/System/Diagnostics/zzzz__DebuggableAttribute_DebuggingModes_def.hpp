#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggableAttribute_DebuggingModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebuggableAttribute_DebuggingModes)
// Forward declare root types
namespace GlobalNamespace {
struct DebuggableAttribute_DebuggingModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebuggableAttribute_DebuggingModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebuggableAttribute_DebuggingModes, "System.Diagnostics", "DebuggableAttribute/DebuggingModes");
// [ComVisible(true)]
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Diagnostics.DebuggableAttribute/DebuggingModes
struct CORDL_TYPE DebuggableAttribute_DebuggingModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebuggableAttribute_DebuggingModes_Unwrapped
enum struct __DebuggableAttribute_DebuggingModes_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Default = static_cast<int32_t>(0x1),
__E_DisableOptimizations = static_cast<int32_t>(0x100),
__E_IgnoreSymbolStoreSequencePoints = static_cast<int32_t>(0x2),
__E_EnableEditAndContinue = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebuggableAttribute_DebuggingModes_Unwrapped () const noexcept {
return static_cast<__DebuggableAttribute_DebuggingModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebuggableAttribute_DebuggingModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DebuggableAttribute_DebuggingModes(int32_t  value__) noexcept;

/// @brief Field Default value: I32(1)
static ::GlobalNamespace::DebuggableAttribute_DebuggingModes const Default;

/// @brief Field DisableOptimizations value: I32(256)
static ::GlobalNamespace::DebuggableAttribute_DebuggingModes const DisableOptimizations;

/// @brief Field EnableEditAndContinue value: I32(4)
static ::GlobalNamespace::DebuggableAttribute_DebuggingModes const EnableEditAndContinue;

/// @brief Field IgnoreSymbolStoreSequencePoints value: I32(2)
static ::GlobalNamespace::DebuggableAttribute_DebuggingModes const IgnoreSymbolStoreSequencePoints;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::DebuggableAttribute_DebuggingModes const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6784};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebuggableAttribute_DebuggingModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebuggableAttribute_DebuggingModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

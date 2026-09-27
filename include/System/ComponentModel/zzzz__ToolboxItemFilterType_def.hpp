#pragma once
// IWYU pragma private; include "System/ComponentModel/ToolboxItemFilterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ToolboxItemFilterType)
// Forward declare root types
namespace System::ComponentModel {
struct ToolboxItemFilterType;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::ToolboxItemFilterType);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ToolboxItemFilterType, "System.ComponentModel", "ToolboxItemFilterType");
// Dependencies 
namespace System::ComponentModel {
// Is value type: true
// CS Name: System.ComponentModel.ToolboxItemFilterType
struct CORDL_TYPE ToolboxItemFilterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ToolboxItemFilterType_Unwrapped
enum struct __ToolboxItemFilterType_Unwrapped : int32_t {
__E_Allow = static_cast<int32_t>(0x0),
__E_Custom = static_cast<int32_t>(0x1),
__E_Prevent = static_cast<int32_t>(0x2),
__E_Require = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ToolboxItemFilterType_Unwrapped () const noexcept {
return static_cast<__ToolboxItemFilterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ToolboxItemFilterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ToolboxItemFilterType(int32_t  value__) noexcept;

/// @brief Field Allow value: I32(0)
static ::System::ComponentModel::ToolboxItemFilterType const Allow;

/// @brief Field Custom value: I32(1)
static ::System::ComponentModel::ToolboxItemFilterType const Custom;

/// @brief Field Prevent value: I32(2)
static ::System::ComponentModel::ToolboxItemFilterType const Prevent;

/// @brief Field Require value: I32(3)
static ::System::ComponentModel::ToolboxItemFilterType const Require;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10233};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ToolboxItemFilterType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ToolboxItemFilterType) == 0x4, "Size mismatch!");

} // namespace end def System::ComponentModel

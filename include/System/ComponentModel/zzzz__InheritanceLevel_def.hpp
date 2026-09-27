#pragma once
// IWYU pragma private; include "System/ComponentModel/InheritanceLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InheritanceLevel)
// Forward declare root types
namespace System::ComponentModel {
struct InheritanceLevel;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::InheritanceLevel);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::InheritanceLevel, "System.ComponentModel", "InheritanceLevel");
// Dependencies 
namespace System::ComponentModel {
// Is value type: true
// CS Name: System.ComponentModel.InheritanceLevel
struct CORDL_TYPE InheritanceLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InheritanceLevel_Unwrapped
enum struct __InheritanceLevel_Unwrapped : int32_t {
__E_Inherited = static_cast<int32_t>(0x1),
__E_InheritedReadOnly = static_cast<int32_t>(0x2),
__E_NotInherited = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InheritanceLevel_Unwrapped () const noexcept {
return static_cast<__InheritanceLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InheritanceLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InheritanceLevel(int32_t  value__) noexcept;

/// @brief Field Inherited value: I32(1)
static ::System::ComponentModel::InheritanceLevel const Inherited;

/// @brief Field InheritedReadOnly value: I32(2)
static ::System::ComponentModel::InheritanceLevel const InheritedReadOnly;

/// @brief Field NotInherited value: I32(3)
static ::System::ComponentModel::InheritanceLevel const NotInherited;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::InheritanceLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::InheritanceLevel) == 0x4, "Size mismatch!");

} // namespace end def System::ComponentModel

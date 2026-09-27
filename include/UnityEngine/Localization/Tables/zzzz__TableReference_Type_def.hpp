#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/TableReference_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TableReference_Type)
// Forward declare root types
namespace GlobalNamespace {
struct TableReference_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TableReference_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TableReference_Type, "UnityEngine.Localization.Tables", "TableReference/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.Tables.TableReference/Type
struct CORDL_TYPE TableReference_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TableReference_Type_Unwrapped
enum struct __TableReference_Type_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_Guid = static_cast<int32_t>(0x1),
__E_Name = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TableReference_Type_Unwrapped () const noexcept {
return static_cast<__TableReference_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TableReference_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TableReference_Type(int32_t  value__) noexcept;

/// @brief Field Empty value: I32(0)
static ::GlobalNamespace::TableReference_Type const Empty;

/// @brief Field Guid value: I32(1)
static ::GlobalNamespace::TableReference_Type const Guid;

/// @brief Field Name value: I32(2)
static ::GlobalNamespace::TableReference_Type const Name;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25087};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TableReference_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TableReference_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

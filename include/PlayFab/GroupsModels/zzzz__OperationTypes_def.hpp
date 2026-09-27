#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/OperationTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OperationTypes)
// Forward declare root types
namespace PlayFab::GroupsModels {
struct OperationTypes;
}
// Write type traits
MARK_VAL_T(::PlayFab::GroupsModels::OperationTypes);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::OperationTypes, "PlayFab.GroupsModels", "OperationTypes");
// Dependencies 
namespace PlayFab::GroupsModels {
// Is value type: true
// CS Name: PlayFab.GroupsModels.OperationTypes
struct CORDL_TYPE OperationTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OperationTypes_Unwrapped
enum struct __OperationTypes_Unwrapped : int32_t {
__E_Created = static_cast<int32_t>(0x0),
__E_Updated = static_cast<int32_t>(0x1),
__E_Deleted = static_cast<int32_t>(0x2),
__E_None = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OperationTypes_Unwrapped () const noexcept {
return static_cast<__OperationTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OperationTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OperationTypes(int32_t  value__) noexcept;

/// @brief Field Created value: I32(0)
static ::PlayFab::GroupsModels::OperationTypes const Created;

/// @brief Field Deleted value: I32(2)
static ::PlayFab::GroupsModels::OperationTypes const Deleted;

/// @brief Field None value: I32(3)
static ::PlayFab::GroupsModels::OperationTypes const None;

/// @brief Field Updated value: I32(1)
static ::PlayFab::GroupsModels::OperationTypes const Updated;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19805};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::OperationTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::OperationTypes) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

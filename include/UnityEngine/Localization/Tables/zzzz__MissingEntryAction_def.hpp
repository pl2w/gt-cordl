#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/MissingEntryAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissingEntryAction)
// Forward declare root types
namespace UnityEngine::Localization::Tables {
struct MissingEntryAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::Tables::MissingEntryAction);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::MissingEntryAction, "UnityEngine.Localization.Tables", "MissingEntryAction");
// Dependencies 
namespace UnityEngine::Localization::Tables {
// Is value type: true
// CS Name: UnityEngine.Localization.Tables.MissingEntryAction
struct CORDL_TYPE MissingEntryAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MissingEntryAction_Unwrapped
enum struct __MissingEntryAction_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_AddEntriesToSharedData = static_cast<int32_t>(0x1),
__E_RemoveEntriesFromTable = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MissingEntryAction_Unwrapped () const noexcept {
return static_cast<__MissingEntryAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MissingEntryAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MissingEntryAction(int32_t  value__) noexcept;

/// @brief Field AddEntriesToSharedData value: I32(1)
static ::UnityEngine::Localization::Tables::MissingEntryAction const AddEntriesToSharedData;

/// @brief Field Nothing value: I32(0)
static ::UnityEngine::Localization::Tables::MissingEntryAction const Nothing;

/// @brief Field RemoveEntriesFromTable value: I32(2)
static ::UnityEngine::Localization::Tables::MissingEntryAction const RemoveEntriesFromTable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25074};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::MissingEntryAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::MissingEntryAction) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables

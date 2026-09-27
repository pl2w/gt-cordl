#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/EntryOverrideType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntryOverrideType)
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
struct EntryOverrideType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::Metadata::EntryOverrideType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::EntryOverrideType, "UnityEngine.Localization.Metadata", "EntryOverrideType");
// Dependencies 
namespace UnityEngine::Localization::Metadata {
// Is value type: true
// CS Name: UnityEngine.Localization.Metadata.EntryOverrideType
struct CORDL_TYPE EntryOverrideType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EntryOverrideType_Unwrapped
enum struct __EntryOverrideType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Table = static_cast<int32_t>(0x1),
__E_Entry = static_cast<int32_t>(0x2),
__E_TableAndEntry = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EntryOverrideType_Unwrapped () const noexcept {
return static_cast<__EntryOverrideType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EntryOverrideType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EntryOverrideType(int32_t  value__) noexcept;

/// @brief Field Entry value: I32(2)
static ::UnityEngine::Localization::Metadata::EntryOverrideType const Entry;

/// @brief Field None value: I32(0)
static ::UnityEngine::Localization::Metadata::EntryOverrideType const None;

/// @brief Field Table value: I32(1)
static ::UnityEngine::Localization::Metadata::EntryOverrideType const Table;

/// @brief Field TableAndEntry value: I32(3)
static ::UnityEngine::Localization::Metadata::EntryOverrideType const TableAndEntry;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::EntryOverrideType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::EntryOverrideType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata

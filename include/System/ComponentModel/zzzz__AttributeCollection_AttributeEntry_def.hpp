#pragma once
// IWYU pragma private; include "System/ComponentModel/AttributeCollection_AttributeEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCollection_AttributeEntry)
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
struct AttributeCollection_AttributeEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AttributeCollection_AttributeEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AttributeCollection_AttributeEntry, "System.ComponentModel", "AttributeCollection/AttributeEntry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.ComponentModel.AttributeCollection/AttributeEntry
struct CORDL_TYPE AttributeCollection_AttributeEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AttributeCollection_AttributeEntry() ;

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AttributeCollection_AttributeEntry(::System::Type*  type, int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field type, offset: 0x0, size: 0x8, def value: None
 ::System::Type*  type;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AttributeCollection_AttributeEntry, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AttributeCollection_AttributeEntry, index) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AttributeCollection_AttributeEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

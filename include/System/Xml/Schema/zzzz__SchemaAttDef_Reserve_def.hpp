#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaAttDef_Reserve.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaAttDef_Reserve)
// Forward declare root types
namespace GlobalNamespace {
struct SchemaAttDef_Reserve;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SchemaAttDef_Reserve);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SchemaAttDef_Reserve, "System.Xml.Schema", "SchemaAttDef/Reserve");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.SchemaAttDef/Reserve
struct CORDL_TYPE SchemaAttDef_Reserve {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SchemaAttDef_Reserve_Unwrapped
enum struct __SchemaAttDef_Reserve_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_XmlSpace = static_cast<int32_t>(0x1),
__E_XmlLang = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SchemaAttDef_Reserve_Unwrapped () const noexcept {
return static_cast<__SchemaAttDef_Reserve_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SchemaAttDef_Reserve() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SchemaAttDef_Reserve(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::SchemaAttDef_Reserve const None;

/// @brief Field XmlLang value: I32(2)
static ::GlobalNamespace::SchemaAttDef_Reserve const XmlLang;

/// @brief Field XmlSpace value: I32(1)
static ::GlobalNamespace::SchemaAttDef_Reserve const XmlSpace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14432};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SchemaAttDef_Reserve, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SchemaAttDef_Reserve) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaObjectTable_EnumeratorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaObjectTable_EnumeratorType)
// Forward declare root types
namespace GlobalNamespace {
struct XmlSchemaObjectTable_EnumeratorType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType, "System.Xml.Schema", "XmlSchemaObjectTable/EnumeratorType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaObjectTable/EnumeratorType
struct CORDL_TYPE XmlSchemaObjectTable_EnumeratorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlSchemaObjectTable_EnumeratorType_Unwrapped
enum struct __XmlSchemaObjectTable_EnumeratorType_Unwrapped : int32_t {
__E_Keys = static_cast<int32_t>(0x0),
__E_Values = static_cast<int32_t>(0x1),
__E_DictionaryEntry = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaObjectTable_EnumeratorType_Unwrapped () const noexcept {
return static_cast<__XmlSchemaObjectTable_EnumeratorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaObjectTable_EnumeratorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlSchemaObjectTable_EnumeratorType(int32_t  value__) noexcept;

/// @brief Field DictionaryEntry value: I32(2)
static ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType const DictionaryEntry;

/// @brief Field Keys value: I32(0)
static ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType const Keys;

/// @brief Field Values value: I32(1)
static ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType const Values;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14529};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

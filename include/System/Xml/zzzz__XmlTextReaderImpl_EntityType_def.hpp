#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_EntityType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextReaderImpl_EntityType)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextReaderImpl_EntityType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextReaderImpl_EntityType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextReaderImpl_EntityType, "System.Xml", "XmlTextReaderImpl/EntityType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextReaderImpl/EntityType
struct CORDL_TYPE XmlTextReaderImpl_EntityType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlTextReaderImpl_EntityType_Unwrapped
enum struct __XmlTextReaderImpl_EntityType_Unwrapped : int32_t {
__E_CharacterDec = static_cast<int32_t>(0x0),
__E_CharacterHex = static_cast<int32_t>(0x1),
__E_CharacterNamed = static_cast<int32_t>(0x2),
__E_Expanded = static_cast<int32_t>(0x3),
__E_Skipped = static_cast<int32_t>(0x4),
__E_FakeExpanded = static_cast<int32_t>(0x5),
__E_Unexpanded = static_cast<int32_t>(0x6),
__E_ExpandedInAttribute = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTextReaderImpl_EntityType_Unwrapped () const noexcept {
return static_cast<__XmlTextReaderImpl_EntityType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextReaderImpl_EntityType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextReaderImpl_EntityType(int32_t  value__) noexcept;

/// @brief Field CharacterDec value: I32(0)
static ::GlobalNamespace::XmlTextReaderImpl_EntityType const CharacterDec;

/// @brief Field CharacterHex value: I32(1)
static ::GlobalNamespace::XmlTextReaderImpl_EntityType const CharacterHex;

/// @brief Field CharacterNamed value: I32(2)
static ::GlobalNamespace::XmlTextReaderImpl_EntityType const CharacterNamed;

/// @brief Field Expanded value: I32(3)
static ::GlobalNamespace::XmlTextReaderImpl_EntityType const Expanded;

/// @brief Field ExpandedInAttribute value: I32(7)
static ::GlobalNamespace::XmlTextReaderImpl_EntityType const ExpandedInAttribute;

/// @brief Field FakeExpanded value: I32(5)
static ::GlobalNamespace::XmlTextReaderImpl_EntityType const FakeExpanded;

/// @brief Field Skipped value: I32(4)
static ::GlobalNamespace::XmlTextReaderImpl_EntityType const Skipped;

/// @brief Field Unexpanded value: I32(6)
static ::GlobalNamespace::XmlTextReaderImpl_EntityType const Unexpanded;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14053};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_EntityType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextReaderImpl_EntityType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

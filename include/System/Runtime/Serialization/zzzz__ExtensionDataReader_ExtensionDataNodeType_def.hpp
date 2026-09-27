#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ExtensionDataReader_ExtensionDataNodeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExtensionDataReader_ExtensionDataNodeType)
// Forward declare root types
namespace GlobalNamespace {
struct ExtensionDataReader_ExtensionDataNodeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType, "System.Runtime.Serialization", "ExtensionDataReader/ExtensionDataNodeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Runtime.Serialization.ExtensionDataReader/ExtensionDataNodeType
struct CORDL_TYPE ExtensionDataReader_ExtensionDataNodeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExtensionDataReader_ExtensionDataNodeType_Unwrapped
enum struct __ExtensionDataReader_ExtensionDataNodeType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Element = static_cast<int32_t>(0x1),
__E_EndElement = static_cast<int32_t>(0x2),
__E_Text = static_cast<int32_t>(0x3),
__E_Xml = static_cast<int32_t>(0x4),
__E_ReferencedElement = static_cast<int32_t>(0x5),
__E_NullElement = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExtensionDataReader_ExtensionDataNodeType_Unwrapped () const noexcept {
return static_cast<__ExtensionDataReader_ExtensionDataNodeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExtensionDataReader_ExtensionDataNodeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ExtensionDataReader_ExtensionDataNodeType(int32_t  value__) noexcept;

/// @brief Field Element value: I32(1)
static ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType const Element;

/// @brief Field EndElement value: I32(2)
static ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType const EndElement;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType const None;

/// @brief Field NullElement value: I32(6)
static ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType const NullElement;

/// @brief Field ReferencedElement value: I32(5)
static ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType const ReferencedElement;

/// @brief Field Text value: I32(3)
static ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType const Text;

/// @brief Field Xml value: I32(4)
static ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType const Xml;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24517};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

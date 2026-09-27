#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaInference_InferenceOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaInference_InferenceOption)
// Forward declare root types
namespace GlobalNamespace {
struct XmlSchemaInference_InferenceOption;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlSchemaInference_InferenceOption);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlSchemaInference_InferenceOption, "System.Xml.Schema", "XmlSchemaInference/InferenceOption");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaInference/InferenceOption
struct CORDL_TYPE XmlSchemaInference_InferenceOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlSchemaInference_InferenceOption_Unwrapped
enum struct __XmlSchemaInference_InferenceOption_Unwrapped : int32_t {
__E_Restricted = static_cast<int32_t>(0x0),
__E_Relaxed = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaInference_InferenceOption_Unwrapped () const noexcept {
return static_cast<__XmlSchemaInference_InferenceOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaInference_InferenceOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlSchemaInference_InferenceOption(int32_t  value__) noexcept;

/// @brief Field Relaxed value: I32(1)
static ::GlobalNamespace::XmlSchemaInference_InferenceOption const Relaxed;

/// @brief Field Restricted value: I32(0)
static ::GlobalNamespace::XmlSchemaInference_InferenceOption const Restricted;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14422};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlSchemaInference_InferenceOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlSchemaInference_InferenceOption) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaParticle_Occurs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaParticle_Occurs)
// Forward declare root types
namespace GlobalNamespace {
struct XmlSchemaParticle_Occurs;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlSchemaParticle_Occurs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlSchemaParticle_Occurs, "System.Xml.Schema", "XmlSchemaParticle/Occurs");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaParticle/Occurs
struct CORDL_TYPE XmlSchemaParticle_Occurs {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlSchemaParticle_Occurs_Unwrapped
enum struct __XmlSchemaParticle_Occurs_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Min = static_cast<int32_t>(0x1),
__E_Max = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaParticle_Occurs_Unwrapped () const noexcept {
return static_cast<__XmlSchemaParticle_Occurs_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaParticle_Occurs() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlSchemaParticle_Occurs(int32_t  value__) noexcept;

/// @brief Field Max value: I32(2)
static ::GlobalNamespace::XmlSchemaParticle_Occurs const Max;

/// @brief Field Min value: I32(1)
static ::GlobalNamespace::XmlSchemaParticle_Occurs const Min;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::XmlSchemaParticle_Occurs const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14535};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlSchemaParticle_Occurs, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlSchemaParticle_Occurs) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

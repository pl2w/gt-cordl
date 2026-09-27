#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaDeclBase_Use.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaDeclBase_Use)
// Forward declare root types
namespace GlobalNamespace {
struct SchemaDeclBase_Use;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SchemaDeclBase_Use);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SchemaDeclBase_Use, "System.Xml.Schema", "SchemaDeclBase/Use");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.SchemaDeclBase/Use
struct CORDL_TYPE SchemaDeclBase_Use {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SchemaDeclBase_Use_Unwrapped
enum struct __SchemaDeclBase_Use_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Required = static_cast<int32_t>(0x1),
__E_Implied = static_cast<int32_t>(0x2),
__E_Fixed = static_cast<int32_t>(0x3),
__E_RequiredFixed = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SchemaDeclBase_Use_Unwrapped () const noexcept {
return static_cast<__SchemaDeclBase_Use_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SchemaDeclBase_Use() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SchemaDeclBase_Use(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::SchemaDeclBase_Use const Default;

/// @brief Field Fixed value: I32(3)
static ::GlobalNamespace::SchemaDeclBase_Use const Fixed;

/// @brief Field Implied value: I32(2)
static ::GlobalNamespace::SchemaDeclBase_Use const Implied;

/// @brief Field Required value: I32(1)
static ::GlobalNamespace::SchemaDeclBase_Use const Required;

/// @brief Field RequiredFixed value: I32(4)
static ::GlobalNamespace::SchemaDeclBase_Use const RequiredFixed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SchemaDeclBase_Use, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SchemaDeclBase_Use) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Qpl_VariantType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Qpl_VariantType)
// Forward declare root types
namespace GlobalNamespace {
struct Qpl_OVRPlugin_VariantType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Qpl_OVRPlugin_VariantType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Qpl_OVRPlugin_VariantType, "", "OVRPlugin/Qpl/VariantType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Qpl/VariantType
struct CORDL_TYPE Qpl_OVRPlugin_VariantType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Qpl_OVRPlugin_VariantType_Unwrapped
enum struct __Qpl_OVRPlugin_VariantType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_String = static_cast<int32_t>(0x1),
__E_Int = static_cast<int32_t>(0x2),
__E_Double = static_cast<int32_t>(0x3),
__E_Bool = static_cast<int32_t>(0x4),
__E_StringArray = static_cast<int32_t>(0x5),
__E_IntArray = static_cast<int32_t>(0x6),
__E_DoubleArray = static_cast<int32_t>(0x7),
__E_BoolArray = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Qpl_OVRPlugin_VariantType_Unwrapped () const noexcept {
return static_cast<__Qpl_OVRPlugin_VariantType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Qpl_OVRPlugin_VariantType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Qpl_OVRPlugin_VariantType(int32_t  value__) noexcept;

/// @brief Field Bool value: I32(4)
static ::GlobalNamespace::Qpl_OVRPlugin_VariantType const Bool;

/// @brief Field BoolArray value: I32(8)
static ::GlobalNamespace::Qpl_OVRPlugin_VariantType const BoolArray;

/// @brief Field Double value: I32(3)
static ::GlobalNamespace::Qpl_OVRPlugin_VariantType const Double;

/// @brief Field DoubleArray value: I32(7)
static ::GlobalNamespace::Qpl_OVRPlugin_VariantType const DoubleArray;

/// @brief Field Int value: I32(2)
static ::GlobalNamespace::Qpl_OVRPlugin_VariantType const Int;

/// @brief Field IntArray value: I32(6)
static ::GlobalNamespace::Qpl_OVRPlugin_VariantType const IntArray;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Qpl_OVRPlugin_VariantType const None;

/// @brief Field String value: I32(1)
static ::GlobalNamespace::Qpl_OVRPlugin_VariantType const String;

/// @brief Field StringArray value: I32(5)
static ::GlobalNamespace::Qpl_OVRPlugin_VariantType const StringArray;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12265};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Qpl_OVRPlugin_VariantType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Qpl_OVRPlugin_VariantType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

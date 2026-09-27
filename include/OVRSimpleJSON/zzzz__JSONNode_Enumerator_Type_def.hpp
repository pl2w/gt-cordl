#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNode_Enumerator_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNode_Enumerator_Type)
// Forward declare root types
namespace GlobalNamespace {
struct Enumerator_JSONNode_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Enumerator_JSONNode_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Enumerator_JSONNode_Type, "OVRSimpleJSON", "JSONNode/Enumerator/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSimpleJSON.JSONNode/Enumerator/Type
struct CORDL_TYPE Enumerator_JSONNode_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Enumerator_JSONNode_Type_Unwrapped
enum struct __Enumerator_JSONNode_Type_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Array = static_cast<int32_t>(0x1),
__E_Object = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Enumerator_JSONNode_Type_Unwrapped () const noexcept {
return static_cast<__Enumerator_JSONNode_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Enumerator_JSONNode_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Enumerator_JSONNode_Type(int32_t  value__) noexcept;

/// @brief Field Array value: I32(1)
static ::GlobalNamespace::Enumerator_JSONNode_Type const Array;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Enumerator_JSONNode_Type const None;

/// @brief Field Object value: I32(2)
static ::GlobalNamespace::Enumerator_JSONNode_Type const Object;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12741};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Enumerator_JSONNode_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Enumerator_JSONNode_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

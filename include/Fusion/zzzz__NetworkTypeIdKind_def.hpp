#pragma once
// IWYU pragma private; include "Fusion/NetworkTypeIdKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkTypeIdKind)
// Forward declare root types
namespace Fusion {
struct NetworkTypeIdKind;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkTypeIdKind);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkTypeIdKind, "Fusion", "NetworkTypeIdKind");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkTypeIdKind
struct CORDL_TYPE NetworkTypeIdKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkTypeIdKind_Unwrapped
enum struct __NetworkTypeIdKind_Unwrapped : int32_t {
__E_Prefab = static_cast<int32_t>(0x0),
__E_Custom = static_cast<int32_t>(0x1),
__E_InternalStruct = static_cast<int32_t>(0x2),
__E_SceneObject = static_cast<int32_t>(0x3),
__E_Invalid = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkTypeIdKind_Unwrapped () const noexcept {
return static_cast<__NetworkTypeIdKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkTypeIdKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkTypeIdKind(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(1)
static ::Fusion::NetworkTypeIdKind const Custom;

/// @brief Field InternalStruct value: I32(2)
static ::Fusion::NetworkTypeIdKind const InternalStruct;

/// @brief Field Invalid value: I32(4)
static ::Fusion::NetworkTypeIdKind const Invalid;

/// @brief Field Prefab value: I32(0)
static ::Fusion::NetworkTypeIdKind const Prefab;

/// @brief Field SceneObject value: I32(3)
static ::Fusion::NetworkTypeIdKind const SceneObject;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19167};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkTypeIdKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkTypeIdKind) == 0x4, "Size mismatch!");

} // namespace end def Fusion

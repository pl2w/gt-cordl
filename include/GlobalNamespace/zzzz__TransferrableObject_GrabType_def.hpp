#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObject_GrabType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransferrableObject_GrabType)
// Forward declare root types
namespace GlobalNamespace {
struct TransferrableObject_GrabType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransferrableObject_GrabType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObject_GrabType, "", "TransferrableObject/GrabType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TransferrableObject/GrabType
struct CORDL_TYPE TransferrableObject_GrabType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TransferrableObject_GrabType_Unwrapped
enum struct __TransferrableObject_GrabType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Free = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransferrableObject_GrabType_Unwrapped () const noexcept {
return static_cast<__TransferrableObject_GrabType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObject_GrabType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransferrableObject_GrabType(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::TransferrableObject_GrabType const Default;

/// @brief Field Free value: I32(1)
static ::GlobalNamespace::TransferrableObject_GrabType const Free;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1362};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObject_GrabType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObject_GrabType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

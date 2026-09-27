#pragma once
// IWYU pragma private; include "GlobalNamespace/VisualEffectActivationBehaviour_AttributeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectActivationBehaviour_AttributeType)
// Forward declare root types
namespace GlobalNamespace {
struct VisualEffectActivationBehaviour_AttributeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType, "", "VisualEffectActivationBehaviour/AttributeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VisualEffectActivationBehaviour/AttributeType
struct CORDL_TYPE VisualEffectActivationBehaviour_AttributeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VisualEffectActivationBehaviour_AttributeType_Unwrapped
enum struct __VisualEffectActivationBehaviour_AttributeType_Unwrapped : int32_t {
__E_Float = static_cast<int32_t>(0x1),
__E_Float2 = static_cast<int32_t>(0x2),
__E_Float3 = static_cast<int32_t>(0x3),
__E_Float4 = static_cast<int32_t>(0x4),
__E_Int32 = static_cast<int32_t>(0x5),
__E_Uint32 = static_cast<int32_t>(0x6),
__E_Boolean = static_cast<int32_t>(0x11),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualEffectActivationBehaviour_AttributeType_Unwrapped () const noexcept {
return static_cast<__VisualEffectActivationBehaviour_AttributeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectActivationBehaviour_AttributeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualEffectActivationBehaviour_AttributeType(int32_t  value__) noexcept;

/// @brief Field Boolean value: I32(17)
static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Boolean;

/// @brief Field Float value: I32(1)
static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Float;

/// @brief Field Float2 value: I32(2)
static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Float2;

/// @brief Field Float3 value: I32(3)
static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Float3;

/// @brief Field Float4 value: I32(4)
static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Float4;

/// @brief Field Int32 value: I32(5)
static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Int32;

/// @brief Field Uint32 value: I32(6)
static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Uint32;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29987};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisOwner_AxisDescriptor_Hints.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IInputAxisOwner_AxisDescriptor_Hints)
// Forward declare root types
namespace GlobalNamespace {
struct AxisDescriptor_IInputAxisOwner_Hints;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints, "Unity.Cinemachine", "IInputAxisOwner/AxisDescriptor/Hints");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.IInputAxisOwner/AxisDescriptor/Hints
struct CORDL_TYPE AxisDescriptor_IInputAxisOwner_Hints {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisDescriptor_IInputAxisOwner_Hints_Unwrapped
enum struct __AxisDescriptor_IInputAxisOwner_Hints_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_X = static_cast<int32_t>(0x1),
__E_Y = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisDescriptor_IInputAxisOwner_Hints_Unwrapped () const noexcept {
return static_cast<__AxisDescriptor_IInputAxisOwner_Hints_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisDescriptor_IInputAxisOwner_Hints() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AxisDescriptor_IInputAxisOwner_Hints(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints const Default;

/// @brief Field X value: I32(1)
static ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints const X;

/// @brief Field Y value: I32(2)
static ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBlendDefinition_Styles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineBlendDefinition_Styles)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineBlendDefinition_Styles;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineBlendDefinition_Styles);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineBlendDefinition_Styles, "Unity.Cinemachine", "CinemachineBlendDefinition/Styles");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineBlendDefinition/Styles
struct CORDL_TYPE CinemachineBlendDefinition_Styles {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineBlendDefinition_Styles_Unwrapped
enum struct __CinemachineBlendDefinition_Styles_Unwrapped : int32_t {
__E_Cut = static_cast<int32_t>(0x0),
__E_EaseInOut = static_cast<int32_t>(0x1),
__E_EaseIn = static_cast<int32_t>(0x2),
__E_EaseOut = static_cast<int32_t>(0x3),
__E_HardIn = static_cast<int32_t>(0x4),
__E_HardOut = static_cast<int32_t>(0x5),
__E_Linear = static_cast<int32_t>(0x6),
__E_Custom = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineBlendDefinition_Styles_Unwrapped () const noexcept {
return static_cast<__CinemachineBlendDefinition_Styles_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBlendDefinition_Styles() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineBlendDefinition_Styles(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(7)
static ::GlobalNamespace::CinemachineBlendDefinition_Styles const Custom;

/// @brief Field Cut value: I32(0)
static ::GlobalNamespace::CinemachineBlendDefinition_Styles const Cut;

/// @brief Field EaseIn value: I32(2)
static ::GlobalNamespace::CinemachineBlendDefinition_Styles const EaseIn;

/// @brief Field EaseInOut value: I32(1)
static ::GlobalNamespace::CinemachineBlendDefinition_Styles const EaseInOut;

/// @brief Field EaseOut value: I32(3)
static ::GlobalNamespace::CinemachineBlendDefinition_Styles const EaseOut;

/// @brief Field HardIn value: I32(4)
static ::GlobalNamespace::CinemachineBlendDefinition_Styles const HardIn;

/// @brief Field HardOut value: I32(5)
static ::GlobalNamespace::CinemachineBlendDefinition_Styles const HardOut;

/// @brief Field Linear value: I32(6)
static ::GlobalNamespace::CinemachineBlendDefinition_Styles const Linear;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22267};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineBlendDefinition_Styles, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineBlendDefinition_Styles) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

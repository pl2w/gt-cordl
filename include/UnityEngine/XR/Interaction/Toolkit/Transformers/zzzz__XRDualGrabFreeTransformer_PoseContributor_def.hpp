#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRDualGrabFreeTransformer_PoseContributor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDualGrabFreeTransformer_PoseContributor)
// Forward declare root types
namespace GlobalNamespace {
struct XRDualGrabFreeTransformer_PoseContributor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRDualGrabFreeTransformer/PoseContributor");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRDualGrabFreeTransformer/PoseContributor
struct CORDL_TYPE XRDualGrabFreeTransformer_PoseContributor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRDualGrabFreeTransformer_PoseContributor_Unwrapped
enum struct __XRDualGrabFreeTransformer_PoseContributor_Unwrapped : int32_t {
__E_First = static_cast<int32_t>(0x0),
__E_Second = static_cast<int32_t>(0x1),
__E_Average = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRDualGrabFreeTransformer_PoseContributor_Unwrapped () const noexcept {
return static_cast<__XRDualGrabFreeTransformer_PoseContributor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRDualGrabFreeTransformer_PoseContributor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRDualGrabFreeTransformer_PoseContributor(int32_t  value__) noexcept;

/// @brief Field Average value: I32(2)
static ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor const Average;

/// @brief Field First value: I32(0)
static ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor const First;

/// @brief Field Second value: I32(1)
static ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor const Second;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11399};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

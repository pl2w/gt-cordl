#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem_LateLatchNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem_LateLatchNode)
// Forward declare root types
namespace GlobalNamespace {
struct XRDisplaySubsystem_LateLatchNode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRDisplaySubsystem_LateLatchNode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRDisplaySubsystem_LateLatchNode, "UnityEngine.XR", "XRDisplaySubsystem/LateLatchNode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/LateLatchNode
struct CORDL_TYPE XRDisplaySubsystem_LateLatchNode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRDisplaySubsystem_LateLatchNode_Unwrapped
enum struct __XRDisplaySubsystem_LateLatchNode_Unwrapped : int32_t {
__E_Head = static_cast<int32_t>(0x0),
__E_LeftHand = static_cast<int32_t>(0x1),
__E_RightHand = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRDisplaySubsystem_LateLatchNode_Unwrapped () const noexcept {
return static_cast<__XRDisplaySubsystem_LateLatchNode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRDisplaySubsystem_LateLatchNode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRDisplaySubsystem_LateLatchNode(int32_t  value__) noexcept;

/// @brief Field Head value: I32(0)
static ::GlobalNamespace::XRDisplaySubsystem_LateLatchNode const Head;

/// @brief Field LeftHand value: I32(1)
static ::GlobalNamespace::XRDisplaySubsystem_LateLatchNode const LeftHand;

/// @brief Field RightHand value: I32(2)
static ::GlobalNamespace::XRDisplaySubsystem_LateLatchNode const RightHand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31624};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_LateLatchNode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRDisplaySubsystem_LateLatchNode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

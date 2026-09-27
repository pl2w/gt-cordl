#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBoundary_Node.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBoundary_Node)
// Forward declare root types
namespace GlobalNamespace {
struct OVRBoundary_Node;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRBoundary_Node);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRBoundary_Node, "", "OVRBoundary/Node");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRBoundary/Node
struct CORDL_TYPE OVRBoundary_Node {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRBoundary_Node_Unwrapped
enum struct __OVRBoundary_Node_Unwrapped : int32_t {
__E_HandLeft = static_cast<int32_t>(0x3),
__E_HandRight = static_cast<int32_t>(0x4),
__E_Head = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRBoundary_Node_Unwrapped () const noexcept {
return static_cast<__OVRBoundary_Node_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRBoundary_Node() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRBoundary_Node(int32_t  value__) noexcept;

/// @brief Field HandLeft value: I32(3)
static ::GlobalNamespace::OVRBoundary_Node const HandLeft;

/// @brief Field HandRight value: I32(4)
static ::GlobalNamespace::OVRBoundary_Node const HandRight;

/// @brief Field Head value: I32(9)
static ::GlobalNamespace::OVRBoundary_Node const Head;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11867};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBoundary_Node, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRBoundary_Node) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

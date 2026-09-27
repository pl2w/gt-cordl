#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Node.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Node)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Node;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Node);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Node, "", "OVRPlugin/Node");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Node
struct CORDL_TYPE OVRPlugin_Node {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_Node_Unwrapped
enum struct __OVRPlugin_Node_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_EyeLeft = static_cast<int32_t>(0x0),
__E_EyeRight = static_cast<int32_t>(0x1),
__E_EyeCenter = static_cast<int32_t>(0x2),
__E_HandLeft = static_cast<int32_t>(0x3),
__E_HandRight = static_cast<int32_t>(0x4),
__E_TrackerZero = static_cast<int32_t>(0x5),
__E_TrackerOne = static_cast<int32_t>(0x6),
__E_TrackerTwo = static_cast<int32_t>(0x7),
__E_TrackerThree = static_cast<int32_t>(0x8),
__E_Head = static_cast<int32_t>(0x9),
__E_DeviceObjectZero = static_cast<int32_t>(0xa),
__E_TrackedKeyboard = static_cast<int32_t>(0xb),
__E_ControllerLeft = static_cast<int32_t>(0xc),
__E_ControllerRight = static_cast<int32_t>(0xd),
__E_Count = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_Node_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_Node_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Node() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Node(int32_t  value__) noexcept;

/// @brief Field ControllerLeft value: I32(12)
static ::GlobalNamespace::OVRPlugin_Node const ControllerLeft;

/// @brief Field ControllerRight value: I32(13)
static ::GlobalNamespace::OVRPlugin_Node const ControllerRight;

/// @brief Field Count value: I32(14)
static ::GlobalNamespace::OVRPlugin_Node const Count;

/// @brief Field DeviceObjectZero value: I32(10)
static ::GlobalNamespace::OVRPlugin_Node const DeviceObjectZero;

/// @brief Field EyeCenter value: I32(2)
static ::GlobalNamespace::OVRPlugin_Node const EyeCenter;

/// @brief Field EyeLeft value: I32(0)
static ::GlobalNamespace::OVRPlugin_Node const EyeLeft;

/// @brief Field EyeRight value: I32(1)
static ::GlobalNamespace::OVRPlugin_Node const EyeRight;

/// @brief Field HandLeft value: I32(3)
static ::GlobalNamespace::OVRPlugin_Node const HandLeft;

/// @brief Field HandRight value: I32(4)
static ::GlobalNamespace::OVRPlugin_Node const HandRight;

/// @brief Field Head value: I32(9)
static ::GlobalNamespace::OVRPlugin_Node const Head;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::OVRPlugin_Node const None;

/// @brief Field TrackedKeyboard value: I32(11)
static ::GlobalNamespace::OVRPlugin_Node const TrackedKeyboard;

/// @brief Field TrackerOne value: I32(6)
static ::GlobalNamespace::OVRPlugin_Node const TrackerOne;

/// @brief Field TrackerThree value: I32(8)
static ::GlobalNamespace::OVRPlugin_Node const TrackerThree;

/// @brief Field TrackerTwo value: I32(7)
static ::GlobalNamespace::OVRPlugin_Node const TrackerTwo;

/// @brief Field TrackerZero value: I32(5)
static ::GlobalNamespace::OVRPlugin_Node const TrackerZero;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12055};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Node, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Node) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

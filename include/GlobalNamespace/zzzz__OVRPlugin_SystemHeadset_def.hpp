#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SystemHeadset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SystemHeadset)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SystemHeadset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SystemHeadset);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SystemHeadset, "", "OVRPlugin/SystemHeadset");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SystemHeadset
struct CORDL_TYPE OVRPlugin_SystemHeadset {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_SystemHeadset_Unwrapped
enum struct __OVRPlugin_SystemHeadset_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Oculus_Quest = static_cast<int32_t>(0x8),
__E_Oculus_Quest_2 = static_cast<int32_t>(0x9),
__E_Meta_Quest_Pro = static_cast<int32_t>(0xa),
__E_Meta_Quest_3 = static_cast<int32_t>(0xb),
__E_Meta_Quest_3S = static_cast<int32_t>(0xc),
__E_Placeholder_13 = static_cast<int32_t>(0xd),
__E_Placeholder_14 = static_cast<int32_t>(0xe),
__E_Placeholder_15 = static_cast<int32_t>(0xf),
__E_Placeholder_16 = static_cast<int32_t>(0x10),
__E_Placeholder_17 = static_cast<int32_t>(0x11),
__E_Placeholder_18 = static_cast<int32_t>(0x12),
__E_Placeholder_19 = static_cast<int32_t>(0x13),
__E_Placeholder_20 = static_cast<int32_t>(0x14),
__E_Rift_DK1 = static_cast<int32_t>(0x1000),
__E_Rift_DK2 = static_cast<int32_t>(0x1001),
__E_Rift_CV1 = static_cast<int32_t>(0x1002),
__E_Rift_CB = static_cast<int32_t>(0x1003),
__E_Rift_S = static_cast<int32_t>(0x1004),
__E_Oculus_Link_Quest = static_cast<int32_t>(0x1005),
__E_Oculus_Link_Quest_2 = static_cast<int32_t>(0x1006),
__E_Meta_Link_Quest_Pro = static_cast<int32_t>(0x1007),
__E_Meta_Link_Quest_3 = static_cast<int32_t>(0x1008),
__E_Meta_Link_Quest_3S = static_cast<int32_t>(0x1009),
__E_PC_Placeholder_4106 = static_cast<int32_t>(0x100a),
__E_PC_Placeholder_4107 = static_cast<int32_t>(0x100b),
__E_PC_Placeholder_4108 = static_cast<int32_t>(0x100c),
__E_PC_Placeholder_4109 = static_cast<int32_t>(0x100d),
__E_PC_Placeholder_4110 = static_cast<int32_t>(0x100e),
__E_PC_Placeholder_4111 = static_cast<int32_t>(0x100f),
__E_PC_Placeholder_4112 = static_cast<int32_t>(0x1010),
__E_PC_Placeholder_4113 = static_cast<int32_t>(0x1011),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_SystemHeadset_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_SystemHeadset_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SystemHeadset() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SystemHeadset(int32_t  value__) noexcept;

/// @brief Field Meta_Link_Quest_3 value: I32(4104)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Meta_Link_Quest_3;

/// @brief Field Meta_Link_Quest_3S value: I32(4105)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Meta_Link_Quest_3S;

/// @brief Field Meta_Link_Quest_Pro value: I32(4103)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Meta_Link_Quest_Pro;

/// @brief Field Meta_Quest_3 value: I32(11)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Meta_Quest_3;

/// @brief Field Meta_Quest_3S value: I32(12)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Meta_Quest_3S;

/// @brief Field Meta_Quest_Pro value: I32(10)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Meta_Quest_Pro;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const None;

/// @brief Field Oculus_Link_Quest value: I32(4101)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Oculus_Link_Quest;

/// @brief Field Oculus_Link_Quest_2 value: I32(4102)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Oculus_Link_Quest_2;

/// @brief Field Oculus_Quest value: I32(8)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Oculus_Quest;

/// @brief Field Oculus_Quest_2 value: I32(9)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Oculus_Quest_2;

/// @brief Field PC_Placeholder_4106 value: I32(4106)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const PC_Placeholder_4106;

/// @brief Field PC_Placeholder_4107 value: I32(4107)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const PC_Placeholder_4107;

/// @brief Field PC_Placeholder_4108 value: I32(4108)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const PC_Placeholder_4108;

/// @brief Field PC_Placeholder_4109 value: I32(4109)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const PC_Placeholder_4109;

/// @brief Field PC_Placeholder_4110 value: I32(4110)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const PC_Placeholder_4110;

/// @brief Field PC_Placeholder_4111 value: I32(4111)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const PC_Placeholder_4111;

/// @brief Field PC_Placeholder_4112 value: I32(4112)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const PC_Placeholder_4112;

/// @brief Field PC_Placeholder_4113 value: I32(4113)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const PC_Placeholder_4113;

/// @brief Field Placeholder_13 value: I32(13)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Placeholder_13;

/// @brief Field Placeholder_14 value: I32(14)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Placeholder_14;

/// @brief Field Placeholder_15 value: I32(15)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Placeholder_15;

/// @brief Field Placeholder_16 value: I32(16)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Placeholder_16;

/// @brief Field Placeholder_17 value: I32(17)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Placeholder_17;

/// @brief Field Placeholder_18 value: I32(18)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Placeholder_18;

/// @brief Field Placeholder_19 value: I32(19)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Placeholder_19;

/// @brief Field Placeholder_20 value: I32(20)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Placeholder_20;

/// @brief Field Rift_CB value: I32(4099)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Rift_CB;

/// @brief Field Rift_CV1 value: I32(4098)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Rift_CV1;

/// @brief Field Rift_DK1 value: I32(4096)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Rift_DK1;

/// @brief Field Rift_DK2 value: I32(4097)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Rift_DK2;

/// @brief Field Rift_S value: I32(4100)
static ::GlobalNamespace::OVRPlugin_SystemHeadset const Rift_S;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SystemHeadset, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SystemHeadset) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

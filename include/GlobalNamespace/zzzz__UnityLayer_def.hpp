#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityLayer)
// Forward declare root types
namespace GlobalNamespace {
struct UnityLayer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityLayer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityLayer, "", "UnityLayer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityLayer
struct CORDL_TYPE UnityLayer {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityLayer_Unwrapped
enum struct __UnityLayer_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_TransparentFX = static_cast<int32_t>(0x1),
__E_IgnoreRaycast = static_cast<int32_t>(0x2),
__E_Water = static_cast<int32_t>(0x4),
__E_UI = static_cast<int32_t>(0x5),
__E_MeshBakerAtlas = static_cast<int32_t>(0x6),
__E_GorillaEquipment = static_cast<int32_t>(0x7),
__E_GorillaBodyCollider = static_cast<int32_t>(0x8),
__E_GorillaObject = static_cast<int32_t>(0x9),
__E_GorillaHand = static_cast<int32_t>(0xa),
__E_GorillaTrigger = static_cast<int32_t>(0xb),
__E_MetaReportScreen = static_cast<int32_t>(0xc),
__E_GorillaHead = static_cast<int32_t>(0xd),
__E_GorillaTagCollider = static_cast<int32_t>(0xe),
__E_GorillaBoundary = static_cast<int32_t>(0xf),
__E_GorillaEquipmentContainer = static_cast<int32_t>(0x10),
__E_LCKHide = static_cast<int32_t>(0x11),
__E_GorillaInteractable = static_cast<int32_t>(0x12),
__E_FirstPersonOnly = static_cast<int32_t>(0x13),
__E_GorillaParticle = static_cast<int32_t>(0x14),
__E_GorillaCosmetics = static_cast<int32_t>(0x15),
__E_MirrorOnly = static_cast<int32_t>(0x16),
__E_GorillaThrowable = static_cast<int32_t>(0x17),
__E_GorillaHandSocket = static_cast<int32_t>(0x18),
__E_GorillaCosmeticParticle = static_cast<int32_t>(0x19),
__E_BuilderProp = static_cast<int32_t>(0x1a),
__E_NoMirror = static_cast<int32_t>(0x1b),
__E_GorillaSlingshotCollider = static_cast<int32_t>(0x1c),
__E_RopeSwing = static_cast<int32_t>(0x1d),
__E_Prop = static_cast<int32_t>(0x1e),
__E_Bake = static_cast<int32_t>(0x1f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityLayer_Unwrapped () const noexcept {
return static_cast<__UnityLayer_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityLayer() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityLayer(int32_t  value__) noexcept;

/// @brief Field Bake value: I32(31)
static ::GlobalNamespace::UnityLayer const Bake;

/// @brief Field BuilderProp value: I32(26)
static ::GlobalNamespace::UnityLayer const BuilderProp;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::UnityLayer const Default;

/// @brief Field FirstPersonOnly value: I32(19)
static ::GlobalNamespace::UnityLayer const FirstPersonOnly;

/// @brief Field GorillaBodyCollider value: I32(8)
static ::GlobalNamespace::UnityLayer const GorillaBodyCollider;

/// @brief Field GorillaBoundary value: I32(15)
static ::GlobalNamespace::UnityLayer const GorillaBoundary;

/// @brief Field GorillaCosmeticParticle value: I32(25)
static ::GlobalNamespace::UnityLayer const GorillaCosmeticParticle;

/// @brief Field GorillaCosmetics value: I32(21)
static ::GlobalNamespace::UnityLayer const GorillaCosmetics;

/// @brief Field GorillaEquipment value: I32(7)
static ::GlobalNamespace::UnityLayer const GorillaEquipment;

/// @brief Field GorillaEquipmentContainer value: I32(16)
static ::GlobalNamespace::UnityLayer const GorillaEquipmentContainer;

/// @brief Field GorillaHand value: I32(10)
static ::GlobalNamespace::UnityLayer const GorillaHand;

/// @brief Field GorillaHandSocket value: I32(24)
static ::GlobalNamespace::UnityLayer const GorillaHandSocket;

/// @brief Field GorillaHead value: I32(13)
static ::GlobalNamespace::UnityLayer const GorillaHead;

/// @brief Field GorillaInteractable value: I32(18)
static ::GlobalNamespace::UnityLayer const GorillaInteractable;

/// @brief Field GorillaObject value: I32(9)
static ::GlobalNamespace::UnityLayer const GorillaObject;

/// @brief Field GorillaParticle value: I32(20)
static ::GlobalNamespace::UnityLayer const GorillaParticle;

/// @brief Field GorillaSlingshotCollider value: I32(28)
static ::GlobalNamespace::UnityLayer const GorillaSlingshotCollider;

/// @brief Field GorillaTagCollider value: I32(14)
static ::GlobalNamespace::UnityLayer const GorillaTagCollider;

/// @brief Field GorillaThrowable value: I32(23)
static ::GlobalNamespace::UnityLayer const GorillaThrowable;

/// @brief Field GorillaTrigger value: I32(11)
static ::GlobalNamespace::UnityLayer const GorillaTrigger;

/// @brief Field IgnoreRaycast value: I32(2)
static ::GlobalNamespace::UnityLayer const IgnoreRaycast;

/// @brief Field LCKHide value: I32(17)
static ::GlobalNamespace::UnityLayer const LCKHide;

/// @brief Field MeshBakerAtlas value: I32(6)
static ::GlobalNamespace::UnityLayer const MeshBakerAtlas;

/// @brief Field MetaReportScreen value: I32(12)
static ::GlobalNamespace::UnityLayer const MetaReportScreen;

/// @brief Field MirrorOnly value: I32(22)
static ::GlobalNamespace::UnityLayer const MirrorOnly;

/// @brief Field NoMirror value: I32(27)
static ::GlobalNamespace::UnityLayer const NoMirror;

/// @brief Field Prop value: I32(30)
static ::GlobalNamespace::UnityLayer const Prop;

/// @brief Field RopeSwing value: I32(29)
static ::GlobalNamespace::UnityLayer const RopeSwing;

/// @brief Field TransparentFX value: I32(1)
static ::GlobalNamespace::UnityLayer const TransparentFX;

/// @brief Field UI value: I32(5)
static ::GlobalNamespace::UnityLayer const UI;

/// @brief Field Water value: I32(4)
static ::GlobalNamespace::UnityLayer const Water;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityLayer, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityLayer) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

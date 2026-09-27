#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityLayerMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityLayerMask)
// Forward declare root types
namespace GlobalNamespace {
struct UnityLayerMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityLayerMask);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityLayerMask, "", "UnityLayerMask");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityLayerMask
struct CORDL_TYPE UnityLayerMask {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityLayerMask_Unwrapped
enum struct __UnityLayerMask_Unwrapped : int32_t {
__E_Everything = static_cast<int32_t>(0xffffffff),
__E_Nothing = static_cast<int32_t>(0x0),
__E_Default = static_cast<int32_t>(0x1),
__E_TransparentFX = static_cast<int32_t>(0x2),
__E_IgnoreRaycast = static_cast<int32_t>(0x4),
__E_Water = static_cast<int32_t>(0x10),
__E_UI = static_cast<int32_t>(0x20),
__E_MeshBakerAtlas = static_cast<int32_t>(0x40),
__E_GorillaEquipment = static_cast<int32_t>(0x80),
__E_GorillaBodyCollider = static_cast<int32_t>(0x100),
__E_GorillaObject = static_cast<int32_t>(0x200),
__E_GorillaHand = static_cast<int32_t>(0x400),
__E_GorillaTrigger = static_cast<int32_t>(0x800),
__E_MetaReportScreen = static_cast<int32_t>(0x1000),
__E_GorillaHead = static_cast<int32_t>(0x2000),
__E_GorillaTagCollider = static_cast<int32_t>(0x4000),
__E_GorillaBoundary = static_cast<int32_t>(0x8000),
__E_GorillaEquipmentContainer = static_cast<int32_t>(0x10000),
__E_LCKHide = static_cast<int32_t>(0x20000),
__E_GorillaInteractable = static_cast<int32_t>(0x40000),
__E_FirstPersonOnly = static_cast<int32_t>(0x80000),
__E_GorillaParticle = static_cast<int32_t>(0x100000),
__E_GorillaCosmetics = static_cast<int32_t>(0x200000),
__E_MirrorOnly = static_cast<int32_t>(0x400000),
__E_GorillaThrowable = static_cast<int32_t>(0x800000),
__E_GorillaHandSocket = static_cast<int32_t>(0x1000000),
__E_GorillaCosmeticParticle = static_cast<int32_t>(0x2000000),
__E_BuilderProp = static_cast<int32_t>(0x4000000),
__E_NoMirror = static_cast<int32_t>(0x8000000),
__E_GorillaSlingshotCollider = static_cast<int32_t>(0x10000000),
__E_RopeSwing = static_cast<int32_t>(0x20000000),
__E_Prop = static_cast<int32_t>(0x40000000),
__E_Bake = static_cast<int32_t>(0x80000000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityLayerMask_Unwrapped () const noexcept {
return static_cast<__UnityLayerMask_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityLayerMask() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityLayerMask(int32_t  value__) noexcept;

/// @brief Field Bake value: I32(-2147483648)
static ::GlobalNamespace::UnityLayerMask const Bake;

/// @brief Field BuilderProp value: I32(67108864)
static ::GlobalNamespace::UnityLayerMask const BuilderProp;

/// @brief Field Default value: I32(1)
static ::GlobalNamespace::UnityLayerMask const Default;

/// @brief Field Everything value: I32(-1)
static ::GlobalNamespace::UnityLayerMask const Everything;

/// @brief Field FirstPersonOnly value: I32(524288)
static ::GlobalNamespace::UnityLayerMask const FirstPersonOnly;

/// @brief Field GorillaBodyCollider value: I32(256)
static ::GlobalNamespace::UnityLayerMask const GorillaBodyCollider;

/// @brief Field GorillaBoundary value: I32(32768)
static ::GlobalNamespace::UnityLayerMask const GorillaBoundary;

/// @brief Field GorillaCosmeticParticle value: I32(33554432)
static ::GlobalNamespace::UnityLayerMask const GorillaCosmeticParticle;

/// @brief Field GorillaCosmetics value: I32(2097152)
static ::GlobalNamespace::UnityLayerMask const GorillaCosmetics;

/// @brief Field GorillaEquipment value: I32(128)
static ::GlobalNamespace::UnityLayerMask const GorillaEquipment;

/// @brief Field GorillaEquipmentContainer value: I32(65536)
static ::GlobalNamespace::UnityLayerMask const GorillaEquipmentContainer;

/// @brief Field GorillaHand value: I32(1024)
static ::GlobalNamespace::UnityLayerMask const GorillaHand;

/// @brief Field GorillaHandSocket value: I32(16777216)
static ::GlobalNamespace::UnityLayerMask const GorillaHandSocket;

/// @brief Field GorillaHead value: I32(8192)
static ::GlobalNamespace::UnityLayerMask const GorillaHead;

/// @brief Field GorillaInteractable value: I32(262144)
static ::GlobalNamespace::UnityLayerMask const GorillaInteractable;

/// @brief Field GorillaObject value: I32(512)
static ::GlobalNamespace::UnityLayerMask const GorillaObject;

/// @brief Field GorillaParticle value: I32(1048576)
static ::GlobalNamespace::UnityLayerMask const GorillaParticle;

/// @brief Field GorillaSlingshotCollider value: I32(268435456)
static ::GlobalNamespace::UnityLayerMask const GorillaSlingshotCollider;

/// @brief Field GorillaTagCollider value: I32(16384)
static ::GlobalNamespace::UnityLayerMask const GorillaTagCollider;

/// @brief Field GorillaThrowable value: I32(8388608)
static ::GlobalNamespace::UnityLayerMask const GorillaThrowable;

/// @brief Field GorillaTrigger value: I32(2048)
static ::GlobalNamespace::UnityLayerMask const GorillaTrigger;

/// @brief Field IgnoreRaycast value: I32(4)
static ::GlobalNamespace::UnityLayerMask const IgnoreRaycast;

/// @brief Field LCKHide value: I32(131072)
static ::GlobalNamespace::UnityLayerMask const LCKHide;

/// @brief Field MeshBakerAtlas value: I32(64)
static ::GlobalNamespace::UnityLayerMask const MeshBakerAtlas;

/// @brief Field MetaReportScreen value: I32(4096)
static ::GlobalNamespace::UnityLayerMask const MetaReportScreen;

/// @brief Field MirrorOnly value: I32(4194304)
static ::GlobalNamespace::UnityLayerMask const MirrorOnly;

/// @brief Field NoMirror value: I32(134217728)
static ::GlobalNamespace::UnityLayerMask const NoMirror;

/// @brief Field Nothing value: I32(0)
static ::GlobalNamespace::UnityLayerMask const Nothing;

/// @brief Field Prop value: I32(1073741824)
static ::GlobalNamespace::UnityLayerMask const Prop;

/// @brief Field RopeSwing value: I32(536870912)
static ::GlobalNamespace::UnityLayerMask const RopeSwing;

/// @brief Field TransparentFX value: I32(2)
static ::GlobalNamespace::UnityLayerMask const TransparentFX;

/// @brief Field UI value: I32(32)
static ::GlobalNamespace::UnityLayerMask const UI;

/// @brief Field Water value: I32(16)
static ::GlobalNamespace::UnityLayerMask const Water;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityLayerMask, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityLayerMask) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

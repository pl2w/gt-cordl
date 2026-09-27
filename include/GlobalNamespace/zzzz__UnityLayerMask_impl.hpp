#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityLayerMask.hpp"
#include "GlobalNamespace/zzzz__UnityLayerMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnityLayerMask::UnityLayerMask(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityLayerMask::UnityLayerMask()   {
}
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::Everything{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::Nothing{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::Default{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::TransparentFX{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::IgnoreRaycast{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::Water{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::UI{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::MeshBakerAtlas{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaEquipment{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaBodyCollider{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaObject{static_cast<int32_t>(0x200)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaHand{static_cast<int32_t>(0x400)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaTrigger{static_cast<int32_t>(0x800)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::MetaReportScreen{static_cast<int32_t>(0x1000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaHead{static_cast<int32_t>(0x2000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaTagCollider{static_cast<int32_t>(0x4000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaBoundary{static_cast<int32_t>(0x8000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaEquipmentContainer{static_cast<int32_t>(0x10000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::LCKHide{static_cast<int32_t>(0x20000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaInteractable{static_cast<int32_t>(0x40000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::FirstPersonOnly{static_cast<int32_t>(0x80000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaParticle{static_cast<int32_t>(0x100000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaCosmetics{static_cast<int32_t>(0x200000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::MirrorOnly{static_cast<int32_t>(0x400000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaThrowable{static_cast<int32_t>(0x800000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaHandSocket{static_cast<int32_t>(0x1000000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaCosmeticParticle{static_cast<int32_t>(0x2000000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::BuilderProp{static_cast<int32_t>(0x4000000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::NoMirror{static_cast<int32_t>(0x8000000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::GorillaSlingshotCollider{static_cast<int32_t>(0x10000000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::RopeSwing{static_cast<int32_t>(0x20000000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::Prop{static_cast<int32_t>(0x40000000)};
constexpr ::GlobalNamespace::UnityLayerMask  GlobalNamespace::UnityLayerMask::Bake{static_cast<int32_t>(0x80000000)};

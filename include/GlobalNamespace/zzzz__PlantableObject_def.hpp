#pragma once
// IWYU pragma private; include "GlobalNamespace/PlantableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlantableObject_AppliedColors_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlantableObject)
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PlantableObject_AppliedColors;
}
namespace GlobalNamespace {
class PlantableObject___c__DisplayClass38_0;
}
namespace GlobalNamespace {
class PlantablePoint;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlantableObject;
}
namespace GlobalNamespace {
class PlantableObject___c__DisplayClass38_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlantableObject*);
MARK_REF_T(::GlobalNamespace::PlantableObject___c__DisplayClass38_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlantableObject*, "", "PlantableObject");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlantableObject___c__DisplayClass38_0*, "", "PlantableObject/<>c__DisplayClass38_0");
// Dependencies PlantableObject::AppliedColors, TransferrableObject, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlantableObject
class CORDL_TYPE PlantableObject : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using AppliedColors = ::GlobalNamespace::PlantableObject_AppliedColors;

using __c__DisplayClass38_0 = ::GlobalNamespace::PlantableObject___c__DisplayClass38_0;

/// @brief Field _colorG, offset 0x368, size 0x10 
 __declspec(property(get=__cordl_internal_get__colorG, put=__cordl_internal_set__colorG)) ::UnityEngine::Color  _colorG;

/// @brief Field _colorR, offset 0x358, size 0x10 
 __declspec(property(get=__cordl_internal_get__colorR, put=__cordl_internal_set__colorR)) ::UnityEngine::Color  _colorR;

/// @brief Field <planted>k__BackingField, offset 0x378, size 0x1 
 __declspec(property(get=__cordl_internal_get__planted_k__BackingField, put=__cordl_internal_set__planted_k__BackingField)) bool  _planted_k__BackingField;

 __declspec(property(get=get_colorG, put=set_colorG)) ::UnityEngine::Color  colorG;

 __declspec(property(get=get_colorR, put=set_colorR)) ::UnityEngine::Color  colorR;

/// @brief Field currentDipIndex, offset 0x390, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentDipIndex, put=__cordl_internal_set_currentDipIndex)) int32_t  currentDipIndex;

/// @brief Field dippedColors, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_dippedColors, put=__cordl_internal_set_dippedColors)) ::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>  dippedColors;

/// @brief Field flagRenderer, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_flagRenderer, put=__cordl_internal_set_flagRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  flagRenderer;

/// @brief Field flagTip, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_flagTip, put=__cordl_internal_set_flagTip)) ::UnityW<::UnityEngine::Transform>  flagTip;

/// @brief Field materialPropertyBlock, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialPropertyBlock, put=__cordl_internal_set_materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock;

 __declspec(property(get=get_planted, put=set_planted)) bool  planted;

/// @brief Field point, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_point, put=__cordl_internal_set_point)) ::UnityW<::GlobalNamespace::PlantablePoint>  point;

/// @brief Field respawnAfterDuration, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnAfterDuration, put=__cordl_internal_set_respawnAfterDuration)) float_t  respawnAfterDuration;

/// @brief Field respawnAtTimestamp, offset 0x344, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnAtTimestamp, put=__cordl_internal_set_respawnAtTimestamp)) float_t  respawnAtTimestamp;

/// @brief Method AddBlack, addr 0x576234c, size 0x8, virtual false, abstract: false, final false
inline void AddBlack() ;

/// @brief Method AddBlue, addr 0x5762344, size 0x8, virtual false, abstract: false, final false
inline void AddBlue() ;

/// @brief Method AddColor, addr 0x57622d4, size 0x68, virtual false, abstract: false, final false
inline void AddColor(::GlobalNamespace::PlantableObject_AppliedColors  color) ;

/// @brief Method AddGreen, addr 0x576233c, size 0x8, virtual false, abstract: false, final false
inline void AddGreen() ;

/// @brief Method AddRed, addr 0x57622cc, size 0x8, virtual false, abstract: false, final false
inline void AddRed() ;

/// @brief Method AssureShaderStuff, addr 0x5761f3c, size 0x2ac, virtual false, abstract: false, final false
inline void AssureShaderStuff() ;

/// @brief Method Awake, addr 0x5761640, size 0x88, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateOutputColor, addr 0x57623e8, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::Color CalculateOutputColor() ;

/// @brief Method ClearColors, addr 0x576237c, size 0x6c, virtual false, abstract: false, final false
inline void ClearColors() ;

/// @brief Method DropItem, addr 0x57625f8, size 0x50, virtual true, abstract: false, final false
inline void DropItem() ;

/// @brief Method LateUpdateLocal, addr 0x5762a50, size 0x6c, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateShared, addr 0x5762c60, size 0x50, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::PlantableObject* New_ctor() ;

/// @brief Method OnGrab, addr 0x57630d0, size 0x4, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnOwnershipTransferred, addr 0x57638b0, size 0x134, virtual true, abstract: false, final false
inline void OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnSpawn, addr 0x57616f0, size 0x100, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method SetPlanted, addr 0x5762248, size 0x84, virtual false, abstract: false, final false
inline void SetPlanted(bool  newPlanted) ;

/// @brief Method ShouldBeKinematic, addr 0x5763838, size 0x3c, virtual true, abstract: false, final false
inline bool ShouldBeKinematic() ;

/// @brief Method UpdateDisplayedDippedColor, addr 0x5762354, size 0x28, virtual false, abstract: false, final false
inline void UpdateDisplayedDippedColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__colorG() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__colorG() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__colorR() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__colorR() ;

constexpr bool const& __cordl_internal_get__planted_k__BackingField() const;

constexpr bool& __cordl_internal_get__planted_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_currentDipIndex() const;

constexpr int32_t& __cordl_internal_get_currentDipIndex() ;

constexpr ::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors> const& __cordl_internal_get_dippedColors() const;

constexpr ::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>& __cordl_internal_get_dippedColors() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_flagRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_flagRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_flagTip() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_flagTip() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_materialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_materialPropertyBlock() ;

constexpr ::UnityW<::GlobalNamespace::PlantablePoint> const& __cordl_internal_get_point() const;

constexpr ::UnityW<::GlobalNamespace::PlantablePoint>& __cordl_internal_get_point() ;

constexpr float_t const& __cordl_internal_get_respawnAfterDuration() const;

constexpr float_t& __cordl_internal_get_respawnAfterDuration() ;

constexpr float_t const& __cordl_internal_get_respawnAtTimestamp() const;

constexpr float_t& __cordl_internal_get_respawnAtTimestamp() ;

constexpr void __cordl_internal_set__colorG(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__colorR(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__planted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_currentDipIndex(int32_t  value) ;

constexpr void __cordl_internal_set_dippedColors(::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>  value) ;

constexpr void __cordl_internal_set_flagRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_flagTip(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_point(::UnityW<::GlobalNamespace::PlantablePoint>  value) ;

constexpr void __cordl_internal_set_respawnAfterDuration(float_t  value) ;

constexpr void __cordl_internal_set_respawnAtTimestamp(float_t  value) ;

/// @brief Method .ctor, addr 0x5763d4c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_colorG, addr 0x5762210, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_colorG() ;

/// @brief Method get_colorR, addr 0x57621e8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_colorR() ;

/// [CompilerGenerated]
/// @brief Method get_planted, addr 0x5762238, size 0x8, virtual false, abstract: false, final false
inline bool get_planted() ;

/// @brief Method set_colorG, addr 0x5762224, size 0x14, virtual false, abstract: false, final false
inline void set_colorG(::UnityEngine::Color  value) ;

/// @brief Method set_colorR, addr 0x57621fc, size 0x14, virtual false, abstract: false, final false
inline void set_colorR(::UnityEngine::Color  value) ;

/// [CompilerGenerated]
/// @brief Method set_planted, addr 0x5762240, size 0x8, virtual false, abstract: false, final false
inline void set_planted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlantableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlantableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlantableObject(PlantableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlantableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlantableObject(PlantableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1347};

/// @brief Field point, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlantablePoint>  ___point;

/// @brief Field respawnAfterDuration, offset: 0x340, size: 0x4, def value: None
 float_t  ___respawnAfterDuration;

/// @brief Field respawnAtTimestamp, offset: 0x344, size: 0x4, def value: None
 float_t  ___respawnAtTimestamp;

/// @brief Field flagRenderer, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___flagRenderer;

/// @brief Field materialPropertyBlock, offset: 0x350, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___materialPropertyBlock;

/// [HideInInspector]
/// [SerializeReference]
/// @brief Field _colorR, offset: 0x358, size: 0x10, def value: None
 ::UnityEngine::Color  ____colorR;

/// [HideInInspector]
/// [SerializeReference]
/// @brief Field _colorG, offset: 0x368, size: 0x10, def value: None
 ::UnityEngine::Color  ____colorG;

/// [CompilerGenerated]
/// @brief Field <planted>k__BackingField, offset: 0x378, size: 0x1, def value: None
 bool  ____planted_k__BackingField;

/// @brief Field flagTip, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___flagTip;

/// @brief Field dippedColors, offset: 0x388, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>  ___dippedColors;

/// @brief Field currentDipIndex, offset: 0x390, size: 0x4, def value: None
 int32_t  ___currentDipIndex;

/// @brief Size padding 0x3c8 - 0x398 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlantableObject, ___point) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject, ___respawnAfterDuration) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject, ___respawnAtTimestamp) == 0x344, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject, ___flagRenderer) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject, ___materialPropertyBlock) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject, ____colorR) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject, ____colorG) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject, ____planted_k__BackingField) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject, ___flagTip) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject, ___dippedColors) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject, ___currentDipIndex) == 0x390, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlantableObject) == 0x3c8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlantableObject/<>c__DisplayClass38_0
class CORDL_TYPE PlantableObject___c__DisplayClass38_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PlantableObject>  __4__this;

/// @brief Field <>9__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::UnityEngine::Color>*  __9__1;

/// @brief Field toPlayer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_toPlayer, put=__cordl_internal_set_toPlayer)) ::GlobalNamespace::NetPlayer*  toPlayer;

static inline ::GlobalNamespace::PlantableObject___c__DisplayClass38_0* New_ctor() ;

/// @brief Method <OnOwnershipTransferred>b__0, addr 0x5763e94, size 0x118, virtual false, abstract: false, final false
inline void _OnOwnershipTransferred_b__0() ;

/// @brief Method <OnOwnershipTransferred>b__1, addr 0x5763fac, size 0x24, virtual false, abstract: false, final false
inline void _OnOwnershipTransferred_b__1(::UnityEngine::Color  color1) ;

constexpr ::UnityW<::GlobalNamespace::PlantableObject> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PlantableObject>& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get___9__1() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_toPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_toPlayer() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlantableObject>  value) ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_toPlayer(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x57639e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlantableObject___c__DisplayClass38_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlantableObject___c__DisplayClass38_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlantableObject___c__DisplayClass38_0(PlantableObject___c__DisplayClass38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlantableObject___c__DisplayClass38_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlantableObject___c__DisplayClass38_0(PlantableObject___c__DisplayClass38_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1346};

/// @brief Field toPlayer, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___toPlayer;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlantableObject>  _____4__this;

/// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlantableObject___c__DisplayClass38_0, ___toPlayer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject___c__DisplayClass38_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableObject___c__DisplayClass38_0, _____9__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlantableObject___c__DisplayClass38_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/FreeHoverboardInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FreeHoverboardInstance)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class FreeHoverboardInstance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FreeHoverboardInstance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FreeHoverboardInstance*, "", "FreeHoverboardInstance");
// Dependencies UnityEngine.Color, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FreeHoverboardInstance
class CORDL_TYPE FreeHoverboardInstance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Rigidbody, put=set_Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  Rigidbody;

/// @brief Field <Rigidbody>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Rigidbody_k__BackingField, put=__cordl_internal_set__Rigidbody_k__BackingField)) ::UnityW<::UnityEngine::Rigidbody>  _Rigidbody_k__BackingField;

/// @brief Field <boardColor>k__BackingField, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__boardColor_k__BackingField, put=__cordl_internal_set__boardColor_k__BackingField)) ::UnityEngine::Color  _boardColor_k__BackingField;

/// @brief Field avelocityDragWhileHovering, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_avelocityDragWhileHovering, put=__cordl_internal_set_avelocityDragWhileHovering)) float_t  avelocityDragWhileHovering;

 __declspec(property(get=get_boardColor, put=set_boardColor)) ::UnityEngine::Color  boardColor;

/// @brief Field boardIndex, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_boardIndex, put=__cordl_internal_set_boardIndex)) int32_t  boardIndex;

/// @brief Field boardMesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_boardMesh, put=__cordl_internal_set_boardMesh)) ::UnityW<::UnityEngine::MeshRenderer>  boardMesh;

/// @brief Field colorMaterial, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorMaterial, put=__cordl_internal_set_colorMaterial)) ::UnityW<::UnityEngine::Material>  colorMaterial;

/// @brief Field hasHoverPoint, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasHoverPoint, put=__cordl_internal_set_hasHoverPoint)) bool  hasHoverPoint;

/// @brief Field hoverHeight, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverHeight, put=__cordl_internal_set_hoverHeight)) float_t  hoverHeight;

/// @brief Field hoverNormal, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_hoverNormal, put=__cordl_internal_set_hoverNormal)) ::UnityEngine::Vector3  hoverNormal;

/// @brief Field hoverPoint, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_hoverPoint, put=__cordl_internal_set_hoverPoint)) ::UnityEngine::Vector3  hoverPoint;

/// @brief Field hoverRaycastMask, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverRaycastMask, put=__cordl_internal_set_hoverRaycastMask)) ::UnityEngine::LayerMask  hoverRaycastMask;

/// @brief Field hoverRotationLerp, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverRotationLerp, put=__cordl_internal_set_hoverRotationLerp)) float_t  hoverRotationLerp;

/// @brief Field ownerActorNumber, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ownerActorNumber, put=__cordl_internal_set_ownerActorNumber)) int32_t  ownerActorNumber;

/// @brief Field sphereCastCenter, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_sphereCastCenter, put=__cordl_internal_set_sphereCastCenter)) ::UnityEngine::Vector3  sphereCastCenter;

/// @brief Field sphereCastRadius, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sphereCastRadius, put=__cordl_internal_set_sphereCastRadius)) float_t  sphereCastRadius;

/// @brief Method Awake, addr 0x5953b84, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5953f44, size 0x3d4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::FreeHoverboardInstance* New_ctor() ;

/// @brief Method SetColor, addr 0x5953cb4, size 0x4c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  col) ;

/// @brief Method Update, addr 0x5953d00, size 0x244, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__Rigidbody_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__Rigidbody_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__boardColor_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__boardColor_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_avelocityDragWhileHovering() const;

constexpr float_t& __cordl_internal_get_avelocityDragWhileHovering() ;

constexpr int32_t const& __cordl_internal_get_boardIndex() const;

constexpr int32_t& __cordl_internal_get_boardIndex() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_boardMesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_boardMesh() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_colorMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_colorMaterial() ;

constexpr bool const& __cordl_internal_get_hasHoverPoint() const;

constexpr bool& __cordl_internal_get_hasHoverPoint() ;

constexpr float_t const& __cordl_internal_get_hoverHeight() const;

constexpr float_t& __cordl_internal_get_hoverHeight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_hoverNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_hoverNormal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_hoverPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_hoverPoint() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_hoverRaycastMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_hoverRaycastMask() ;

constexpr float_t const& __cordl_internal_get_hoverRotationLerp() const;

constexpr float_t& __cordl_internal_get_hoverRotationLerp() ;

constexpr int32_t const& __cordl_internal_get_ownerActorNumber() const;

constexpr int32_t& __cordl_internal_get_ownerActorNumber() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_sphereCastCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_sphereCastCenter() ;

constexpr float_t const& __cordl_internal_get_sphereCastRadius() const;

constexpr float_t& __cordl_internal_get_sphereCastRadius() ;

constexpr void __cordl_internal_set__Rigidbody_k__BackingField(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__boardColor_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_avelocityDragWhileHovering(float_t  value) ;

constexpr void __cordl_internal_set_boardIndex(int32_t  value) ;

constexpr void __cordl_internal_set_boardMesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_colorMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_hasHoverPoint(bool  value) ;

constexpr void __cordl_internal_set_hoverHeight(float_t  value) ;

constexpr void __cordl_internal_set_hoverNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_hoverPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_hoverRaycastMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_hoverRotationLerp(float_t  value) ;

constexpr void __cordl_internal_set_ownerActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_sphereCastCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_sphereCastRadius(float_t  value) ;

/// @brief Method .ctor, addr 0x5954318, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Rigidbody, addr 0x5953b5c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_Rigidbody() ;

/// [CompilerGenerated]
/// @brief Method get_boardColor, addr 0x5953b6c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_boardColor() ;

/// [CompilerGenerated]
/// @brief Method set_Rigidbody, addr 0x5953b64, size 0x8, virtual false, abstract: false, final false
inline void set_Rigidbody(::UnityEngine::Rigidbody*  value) ;

/// [CompilerGenerated]
/// @brief Method set_boardColor, addr 0x5953b78, size 0xc, virtual false, abstract: false, final false
inline void set_boardColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreeHoverboardInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreeHoverboardInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeHoverboardInstance(FreeHoverboardInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeHoverboardInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeHoverboardInstance(FreeHoverboardInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2309};

/// [CompilerGenerated]
/// @brief Field <Rigidbody>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____Rigidbody_k__BackingField;

/// @brief Field ownerActorNumber, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ownerActorNumber;

/// @brief Field boardIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___boardIndex;

/// [SerializeField]
/// @brief Field sphereCastCenter, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___sphereCastCenter;

/// [SerializeField]
/// @brief Field sphereCastRadius, offset: 0x3c, size: 0x4, def value: None
 float_t  ___sphereCastRadius;

/// [SerializeField]
/// @brief Field hoverRaycastMask, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___hoverRaycastMask;

/// [SerializeField]
/// @brief Field hoverHeight, offset: 0x44, size: 0x4, def value: None
 float_t  ___hoverHeight;

/// [SerializeField]
/// @brief Field hoverRotationLerp, offset: 0x48, size: 0x4, def value: None
 float_t  ___hoverRotationLerp;

/// [SerializeField]
/// @brief Field avelocityDragWhileHovering, offset: 0x4c, size: 0x4, def value: None
 float_t  ___avelocityDragWhileHovering;

/// [SerializeField]
/// @brief Field boardMesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___boardMesh;

/// [CompilerGenerated]
/// @brief Field <boardColor>k__BackingField, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ____boardColor_k__BackingField;

/// @brief Field colorMaterial, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___colorMaterial;

/// @brief Field hasHoverPoint, offset: 0x70, size: 0x1, def value: None
 bool  ___hasHoverPoint;

/// @brief Field hoverPoint, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___hoverPoint;

/// @brief Field hoverNormal, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___hoverNormal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ____Rigidbody_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___ownerActorNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___boardIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___sphereCastCenter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___sphereCastRadius) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___hoverRaycastMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___hoverHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___hoverRotationLerp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___avelocityDragWhileHovering) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___boardMesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ____boardColor_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___colorMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___hasHoverPoint) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___hoverPoint) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardInstance, ___hoverNormal) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FreeHoverboardInstance) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace

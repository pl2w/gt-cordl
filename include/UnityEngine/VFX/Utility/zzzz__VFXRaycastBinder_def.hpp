#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXRaycastBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXRaycastBinder_Space_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VFXRaycastBinder)
namespace GlobalNamespace {
struct VFXRaycastBinder_Space;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXRaycastBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXRaycastBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXRaycastBinder*, "UnityEngine.VFX.Utility", "VFXRaycastBinder");
// [AddComponentMenu("VFX/Property Binders/Raycast Binder")]
// [VFXBinder("Physics/Raycast")]
// Dependencies UnityEngine.LayerMask, UnityEngine.RaycastHit, UnityEngine.VFX.Utility.VFXBinderBase, UnityEngine.VFX.Utility.VFXRaycastBinder::Space, UnityEngine.Vector3
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXRaycastBinder
class CORDL_TYPE VFXRaycastBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
// Declarations
using Space = ::GlobalNamespace::VFXRaycastBinder_Space;

/// @brief Field Layers, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_Layers, put=__cordl_internal_set_Layers)) ::UnityEngine::LayerMask  Layers;

/// @brief Field MaxDistance, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxDistance, put=__cordl_internal_set_MaxDistance)) float_t  MaxDistance;

/// @brief Field RaycastDirection, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_RaycastDirection, put=__cordl_internal_set_RaycastDirection)) ::UnityEngine::Vector3  RaycastDirection;

/// @brief Field RaycastDirectionSpace, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_RaycastDirectionSpace, put=__cordl_internal_set_RaycastDirectionSpace)) ::GlobalNamespace::VFXRaycastBinder_Space  RaycastDirectionSpace;

/// @brief Field RaycastSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_RaycastSource, put=__cordl_internal_set_RaycastSource)) ::UnityW<::UnityEngine::GameObject>  RaycastSource;

 __declspec(property(get=get_TargetHit, put=set_TargetHit)) ::StringW  TargetHit;

 __declspec(property(get=get_TargetNormal, put=set_TargetNormal)) ::StringW  TargetNormal;

 __declspec(property(get=get_TargetPosition, put=set_TargetPosition)) ::StringW  TargetPosition;

/// @brief Field m_HitInfo, offset 0x70, size 0x2c 
 __declspec(property(get=__cordl_internal_get_m_HitInfo, put=__cordl_internal_set_m_HitInfo)) ::UnityEngine::RaycastHit  m_HitInfo;

/// @brief Field m_TargetHit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetHit, put=__cordl_internal_set_m_TargetHit)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_TargetHit;

/// @brief Field m_TargetNormal, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetNormal, put=__cordl_internal_set_m_TargetNormal)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_TargetNormal;

/// @brief Field m_TargetNormal_direction, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetNormal_direction, put=__cordl_internal_set_m_TargetNormal_direction)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_TargetNormal_direction;

/// @brief Field m_TargetPosition, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetPosition, put=__cordl_internal_set_m_TargetPosition)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_TargetPosition;

/// @brief Field m_TargetPosition_position, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetPosition_position, put=__cordl_internal_set_m_TargetPosition_position)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_TargetPosition_position;

/// @brief Method IsValid, addr 0xb3eaf68, size 0xdc, virtual true, abstract: false, final false
inline bool IsValid(::UnityEngine::VFX::VisualEffect*  component) ;

static inline ::UnityEngine::VFX::Utility::VFXRaycastBinder* New_ctor() ;

/// @brief Method OnEnable, addr 0xb3eaf4c, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xb3eaf64, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ToString, addr 0xb3eb29c, size 0x1bc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateBinding, addr 0xb3eb044, size 0x258, virtual true, abstract: false, final false
inline void UpdateBinding(::UnityEngine::VFX::VisualEffect*  component) ;

/// @brief Method UpdateSubProperties, addr 0xb3eae0c, size 0xb8, virtual false, abstract: false, final false
inline void UpdateSubProperties() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_Layers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_Layers() ;

constexpr float_t const& __cordl_internal_get_MaxDistance() const;

constexpr float_t& __cordl_internal_get_MaxDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RaycastDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RaycastDirection() ;

constexpr ::GlobalNamespace::VFXRaycastBinder_Space const& __cordl_internal_get_RaycastDirectionSpace() const;

constexpr ::GlobalNamespace::VFXRaycastBinder_Space& __cordl_internal_get_RaycastDirectionSpace() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_RaycastSource() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_RaycastSource() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_m_HitInfo() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_m_HitInfo() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetHit() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetHit() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetNormal() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetNormal() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetNormal_direction() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetNormal_direction() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetPosition() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetPosition() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetPosition_position() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetPosition_position() ;

constexpr void __cordl_internal_set_Layers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_MaxDistance(float_t  value) ;

constexpr void __cordl_internal_set_RaycastDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_RaycastDirectionSpace(::GlobalNamespace::VFXRaycastBinder_Space  value) ;

constexpr void __cordl_internal_set_RaycastSource(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_HitInfo(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_m_TargetHit(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

constexpr void __cordl_internal_set_m_TargetNormal(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

constexpr void __cordl_internal_set_m_TargetNormal_direction(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

constexpr void __cordl_internal_set_m_TargetPosition(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

constexpr void __cordl_internal_set_m_TargetPosition_position(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

/// @brief Method .ctor, addr 0xb3eb458, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TargetHit, addr 0xb3eaf0c, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_TargetHit() ;

/// @brief Method get_TargetNormal, addr 0xb3eaec4, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_TargetNormal() ;

/// @brief Method get_TargetPosition, addr 0xb3eadc4, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_TargetPosition() ;

/// @brief Method set_TargetHit, addr 0xb3eaf24, size 0x28, virtual false, abstract: false, final false
inline void set_TargetHit(::StringW  value) ;

/// @brief Method set_TargetNormal, addr 0xb3eaedc, size 0x30, virtual false, abstract: false, final false
inline void set_TargetNormal(::StringW  value) ;

/// @brief Method set_TargetPosition, addr 0xb3eaddc, size 0x30, virtual false, abstract: false, final false
inline void set_TargetPosition(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VFXRaycastBinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VFXRaycastBinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VFXRaycastBinder(VFXRaycastBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VFXRaycastBinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VFXRaycastBinder(VFXRaycastBinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30076};

/// [VFXPropertyBinding(new[] { "UnityEditor.VFX.Position" })]
/// [SerializeField]
/// @brief Field m_TargetPosition, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_TargetPosition;

/// [VFXPropertyBinding(new[] { "UnityEditor.VFX.DirectionType" })]
/// [SerializeField]
/// @brief Field m_TargetNormal, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_TargetNormal;

/// [VFXPropertyBinding(new[] { "System.Boolean" })]
/// [SerializeField]
/// @brief Field m_TargetHit, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_TargetHit;

/// @brief Field m_TargetPosition_position, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_TargetPosition_position;

/// @brief Field m_TargetNormal_direction, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_TargetNormal_direction;

/// @brief Field RaycastSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___RaycastSource;

/// @brief Field RaycastDirection, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RaycastDirection;

/// @brief Field RaycastDirectionSpace, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::VFXRaycastBinder_Space  ___RaycastDirectionSpace;

/// @brief Field Layers, offset: 0x68, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___Layers;

/// @brief Field MaxDistance, offset: 0x6c, size: 0x4, def value: None
 float_t  ___MaxDistance;

/// @brief Field m_HitInfo, offset: 0x70, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___m_HitInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_TargetPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_TargetNormal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_TargetHit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_TargetPosition_position) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_TargetNormal_direction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___RaycastSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___RaycastDirection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___RaycastDirectionSpace) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___Layers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___MaxDistance) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_HitInfo) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXRaycastBinder) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::VFX::Utility

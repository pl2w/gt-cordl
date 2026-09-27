#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXHierarchyAttributeMapBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXHierarchyAttributeMapBinder_RadiusMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXHierarchyAttributeMapBinder)
namespace GlobalNamespace {
struct VFXHierarchyAttributeMapBinder_Bone;
}
namespace GlobalNamespace {
struct VFXHierarchyAttributeMapBinder_RadiusMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXHierarchyAttributeMapBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*, "UnityEngine.VFX.Utility", "VFXHierarchyAttributeMapBinder");
// [AddComponentMenu("VFX/Property Binders/Hierarchy to Attribute Map Binder")]
// [VFXBinder("Point Cache/Hierarchy to Attribute Map")]
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase, UnityEngine.VFX.Utility.VFXHierarchyAttributeMapBinder::RadiusMode
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXHierarchyAttributeMapBinder
class CORDL_TYPE VFXHierarchyAttributeMapBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
// Declarations
using Bone = ::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone;

using RadiusMode = ::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode;

/// @brief Field DefaultRadius, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_DefaultRadius, put=__cordl_internal_set_DefaultRadius)) float_t  DefaultRadius;

/// @brief Field HierarchyRoot, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_HierarchyRoot, put=__cordl_internal_set_HierarchyRoot)) ::UnityW<::UnityEngine::Transform>  HierarchyRoot;

/// @brief Field MaximumDepth, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaximumDepth, put=__cordl_internal_set_MaximumDepth)) uint32_t  MaximumDepth;

/// @brief Field Radius, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) ::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode  Radius;

/// @brief Field bones, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_bones, put=__cordl_internal_set_bones)) ::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>*  bones;

/// @brief Field m_BoneCount, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BoneCount, put=__cordl_internal_set_m_BoneCount)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_BoneCount;

/// @brief Field m_PositionMap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PositionMap, put=__cordl_internal_set_m_PositionMap)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_PositionMap;

/// @brief Field m_RadiusPositionMap, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RadiusPositionMap, put=__cordl_internal_set_m_RadiusPositionMap)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_RadiusPositionMap;

/// @brief Field m_TargetPositionMap, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetPositionMap, put=__cordl_internal_set_m_TargetPositionMap)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_TargetPositionMap;

/// @brief Field position, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityW<::UnityEngine::Texture2D>  position;

/// @brief Field radius, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) ::UnityW<::UnityEngine::Texture2D>  radius;

/// @brief Field targetPosition, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPosition, put=__cordl_internal_set_targetPosition)) ::UnityW<::UnityEngine::Texture2D>  targetPosition;

/// @brief Method ChildrenOf, addr 0xb3e738c, size 0x470, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>* ChildrenOf(::UnityEngine::Transform*  source, uint32_t  depth) ;

/// @brief Method IsValid, addr 0xb3e7bc0, size 0xf8, virtual true, abstract: false, final false
inline bool IsValid(::UnityEngine::VFX::VisualEffect*  component) ;

static inline ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder* New_ctor() ;

/// @brief Method OnEnable, addr 0xb3e7238, size 0x1c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xb3e7388, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ToString, addr 0xb3e7d78, size 0xc0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateBinding, addr 0xb3e7cb8, size 0xc0, virtual true, abstract: false, final false
inline void UpdateBinding(::UnityEngine::VFX::VisualEffect*  component) ;

/// @brief Method UpdateData, addr 0xb3e77fc, size 0x3c4, virtual false, abstract: false, final false
inline void UpdateData() ;

/// @brief Method UpdateHierarchy, addr 0xb3e7254, size 0x134, virtual false, abstract: false, final false
inline void UpdateHierarchy() ;

constexpr float_t const& __cordl_internal_get_DefaultRadius() const;

constexpr float_t& __cordl_internal_get_DefaultRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_HierarchyRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_HierarchyRoot() ;

constexpr uint32_t const& __cordl_internal_get_MaximumDepth() const;

constexpr uint32_t& __cordl_internal_get_MaximumDepth() ;

constexpr ::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode const& __cordl_internal_get_Radius() const;

constexpr ::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode& __cordl_internal_get_Radius() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>* const& __cordl_internal_get_bones() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>*& __cordl_internal_get_bones() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_BoneCount() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_BoneCount() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_PositionMap() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_PositionMap() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_RadiusPositionMap() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_RadiusPositionMap() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetPositionMap() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetPositionMap() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_position() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_position() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_radius() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_radius() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_targetPosition() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_targetPosition() ;

constexpr void __cordl_internal_set_DefaultRadius(float_t  value) ;

constexpr void __cordl_internal_set_HierarchyRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_MaximumDepth(uint32_t  value) ;

constexpr void __cordl_internal_set_Radius(::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode  value) ;

constexpr void __cordl_internal_set_bones(::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>*  value) ;

constexpr void __cordl_internal_set_m_BoneCount(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

constexpr void __cordl_internal_set_m_PositionMap(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

constexpr void __cordl_internal_set_m_RadiusPositionMap(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

constexpr void __cordl_internal_set_m_TargetPositionMap(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

constexpr void __cordl_internal_set_position(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_radius(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_targetPosition(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0xb3e7e38, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VFXHierarchyAttributeMapBinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VFXHierarchyAttributeMapBinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VFXHierarchyAttributeMapBinder(VFXHierarchyAttributeMapBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VFXHierarchyAttributeMapBinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VFXHierarchyAttributeMapBinder(VFXHierarchyAttributeMapBinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30063};

/// [VFXPropertyBinding(new[] { "System.UInt32" })]
/// [SerializeField]
/// @brief Field m_BoneCount, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_BoneCount;

/// [VFXPropertyBinding(new[] { "UnityEngine.Texture2D" })]
/// [SerializeField]
/// @brief Field m_PositionMap, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_PositionMap;

/// [VFXPropertyBinding(new[] { "UnityEngine.Texture2D" })]
/// [SerializeField]
/// @brief Field m_TargetPositionMap, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_TargetPositionMap;

/// [VFXPropertyBinding(new[] { "UnityEngine.Texture2D" })]
/// [SerializeField]
/// @brief Field m_RadiusPositionMap, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_RadiusPositionMap;

/// @brief Field HierarchyRoot, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___HierarchyRoot;

/// @brief Field DefaultRadius, offset: 0x50, size: 0x4, def value: None
 float_t  ___DefaultRadius;

/// @brief Field MaximumDepth, offset: 0x54, size: 0x4, def value: None
 uint32_t  ___MaximumDepth;

/// @brief Field Radius, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode  ___Radius;

/// @brief Field position, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___position;

/// @brief Field targetPosition, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___targetPosition;

/// @brief Field radius, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___radius;

/// @brief Field bones, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>*  ___bones;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___m_BoneCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___m_PositionMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___m_TargetPositionMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___m_RadiusPositionMap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___HierarchyRoot) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___DefaultRadius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___MaximumDepth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___Radius) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___position) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___targetPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___radius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___bones) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::VFX::Utility

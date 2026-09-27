#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineInstantiate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_AlignAxis_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_InstantiableItem_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_Method_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_Space_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_Vector3Offset_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineInstantiate)
namespace GlobalNamespace {
struct SplineComponent_AlignAxis;
}
namespace GlobalNamespace {
struct SplineInstantiate_InstantiableItem;
}
namespace GlobalNamespace {
struct SplineInstantiate_Method;
}
namespace GlobalNamespace {
struct SplineInstantiate_OffsetSpace;
}
namespace GlobalNamespace {
struct SplineInstantiate_Space;
}
namespace GlobalNamespace {
struct SplineInstantiate_Vector3Offset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
class SplineInstantiate___c;
}
namespace UnityEngine::Splines {
struct SplineModification;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineInstantiate;
}
namespace UnityEngine::Splines {
class SplineInstantiate___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineInstantiate*);
MARK_REF_T(::UnityEngine::Splines::SplineInstantiate___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineInstantiate*, "UnityEngine.Splines", "SplineInstantiate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineInstantiate___c*, "UnityEngine.Splines", "SplineInstantiate/<>c");
// [ExecuteInEditMode]
// [AddComponentMenu("Splines/Spline Instantiate")]
// Dependencies UnityEngine.Splines.SplineComponent, UnityEngine.Splines.SplineComponent::AlignAxis, UnityEngine.Splines.SplineInstantiate::InstantiableItem, UnityEngine.Splines.SplineInstantiate::Method, UnityEngine.Splines.SplineInstantiate::Space, UnityEngine.Splines.SplineInstantiate::Vector3Offset, UnityEngine.Vector2
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineInstantiate
class CORDL_TYPE SplineInstantiate : public ::UnityEngine::Splines::SplineComponent {
public:
// Declarations
using InstantiableItem = ::GlobalNamespace::SplineInstantiate_InstantiableItem;

using Method = ::GlobalNamespace::SplineInstantiate_Method;

using OffsetSpace = ::GlobalNamespace::SplineInstantiate_OffsetSpace;

using Space = ::GlobalNamespace::SplineInstantiate_Space;

using Vector3Offset = ::GlobalNamespace::SplineInstantiate_Vector3Offset;

using __c = ::UnityEngine::Splines::SplineInstantiate___c;

 __declspec(property(get=get_Container, put=set_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  Container;

 __declspec(property(get=get_CoordinateSpace, put=set_CoordinateSpace)) ::GlobalNamespace::SplineInstantiate_Space  CoordinateSpace;

 __declspec(property(get=get_ForwardAxis, put=set_ForwardAxis)) ::GlobalNamespace::SplineComponent_AlignAxis  ForwardAxis;

 __declspec(property(get=get_InstancesRoot)) ::UnityW<::UnityEngine::GameObject>  InstancesRoot;

 __declspec(property(get=get_InstantiateMethod, put=set_InstantiateMethod)) ::GlobalNamespace::SplineInstantiate_Method  InstantiateMethod;

 __declspec(property(get=get_MaxPositionOffset, put=set_MaxPositionOffset)) ::UnityEngine::Vector3  MaxPositionOffset;

 __declspec(property(get=get_MaxRotationOffset, put=set_MaxRotationOffset)) ::UnityEngine::Vector3  MaxRotationOffset;

 __declspec(property(get=get_MaxScaleOffset, put=set_MaxScaleOffset)) ::UnityEngine::Vector3  MaxScaleOffset;

 __declspec(property(get=get_MaxSpacing, put=set_MaxSpacing)) float_t  MaxSpacing;

 __declspec(property(get=get_MinPositionOffset, put=set_MinPositionOffset)) ::UnityEngine::Vector3  MinPositionOffset;

 __declspec(property(get=get_MinRotationOffset, put=set_MinRotationOffset)) ::UnityEngine::Vector3  MinRotationOffset;

 __declspec(property(get=get_MinScaleOffset, put=set_MinScaleOffset)) ::UnityEngine::Vector3  MinScaleOffset;

 __declspec(property(get=get_MinSpacing, put=set_MinSpacing)) float_t  MinSpacing;

 __declspec(property(get=get_PositionSpace, put=set_PositionSpace)) ::GlobalNamespace::SplineInstantiate_OffsetSpace  PositionSpace;

 __declspec(property(get=get_RotationSpace, put=set_RotationSpace)) ::GlobalNamespace::SplineInstantiate_OffsetSpace  RotationSpace;

 __declspec(property(get=get_ScaleSpace, put=set_ScaleSpace)) ::GlobalNamespace::SplineInstantiate_OffsetSpace  ScaleSpace;

 __declspec(property(get=get_Seed, put=set_Seed)) int32_t  Seed;

 __declspec(property(get=get_UpAxis, put=set_UpAxis)) ::GlobalNamespace::SplineComponent_AlignAxis  UpAxis;

/// @brief [Obsolete("Use Container instead.", false)]
 __declspec(property(get=get_container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  container;

/// @brief [Obsolete("Use ForwardAxis instead.", false)]
 __declspec(property(get=get_forwardAxis)) ::GlobalNamespace::SplineComponent_AlignAxis  forwardAxis;

 __declspec(property(get=get_instances)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  instances;

 __declspec(property(get=get_instancesRootTransform)) ::UnityW<::UnityEngine::Transform>  instancesRootTransform;

 __declspec(property(get=get_itemsToInstantiate, put=set_itemsToInstantiate)) ::ArrayW<::GlobalNamespace::SplineInstantiate_InstantiableItem>  itemsToInstantiate;

/// @brief Field m_AutoRefresh, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoRefresh, put=__cordl_internal_set_m_AutoRefresh)) bool  m_AutoRefresh;

/// @brief Field m_Container, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Container, put=__cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  m_Container;

/// @brief Field m_CurrentItem, offset 0xe0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_CurrentItem, put=__cordl_internal_set_m_CurrentItem)) ::GlobalNamespace::SplineInstantiate_InstantiableItem  m_CurrentItem;

/// @brief Field m_DeprecatedInstances, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeprecatedInstances, put=__cordl_internal_set_m_DeprecatedInstances)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  m_DeprecatedInstances;

/// @brief Field m_Forward, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Forward, put=__cordl_internal_set_m_Forward)) ::GlobalNamespace::SplineComponent_AlignAxis  m_Forward;

/// @brief Field m_Instances, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Instances, put=__cordl_internal_set_m_Instances)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  m_Instances;

/// @brief Field m_InstancesCacheDirty, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InstancesCacheDirty, put=__cordl_internal_set_m_InstancesCacheDirty)) bool  m_InstancesCacheDirty;

/// @brief Field m_InstancesRoot, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstancesRoot, put=__cordl_internal_set_m_InstancesRoot)) ::UnityW<::UnityEngine::GameObject>  m_InstancesRoot;

/// @brief Field m_ItemsToInstantiate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ItemsToInstantiate, put=__cordl_internal_set_m_ItemsToInstantiate)) ::System::Collections::Generic::List_1<::GlobalNamespace::SplineInstantiate_InstantiableItem>*  m_ItemsToInstantiate;

/// @brief Field m_LengthsCache, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LengthsCache, put=__cordl_internal_set_m_LengthsCache)) ::System::Collections::Generic::List_1<float_t>*  m_LengthsCache;

/// @brief Field m_MaxProbability, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxProbability, put=__cordl_internal_set_m_MaxProbability)) float_t  m_MaxProbability;

/// @brief Field m_Method, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Method, put=__cordl_internal_set_m_Method)) ::GlobalNamespace::SplineInstantiate_Method  m_Method;

/// @brief Field m_PositionOffset, offset 0x50, size 0x24 
 __declspec(property(get=__cordl_internal_get_m_PositionOffset, put=__cordl_internal_set_m_PositionOffset)) ::GlobalNamespace::SplineInstantiate_Vector3Offset  m_PositionOffset;

/// @brief Field m_RotationOffset, offset 0x74, size 0x24 
 __declspec(property(get=__cordl_internal_get_m_RotationOffset, put=__cordl_internal_set_m_RotationOffset)) ::GlobalNamespace::SplineInstantiate_Vector3Offset  m_RotationOffset;

/// @brief Field m_ScaleOffset, offset 0x98, size 0x24 
 __declspec(property(get=__cordl_internal_get_m_ScaleOffset, put=__cordl_internal_set_m_ScaleOffset)) ::GlobalNamespace::SplineInstantiate_Vector3Offset  m_ScaleOffset;

/// @brief Field m_Seed, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Seed, put=__cordl_internal_set_m_Seed)) int32_t  m_Seed;

/// @brief Field m_Space, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Space, put=__cordl_internal_set_m_Space)) ::GlobalNamespace::SplineInstantiate_Space  m_Space;

/// @brief Field m_Spacing, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Spacing, put=__cordl_internal_set_m_Spacing)) ::UnityEngine::Vector2  m_Spacing;

/// @brief Field m_SplineDirty, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SplineDirty, put=__cordl_internal_set_m_SplineDirty)) bool  m_SplineDirty;

/// @brief Field m_TimesCache, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TimesCache, put=__cordl_internal_set_m_TimesCache)) ::System::Collections::Generic::List_1<float_t>*  m_TimesCache;

/// @brief Field m_Up, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Up, put=__cordl_internal_set_m_Up)) ::GlobalNamespace::SplineComponent_AlignAxis  m_Up;

/// @brief [Obsolete("Use MaxPositionOffset instead.", false)]
 __declspec(property(get=get_maxPositionOffset)) ::UnityEngine::Vector3  maxPositionOffset;

 __declspec(property(get=get_maxProbability, put=set_maxProbability)) float_t  maxProbability;

/// @brief [Obsolete("Use MaxRotationOffset instead.", false)]
 __declspec(property(get=get_maxRotationOffset)) ::UnityEngine::Vector3  maxRotationOffset;

/// @brief [Obsolete("Use MaxScaleOffset instead.", false)]
 __declspec(property(get=get_maxScaleOffset)) ::UnityEngine::Vector3  maxScaleOffset;

/// @brief [Obsolete("Use InstantiateMethod instead.", false)]
 __declspec(property(get=get_method)) ::GlobalNamespace::SplineInstantiate_Method  method;

/// @brief [Obsolete("Use MinPositionOffset instead.", false)]
 __declspec(property(get=get_minPositionOffset)) ::UnityEngine::Vector3  minPositionOffset;

/// @brief [Obsolete("Use MinRotationOffset instead.", false)]
 __declspec(property(get=get_minRotationOffset)) ::UnityEngine::Vector3  minRotationOffset;

/// @brief [Obsolete("Use MinScaleOffset instead.", false)]
 __declspec(property(get=get_minScaleOffset)) ::UnityEngine::Vector3  minScaleOffset;

/// @brief [Obsolete("Use PositionSpace instead.", false)]
 __declspec(property(get=get_positionSpace)) ::GlobalNamespace::SplineInstantiate_OffsetSpace  positionSpace;

/// @brief [Obsolete("Use RotationSpace instead.", false)]
 __declspec(property(get=get_rotationSpace)) ::GlobalNamespace::SplineInstantiate_OffsetSpace  rotationSpace;

/// @brief [Obsolete("Use ScaleSpace instead.", false)]
 __declspec(property(get=get_scaleSpace)) ::GlobalNamespace::SplineInstantiate_OffsetSpace  scaleSpace;

/// @brief [Obsolete("Use CoordinateSpace instead.", false)]
 __declspec(property(get=get_space)) ::GlobalNamespace::SplineInstantiate_Space  space;

/// @brief [Obsolete("Use UpAxis instead.", false)]
 __declspec(property(get=get_upAxis)) ::GlobalNamespace::SplineComponent_AlignAxis  upAxis;

/// @brief Method CheckChildrenValidity, addr 0xb321e74, size 0x388, virtual false, abstract: false, final false
inline void CheckChildrenValidity() ;

/// @brief Method Clear, addr 0xb324670, size 0xc, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearDeprecatedInstances, addr 0xb324d60, size 0x18c, virtual false, abstract: false, final false
inline void ClearDeprecatedInstances() ;

/// @brief Method EnsureItemsValidity, addr 0xb324724, size 0x330, virtual false, abstract: false, final false
inline void EnsureItemsValidity() ;

/// @brief Method GetCustomSpaceAxis, addr 0xb325220, size 0x260, virtual false, abstract: false, final false
inline void GetCustomSpaceAxis(::GlobalNamespace::SplineInstantiate_OffsetSpace  space, ::Unity::Mathematics::float3  splineUp, ::Unity::Mathematics::float3  direction, ::UnityEngine::Transform*  instanceTransform, ::by_ref<::Unity::Mathematics::float3>  customUp, ::by_ref<::Unity::Mathematics::float3>  customForward) ;

/// @brief Method GetPrefabIndex, addr 0xb325480, size 0x120, virtual false, abstract: false, final false
inline int32_t GetPrefabIndex() ;

/// @brief Method InitContainer, addr 0xb324b18, size 0xa4, virtual false, abstract: false, final false
inline void InitContainer() ;

static inline ::UnityEngine::Splines::SplineInstantiate* New_ctor() ;

/// @brief Method OnDisable, addr 0xb3245e4, size 0x8c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb321dd8, size 0x9c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSplineChanged, addr 0xb3255a0, size 0x94, virtual false, abstract: false, final false
inline void OnSplineChanged(::UnityEngine::Splines::Spline*  spline, int32_t  knotIndex, ::UnityEngine::Splines::SplineModification  modificationType) ;

/// @brief Method OnValidate, addr 0xb32468c, size 0x98, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Randomize, addr 0xb324eec, size 0x30, virtual false, abstract: false, final false
inline void Randomize() ;

/// @brief Method SetDirty, addr 0xb324bbc, size 0xc, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SetSplineDirty, addr 0xb324a54, size 0xc4, virtual false, abstract: false, final false
inline void SetSplineDirty(::UnityEngine::Splines::Spline*  spline) ;

/// @brief Method SpawnPrefab, addr 0xb324f2c, size 0x2f4, virtual false, abstract: false, final false
inline bool SpawnPrefab(int32_t  index) ;

/// @brief Method TryClearCache, addr 0xb324bc8, size 0x198, virtual false, abstract: false, final false
inline void TryClearCache() ;

/// @brief Method UndoRedoPerformed, addr 0xb32467c, size 0x10, virtual false, abstract: false, final false
inline void UndoRedoPerformed() ;

/// @brief Method Update, addr 0xb324f1c, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateInstances, addr 0xb3221fc, size 0x23e8, virtual false, abstract: false, final false
inline void UpdateInstances() ;

/// @brief Method ValidateAxis, addr 0xb321958, size 0x64, virtual false, abstract: false, final false
inline void ValidateAxis() ;

/// @brief Method ValidateSpacing, addr 0xb321804, size 0x5c, virtual false, abstract: false, final false
inline void ValidateSpacing() ;

constexpr bool const& __cordl_internal_get_m_AutoRefresh() const;

constexpr bool& __cordl_internal_get_m_AutoRefresh() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_m_Container() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_m_Container() ;

constexpr ::GlobalNamespace::SplineInstantiate_InstantiableItem const& __cordl_internal_get_m_CurrentItem() const;

constexpr ::GlobalNamespace::SplineInstantiate_InstantiableItem& __cordl_internal_get_m_CurrentItem() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_DeprecatedInstances() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_DeprecatedInstances() ;

constexpr ::GlobalNamespace::SplineComponent_AlignAxis const& __cordl_internal_get_m_Forward() const;

constexpr ::GlobalNamespace::SplineComponent_AlignAxis& __cordl_internal_get_m_Forward() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_Instances() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_Instances() ;

constexpr bool const& __cordl_internal_get_m_InstancesCacheDirty() const;

constexpr bool& __cordl_internal_get_m_InstancesCacheDirty() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_InstancesRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_InstancesRoot() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineInstantiate_InstantiableItem>* const& __cordl_internal_get_m_ItemsToInstantiate() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineInstantiate_InstantiableItem>*& __cordl_internal_get_m_ItemsToInstantiate() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_m_LengthsCache() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_m_LengthsCache() ;

constexpr float_t const& __cordl_internal_get_m_MaxProbability() const;

constexpr float_t& __cordl_internal_get_m_MaxProbability() ;

constexpr ::GlobalNamespace::SplineInstantiate_Method const& __cordl_internal_get_m_Method() const;

constexpr ::GlobalNamespace::SplineInstantiate_Method& __cordl_internal_get_m_Method() ;

constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset const& __cordl_internal_get_m_PositionOffset() const;

constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset& __cordl_internal_get_m_PositionOffset() ;

constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset const& __cordl_internal_get_m_RotationOffset() const;

constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset& __cordl_internal_get_m_RotationOffset() ;

constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset const& __cordl_internal_get_m_ScaleOffset() const;

constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset& __cordl_internal_get_m_ScaleOffset() ;

constexpr int32_t const& __cordl_internal_get_m_Seed() const;

constexpr int32_t& __cordl_internal_get_m_Seed() ;

constexpr ::GlobalNamespace::SplineInstantiate_Space const& __cordl_internal_get_m_Space() const;

constexpr ::GlobalNamespace::SplineInstantiate_Space& __cordl_internal_get_m_Space() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Spacing() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Spacing() ;

constexpr bool const& __cordl_internal_get_m_SplineDirty() const;

constexpr bool& __cordl_internal_get_m_SplineDirty() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_m_TimesCache() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_m_TimesCache() ;

constexpr ::GlobalNamespace::SplineComponent_AlignAxis const& __cordl_internal_get_m_Up() const;

constexpr ::GlobalNamespace::SplineComponent_AlignAxis& __cordl_internal_get_m_Up() ;

constexpr void __cordl_internal_set_m_AutoRefresh(bool  value) ;

constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_m_CurrentItem(::GlobalNamespace::SplineInstantiate_InstantiableItem  value) ;

constexpr void __cordl_internal_set_m_DeprecatedInstances(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_m_Forward(::GlobalNamespace::SplineComponent_AlignAxis  value) ;

constexpr void __cordl_internal_set_m_Instances(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_m_InstancesCacheDirty(bool  value) ;

constexpr void __cordl_internal_set_m_InstancesRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_ItemsToInstantiate(::System::Collections::Generic::List_1<::GlobalNamespace::SplineInstantiate_InstantiableItem>*  value) ;

constexpr void __cordl_internal_set_m_LengthsCache(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_MaxProbability(float_t  value) ;

constexpr void __cordl_internal_set_m_Method(::GlobalNamespace::SplineInstantiate_Method  value) ;

constexpr void __cordl_internal_set_m_PositionOffset(::GlobalNamespace::SplineInstantiate_Vector3Offset  value) ;

constexpr void __cordl_internal_set_m_RotationOffset(::GlobalNamespace::SplineInstantiate_Vector3Offset  value) ;

constexpr void __cordl_internal_set_m_ScaleOffset(::GlobalNamespace::SplineInstantiate_Vector3Offset  value) ;

constexpr void __cordl_internal_set_m_Seed(int32_t  value) ;

constexpr void __cordl_internal_set_m_Space(::GlobalNamespace::SplineInstantiate_Space  value) ;

constexpr void __cordl_internal_set_m_Spacing(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_SplineDirty(bool  value) ;

constexpr void __cordl_internal_set_m_TimesCache(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_Up(::GlobalNamespace::SplineComponent_AlignAxis  value) ;

/// @brief Method .ctor, addr 0xb325634, size 0x2b4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Container, addr 0xb321654, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_Container() ;

/// @brief Method get_CoordinateSpace, addr 0xb32178c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineInstantiate_Space get_CoordinateSpace() ;

/// @brief Method get_ForwardAxis, addr 0xb3218e8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineComponent_AlignAxis get_ForwardAxis() ;

/// @brief Method get_InstancesRoot, addr 0xb321b60, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_InstancesRoot() ;

/// @brief Method get_InstantiateMethod, addr 0xb321774, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineInstantiate_Method get_InstantiateMethod() ;

/// @brief Method get_MaxPositionOffset, addr 0xb3219f8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MaxPositionOffset() ;

/// @brief Method get_MaxRotationOffset, addr 0xb321a84, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MaxRotationOffset() ;

/// @brief Method get_MaxScaleOffset, addr 0xb321b10, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MaxScaleOffset() ;

/// @brief Method get_MaxSpacing, addr 0xb321860, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxSpacing() ;

/// @brief Method get_MinPositionOffset, addr 0xb3219c8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MinPositionOffset() ;

/// @brief Method get_MinRotationOffset, addr 0xb321a54, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MinRotationOffset() ;

/// @brief Method get_MinScaleOffset, addr 0xb321ae0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MinScaleOffset() ;

/// @brief Method get_MinSpacing, addr 0xb32179c, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinSpacing() ;

/// @brief Method get_PositionSpace, addr 0xb321a24, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace get_PositionSpace() ;

/// @brief Method get_RotationSpace, addr 0xb321ab0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace get_RotationSpace() ;

/// @brief Method get_ScaleSpace, addr 0xb321b3c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace get_ScaleSpace() ;

/// @brief Method get_Seed, addr 0xb321dc0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Seed() ;

/// @brief Method get_UpAxis, addr 0xb3218d0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineComponent_AlignAxis get_UpAxis() ;

/// @brief Method get_container, addr 0xb32164c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_container() ;

/// @brief Method get_forwardAxis, addr 0xb3218e0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineComponent_AlignAxis get_forwardAxis() ;

/// @brief Method get_instances, addr 0xb321d90, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_instances() ;

/// @brief Method get_instancesRootTransform, addr 0xb321b68, size 0x228, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_instancesRootTransform() ;

/// @brief Method get_itemsToInstantiate, addr 0xb321664, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::SplineInstantiate_InstantiableItem> get_itemsToInstantiate() ;

/// @brief Method get_maxPositionOffset, addr 0xb3219ec, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_maxPositionOffset() ;

/// @brief Method get_maxProbability, addr 0xb321d98, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxProbability() ;

/// @brief Method get_maxRotationOffset, addr 0xb321a78, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_maxRotationOffset() ;

/// @brief Method get_maxScaleOffset, addr 0xb321b04, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_maxScaleOffset() ;

/// @brief Method get_method, addr 0xb32176c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineInstantiate_Method get_method() ;

/// @brief Method get_minPositionOffset, addr 0xb3219bc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_minPositionOffset() ;

/// @brief Method get_minRotationOffset, addr 0xb321a48, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_minRotationOffset() ;

/// @brief Method get_minScaleOffset, addr 0xb321ad4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_minScaleOffset() ;

/// @brief Method get_positionSpace, addr 0xb321a1c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace get_positionSpace() ;

/// @brief Method get_rotationSpace, addr 0xb321aa8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace get_rotationSpace() ;

/// @brief Method get_scaleSpace, addr 0xb321b34, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace get_scaleSpace() ;

/// @brief Method get_space, addr 0xb321784, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineInstantiate_Space get_space() ;

/// @brief Method get_upAxis, addr 0xb3218c8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineComponent_AlignAxis get_upAxis() ;

/// @brief Method set_Container, addr 0xb32165c, size 0x8, virtual false, abstract: false, final false
inline void set_Container(::UnityEngine::Splines::SplineContainer*  value) ;

/// @brief Method set_CoordinateSpace, addr 0xb321794, size 0x8, virtual false, abstract: false, final false
inline void set_CoordinateSpace(::GlobalNamespace::SplineInstantiate_Space  value) ;

/// @brief Method set_ForwardAxis, addr 0xb3218f0, size 0x68, virtual false, abstract: false, final false
inline void set_ForwardAxis(::GlobalNamespace::SplineComponent_AlignAxis  value) ;

/// @brief Method set_InstantiateMethod, addr 0xb32177c, size 0x8, virtual false, abstract: false, final false
inline void set_InstantiateMethod(::GlobalNamespace::SplineInstantiate_Method  value) ;

/// @brief Method set_MaxPositionOffset, addr 0xb321a04, size 0x18, virtual false, abstract: false, final false
inline void set_MaxPositionOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MaxRotationOffset, addr 0xb321a90, size 0x18, virtual false, abstract: false, final false
inline void set_MaxRotationOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MaxScaleOffset, addr 0xb321b1c, size 0x18, virtual false, abstract: false, final false
inline void set_MaxScaleOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MaxSpacing, addr 0xb321868, size 0x60, virtual false, abstract: false, final false
inline void set_MaxSpacing(float_t  value) ;

/// @brief Method set_MinPositionOffset, addr 0xb3219d4, size 0x18, virtual false, abstract: false, final false
inline void set_MinPositionOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MinRotationOffset, addr 0xb321a60, size 0x18, virtual false, abstract: false, final false
inline void set_MinRotationOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MinScaleOffset, addr 0xb321aec, size 0x18, virtual false, abstract: false, final false
inline void set_MinScaleOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MinSpacing, addr 0xb3217a4, size 0x60, virtual false, abstract: false, final false
inline void set_MinSpacing(float_t  value) ;

/// @brief Method set_PositionSpace, addr 0xb321a2c, size 0x1c, virtual false, abstract: false, final false
inline void set_PositionSpace(::GlobalNamespace::SplineInstantiate_OffsetSpace  value) ;

/// @brief Method set_RotationSpace, addr 0xb321ab8, size 0x1c, virtual false, abstract: false, final false
inline void set_RotationSpace(::GlobalNamespace::SplineInstantiate_OffsetSpace  value) ;

/// @brief Method set_ScaleSpace, addr 0xb321b44, size 0x1c, virtual false, abstract: false, final false
inline void set_ScaleSpace(::GlobalNamespace::SplineInstantiate_OffsetSpace  value) ;

/// @brief Method set_Seed, addr 0xb321dc8, size 0x10, virtual false, abstract: false, final false
inline void set_Seed(int32_t  value) ;

/// @brief Method set_UpAxis, addr 0xb3218d8, size 0x8, virtual false, abstract: false, final false
inline void set_UpAxis(::GlobalNamespace::SplineComponent_AlignAxis  value) ;

/// @brief Method set_itemsToInstantiate, addr 0xb3216b4, size 0xb8, virtual false, abstract: false, final false
inline void set_itemsToInstantiate(::ArrayW<::GlobalNamespace::SplineInstantiate_InstantiableItem>  value) ;

/// @brief Method set_maxProbability, addr 0xb321da0, size 0x20, virtual false, abstract: false, final false
inline void set_maxProbability(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineInstantiate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineInstantiate(SplineInstantiate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineInstantiate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineInstantiate(SplineInstantiate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27978};

/// @brief Field k_InstancesRootName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InstancesRootName{u"root-"};

/// [SerializeField]
/// @brief Field m_Container, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___m_Container;

/// [SerializeField]
/// @brief Field m_ItemsToInstantiate, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SplineInstantiate_InstantiableItem>*  ___m_ItemsToInstantiate;

/// [SerializeField]
/// @brief Field m_Method, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::SplineInstantiate_Method  ___m_Method;

/// [SerializeField]
/// @brief Field m_Space, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::SplineInstantiate_Space  ___m_Space;

/// [SerializeField]
/// @brief Field m_Spacing, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_Spacing;

/// [SerializeField]
/// @brief Field m_Up, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::SplineComponent_AlignAxis  ___m_Up;

/// [SerializeField]
/// @brief Field m_Forward, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::SplineComponent_AlignAxis  ___m_Forward;

/// [SerializeField]
/// @brief Field m_PositionOffset, offset: 0x50, size: 0x24, def value: None
 ::GlobalNamespace::SplineInstantiate_Vector3Offset  ___m_PositionOffset;

/// [SerializeField]
/// @brief Field m_RotationOffset, offset: 0x74, size: 0x24, def value: None
 ::GlobalNamespace::SplineInstantiate_Vector3Offset  ___m_RotationOffset;

/// [SerializeField]
/// @brief Field m_ScaleOffset, offset: 0x98, size: 0x24, def value: None
 ::GlobalNamespace::SplineInstantiate_Vector3Offset  ___m_ScaleOffset;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("m_Instances")]
/// @brief Field m_DeprecatedInstances, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___m_DeprecatedInstances;

/// @brief Field m_InstancesRoot, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_InstancesRoot;

/// @brief Field m_Instances, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___m_Instances;

/// @brief Field m_InstancesCacheDirty, offset: 0xd8, size: 0x1, def value: None
 bool  ___m_InstancesCacheDirty;

/// [SerializeField]
/// @brief Field m_AutoRefresh, offset: 0xd9, size: 0x1, def value: None
 bool  ___m_AutoRefresh;

/// @brief Field m_CurrentItem, offset: 0xe0, size: 0x18, def value: None
 ::GlobalNamespace::SplineInstantiate_InstantiableItem  ___m_CurrentItem;

/// @brief Field m_SplineDirty, offset: 0xf8, size: 0x1, def value: None
 bool  ___m_SplineDirty;

/// @brief Field m_MaxProbability, offset: 0xfc, size: 0x4, def value: None
 float_t  ___m_MaxProbability;

/// [SerializeField]
/// @brief Field m_Seed, offset: 0x100, size: 0x4, def value: None
 int32_t  ___m_Seed;

/// @brief Field m_TimesCache, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___m_TimesCache;

/// @brief Field m_LengthsCache, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___m_LengthsCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_ItemsToInstantiate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Method) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Space) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Spacing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Up) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Forward) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_PositionOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_RotationOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_ScaleOffset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_DeprecatedInstances) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_InstancesRoot) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Instances) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_InstancesCacheDirty) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_AutoRefresh) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_CurrentItem) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_SplineDirty) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_MaxProbability) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Seed) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_TimesCache) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_LengthsCache) == 0x110, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineInstantiate) == 0x118, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineInstantiate/<>c
class CORDL_TYPE SplineInstantiate___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Splines::SplineInstantiate___c*  __9;

/// @brief Field <>9__123_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__123_0, put=setStaticF___9__123_0)) ::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>*  __9__123_0;

static inline ::UnityEngine::Splines::SplineInstantiate___c* New_ctor() ;

/// @brief Method <CheckChildrenValidity>b__123_0, addr 0xb325b34, size 0x18, virtual false, abstract: false, final false
inline int32_t _CheckChildrenValidity_b__123_0(::UnityEngine::Splines::SplineInstantiate*  sInstantiate) ;

/// @brief Method .ctor, addr 0xb325b2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Splines::SplineInstantiate___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>* getStaticF___9__123_0() ;

static inline void setStaticF___9(::UnityEngine::Splines::SplineInstantiate___c*  value) ;

static inline void setStaticF___9__123_0(::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineInstantiate___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineInstantiate___c(SplineInstantiate___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineInstantiate___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineInstantiate___c(SplineInstantiate___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27977};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplineInstantiate___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines

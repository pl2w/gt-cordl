#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineContainer)
namespace GlobalNamespace {
struct SplineContainer_SplineToNative;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
class ISplineContainer;
}
namespace UnityEngine::Splines {
class ISpline;
}
namespace UnityEngine::Splines {
class KnotLinkCollection;
}
namespace UnityEngine::Splines {
struct NativeSpline;
}
namespace UnityEngine::Splines {
class SplineContainer___c__DisplayClass21_0;
}
namespace UnityEngine::Splines {
struct SplineModification;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
class SplineContainer___c__DisplayClass21_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineContainer*);
MARK_REF_T(::UnityEngine::Splines::SplineContainer___c__DisplayClass21_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineContainer*, "UnityEngine.Splines", "SplineContainer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineContainer___c__DisplayClass21_0*, "UnityEngine.Splines", "SplineContainer/<>c__DisplayClass21_0");
// [DefaultMember("Item")]
// [AddComponentMenu("Splines/Spline Container")]
// [ExecuteAlways]
// Dependencies Unity.Mathematics.float4x4, UnityEngine.MonoBehaviour, UnityEngine.Splines.ISpline, UnityEngine.Splines.Spline
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineContainer
class CORDL_TYPE SplineContainer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SplineToNative = ::GlobalNamespace::SplineContainer_SplineToNative;

using __c__DisplayClass21_0 = ::UnityEngine::Splines::SplineContainer___c__DisplayClass21_0;

 __declspec(property(get=get_IsNonUniformlyScaled)) bool  IsNonUniformlyScaled;

 __declspec(property(get=get_Item)) ::UnityEngine::Splines::Spline*  Item[];

 __declspec(property(get=get_KnotLinkCollection)) ::UnityEngine::Splines::KnotLinkCollection*  KnotLinkCollection;

 __declspec(property(get=get_Spline, put=set_Spline)) ::UnityEngine::Splines::Spline*  Spline;

/// @brief Field SplineAdded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SplineAdded, put=setStaticF_SplineAdded)) ::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  SplineAdded;

/// @brief Field SplineRemoved, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SplineRemoved, put=setStaticF_SplineRemoved)) ::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  SplineRemoved;

/// @brief Field SplineReordered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SplineReordered, put=setStaticF_SplineReordered)) ::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*  SplineReordered;

 __declspec(property(get=get_Splines, put=set_Splines)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  Splines;

/// @brief Field m_AddedSplinesIndices, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AddedSplinesIndices, put=__cordl_internal_set_m_AddedSplinesIndices)) ::System::Collections::Generic::List_1<int32_t>*  m_AddedSplinesIndices;

/// @brief Field m_Knots, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Knots, put=__cordl_internal_set_m_Knots)) ::UnityEngine::Splines::KnotLinkCollection*  m_Knots;

/// @brief Field m_NativeSplinesCache, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NativeSplinesCache, put=__cordl_internal_set_m_NativeSplinesCache)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Splines::ISpline*,::UnityEngine::Splines::NativeSpline>*  m_NativeSplinesCache;

/// @brief Field m_NativeSplinesCacheTransform, offset 0x60, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_NativeSplinesCacheTransform, put=__cordl_internal_set_m_NativeSplinesCacheTransform)) ::Unity::Mathematics::float4x4  m_NativeSplinesCacheTransform;

/// @brief Field m_ReadOnlySplines, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReadOnlySplines, put=__cordl_internal_set_m_ReadOnlySplines)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Splines::Spline*>*  m_ReadOnlySplines;

/// @brief Field m_RemovedSplinesIndices, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RemovedSplinesIndices, put=__cordl_internal_set_m_RemovedSplinesIndices)) ::System::Collections::Generic::List_1<int32_t>*  m_RemovedSplinesIndices;

/// @brief Field m_ReorderedSplinesIndices, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReorderedSplinesIndices, put=__cordl_internal_set_m_ReorderedSplinesIndices)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t,int32_t>>*  m_ReorderedSplinesIndices;

/// @brief Field m_Spline, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Spline, put=__cordl_internal_set_m_Spline)) ::UnityEngine::Splines::Spline*  m_Spline;

/// @brief Field m_Splines, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Splines, put=__cordl_internal_set_m_Splines)) ::ArrayW<::UnityEngine::Splines::Spline*>  m_Splines;

/// @brief Field s_AllocPreventionHelperBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_AllocPreventionHelperBuffer, put=setStaticF_s_AllocPreventionHelperBuffer)) ::System::Collections::Generic::List_1<::GlobalNamespace::SplineContainer_SplineToNative>*  s_AllocPreventionHelperBuffer;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Splines::ISplineContainer"
constexpr operator  ::UnityEngine::Splines::ISplineContainer*() noexcept;

/// @brief Method CalculateLength, addr 0xb31cae8, size 0x8, virtual false, abstract: false, final false
inline float_t CalculateLength() ;

/// @brief Method CalculateLength, addr 0xb31caf0, size 0xd4, virtual false, abstract: false, final false
inline float_t CalculateLength(int32_t  splineIndex) ;

/// @brief Method ClearCaches, addr 0xb31be74, size 0x90, virtual false, abstract: false, final false
inline void ClearCaches() ;

/// @brief Method DisposeNativeSplinesCache, addr 0xb31bf04, size 0x1a8, virtual false, abstract: false, final false
inline void DisposeNativeSplinesCache() ;

/// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
inline bool Evaluate(T  spline, float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent, ::by_ref<::Unity::Mathematics::float3>  upVector) ;

/// @brief Method Evaluate, addr 0xb31c820, size 0xa8, virtual false, abstract: false, final false
inline bool Evaluate(int32_t  splineIndex, float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent, ::by_ref<::Unity::Mathematics::float3>  upVector) ;

/// @brief Method Evaluate, addr 0xb31c80c, size 0x14, virtual false, abstract: false, final false
inline bool Evaluate(float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent, ::by_ref<::Unity::Mathematics::float3>  upVector) ;

/// @brief Method EvaluateAcceleration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
inline ::Unity::Mathematics::float3 EvaluateAcceleration(T  spline, float_t  t) ;

/// @brief Method EvaluateAcceleration, addr 0xb31ca68, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 EvaluateAcceleration(int32_t  splineIndex, float_t  t) ;

/// @brief Method EvaluateAcceleration, addr 0xb31ca60, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 EvaluateAcceleration(float_t  t) ;

/// @brief Method EvaluatePosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
inline ::Unity::Mathematics::float3 EvaluatePosition(T  spline, float_t  t) ;

/// @brief Method EvaluatePosition, addr 0xb31c8d0, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 EvaluatePosition(int32_t  splineIndex, float_t  t) ;

/// @brief Method EvaluatePosition, addr 0xb31c8c8, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 EvaluatePosition(float_t  t) ;

/// @brief Method EvaluateTangent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
inline ::Unity::Mathematics::float3 EvaluateTangent(T  spline, float_t  t) ;

/// @brief Method EvaluateTangent, addr 0xb31c958, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 EvaluateTangent(int32_t  splineIndex, float_t  t) ;

/// @brief Method EvaluateTangent, addr 0xb31c950, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 EvaluateTangent(float_t  t) ;

/// @brief Method EvaluateUpVector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
inline ::Unity::Mathematics::float3 EvaluateUpVector(T  spline, float_t  t) ;

/// @brief Method EvaluateUpVector, addr 0xb31c9e0, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 EvaluateUpVector(int32_t  splineIndex, float_t  t) ;

/// @brief Method EvaluateUpVector, addr 0xb31c9d8, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 EvaluateUpVector(float_t  t) ;

/// @brief Method Finalize, addr 0xb31c280, size 0x8, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetOrBakeNativeSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
inline ::UnityEngine::Splines::NativeSpline GetOrBakeNativeSpline(T  spline) ;

/// @brief Method IndexOf, addr 0xb31c0ac, size 0x140, virtual false, abstract: false, final false
static inline int32_t IndexOf(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  self, ::UnityEngine::Splines::Spline*  elementToFind) ;

static inline ::UnityEngine::Splines::SplineContainer* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb31cbc8, size 0x22c, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb31cbc4, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method OnDestroy, addr 0xb31c380, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb31c304, size 0x7c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb31c288, size 0x7c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnKnotModified, addr 0xb31c6bc, size 0xa8, virtual false, abstract: false, final false
inline void OnKnotModified(::UnityEngine::Splines::Spline*  spline, int32_t  index) ;

/// @brief Method OnSplineChanged, addr 0xb31c524, size 0x198, virtual false, abstract: false, final false
inline void OnSplineChanged(::UnityEngine::Splines::Spline*  spline, int32_t  index, ::UnityEngine::Splines::SplineModification  modificationType) ;

/// @brief Method Warmup, addr 0xb31c384, size 0x1a0, virtual false, abstract: false, final false
inline void Warmup() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_AddedSplinesIndices() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_AddedSplinesIndices() ;

constexpr ::UnityEngine::Splines::KnotLinkCollection* const& __cordl_internal_get_m_Knots() const;

constexpr ::UnityEngine::Splines::KnotLinkCollection*& __cordl_internal_get_m_Knots() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Splines::ISpline*,::UnityEngine::Splines::NativeSpline>* const& __cordl_internal_get_m_NativeSplinesCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Splines::ISpline*,::UnityEngine::Splines::NativeSpline>*& __cordl_internal_get_m_NativeSplinesCache() ;

constexpr ::Unity::Mathematics::float4x4 const& __cordl_internal_get_m_NativeSplinesCacheTransform() const;

constexpr ::Unity::Mathematics::float4x4& __cordl_internal_get_m_NativeSplinesCacheTransform() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Splines::Spline*>* const& __cordl_internal_get_m_ReadOnlySplines() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Splines::Spline*>*& __cordl_internal_get_m_ReadOnlySplines() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_RemovedSplinesIndices() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_RemovedSplinesIndices() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t,int32_t>>* const& __cordl_internal_get_m_ReorderedSplinesIndices() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t,int32_t>>*& __cordl_internal_get_m_ReorderedSplinesIndices() ;

constexpr ::UnityEngine::Splines::Spline* const& __cordl_internal_get_m_Spline() const;

constexpr ::UnityEngine::Splines::Spline*& __cordl_internal_get_m_Spline() ;

constexpr ::ArrayW<::UnityEngine::Splines::Spline*> const& __cordl_internal_get_m_Splines() const;

constexpr ::ArrayW<::UnityEngine::Splines::Spline*>& __cordl_internal_get_m_Splines() ;

constexpr void __cordl_internal_set_m_AddedSplinesIndices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_Knots(::UnityEngine::Splines::KnotLinkCollection*  value) ;

constexpr void __cordl_internal_set_m_NativeSplinesCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::Splines::ISpline*,::UnityEngine::Splines::NativeSpline>*  value) ;

constexpr void __cordl_internal_set_m_NativeSplinesCacheTransform(::Unity::Mathematics::float4x4  value) ;

constexpr void __cordl_internal_set_m_ReadOnlySplines(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Splines::Spline*>*  value) ;

constexpr void __cordl_internal_set_m_RemovedSplinesIndices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_ReorderedSplinesIndices(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t,int32_t>>*  value) ;

constexpr void __cordl_internal_set_m_Spline(::UnityEngine::Splines::Spline*  value) ;

constexpr void __cordl_internal_set_m_Splines(::ArrayW<::UnityEngine::Splines::Spline*>  value) ;

/// @brief Method .ctor, addr 0xb31cdf4, size 0x260, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_SplineAdded, addr 0xb31af08, size 0xf0, virtual false, abstract: false, final false
static inline void add_SplineAdded(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_SplineRemoved, addr 0xb31b0e8, size 0xf4, virtual false, abstract: false, final false
static inline void add_SplineRemoved(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_SplineReordered, addr 0xb31b2d0, size 0xf4, virtual false, abstract: false, final false
static inline void add_SplineReordered(::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*  value) ;

static inline ::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>* getStaticF_SplineAdded() ;

static inline ::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>* getStaticF_SplineRemoved() ;

static inline ::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>* getStaticF_SplineReordered() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::SplineContainer_SplineToNative>* getStaticF_s_AllocPreventionHelperBuffer() ;

/// @brief Method get_IsNonUniformlyScaled, addr 0xb31c1ec, size 0x5c, virtual false, abstract: false, final false
inline bool get_IsNonUniformlyScaled() ;

/// @brief Method get_Item, addr 0xb31c250, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::Spline* get_Item(int32_t  index) ;

/// @brief Method get_KnotLinkCollection, addr 0xb31c248, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::KnotLinkCollection* get_KnotLinkCollection() ;

/// @brief Method get_Spline, addr 0xb31c764, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::Spline* get_Spline() ;

/// @brief Method get_Splines, addr 0xb30e9ac, size 0x98, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* get_Splines() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Splines::ISplineContainer"
constexpr ::UnityEngine::Splines::ISplineContainer* i___UnityEngine__Splines__ISplineContainer() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_SplineAdded, addr 0xb31aff8, size 0xf0, virtual false, abstract: false, final false
static inline void remove_SplineAdded(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_SplineRemoved, addr 0xb31b1dc, size 0xf4, virtual false, abstract: false, final false
static inline void remove_SplineRemoved(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_SplineReordered, addr 0xb31b3c4, size 0xf4, virtual false, abstract: false, final false
static inline void remove_SplineReordered(::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*  value) ;

static inline void setStaticF_SplineAdded(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value) ;

static inline void setStaticF_SplineRemoved(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value) ;

static inline void setStaticF_SplineReordered(::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*  value) ;

static inline void setStaticF_s_AllocPreventionHelperBuffer(::System::Collections::Generic::List_1<::GlobalNamespace::SplineContainer_SplineToNative>*  value) ;

/// @brief Method set_Spline, addr 0xb31c798, size 0x74, virtual false, abstract: false, final false
inline void set_Spline(::UnityEngine::Splines::Spline*  value) ;

/// @brief Method set_Splines, addr 0xb31b4b8, size 0x9b4, virtual true, abstract: false, final true
inline void set_Splines(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineContainer(SplineContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineContainer(SplineContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27956};

/// @brief Field k_IconPath offset 0xffffffff size 0x8
static constexpr ::ConstString  k_IconPath{u"Packages/com.unity.splines/Editor/Editor Resources/Icons/SplineComponent.png"};

/// [SerializeField]
/// [Obsolete]
/// [HideInInspector]
/// @brief Field m_Spline, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Splines::Spline*  ___m_Spline;

/// [SerializeField]
/// @brief Field m_Splines, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Splines::Spline*>  ___m_Splines;

/// [SerializeField]
/// @brief Field m_Knots, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Splines::KnotLinkCollection*  ___m_Knots;

/// [TupleElementNames(new[] { "previousIndex", "newIndex" })]
/// @brief Field m_ReorderedSplinesIndices, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t,int32_t>>*  ___m_ReorderedSplinesIndices;

/// @brief Field m_RemovedSplinesIndices, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_RemovedSplinesIndices;

/// @brief Field m_AddedSplinesIndices, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_AddedSplinesIndices;

/// @brief Field m_ReadOnlySplines, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Splines::Spline*>*  ___m_ReadOnlySplines;

/// @brief Field m_NativeSplinesCache, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Splines::ISpline*,::UnityEngine::Splines::NativeSpline>*  ___m_NativeSplinesCache;

/// @brief Field m_NativeSplinesCacheTransform, offset: 0x60, size: 0x40, def value: None
 ::Unity::Mathematics::float4x4  ___m_NativeSplinesCacheTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineContainer, ___m_Spline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineContainer, ___m_Splines) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineContainer, ___m_Knots) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineContainer, ___m_ReorderedSplinesIndices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineContainer, ___m_RemovedSplinesIndices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineContainer, ___m_AddedSplinesIndices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineContainer, ___m_ReadOnlySplines) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineContainer, ___m_NativeSplinesCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineContainer, ___m_NativeSplinesCacheTransform) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineContainer) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineContainer/<>c__DisplayClass21_0
class CORDL_TYPE SplineContainer___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Predicate_1<::UnityEngine::Splines::Spline*>*  __9__0;

/// @brief Field i, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  value;

static inline ::UnityEngine::Splines::SplineContainer___c__DisplayClass21_0* New_ctor() ;

constexpr ::System::Predicate_1<::UnityEngine::Splines::Spline*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Predicate_1<::UnityEngine::Splines::Spline*>*& __cordl_internal_get___9__0() ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* const& __cordl_internal_get_value() const;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set___9__0(::System::Predicate_1<::UnityEngine::Splines::Spline*>*  value) ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

constexpr void __cordl_internal_set_value(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  value) ;

/// @brief Method .ctor, addr 0xb31be6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <set_Splines>b__0, addr 0xb31d0e8, size 0xb8, virtual false, abstract: false, final false
inline bool _set_Splines_b__0(::UnityEngine::Splines::Spline*  spline) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineContainer___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineContainer___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineContainer___c__DisplayClass21_0(SplineContainer___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineContainer___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineContainer___c__DisplayClass21_0(SplineContainer___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27955};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  ___value;

/// @brief Field i, offset: 0x18, size: 0x4, def value: None
 int32_t  ___i;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Predicate_1<::UnityEngine::Splines::Spline*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineContainer___c__DisplayClass21_0, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineContainer___c__DisplayClass21_0, ___i) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineContainer___c__DisplayClass21_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineContainer___c__DisplayClass21_0) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Splines

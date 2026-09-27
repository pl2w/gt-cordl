#pragma once
// IWYU pragma private; include "UnityEngine/Splines/Spline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierTangent_def.hpp"
#include "UnityEngine/Splines/zzzz__DistanceToInterpolation_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineType_def.hpp"
#include "UnityEngine/Splines/zzzz__TangentMode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Spline)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine::Splines {
struct BezierCurve;
}
namespace UnityEngine::Splines {
struct BezierKnot;
}
namespace UnityEngine::Splines {
struct BezierTangent;
}
namespace UnityEngine::Splines {
struct DistanceToInterpolation;
}
namespace UnityEngine::Splines {
struct EmbeddedSplineDataType;
}
namespace UnityEngine::Splines {
class ISplineModificationHandler;
}
namespace UnityEngine::Splines {
class ISpline;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineDataDictionary_1;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineDataKeyValuePair_1;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1;
}
namespace UnityEngine::Splines {
struct SplineModification;
}
namespace UnityEngine::Splines {
struct SplineRange;
}
namespace UnityEngine::Splines {
struct SplineType;
}
namespace UnityEngine::Splines {
class Spline_MetaData;
}
namespace UnityEngine::Splines {
class Spline__get_embeddedSplineData_d__15;
}
namespace UnityEngine::Splines {
struct TangentMode;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine::Splines {
class Spline_MetaData;
}
namespace UnityEngine::Splines {
class Spline__get_embeddedSplineData_d__15;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::Spline*);
MARK_REF_T(::UnityEngine::Splines::Spline_MetaData*);
MARK_REF_T(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::Spline*, "UnityEngine.Splines", "Spline");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::Spline_MetaData*, "UnityEngine.Splines", "Spline/MetaData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*, "UnityEngine.Splines", "Spline/<get_embeddedSplineData>d__15");
// [DefaultMember("Item")]
// Dependencies System.Object, System.ValueTuple`2<T1, T2>, UnityEngine.Splines.BezierTangent, UnityEngine.Splines.SplineType, UnityEngine.Splines.TangentMode
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.Spline
class CORDL_TYPE Spline : public ::System::Object {
public:
// Declarations
using MetaData = ::UnityEngine::Splines::Spline_MetaData;

using _get_embeddedSplineData_d__15 = ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15;

/// @brief Field Changed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Changed, put=setStaticF_Changed)) ::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*  Changed;

 __declspec(property(get=get_Closed, put=set_Closed)) bool  Closed;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief [Obsolete("Use GetTangentMode and SetTangentMode.")]
 __declspec(property(get=get_EditType, put=set_EditType)) ::UnityEngine::Splines::SplineType  EditType;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Splines::BezierKnot  Item[];

 __declspec(property(get=get_Knots, put=set_Knots)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*  Knots;

/// @brief Field changed, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_changed, put=__cordl_internal_set_changed)) ::System::Action*  changed;

 __declspec(property(get=get_embeddedSplineData)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>*  embeddedSplineData;

/// @brief Field m_Closed, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Closed, put=__cordl_internal_set_m_Closed)) bool  m_Closed;

/// @brief Field m_EditModeType, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EditModeType, put=__cordl_internal_set_m_EditModeType)) ::UnityEngine::Splines::SplineType  m_EditModeType;

/// @brief Field m_Float4Data, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Float4Data, put=__cordl_internal_set_m_Float4Data)) ::UnityEngine::Splines::SplineDataDictionary_1<::Unity::Mathematics::float4>*  m_Float4Data;

/// @brief Field m_FloatData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FloatData, put=__cordl_internal_set_m_FloatData)) ::UnityEngine::Splines::SplineDataDictionary_1<float_t>*  m_FloatData;

/// @brief Field m_IntData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IntData, put=__cordl_internal_set_m_IntData)) ::UnityEngine::Splines::SplineDataDictionary_1<int32_t>*  m_IntData;

/// @brief Field m_Knots, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Knots, put=__cordl_internal_set_m_Knots)) ::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>*  m_Knots;

/// @brief Field m_LastKnotChangeCurveLengths, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_LastKnotChangeCurveLengths, put=__cordl_internal_set_m_LastKnotChangeCurveLengths)) ::System::ValueTuple_2<float_t,float_t>  m_LastKnotChangeCurveLengths;

/// @brief Field m_Length, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Length, put=__cordl_internal_set_m_Length)) float_t  m_Length;

/// @brief Field m_MetaData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MetaData, put=__cordl_internal_set_m_MetaData)) ::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline_MetaData*>*  m_MetaData;

/// @brief Field m_ObjectData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ObjectData, put=__cordl_internal_set_m_ObjectData)) ::UnityEngine::Splines::SplineDataDictionary_1<::UnityW<::UnityEngine::Object>>*  m_ObjectData;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IList_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Splines::ISpline"
constexpr operator  ::UnityEngine::Splines::ISpline*() noexcept;

/// @brief Method Add, addr 0xb31782c, size 0x4c, virtual true, abstract: false, final true
inline void Add(::UnityEngine::Splines::BezierKnot  item) ;

/// @brief Method Add, addr 0xb317d04, size 0x5c, virtual false, abstract: false, final false
inline void Add(::UnityEngine::Splines::BezierKnot  item, ::UnityEngine::Splines::TangentMode  mode) ;

/// @brief Method Add, addr 0xb317f80, size 0x68, virtual false, abstract: false, final false
inline void Add(::UnityEngine::Splines::BezierKnot  item, ::UnityEngine::Splines::TangentMode  mode, float_t  tension) ;

/// @brief Method Add, addr 0xb317d60, size 0x54, virtual false, abstract: false, final false
inline void Add(::Unity::Mathematics::float3  knotPosition, ::UnityEngine::Splines::TangentMode  tangentMode) ;

/// @brief Method Add, addr 0xb317fe8, size 0xa8, virtual false, abstract: false, final false
inline void Add(::UnityEngine::Splines::Spline*  spline) ;

/// @brief Method AddRange, addr 0xb317f14, size 0x48, virtual false, abstract: false, final false
inline void AddRange(::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*  knotPositions, ::UnityEngine::Splines::TangentMode  tangentMode) ;

/// @brief Method ApplyTangentModeNoNotify, addr 0xb3135f0, size 0x308, virtual false, abstract: false, final false
inline void ApplyTangentModeNoNotify(int32_t  index, ::UnityEngine::Splines::BezierTangent  main) ;

/// @brief Method CacheKnotOperationCurves, addr 0xb313cf0, size 0x94, virtual false, abstract: false, final false
inline void CacheKnotOperationCurves(int32_t  index) ;

/// @brief Method CheckAutoSmoothExtremityKnots, addr 0xb314450, size 0x74, virtual false, abstract: false, final false
inline void CheckAutoSmoothExtremityKnots() ;

/// @brief Method Clear, addr 0xb318090, size 0x94, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0xb318124, size 0x80, virtual true, abstract: false, final true
inline bool Contains(::UnityEngine::Splines::BezierKnot  item) ;

/// @brief Method Copy, addr 0xb3178c8, size 0x1f4, virtual false, abstract: false, final false
inline void Copy(::UnityEngine::Splines::Spline*  copyFrom) ;

/// @brief Method CopyTo, addr 0xb3181a4, size 0x68, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::UnityEngine::Splines::BezierKnot>  array, int32_t  arrayIndex) ;

/// @brief Method EnforceTangentModeNoNotify, addr 0xb313548, size 0x40, virtual false, abstract: false, final false
inline void EnforceTangentModeNoNotify(int32_t  index) ;

/// @brief Method EnforceTangentModeNoNotify, addr 0xb313588, size 0x68, virtual false, abstract: false, final false
inline void EnforceTangentModeNoNotify(::UnityEngine::Splines::SplineRange  range) ;

/// @brief Method EnsureMetaDataValid, addr 0xb312ea4, size 0x10c, virtual false, abstract: false, final false
inline void EnsureMetaDataValid() ;

/// @brief Method GetAutoSmoothTension, addr 0xb314034, size 0x64, virtual false, abstract: false, final false
inline float_t GetAutoSmoothTension(int32_t  index) ;

/// @brief Method GetCurve, addr 0xb316f04, size 0x104, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierCurve GetCurve(int32_t  index) ;

/// @brief Method GetCurveDistanceLut, addr 0xb317200, size 0x11c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> GetCurveDistanceLut(int32_t  index) ;

/// @brief Method GetCurveInterpolation, addr 0xb31731c, size 0x9c, virtual true, abstract: false, final true
inline float_t GetCurveInterpolation(int32_t  curveIndex, float_t  curveDistance) ;

/// @brief Method GetCurveLength, addr 0xb317008, size 0x104, virtual true, abstract: false, final true
inline float_t GetCurveLength(int32_t  index) ;

/// @brief Method GetCurveUpVector, addr 0xb3174fc, size 0x208, virtual true, abstract: false, final true
inline ::Unity::Mathematics::float3 GetCurveUpVector(int32_t  index, float_t  t) ;

/// @brief Method GetEnumerator, addr 0xb317be4, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* GetEnumerator() ;

/// @brief Method GetFloat4DataKeys, addr 0xb3125dc, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetFloat4DataKeys() ;

/// @brief Method GetFloat4DataValues, addr 0xb31284c, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>* GetFloat4DataValues() ;

/// @brief Method GetFloatDataKeys, addr 0xb31258c, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetFloatDataKeys() ;

/// @brief Method GetFloatDataValues, addr 0xb3127fc, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<float_t>*>* GetFloatDataValues() ;

/// @brief Method GetIntDataKeys, addr 0xb31262c, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetIntDataKeys() ;

/// @brief Method GetIntDataValues, addr 0xb31289c, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<int32_t>*>* GetIntDataValues() ;

/// @brief Method GetLength, addr 0xb31718c, size 0x74, virtual true, abstract: false, final true
inline float_t GetLength() ;

/// @brief Method GetObjectDataKeys, addr 0xb31267c, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetObjectDataKeys() ;

/// @brief Method GetObjectDataValues, addr 0xb3128ec, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>* GetObjectDataValues() ;

/// @brief Method GetOrCreateFloat4Data, addr 0xb30f51c, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>* GetOrCreateFloat4Data(::StringW  key) ;

/// @brief Method GetOrCreateFloatData, addr 0xb30f348, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<float_t>* GetOrCreateFloatData(::StringW  key) ;

/// @brief Method GetOrCreateIntData, addr 0xb30f6e0, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<int32_t>* GetOrCreateIntData(::StringW  key) ;

/// @brief Method GetOrCreateObjectData, addr 0xb30f8b4, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>* GetOrCreateObjectData(::StringW  key) ;

/// @brief Method GetSplineDataKeys, addr 0xb3126cc, size 0x130, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetSplineDataKeys(::UnityEngine::Splines::EmbeddedSplineDataType  type) ;

/// @brief Method GetTangentMode, addr 0xb3138f8, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::TangentMode GetTangentMode(int32_t  index) ;

/// @brief Method IndexOf, addr 0xb3144c4, size 0x7c, virtual true, abstract: false, final true
inline int32_t IndexOf(::UnityEngine::Splines::BezierKnot  item) ;

/// @brief Method Insert, addr 0xb314540, size 0x3c, virtual true, abstract: false, final true
inline void Insert(int32_t  index, ::UnityEngine::Splines::BezierKnot  knot) ;

/// @brief Method Insert, addr 0xb3145fc, size 0x38, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::UnityEngine::Splines::BezierKnot  knot, ::UnityEngine::Splines::TangentMode  mode) ;

/// @brief Method Insert, addr 0xb31457c, size 0x80, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::UnityEngine::Splines::BezierKnot  knot, ::UnityEngine::Splines::TangentMode  mode, float_t  tension) ;

/// @brief Method Insert, addr 0xb317db4, size 0x160, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::Unity::Mathematics::float3  knotPosition, ::UnityEngine::Splines::TangentMode  tangentMode) ;

/// @brief Method InsertNoNotify, addr 0xb314634, size 0x194, virtual false, abstract: false, final false
inline void InsertNoNotify(int32_t  index, ::UnityEngine::Splines::BezierKnot  knot, ::UnityEngine::Splines::TangentMode  mode, float_t  tension) ;

/// @brief Method InsertOnCurve, addr 0xb3147c8, size 0x8ec, virtual false, abstract: false, final false
inline void InsertOnCurve(int32_t  index, float_t  curveT) ;

/// @brief Method InsertRange, addr 0xb317f5c, size 0x24, virtual false, abstract: false, final false
inline void InsertRange(int32_t  index, ::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*  knotPositions, ::UnityEngine::Splines::TangentMode  tangentMode) ;

/// @brief Method InsertRangeNoNotify, addr 0xb315df8, size 0x5a0, virtual false, abstract: false, final false
inline void InsertRangeNoNotify(int32_t  index, ::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*  knotPositions, ::UnityEngine::Splines::TangentMode  tangentMode, bool  cacheCurves) ;

static inline ::UnityEngine::Splines::Spline* New_ctor() ;

static inline ::UnityEngine::Splines::Spline* New_ctor(int32_t  knotCapacity, bool  closed) ;

static inline ::UnityEngine::Splines::Spline* New_ctor(::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*  knotPositions, ::UnityEngine::Splines::TangentMode  tangentMode, bool  closed) ;

static inline ::UnityEngine::Splines::Spline* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*  knots, bool  closed) ;

static inline ::UnityEngine::Splines::Spline* New_ctor(::UnityEngine::Splines::Spline*  spline) ;

/// @brief Method OnSplineChanged, addr 0xb313494, size 0x4, virtual true, abstract: false, final false
inline void OnSplineChanged() ;

/// @brief Method Remove, addr 0xb31820c, size 0x98, virtual true, abstract: false, final true
inline bool Remove(::UnityEngine::Splines::BezierKnot  item) ;

/// @brief Method RemoveAt, addr 0xb315224, size 0x118, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveFloat4Data, addr 0xb312484, size 0x58, virtual false, abstract: false, final false
inline bool RemoveFloat4Data(::StringW  key) ;

/// @brief Method RemoveFloatData, addr 0xb31242c, size 0x58, virtual false, abstract: false, final false
inline bool RemoveFloatData(::StringW  key) ;

/// @brief Method RemoveIntData, addr 0xb3124dc, size 0x58, virtual false, abstract: false, final false
inline bool RemoveIntData(::StringW  key) ;

/// @brief Method RemoveObjectData, addr 0xb312534, size 0x58, virtual false, abstract: false, final false
inline bool RemoveObjectData(::StringW  key) ;

/// @brief Method RemoveUnusedSplineData, addr 0xb3182a4, size 0xbc, virtual false, abstract: false, final false
inline void RemoveUnusedSplineData() ;

/// @brief Method Resize, addr 0xb31771c, size 0x110, virtual false, abstract: false, final false
inline void Resize(int32_t  newSize) ;

/// @brief Method SetAutoSmoothTension, addr 0xb314098, size 0x54, virtual false, abstract: false, final false
inline void SetAutoSmoothTension(int32_t  index, float_t  tension) ;

/// @brief Method SetAutoSmoothTension, addr 0xb3140ec, size 0xc, virtual false, abstract: false, final false
inline void SetAutoSmoothTension(::UnityEngine::Splines::SplineRange  range, float_t  tension) ;

/// @brief Method SetAutoSmoothTensionInternal, addr 0xb3140f8, size 0x120, virtual false, abstract: false, final false
inline void SetAutoSmoothTensionInternal(::UnityEngine::Splines::SplineRange  range, float_t  tension, bool  setDirty) ;

/// @brief Method SetAutoSmoothTensionNoNotify, addr 0xb314218, size 0x54, virtual false, abstract: false, final false
inline void SetAutoSmoothTensionNoNotify(int32_t  index, float_t  tension) ;

/// @brief Method SetAutoSmoothTensionNoNotify, addr 0xb31426c, size 0xc, virtual false, abstract: false, final false
inline void SetAutoSmoothTensionNoNotify(::UnityEngine::Splines::SplineRange  range, float_t  tension) ;

/// @brief Method SetDirty, addr 0xb313094, size 0x400, virtual false, abstract: false, final false
inline void SetDirty(::UnityEngine::Splines::SplineModification  modificationEvent, int32_t  knotIndex) ;

/// @brief Method SetDirtyNoNotify, addr 0xb312dfc, size 0xa8, virtual false, abstract: false, final false
inline void SetDirtyNoNotify() ;

/// @brief Method SetFloat4Data, addr 0xb3129a4, size 0x68, virtual false, abstract: false, final false
inline void SetFloat4Data(::StringW  key, ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*  value) ;

/// @brief Method SetFloatData, addr 0xb31293c, size 0x68, virtual false, abstract: false, final false
inline void SetFloatData(::StringW  key, ::UnityEngine::Splines::SplineData_1<float_t>*  value) ;

/// @brief Method SetIntData, addr 0xb312a0c, size 0x68, virtual false, abstract: false, final false
inline void SetIntData(::StringW  key, ::UnityEngine::Splines::SplineData_1<int32_t>*  value) ;

/// @brief Method SetKnot, addr 0xb315404, size 0x70, virtual false, abstract: false, final false
inline void SetKnot(int32_t  index, ::UnityEngine::Splines::BezierKnot  value, ::UnityEngine::Splines::BezierTangent  main) ;

/// @brief Method SetKnotNoNotify, addr 0xb3150b4, size 0x170, virtual false, abstract: false, final false
inline void SetKnotNoNotify(int32_t  index, ::UnityEngine::Splines::BezierKnot  value, ::UnityEngine::Splines::BezierTangent  main) ;

/// @brief Method SetObjectData, addr 0xb312a74, size 0x68, virtual false, abstract: false, final false
inline void SetObjectData(::StringW  key, ::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method SetTangentMode, addr 0xb313c5c, size 0x94, virtual false, abstract: false, final false
inline void SetTangentMode(int32_t  index, ::UnityEngine::Splines::TangentMode  mode, ::UnityEngine::Splines::BezierTangent  main) ;

/// @brief Method SetTangentMode, addr 0xb313984, size 0x5c, virtual false, abstract: false, final false
inline void SetTangentMode(::UnityEngine::Splines::TangentMode  mode) ;

/// @brief Method SetTangentMode, addr 0xb3139e0, size 0x27c, virtual false, abstract: false, final false
inline void SetTangentMode(::UnityEngine::Splines::SplineRange  range, ::UnityEngine::Splines::TangentMode  mode, ::UnityEngine::Splines::BezierTangent  main) ;

/// @brief Method SetTangentModeNoNotify, addr 0xb313d84, size 0x2b0, virtual false, abstract: false, final false
inline void SetTangentModeNoNotify(int32_t  index, ::UnityEngine::Splines::TangentMode  mode, ::UnityEngine::Splines::BezierTangent  main) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb317c74, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0xb317878, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Splines::BezierKnot> ToArray() ;

/// @brief Method TryGetFloat4Data, addr 0xb30eda8, size 0x68, virtual false, abstract: false, final false
inline bool TryGetFloat4Data(::StringW  key, ::by_ref<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>  data) ;

/// @brief Method TryGetFloatData, addr 0xb30ebbc, size 0x68, virtual false, abstract: false, final false
inline bool TryGetFloatData(::StringW  key, ::by_ref<::UnityEngine::Splines::SplineData_1<float_t>*>  data) ;

/// @brief Method TryGetIntData, addr 0xb30ef84, size 0x68, virtual false, abstract: false, final false
inline bool TryGetIntData(::StringW  key, ::by_ref<::UnityEngine::Splines::SplineData_1<int32_t>*>  data) ;

/// @brief Method TryGetObjectData, addr 0xb30f170, size 0x68, virtual false, abstract: false, final false
inline bool TryGetObjectData(::StringW  key, ::by_ref<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>  data) ;

/// @brief Method WarmUpCurveUps, addr 0xb3173b8, size 0xc4, virtual false, abstract: false, final false
inline void WarmUpCurveUps() ;

/// @brief Method Warmup, addr 0xb317704, size 0x18, virtual false, abstract: false, final false
inline void Warmup() ;

constexpr ::System::Action* const& __cordl_internal_get_changed() const;

constexpr ::System::Action*& __cordl_internal_get_changed() ;

constexpr bool const& __cordl_internal_get_m_Closed() const;

constexpr bool& __cordl_internal_get_m_Closed() ;

constexpr ::UnityEngine::Splines::SplineType const& __cordl_internal_get_m_EditModeType() const;

constexpr ::UnityEngine::Splines::SplineType& __cordl_internal_get_m_EditModeType() ;

constexpr ::UnityEngine::Splines::SplineDataDictionary_1<::Unity::Mathematics::float4>* const& __cordl_internal_get_m_Float4Data() const;

constexpr ::UnityEngine::Splines::SplineDataDictionary_1<::Unity::Mathematics::float4>*& __cordl_internal_get_m_Float4Data() ;

constexpr ::UnityEngine::Splines::SplineDataDictionary_1<float_t>* const& __cordl_internal_get_m_FloatData() const;

constexpr ::UnityEngine::Splines::SplineDataDictionary_1<float_t>*& __cordl_internal_get_m_FloatData() ;

constexpr ::UnityEngine::Splines::SplineDataDictionary_1<int32_t>* const& __cordl_internal_get_m_IntData() const;

constexpr ::UnityEngine::Splines::SplineDataDictionary_1<int32_t>*& __cordl_internal_get_m_IntData() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>* const& __cordl_internal_get_m_Knots() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>*& __cordl_internal_get_m_Knots() ;

constexpr ::System::ValueTuple_2<float_t,float_t> const& __cordl_internal_get_m_LastKnotChangeCurveLengths() const;

constexpr ::System::ValueTuple_2<float_t,float_t>& __cordl_internal_get_m_LastKnotChangeCurveLengths() ;

constexpr float_t const& __cordl_internal_get_m_Length() const;

constexpr float_t& __cordl_internal_get_m_Length() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline_MetaData*>* const& __cordl_internal_get_m_MetaData() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline_MetaData*>*& __cordl_internal_get_m_MetaData() ;

constexpr ::UnityEngine::Splines::SplineDataDictionary_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_ObjectData() const;

constexpr ::UnityEngine::Splines::SplineDataDictionary_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_ObjectData() ;

constexpr void __cordl_internal_set_changed(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_Closed(bool  value) ;

constexpr void __cordl_internal_set_m_EditModeType(::UnityEngine::Splines::SplineType  value) ;

constexpr void __cordl_internal_set_m_Float4Data(::UnityEngine::Splines::SplineDataDictionary_1<::Unity::Mathematics::float4>*  value) ;

constexpr void __cordl_internal_set_m_FloatData(::UnityEngine::Splines::SplineDataDictionary_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_IntData(::UnityEngine::Splines::SplineDataDictionary_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_Knots(::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>*  value) ;

constexpr void __cordl_internal_set_m_LastKnotChangeCurveLengths(::System::ValueTuple_2<float_t,float_t>  value) ;

constexpr void __cordl_internal_set_m_Length(float_t  value) ;

constexpr void __cordl_internal_set_m_MetaData(::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline_MetaData*>*  value) ;

constexpr void __cordl_internal_set_m_ObjectData(::UnityEngine::Splines::SplineDataDictionary_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method .ctor, addr 0xb315474, size 0x22c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb3156a0, size 0x280, virtual false, abstract: false, final false
inline void _ctor(int32_t  knotCapacity, bool  closed) ;

/// @brief Method .ctor, addr 0xb315b94, size 0x264, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*  knotPositions, ::UnityEngine::Splines::TangentMode  tangentMode, bool  closed) ;

/// @brief Method .ctor, addr 0xb315920, size 0x274, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*  knots, bool  closed) ;

/// @brief Method .ctor, addr 0xb316398, size 0xb6c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::Spline*  spline) ;

/// [CompilerGenerated]
/// @brief Method add_Changed, addr 0xb312c64, size 0xcc, virtual false, abstract: false, final false
static inline void add_Changed(::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_changed, addr 0xb312b2c, size 0x9c, virtual false, abstract: false, final false
inline void add_changed(::System::Action*  value) ;

static inline ::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>* getStaticF_Changed() ;

/// @brief Method get_Closed, addr 0xb314410, size 0x8, virtual true, abstract: false, final true
inline bool get_Closed() ;

/// @brief Method get_Count, addr 0xb312adc, size 0x48, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_EditType, addr 0xb314278, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineType get_EditType() ;

/// @brief Method get_IsReadOnly, addr 0xb312b24, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0xb31533c, size 0x90, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierKnot get_Item(int32_t  index) ;

/// @brief Method get_Knots, addr 0xb314304, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* get_Knots() ;

/// [IteratorStateMachine(typeof(UnityEngine.Splines.Spline::<get_embeddedSplineData>d__15))]
/// @brief Method get_embeddedSplineData, addr 0xb312378, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>* get_embeddedSplineData() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::ICollection_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__ICollection_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IList_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::UnityEngine::Splines::ISpline"
constexpr ::UnityEngine::Splines::ISpline* i___UnityEngine__Splines__ISpline() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_Changed, addr 0xb312d30, size 0xcc, virtual false, abstract: false, final false
static inline void remove_Changed(::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_changed, addr 0xb312bc8, size 0x9c, virtual false, abstract: false, final false
inline void remove_changed(::System::Action*  value) ;

static inline void setStaticF_Changed(::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*  value) ;

/// @brief Method set_Closed, addr 0xb314418, size 0x38, virtual false, abstract: false, final false
inline void set_Closed(bool  value) ;

/// @brief Method set_EditType, addr 0xb314280, size 0x84, virtual false, abstract: false, final false
inline void set_EditType(::UnityEngine::Splines::SplineType  value) ;

/// @brief Method set_Item, addr 0xb3153cc, size 0x38, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, ::UnityEngine::Splines::BezierKnot  value) ;

/// @brief Method set_Knots, addr 0xb31430c, size 0x104, virtual false, abstract: false, final false
inline void set_Knots(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Spline(Spline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spline(Spline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27946};

/// @brief Field k_BatchModification offset 0xffffffff size 0x4
static constexpr int32_t  k_BatchModification{static_cast<int32_t>(0xffffffff)};

/// @brief Field k_CurveDistanceLutResolution offset 0xffffffff size 0x4
static constexpr int32_t  k_CurveDistanceLutResolution{static_cast<int32_t>(0x1e)};

/// @brief Field k_DefaultMainTangent value: I32(1)
static ::UnityEngine::Splines::BezierTangent const k_DefaultMainTangent;

/// @brief Field k_DefaultTangentMode value: I32(4)
static ::UnityEngine::Splines::TangentMode const k_DefaultTangentMode;

/// [SerializeField]
/// [Obsolete]
/// [HideInInspector]
/// @brief Field m_EditModeType, offset: 0x10, size: 0x1, def value: None
 ::UnityEngine::Splines::SplineType  ___m_EditModeType;

/// [SerializeField]
/// @brief Field m_Knots, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>*  ___m_Knots;

/// @brief Field m_Length, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_Length;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_MetaData, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline_MetaData*>*  ___m_MetaData;

/// [SerializeField]
/// @brief Field m_Closed, offset: 0x30, size: 0x1, def value: None
 bool  ___m_Closed;

/// [SerializeField]
/// @brief Field m_IntData, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Splines::SplineDataDictionary_1<int32_t>*  ___m_IntData;

/// [SerializeField]
/// @brief Field m_FloatData, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Splines::SplineDataDictionary_1<float_t>*  ___m_FloatData;

/// [SerializeField]
/// @brief Field m_Float4Data, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Splines::SplineDataDictionary_1<::Unity::Mathematics::float4>*  ___m_Float4Data;

/// [SerializeField]
/// @brief Field m_ObjectData, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Splines::SplineDataDictionary_1<::UnityW<::UnityEngine::Object>>*  ___m_ObjectData;

/// [CompilerGenerated]
/// @brief Field changed, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___changed;

/// [TupleElementNames(new[] { "curve0", "curve1" })]
/// @brief Field m_LastKnotChangeCurveLengths, offset: 0x60, size: 0x10, def value: None
 ::System::ValueTuple_2<float_t,float_t>  ___m_LastKnotChangeCurveLengths;

/// @brief Size padding 0x68 - 0x70 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::Spline, ___m_EditModeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline, ___m_Knots) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline, ___m_Length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline, ___m_MetaData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline, ___m_Closed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline, ___m_IntData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline, ___m_FloatData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline, ___m_Float4Data) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline, ___m_ObjectData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline, ___changed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline, ___m_LastKnotChangeCurveLengths) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::Spline) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.Spline/<get_embeddedSplineData>d__15
class CORDL_TYPE Spline__get_embeddedSplineData_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Splines_ISplineModificationHandler__get_Current)) ::UnityEngine::Splines::ISplineModificationHandler*  System_Collections_Generic_IEnumerator_UnityEngine_Splines_ISplineModificationHandler__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::Splines::ISplineModificationHandler*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::Splines::Spline*  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<int32_t>*>*  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<float_t>*>*  __7__wrap2;

/// @brief Field <>7__wrap3, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap3, put=__cordl_internal_set___7__wrap3)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::Unity::Mathematics::float4>*>*  __7__wrap3;

/// @brief Field <>7__wrap4, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap4, put=__cordl_internal_set___7__wrap4)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::UnityW<::UnityEngine::Object>>*>*  __7__wrap4;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb3183d8, size 0x744, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Splines.ISplineModificationHandler>.GetEnumerator, addr 0xb318e24, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>* System_Collections_Generic_IEnumerable_UnityEngine_Splines_ISplineModificationHandler__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Splines.ISplineModificationHandler>.get_Current, addr 0xb318ddc, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::ISplineModificationHandler* System_Collections_Generic_IEnumerator_UnityEngine_Splines_ISplineModificationHandler__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb318ec8, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb318de4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb318e1c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb318360, size 0x78, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::Splines::ISplineModificationHandler* const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::Splines::ISplineModificationHandler*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Splines::Spline* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::Splines::Spline*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<int32_t>*>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<int32_t>*>*& __cordl_internal_get___7__wrap1() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<float_t>*>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<float_t>*>*& __cordl_internal_get___7__wrap2() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::Unity::Mathematics::float4>*>* const& __cordl_internal_get___7__wrap3() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::Unity::Mathematics::float4>*>*& __cordl_internal_get___7__wrap3() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::UnityW<::UnityEngine::Object>>*>* const& __cordl_internal_get___7__wrap4() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::UnityW<::UnityEngine::Object>>*>*& __cordl_internal_get___7__wrap4() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::Splines::ISplineModificationHandler*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::Splines::Spline*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<int32_t>*>*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<float_t>*>*  value) ;

constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::Unity::Mathematics::float4>*>*  value) ;

constexpr void __cordl_internal_set___7__wrap4(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::UnityW<::UnityEngine::Object>>*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0xb318b1c, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0xb318bcc, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// @brief Method <>m__Finally3, addr 0xb318c7c, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally3() ;

/// @brief Method <>m__Finally4, addr 0xb318d2c, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally4() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb3123f8, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__ISplineModificationHandler__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__Splines__ISplineModificationHandler__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spline__get_embeddedSplineData_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spline__get_embeddedSplineData_d__15", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Spline__get_embeddedSplineData_d__15(Spline__get_embeddedSplineData_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spline__get_embeddedSplineData_d__15", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spline__get_embeddedSplineData_d__15(Spline__get_embeddedSplineData_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27945};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Splines::ISplineModificationHandler*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Splines::Spline*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<int32_t>*>*  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<float_t>*>*  _____7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::Unity::Mathematics::float4>*>*  _____7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::UnityW<::UnityEngine::Object>>*>*  _____7__wrap4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15, _____7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15, _____7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15, _____7__wrap4) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies System.Object, Unity.Mathematics.float3, UnityEngine.Splines.DistanceToInterpolation, UnityEngine.Splines.TangentMode
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.Spline/MetaData
class CORDL_TYPE Spline_MetaData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DistanceToInterpolation)) ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  DistanceToInterpolation;

/// @brief Field Mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Mode, put=__cordl_internal_set_Mode)) ::UnityEngine::Splines::TangentMode  Mode;

/// @brief Field Tension, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tension, put=__cordl_internal_set_Tension)) float_t  Tension;

 __declspec(property(get=get_UpVectors)) ::ArrayW<::Unity::Mathematics::float3>  UpVectors;

/// @brief Field m_DistanceToInterpolation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DistanceToInterpolation, put=__cordl_internal_set_m_DistanceToInterpolation)) ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  m_DistanceToInterpolation;

/// @brief Field m_UpVectors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UpVectors, put=__cordl_internal_set_m_UpVectors)) ::ArrayW<::Unity::Mathematics::float3>  m_UpVectors;

/// @brief Method InvalidateCache, addr 0xb312fb0, size 0xe4, virtual false, abstract: false, final false
inline void InvalidateCache() ;

static inline ::UnityEngine::Splines::Spline_MetaData* New_ctor() ;

static inline ::UnityEngine::Splines::Spline_MetaData* New_ctor(::UnityEngine::Splines::Spline_MetaData*  toCopy) ;

constexpr ::UnityEngine::Splines::TangentMode const& __cordl_internal_get_Mode() const;

constexpr ::UnityEngine::Splines::TangentMode& __cordl_internal_get_Mode() ;

constexpr float_t const& __cordl_internal_get_Tension() const;

constexpr float_t& __cordl_internal_get_Tension() ;

constexpr ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> const& __cordl_internal_get_m_DistanceToInterpolation() const;

constexpr ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>& __cordl_internal_get_m_DistanceToInterpolation() ;

constexpr ::ArrayW<::Unity::Mathematics::float3> const& __cordl_internal_get_m_UpVectors() const;

constexpr ::ArrayW<::Unity::Mathematics::float3>& __cordl_internal_get_m_UpVectors() ;

constexpr void __cordl_internal_set_Mode(::UnityEngine::Splines::TangentMode  value) ;

constexpr void __cordl_internal_set_Tension(float_t  value) ;

constexpr void __cordl_internal_set_m_DistanceToInterpolation(::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  value) ;

constexpr void __cordl_internal_set_m_UpVectors(::ArrayW<::Unity::Mathematics::float3>  value) ;

/// @brief Method .ctor, addr 0xb313498, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb317abc, size 0x128, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::Spline_MetaData*  toCopy) ;

/// @brief Method get_DistanceToInterpolation, addr 0xb31710c, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> get_DistanceToInterpolation() ;

/// @brief Method get_UpVectors, addr 0xb31747c, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::Unity::Mathematics::float3> get_UpVectors() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spline_MetaData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spline_MetaData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Spline_MetaData(Spline_MetaData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spline_MetaData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spline_MetaData(Spline_MetaData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27944};

/// @brief Field Mode, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::Splines::TangentMode  ___Mode;

/// @brief Field Tension, offset: 0x14, size: 0x4, def value: None
 float_t  ___Tension;

/// @brief Field m_DistanceToInterpolation, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  ___m_DistanceToInterpolation;

/// @brief Field m_UpVectors, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Unity::Mathematics::float3>  ___m_UpVectors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::Spline_MetaData, ___Mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline_MetaData, ___Tension) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline_MetaData, ___m_DistanceToInterpolation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::Spline_MetaData, ___m_UpVectors) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::Spline_MetaData) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Splines

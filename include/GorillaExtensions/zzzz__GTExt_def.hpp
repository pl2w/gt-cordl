#pragma once
// IWYU pragma private; include "GorillaExtensions/GTExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTExt)
namespace Cysharp::Text {
struct Utf16ValueStringBuilder;
}
namespace GlobalNamespace {
struct GTExt_ParityOptions;
}
namespace GlobalNamespace {
template<typename T,typename TStop1,typename TStop2>
struct GTExt___c__DisplayClass10_0_3;
}
namespace GlobalNamespace {
template<typename T,typename TStop1,typename TStop2,typename TStop3>
struct GTExt___c__DisplayClass11_0_4;
}
namespace GlobalNamespace {
template<typename T,typename TStop1>
struct GTExt___c__DisplayClass7_0_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
class Type;
}
namespace Unity::Mathematics {
struct half3;
}
namespace UnityEngine::Pool {
template<typename T>
struct PooledObject_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct FindObjectsInactive;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GorillaExtensions {
class GTExt;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::GTExt*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::GTExt*, "GorillaExtensions", "GTExt");
// [Extension]
// Dependencies System.Object, UnityEngine.Component
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.GTExt
class CORDL_TYPE GTExt : public ::System::Object {
public:
// Declarations
using ParityOptions = ::GlobalNamespace::GTExt_ParityOptions;

template<typename T,typename TStop1,typename TStop2>
using __c__DisplayClass10_0_3 = ::GlobalNamespace::GTExt___c__DisplayClass10_0_3<T, TStop1, TStop2>;

template<typename T,typename TStop1,typename TStop2,typename TStop3>
using __c__DisplayClass11_0_4 = ::GlobalNamespace::GTExt___c__DisplayClass11_0_4<T, TStop1, TStop2, TStop3>;

template<typename T,typename TStop1>
using __c__DisplayClass7_0_2 = ::GlobalNamespace::GTExt___c__DisplayClass7_0_2<T, TStop1>;

/// @brief Field allStringsUsed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allStringsUsed, put=setStaticF_allStringsUsed)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  allStringsUsed;

/// @brief Field caseInsenseInner, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_caseInsenseInner, put=setStaticF_caseInsenseInner)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*  caseInsenseInner;

/// @brief Field caseSenseInner, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_caseSenseInner, put=setStaticF_caseSenseInner)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*  caseSenseInner;

/// @brief Method AddDictValue, addr 0x5cfe5cc, size 0x90, virtual false, abstract: false, final false
static inline void AddDictValue(::UnityEngine::Transform*  xForm, ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*  dict) ;

/// [Extension]
/// @brief Method AddSortedUnique, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void AddSortedUnique(::System::Collections::Generic::List_1<T>*  list, T  item) ;

/// [Extension]
/// @brief Method Clamp, addr 0x5cfcadc, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Clamp(::UnityEngine::Vector3  value, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// [Extension]
/// @brief Method ClampMagnitudeSafe, addr 0x5cfb3dc, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ClampMagnitudeSafe(::UnityEngine::Vector2  v2, float_t  magnitude) ;

/// [Extension]
/// @brief Method ClampMagnitudeSafe, addr 0x5cfb588, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClampMagnitudeSafe(::UnityEngine::Vector3  v3, float_t  magnitude) ;

/// [Extension]
/// @brief Method ClampSafe, addr 0x5cfb9a0, size 0x44, virtual false, abstract: false, final false
static inline double_t ClampSafe(double_t  value, double_t  min, double_t  max) ;

/// [Extension]
/// @brief Method ClampSafe, addr 0x5cfb960, size 0x40, virtual false, abstract: false, final false
static inline float_t ClampSafe(float_t  value, float_t  min, float_t  max) ;

/// [Extension]
/// @brief Method ClampThis, addr 0x5cfcba4, size 0x3c, virtual false, abstract: false, final false
static inline void ClampThis(::by_ref<::UnityEngine::Vector3>  value, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// [Extension]
/// @brief Method ClampThisMagnitudeSafe, addr 0x5cfb490, size 0xf8, virtual false, abstract: false, final false
static inline void ClampThisMagnitudeSafe(::by_ref<::UnityEngine::Vector2>  v2, float_t  magnitude) ;

/// [Extension]
/// @brief Method ClampThisMagnitudeSafe, addr 0x5cfb65c, size 0x124, virtual false, abstract: false, final false
static inline void ClampThisMagnitudeSafe(::by_ref<::UnityEngine::Vector3>  v3, float_t  magnitude) ;

/// @brief Method ClearDicts, addr 0x5cfe65c, size 0xd0, virtual false, abstract: false, final false
static inline void ClearDicts() ;

/// [Extension]
/// @brief Method CompareAs255Unclamped, addr 0x5cf8ee8, size 0xa4, virtual false, abstract: false, final false
static inline bool CompareAs255Unclamped(::UnityEngine::Color  a, ::UnityEngine::Color  b) ;

/// [Extension]
/// @brief Method ContainsSorted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool ContainsSorted(::System::Collections::Generic::List_1<T>*  list, T  item) ;

/// [Extension]
/// @brief Method DecomposeWithXFlip, addr 0x5cf96ac, size 0x1d0, virtual false, abstract: false, final false
static inline void DecomposeWithXFlip(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::by_ref<::UnityEngine::Vector3>  transformation, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale) ;

/// [Extension]
/// @brief Method Filled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> Filled(::ArrayW<T>  array, T  value) ;

/// @brief Method FindComponentsByExactPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> FindComponentsByExactPath(::StringW  path) ;

/// [Extension]
/// @brief Method FindComponentsByExactPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> FindComponentsByExactPath(::UnityEngine::Transform*  rootXform, ::StringW  path) ;

/// [Extension]
/// @brief Method FindComponentsByExactPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> FindComponentsByExactPath(::UnityEngine::Transform*  rootXform, ::ArrayW<::StringW>  splitPath) ;

/// [Extension]
/// @brief Method FindComponentsByExactPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> FindComponentsByExactPath(::UnityEngine::SceneManagement::Scene  scene, ::StringW  path) ;

/// [Extension]
/// @brief Method FindComponentsByExactPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> FindComponentsByExactPath(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  splitPath) ;

/// [Extension]
/// @brief Method FindComponentsByPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> FindComponentsByPath(::UnityEngine::Transform*  rootXform, ::StringW  globPath, bool  caseSensitive) ;

/// [Extension]
/// @brief Method FindComponentsByPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> FindComponentsByPath(::UnityEngine::Transform*  rootXform, ::ArrayW<::StringW>  pathPartsRegex, bool  caseSensitive) ;

/// [Extension]
/// @brief Method FindComponentsByPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> FindComponentsByPath(::UnityEngine::SceneManagement::Scene  scene, ::StringW  globPath, bool  caseSensitive) ;

/// [Extension]
/// @brief Method FindComponentsByPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> FindComponentsByPath(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  pathPartsRegex, bool  caseSensitive) ;

/// @brief Method FindComponentsByPathInLoadedScenes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> FindComponentsByPathInLoadedScenes(::StringW  wildcardPath, bool  caseSensitive) ;

/// [Extension]
/// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t FindIndex(::System::Collections::Generic::IReadOnlyList_1<T>*  list, ::System::Predicate_1<T>*  match) ;

/// [Extension]
/// @brief Method ForEachBackwards, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForEachBackwards(::System::Collections::Generic::List_1<T>*  list, ::System::Action_1<T>*  action) ;

/// [Extension]
/// @brief Method GTGetComponentsListPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<T>*> GTGetComponentsListPool(::UnityEngine::Component*  root, bool  includeInactive, ::by_ref<::System::Collections::Generic::List_1<T>*>  pooledList) ;

/// [Extension]
/// @brief Method GTGetComponentsListPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<T>*> GTGetComponentsListPool(::UnityEngine::Component*  root, ::by_ref<::System::Collections::Generic::List_1<T>*>  pooledList) ;

/// [Extension]
/// @brief Method GetClosestDistSqr, addr 0x5cfc518, size 0xf4, virtual false, abstract: false, final false
static inline float_t GetClosestDistSqr(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  target) ;

/// [Extension]
/// @brief Method GetClosestDistance, addr 0x5cfc60c, size 0x128, virtual false, abstract: false, final false
static inline float_t GetClosestDistance(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  target) ;

/// [Extension]
/// @brief Method GetClosestPoint, addr 0x5cfc4d0, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetClosestPoint(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  target) ;

/// [Extension]
/// @brief Method GetColumnNoCopy, addr 0x5cf987c, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetColumnNoCopy(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix, /* [IsReadOnly] */ ::by_ref<int32_t>  index) ;

/// [Extension]
/// @brief Method GetComponentByName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetComponentByName(::UnityEngine::Transform*  xform, ::StringW  name, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetComponentByPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetComponentByPath(::UnityEngine::GameObject*  root, ::StringW  path) ;

/// [Extension]
/// @brief Method GetComponentInHierarchy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetComponentInHierarchy(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetComponentPath, addr 0x5cfdd9c, size 0x160, virtual false, abstract: false, final false
static inline ::StringW GetComponentPath(::UnityEngine::Component*  component, int32_t  maxDepth) ;

/// [Extension]
/// @brief Method GetComponentPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::StringW GetComponentPath(T  component, int32_t  maxDepth) ;

/// [Extension]
/// @brief Method GetComponentPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void GetComponentPath(T  component, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  strBuilder, int32_t  maxDepth) ;

/// [Extension]
/// @brief Method GetComponentPathWithSiblingIndexes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::StringW GetComponentPathWithSiblingIndexes(T  component) ;

/// [Extension]
/// @brief Method GetComponentPathWithSiblingIndexes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void GetComponentPathWithSiblingIndexes(T  component, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  strBuilder) ;

/// [Extension]
/// @brief Method GetComponentWithRegex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetComponentWithRegex(::UnityEngine::Component*  root, ::StringW  regexString) ;

/// [Extension]
/// @brief Method GetComponentsByName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsByName(::UnityEngine::Transform*  xform, ::StringW  name, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetComponentsInChildrenUntil, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInChildrenUntil(::UnityEngine::Component*  root, bool  includeInactive, bool  stopAtRoot, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsInChildrenUntil, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1,typename TStop2>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInChildrenUntil(::UnityEngine::Component*  root, bool  includeInactive, bool  stopAtRoot, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsInChildrenUntil, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInChildrenUntil(::UnityEngine::Component*  root, bool  includeInactive, bool  stopAtRoot, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsInChildrenUntil, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
static inline void GetComponentsInChildrenUntil(::UnityEngine::Component*  root, ::by_ref<::System::Collections::Generic::List_1<T>*>  out_included, ::by_ref<::System::Collections::Generic::HashSet_1<T>*>  out_excluded, bool  includeInactive, bool  stopAtRoot, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsInHierarchy, addr 0x5cf80b8, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* GetComponentsInHierarchy(::UnityEngine::SceneManagement::Scene  scene, ::System::Type*  type, bool  includeInactive, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsInHierarchy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInHierarchy(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsInHierarchyUntil, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInHierarchyUntil(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, bool  stopAtRoot, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsInHierarchyUntil, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1,typename TStop2>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInHierarchyUntil(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, bool  stopAtRoot, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsInHierarchyUntil, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInHierarchyUntil(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, bool  stopAtRoot, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsWithRegex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsWithRegex(::UnityEngine::Component*  root, ::StringW  regexString, bool  includeInactive, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsWithRegex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::StringW  regexString, bool  includeInactive, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetComponentsWithRegex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  regexStrings, ::ArrayW<::StringW>  excludeRegexStrings, bool  includeInactive, int32_t  maxCount) ;

/// [Extension]
/// @brief Method GetComponentsWithRegex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  regexStrings, bool  includeInactive, int32_t  maxCount, int32_t  capacity) ;

/// @brief Method GetComponentsWithRegex_Internal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::System::Collections::Generic::List_1<T>* GetComponentsWithRegex_Internal(::System::Collections::Generic::IEnumerable_1<T>*  allComponents, ::StringW  regexString, bool  includeInactive, int32_t  capacity) ;

/// @brief Method GetComponentsWithRegex_Internal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void GetComponentsWithRegex_Internal(::System::Collections::Generic::IEnumerable_1<T>*  allComponents, ::System::Text::RegularExpressions::Regex*  regex, ::by_ref<::System::Collections::Generic::List_1<T>*>  foundComponents) ;

/// [Extension]
/// @brief Method GetComponentsWithRegex_Internal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void GetComponentsWithRegex_Internal(::System::Collections::Generic::List_1<T>*  allComponents, ::ArrayW<::System::Text::RegularExpressions::Regex*>  regexes, int32_t  maxCount, ::by_ref<::System::Collections::Generic::List_1<T>*>  foundComponents) ;

/// [Extension]
/// @brief Method GetDepth, addr 0x5cfdefc, size 0x94, virtual false, abstract: false, final false
static inline int32_t GetDepth(::UnityEngine::Transform*  xform) ;

/// [Extension]
/// @brief Method GetFinite, addr 0x5cfb9fc, size 0x18, virtual false, abstract: false, final false
static inline double_t GetFinite(double_t  value) ;

/// [Extension]
/// @brief Method GetFinite, addr 0x5cfb9e4, size 0x18, virtual false, abstract: false, final false
static inline float_t GetFinite(float_t  value) ;

/// [Extension]
/// @brief Method GetGameObjectsInHierarchy, addr 0x5cf81d4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetGameObjectsInHierarchy(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetGameObjectsInHierarchy, addr 0x5cf89b4, size 0x260, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetGameObjectsInHierarchy(::UnityEngine::SceneManagement::Scene  scene, ::StringW  name, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetGameObjectsWithRegex, addr 0x5cf8258, size 0x270, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetGameObjectsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::StringW  regexString, bool  includeInactive, int32_t  capacity) ;

/// [Extension]
/// @brief Method GetGameObjectsWithRegex, addr 0x5cf873c, size 0x278, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetGameObjectsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  regexStrings, ::ArrayW<::StringW>  excludeRegexStrings, bool  includeInactive, int32_t  maxCount) ;

/// [Extension]
/// @brief Method GetGameObjectsWithRegex, addr 0x5cf84c8, size 0x274, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetGameObjectsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  regexStrings, bool  includeInactive, int32_t  maxCount) ;

/// [Extension]
/// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetOrAddComponent(::UnityEngine::GameObject*  gameObject) ;

/// [Extension]
/// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetOrAddComponent(::UnityEngine::GameObject*  gameObject, ::by_ref<T>  component) ;

/// [Extension]
/// @brief Method GetPath, addr 0x5cfd028, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetPath(::UnityEngine::GameObject*  gameObject) ;

/// [Extension]
/// @brief Method GetPath, addr 0x5cfd110, size 0x78, virtual false, abstract: false, final false
static inline ::StringW GetPath(::UnityEngine::GameObject*  gameObject, int32_t  limit) ;

/// [Extension]
/// @brief Method GetPath, addr 0x5cfcbe0, size 0xe4, virtual false, abstract: false, final false
static inline ::StringW GetPath(::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method GetPath, addr 0x5cfcdfc, size 0x104, virtual false, abstract: false, final false
static inline ::StringW GetPath(::UnityEngine::Transform*  transform, int32_t  maxDepth) ;

/// [Extension]
/// @brief Method GetPath, addr 0x5cfcf00, size 0x128, virtual false, abstract: false, final false
static inline ::StringW GetPath(::UnityEngine::Transform*  transform, ::UnityEngine::Transform*  stopper) ;

/// [Extension]
/// @brief Method GetPath, addr 0x5cfd098, size 0x78, virtual false, abstract: false, final false
static inline void GetPath(::UnityEngine::GameObject*  gameObject, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  sb) ;

/// [Extension]
/// @brief Method GetPathQ, addr 0x5cfccc4, size 0x138, virtual false, abstract: false, final false
static inline ::StringW GetPathQ(::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method GetPathQ, addr 0x5cf4ec4, size 0x288, virtual false, abstract: false, final false
static inline void GetPathQ(::UnityEngine::Transform*  transform, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  sb) ;

/// [Extension]
/// @brief Method GetPathWithSiblingIndexes, addr 0x5cfe140, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetPathWithSiblingIndexes(::UnityEngine::GameObject*  gameObject) ;

/// [Extension]
/// @brief Method GetPathWithSiblingIndexes, addr 0x5cfdf90, size 0x138, virtual false, abstract: false, final false
static inline ::StringW GetPathWithSiblingIndexes(::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method GetPathWithSiblingIndexes, addr 0x5cfe0c8, size 0x78, virtual false, abstract: false, final false
static inline void GetPathWithSiblingIndexes(::UnityEngine::GameObject*  gameObject, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  stringBuilder) ;

/// [Extension]
/// @brief Method GetPathWithSiblingIndexes, addr 0x5cfdbfc, size 0x1a0, virtual false, abstract: false, final false
static inline void GetPathWithSiblingIndexes(::UnityEngine::Transform*  transform, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  strBuilder) ;

/// [Extension]
/// @brief Method GetPaths, addr 0x5cfd188, size 0x100, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetPaths(::ArrayW<::UnityEngine::GameObject*>  gobj) ;

/// [Extension]
/// @brief Method GetPaths, addr 0x5cfd288, size 0x100, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetPaths(::ArrayW<::UnityEngine::Transform*>  xform) ;

/// [Extension]
/// @brief Method GetRandomIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetRandomIndex(::System::Collections::Generic::IReadOnlyList_1<T>*  self) ;

/// [Extension]
/// @brief Method GetRandomItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetRandomItem(::System::Collections::Generic::IReadOnlyList_1<T>*  self) ;

/// @brief Method GetRelativePath, addr 0x5cfd87c, size 0x15c, virtual false, abstract: false, final false
static inline ::StringW GetRelativePath(::StringW  fromPath, ::StringW  toPath) ;

/// [Extension]
/// @brief Method GetRelativePath, addr 0x5cfda5c, size 0x1a0, virtual false, abstract: false, final false
static inline ::StringW GetRelativePath(::UnityEngine::Transform*  fromXform, ::UnityEngine::Transform*  toXform) ;

/// @brief Method GetRelativePath, addr 0x5cfd388, size 0x4f4, virtual false, abstract: false, final false
static inline void GetRelativePath(::StringW  fromPath, ::StringW  toPath, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  ZStringBuilder) ;

/// [Extension]
/// @brief Method GetRelativePath, addr 0x5cfd9d8, size 0x84, virtual false, abstract: false, final false
static inline void GetRelativePath(::UnityEngine::Transform*  fromXform, ::UnityEngine::Transform*  toXform, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  ZStringBuilder) ;

/// [Extension]
/// @brief Method GetValidWithFallback, addr 0x5cfb170, size 0x138, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetValidWithFallback(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  q, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  safeVal) ;

/// [Extension]
/// @brief Method GetValidWithFallback, addr 0x5cfa884, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetValidWithFallback(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  safeVal) ;

/// [Extension]
/// @brief Method InverseTransformRotation, addr 0x5cf8d1c, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion InverseTransformRotation(::UnityEngine::Transform*  transform, ::UnityEngine::Quaternion  localRotation) ;

/// [Extension]
/// @brief Method IsInfinity, addr 0x5cfaa90, size 0x114, virtual false, abstract: false, final false
static inline bool IsInfinity(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::half3>  h) ;

/// [Extension]
/// @brief Method IsInfinity, addr 0x5cfa5b0, size 0x54, virtual false, abstract: false, final false
static inline bool IsInfinity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  q) ;

/// [Extension]
/// @brief Method IsInfinity, addr 0x5cfa56c, size 0x44, virtual false, abstract: false, final false
static inline bool IsInfinity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v) ;

/// [Extension]
/// @brief Method IsLongerThan, addr 0x5cfc358, size 0x1c, virtual false, abstract: false, final false
static inline bool IsLongerThan(::UnityEngine::Vector2  v, float_t  len) ;

/// [Extension]
/// @brief Method IsLongerThan, addr 0x5cfc374, size 0x24, virtual false, abstract: false, final false
static inline bool IsLongerThan(::UnityEngine::Vector2  v, ::UnityEngine::Vector2  v2) ;

/// [Extension]
/// @brief Method IsLongerThan, addr 0x5cfc398, size 0x24, virtual false, abstract: false, final false
static inline bool IsLongerThan(::UnityEngine::Vector3  v, float_t  len) ;

/// [Extension]
/// @brief Method IsLongerThan, addr 0x5cfc3bc, size 0x34, virtual false, abstract: false, final false
static inline bool IsLongerThan(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  v2) ;

/// [Extension]
/// @brief Method IsMagnitudeValid, addr 0x5cfa770, size 0x114, virtual false, abstract: false, final false
static inline bool IsMagnitudeValid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v, float_t  magnitude) ;

/// [Extension]
/// @brief Method IsNaN, addr 0x5cfa998, size 0xf8, virtual false, abstract: false, final false
static inline bool IsNaN(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::half3>  h) ;

/// [Extension]
/// @brief Method IsNaN, addr 0x5cfa4d4, size 0x44, virtual false, abstract: false, final false
static inline bool IsNaN(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v) ;

/// [Extension]
/// @brief Method IsNan, addr 0x5cfa518, size 0x54, virtual false, abstract: false, final false
static inline bool IsNan(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  q) ;

/// [Extension]
/// @brief Method IsNotNull, addr 0x5cfca7c, size 0x60, virtual false, abstract: false, final false
static inline bool IsNotNull(::UnityEngine::Object*  mono) ;

/// [Extension]
/// @brief Method IsNull, addr 0x5cfca0c, size 0x70, virtual false, abstract: false, final false
static inline bool IsNull(::UnityEngine::Object*  mono) ;

/// [Extension]
/// @brief Method IsShorterThan, addr 0x5cfc2c0, size 0x1c, virtual false, abstract: false, final false
static inline bool IsShorterThan(::UnityEngine::Vector2  v, float_t  len) ;

/// [Extension]
/// @brief Method IsShorterThan, addr 0x5cfc2dc, size 0x24, virtual false, abstract: false, final false
static inline bool IsShorterThan(::UnityEngine::Vector2  v, ::UnityEngine::Vector2  v2) ;

/// [Extension]
/// @brief Method IsShorterThan, addr 0x5cfc300, size 0x24, virtual false, abstract: false, final false
static inline bool IsShorterThan(::UnityEngine::Vector3  v, float_t  len) ;

/// [Extension]
/// @brief Method IsShorterThan, addr 0x5cfc324, size 0x34, virtual false, abstract: false, final false
static inline bool IsShorterThan(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  v2) ;

/// [Extension]
/// @brief Method IsValid, addr 0x5cfacbc, size 0x3bc, virtual false, abstract: false, final false
static inline bool IsValid(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::half3>  h, /* [IsReadOnly] */ ::by_ref<float_t>  maxVal) ;

/// [Extension]
/// @brief Method IsValid, addr 0x5cfb078, size 0xf8, virtual false, abstract: false, final false
static inline bool IsValid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  q) ;

/// [Extension]
/// @brief Method IsValid, addr 0x5cfa644, size 0x12c, virtual false, abstract: false, final false
static inline bool IsValid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v, /* [IsReadOnly] */ ::by_ref<float_t>  maxVal) ;

/// [Extension]
/// @brief Method LerpTo, addr 0x5cfa3f4, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 LerpTo(::UnityEngine::Matrix4x4  a, ::UnityEngine::Matrix4x4  b, float_t  t) ;

/// [Extension]
/// @brief Method LerpToUnclamped, addr 0x5cfbc5c, size 0x34, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 LerpToUnclamped(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  b, float_t  t) ;

/// [Extension]
/// @brief Method LerpTo_HandleNegativeScale, addr 0x5cfbb8c, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 LerpTo_HandleNegativeScale(::UnityEngine::Matrix4x4  a, ::UnityEngine::Matrix4x4  b, float_t  t) ;

/// [Extension]
/// @brief Method LocalMatrixRelativeToParentNoScale, addr 0x5cf9c8c, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 LocalMatrixRelativeToParentNoScale(::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method LocalMatrixRelativeToParentWithScale, addr 0x5cf9d80, size 0x128, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 LocalMatrixRelativeToParentWithScale(::UnityEngine::Transform*  transform) ;

/// @brief Method Matrix4X4LerpHandleNegativeScale, addr 0x5cfba14, size 0x178, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 Matrix4X4LerpHandleNegativeScale(::UnityEngine::Matrix4x4  a, ::UnityEngine::Matrix4x4  b, float_t  t) ;

/// @brief Method Matrix4X4LerpNoScale, addr 0x5cfa274, size 0x180, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 Matrix4X4LerpNoScale(::UnityEngine::Matrix4x4  a, ::UnityEngine::Matrix4x4  b, float_t  t) ;

/// @brief Method Matrix4x4Scale, addr 0x5cf9a1c, size 0x34, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 Matrix4x4Scale(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  vector) ;

/// [Extension]
/// @brief Method MaxSafe, addr 0x5cfb8d8, size 0x3c, virtual false, abstract: false, final false
static inline double_t MaxSafe(double_t  value, float_t  max) ;

/// [Extension]
/// @brief Method MaxSafe, addr 0x5cfb870, size 0x28, virtual false, abstract: false, final false
static inline float_t MaxSafe(float_t  value, float_t  max) ;

/// [Extension]
/// @brief Method MinSafe, addr 0x5cfb7e8, size 0x3c, virtual false, abstract: false, final false
static inline double_t MinSafe(double_t  value, float_t  min) ;

/// [Extension]
/// @brief Method MinSafe, addr 0x5cfb780, size 0x28, virtual false, abstract: false, final false
static inline float_t MinSafe(float_t  value, float_t  min) ;

/// [Extension]
/// @brief Method MultiplyBy, addr 0x5cf8ec8, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 MultiplyBy(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  vec, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  mulitplier) ;

/// [Extension]
/// @brief Method MultiplyInPlaceWith, addr 0x5cf967c, size 0x30, virtual false, abstract: false, final false
static inline void MultiplyInPlaceWith(::by_ref<::UnityEngine::Vector3>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  b) ;

/// [Extension]
/// @brief Method Normalize, addr 0x5cfc3f0, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3  value, ::by_ref<float_t>  existingMagnitude) ;

/// [Extension]
/// @brief Method Position, addr 0x5cf92e8, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Position(::UnityEngine::Matrix4x4  matrix) ;

/// [Extension]
/// @brief Method ProjectOnPlane, addr 0x5cf8dd0, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ProjectOnPlane(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  planeAnchorPosition, ::UnityEngine::Vector3  planeNormal) ;

/// [Extension]
/// @brief Method ProjectToLine, addr 0x5cfc79c, size 0x270, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ProjectToLine(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd) ;

/// [Extension]
/// @brief Method ProjectToPlane, addr 0x5cfc734, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ProjectToPlane(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  planeOrigin, ::UnityEngine::Vector3  planeNormalMustBeLength1) ;

/// @brief Method QuaternionFromToVec, addr 0x5cf8f8c, size 0x35c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion QuaternionFromToVec(::UnityEngine::Vector3  toVector, ::UnityEngine::Vector3  fromVector) ;

/// [Extension]
/// @brief Method RemoveSorted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RemoveSorted(::System::Collections::Generic::List_1<T>*  list, T  item) ;

/// [Extension]
/// @brief Method Rotation, addr 0x5cf9b9c, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Rotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  m) ;

/// [Extension]
/// @brief Method RotationWithScaleContext, addr 0x5cf9a50, size 0x14c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion RotationWithScaleContext(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  m, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  scale) ;

/// [Extension]
/// @brief Method SafeForEachBackwards, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SafeForEachBackwards(::System::Collections::Generic::List_1<T>*  list, ::System::Action_1<T>*  action) ;

/// [Extension]
/// @brief Method Scale, addr 0x5cf92f4, size 0x384, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Scale(::UnityEngine::Matrix4x4  m) ;

/// [Extension]
/// @brief Method SetFromMatrix, addr 0x5cfe1b0, size 0x120, virtual false, abstract: false, final false
static inline void SetFromMatrix(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix, bool  useLocal) ;

/// [Extension]
/// @brief Method SetLocalMatrixRelativeToParent, addr 0x5cf9ea8, size 0xd4, virtual false, abstract: false, final false
static inline void SetLocalMatrixRelativeToParent(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix) ;

/// [Extension]
/// @brief Method SetLocalMatrixRelativeToParentNoScale, addr 0x5cf9f7c, size 0xa4, virtual false, abstract: false, final false
static inline void SetLocalMatrixRelativeToParentNoScale(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix) ;

/// [Extension]
/// @brief Method SetLocalMatrixRelativeToParentWithXParity, addr 0x5cf9950, size 0xcc, virtual false, abstract: false, final false
static inline void SetLocalMatrixRelativeToParentWithXParity(::UnityEngine::Transform*  transform, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix4X4) ;

/// [Extension]
/// @brief Method SetLocalRelativeToParentMatrixWithParityAxis, addr 0x5cf9678, size 0x4, virtual false, abstract: false, final false
static inline void SetLocalRelativeToParentMatrixWithParityAxis(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::GlobalNamespace::GTExt_ParityOptions  parity) ;

/// [Extension]
/// @brief Method SetLocalToWorldMatrixNoScale, addr 0x5cfa020, size 0xa4, virtual false, abstract: false, final false
static inline void SetLocalToWorldMatrixNoScale(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix) ;

/// [Extension]
/// @brief Method SetLocalToWorldMatrixWithScale, addr 0x5cfa1b8, size 0xbc, virtual false, abstract: false, final false
static inline void SetLocalToWorldMatrixWithScale(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix) ;

/// [Extension]
/// @brief Method SetLossyScale, addr 0x5cf8c14, size 0x5c, virtual false, abstract: false, final false
static inline void SetLossyScale(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  scale) ;

/// [Extension]
/// @brief Method SetScale, addr 0x5cfe40c, size 0x1c0, virtual false, abstract: false, final false
static inline void SetScale(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  scale) ;

/// [Extension]
/// @brief Method SetScaleFromMatrix, addr 0x5cfe2d0, size 0x13c, virtual false, abstract: false, final false
static inline void SetScaleFromMatrix(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix) ;

/// [Extension]
/// @brief Method SetValueSafe, addr 0x5cfb2a8, size 0x134, virtual false, abstract: false, final false
static inline void SetValueSafe(::by_ref<::UnityEngine::Quaternion>  q, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  newVal) ;

/// [Extension]
/// @brief Method SetValueSafe, addr 0x5cfa90c, size 0x8c, virtual false, abstract: false, final false
static inline void SetValueSafe(::by_ref<::UnityEngine::Vector3>  v, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newVal) ;

/// @brief Method ShowAllStringsUsed, addr 0x5d021c0, size 0x94, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::StringW>* ShowAllStringsUsed() ;

/// [Extension]
/// @brief Method ThisMaxSafe, addr 0x5cfb914, size 0x4c, virtual false, abstract: false, final false
static inline void ThisMaxSafe(::by_ref<double_t>  value, float_t  max) ;

/// [Extension]
/// @brief Method ThisMaxSafe, addr 0x5cfb898, size 0x40, virtual false, abstract: false, final false
static inline void ThisMaxSafe(::by_ref<float_t>  value, float_t  max) ;

/// [Extension]
/// @brief Method ThisMinSafe, addr 0x5cfb824, size 0x4c, virtual false, abstract: false, final false
static inline void ThisMinSafe(::by_ref<double_t>  value, float_t  min) ;

/// [Extension]
/// @brief Method ThisMinSafe, addr 0x5cfb7a8, size 0x40, virtual false, abstract: false, final false
static inline void ThisMinSafe(::by_ref<float_t>  value, float_t  min) ;

/// [Extension]
/// @brief Method ToLongString, addr 0x5cfbc90, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW ToLongString(::UnityEngine::Vector3  self) ;

/// [Extension]
/// @brief Method TransformRotation, addr 0x5cf8c70, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion TransformRotation(::UnityEngine::Transform*  transform, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method TryFindByExactPath, addr 0x5cfe72c, size 0x220, virtual false, abstract: false, final false
static inline bool TryFindByExactPath(/* [NotNull] */ ::StringW  path, ::by_ref<::UnityEngine::Transform*>  result, ::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// [Extension]
/// @brief Method TryFindByExactPath, addr 0x5cfef98, size 0x3a0, virtual false, abstract: false, final false
static inline bool TryFindByExactPath(::UnityEngine::Transform*  rootXform, ::StringW  path, ::by_ref<::UnityEngine::Transform*>  result) ;

/// [Extension]
/// @brief Method TryFindByExactPath, addr 0x5cff338, size 0x32c, virtual false, abstract: false, final false
static inline bool TryFindByExactPath(::UnityEngine::Transform*  rootXform, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  splitPath, ::by_ref<::UnityEngine::Transform*>  result) ;

/// [Extension]
/// @brief Method TryFindByExactPath, addr 0x5cfe94c, size 0xe8, virtual false, abstract: false, final false
static inline bool TryFindByExactPath(::UnityEngine::SceneManagement::Scene  scene, ::StringW  path, ::by_ref<::UnityEngine::Transform*>  result) ;

/// [Extension]
/// @brief Method TryFindByExactPath, addr 0x5cfea34, size 0x108, virtual false, abstract: false, final false
static inline bool TryFindByExactPath(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  splitPath, ::by_ref<::UnityEngine::Transform*>  result) ;

/// @brief Method TryFindByExactPath_Internal, addr 0x5cfeb3c, size 0x45c, virtual false, abstract: false, final false
static inline bool TryFindByExactPath_Internal(::UnityEngine::Transform*  current, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  splitPath, int32_t  index, ::by_ref<::UnityEngine::Transform*>  result) ;

/// @brief Method TryFindByPath, addr 0x5cff664, size 0x84, virtual false, abstract: false, final false
static inline bool TryFindByPath(::StringW  globPath, ::by_ref<::UnityEngine::Transform*>  result, bool  caseSensitive) ;

/// [Extension]
/// @brief Method TryFindByPath, addr 0x5d01ff8, size 0x1c8, virtual false, abstract: false, final false
static inline bool TryFindByPath(::UnityEngine::Transform*  rootXform, ::StringW  globPath, ::by_ref<::UnityEngine::Transform*>  result, bool  caseSensitive) ;

/// [Extension]
/// @brief Method TryFindByPath, addr 0x5d01dfc, size 0xd8, virtual false, abstract: false, final false
static inline bool TryFindByPath(::UnityEngine::SceneManagement::Scene  scene, ::StringW  globPath, ::by_ref<::UnityEngine::Transform*>  result, bool  caseSensitive) ;

/// [Extension]
/// @brief Method TryFindByPath, addr 0x5d01ed4, size 0x124, virtual false, abstract: false, final false
static inline bool TryFindByPath(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  pathPartsRegex, ::by_ref<::UnityEngine::Transform*>  result, ::StringW  globPath, bool  caseSensitive) ;

/// [Extension]
/// @brief Method ValuesInRange, addr 0x5cfaba4, size 0x118, virtual false, abstract: false, final false
static inline bool ValuesInRange(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::half3>  h, /* [IsReadOnly] */ ::by_ref<float_t>  maxVal) ;

/// [Extension]
/// @brief Method ValuesInRange, addr 0x5cfa604, size 0x40, virtual false, abstract: false, final false
static inline bool ValuesInRange(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v, /* [IsReadOnly] */ ::by_ref<float_t>  maxVal) ;

/// [Extension]
/// @brief Method WithW, addr 0x5cfc2a8, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 WithW(::UnityEngine::Vector3  v, float_t  w) ;

/// [Extension]
/// @brief Method WithW, addr 0x5cfc288, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 WithW(::UnityEngine::Vector4  v, float_t  w) ;

/// [Extension]
/// @brief Method WithX, addr 0x5cfc2ac, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 WithX(::UnityEngine::Vector2  v, float_t  x) ;

/// [Extension]
/// @brief Method WithX, addr 0x5cfc290, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 WithX(::UnityEngine::Vector3  v, float_t  x) ;

/// [Extension]
/// @brief Method WithX, addr 0x5cfc270, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 WithX(::UnityEngine::Vector4  v, float_t  x) ;

/// [Extension]
/// @brief Method WithY, addr 0x5cfc2b4, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 WithY(::UnityEngine::Vector2  v, float_t  y) ;

/// [Extension]
/// @brief Method WithY, addr 0x5cfc298, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 WithY(::UnityEngine::Vector3  v, float_t  y) ;

/// [Extension]
/// @brief Method WithY, addr 0x5cfc278, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 WithY(::UnityEngine::Vector4  v, float_t  y) ;

/// [Extension]
/// @brief Method WithZ, addr 0x5cfc2bc, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 WithZ(::UnityEngine::Vector2  v, float_t  z) ;

/// [Extension]
/// @brief Method WithZ, addr 0x5cfc2a0, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 WithZ(::UnityEngine::Vector3  v, float_t  z) ;

/// [Extension]
/// @brief Method WithZ, addr 0x5cfc280, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 WithZ(::UnityEngine::Vector4  v, float_t  z) ;

/// @brief Method _FindComponentsByExactPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void _FindComponentsByExactPath(::UnityEngine::Transform*  current, ::ArrayW<::StringW>  splitPath, int32_t  index, ::System::Collections::Generic::List_1<T>*  components) ;

/// @brief Method _FindComponentsByPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void _FindComponentsByPath(::UnityEngine::Transform*  current, ::ArrayW<::StringW>  pathPartsRegex, ::System::Collections::Generic::List_1<T>*  components, bool  caseSensitive) ;

/// @brief Method _GetComponentsInChildrenUntil_OutExclusions_GetRecursive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
static inline void _GetComponentsInChildrenUntil_OutExclusions_GetRecursive(::UnityEngine::Transform*  currentTransform, ::System::Collections::Generic::List_1<T>*  included, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  excluded, bool  includeInactive) ;

/// [CompilerGenerated]
/// @brief Method <GetComponentsInChildrenUntil>g__GetRecursive|10_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1,typename TStop2>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*>)
static inline void _GetComponentsInChildrenUntil_g__GetRecursive_10_0(::UnityEngine::Transform*  currentTransform, ::by_ref<::System::Collections::Generic::List_1<T>*>  components, ::by_ref<::GlobalNamespace::GTExt___c__DisplayClass10_0_3<T,TStop1,TStop2>>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <GetComponentsInChildrenUntil>g__GetRecursive|11_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
static inline void _GetComponentsInChildrenUntil_g__GetRecursive_11_0(::UnityEngine::Transform*  currentTransform, ::by_ref<::System::Collections::Generic::List_1<T>*>  components, ::by_ref<::GlobalNamespace::GTExt___c__DisplayClass11_0_4<T,TStop1,TStop2,TStop3>>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <GetComponentsInChildrenUntil>g__GetRecursive|7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop1>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*>)
static inline void _GetComponentsInChildrenUntil_g__GetRecursive_7_0(::UnityEngine::Transform*  currentTransform, ::by_ref<::System::Collections::Generic::List_1<T>*>  components, ::by_ref<::GlobalNamespace::GTExt___c__DisplayClass7_0_2<T,TStop1>>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method _GlobPathPartToRegex, addr 0x5d035bc, size 0x1c8, virtual false, abstract: false, final false
static inline ::StringW _GlobPathPartToRegex(::StringW  pattern) ;

/// @brief Method _GlobPathToPathPartsRegex, addr 0x5cff6e8, size 0x26c, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> _GlobPathToPathPartsRegex(::StringW  path) ;

/// @brief Method _HasAnyComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
static inline bool _HasAnyComponents(::UnityEngine::Component*  component, ::by_ref<::UnityEngine::Component*>  stopComponent) ;

/// @brief Method _TryBreadthFirstSearchNames, addr 0x5d02254, size 0x650, virtual false, abstract: false, final false
static inline bool _TryBreadthFirstSearchNames(::UnityEngine::Transform*  root, ::StringW  regexPattern, ::by_ref<::UnityEngine::Transform*>  result, bool  caseSensitive) ;

/// @brief Method _TryFindAllByPath, addr 0x5d028a4, size 0xd18, virtual false, abstract: false, final false
static inline bool _TryFindAllByPath(::UnityEngine::Transform*  current, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  pathPartsRegex, int32_t  index, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  results, bool  caseSensitive, bool  isAtSceneLevel) ;

/// @brief Method _TryFindByPath, addr 0x5cff954, size 0x24a8, virtual false, abstract: false, final false
static inline bool _TryFindByPath(::UnityEngine::Transform*  current, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  pathPartsRegex, int32_t  index, ::by_ref<::UnityEngine::Transform*>  result, bool  caseSensitive, bool  isAtSceneLevel, ::StringW  joinedPath) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_allStringsUsed() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>* getStaticF_caseInsenseInner() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>* getStaticF_caseSenseInner() ;

/// [Extension]
/// @brief Method localToWorldNoScale, addr 0x5cfa0c4, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 localToWorldNoScale(::UnityEngine::Transform*  transform) ;

static inline void setStaticF_allStringsUsed(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_caseInsenseInner(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*  value) ;

static inline void setStaticF_caseSenseInner(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*  value) ;

/// [Extension]
/// @brief Method ww, addr 0x5cfbdf8, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method www, addr 0x5cfbf74, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 www(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method wwww, addr 0x5cfc260, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 wwww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method x0y, addr 0x5cf9c50, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 x0y(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method x0y, addr 0x5cf9c5c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 x0y(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method x0z, addr 0x5cf9c84, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 x0z(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xw, addr 0x5cfbdb8, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 xw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xww, addr 0x5cfbef0, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xwww, addr 0x5cfc190, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xwww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xx, addr 0x5cfbd5c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 xx(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method xx, addr 0x5cfbd70, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 xx(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xx, addr 0x5cfbda4, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 xx(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xx, addr 0x5cfbd54, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 xx(float_t  v) ;

/// [Extension]
/// @brief Method xxw, addr 0x5cfbebc, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xxw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxww, addr 0x5cfc130, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxx, addr 0x5cfbe10, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xxx(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method xxx, addr 0x5cfbe3c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xxx(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xxx, addr 0x5cfbe9c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xxx(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxx, addr 0x5cfbe04, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xxx(float_t  v) ;

/// [Extension]
/// @brief Method xxxw, addr 0x5cfc0e4, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxxw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxxx, addr 0x5cfbf94, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxxx(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method xxxx, addr 0x5cfbfe0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxxx(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xxxx, addr 0x5cfc0b4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxxx(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxxx, addr 0x5cfbf84, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxxx(float_t  v) ;

/// [Extension]
/// @brief Method xxxy, addr 0x5cfbfa4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxxy(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method xxxy, addr 0x5cfbff0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxxy(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xxxy, addr 0x5cfc0c4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxxy(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxxz, addr 0x5cfc000, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxxz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xxxz, addr 0x5cfc0d4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxxz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxy, addr 0x5cfbe1c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xxy(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method xxy, addr 0x5cfbe48, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xxy(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xxy, addr 0x5cfbea8, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xxy(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxyw, addr 0x5cfc110, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxyw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxyy, addr 0x5cfbfb4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxyy(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method xxyy, addr 0x5cfc010, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxyy(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xxyy, addr 0x5cfc0f0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxyy(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxyz, addr 0x5cfc020, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxyz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xxyz, addr 0x5cfc100, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxyz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxz, addr 0x5cfbe54, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xxz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xxz, addr 0x5cfbeb4, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xxz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxzw, addr 0x5cfc128, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxzw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xxzz, addr 0x5cfc030, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxzz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xxzz, addr 0x5cfc11c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xxzz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xy, addr 0x5cfbd64, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 xy(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method xy, addr 0x5cfbd78, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 xy(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xy, addr 0x5cfbdac, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 xy(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xy0, addr 0x5cf9c68, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xy0(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method xy0, addr 0x5cf9c70, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xy0(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xyw, addr 0x5cfbed4, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xyw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xyww, addr 0x5cfc168, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xyww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xyy, addr 0x5cfbe28, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xyy(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method xyy, addr 0x5cfbe5c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xyy(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xyy, addr 0x5cfbec8, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xyy(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xyyw, addr 0x5cfc154, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xyyw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xyyy, addr 0x5cfbfc4, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xyyy(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method xyyy, addr 0x5cfc03c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xyyy(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xyyy, addr 0x5cfc13c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xyyy(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xyyz, addr 0x5cfc048, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xyyz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xyyz, addr 0x5cfc148, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xyyz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xyz, addr 0x5cfbe64, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xyz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xyz, addr 0x5cfbed0, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xyz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xyzw, addr 0x5cfc164, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xyzw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xyzz, addr 0x5cfc054, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xyzz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xyzz, addr 0x5cfc15c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xyzz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xz, addr 0x5cfbd7c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 xz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xz, addr 0x5cfbdb0, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 xz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xz0, addr 0x5cf9c78, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xz0(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xzw, addr 0x5cfbee4, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xzw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xzww, addr 0x5cfc184, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xzww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xzz, addr 0x5cfbe68, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xzz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xzz, addr 0x5cfbedc, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 xzz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xzzw, addr 0x5cfc17c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xzzw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method xzzz, addr 0x5cfc05c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xzzz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method xzzz, addr 0x5cfc170, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 xzzz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yw, addr 0x5cfbdd4, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 yw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yww, addr 0x5cfbf38, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 yww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method ywww, addr 0x5cfc214, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 ywww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yy, addr 0x5cfbd68, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 yy(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method yy, addr 0x5cfbd84, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 yy(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method yy, addr 0x5cfbdc0, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 yy(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yyw, addr 0x5cfbf10, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 yyw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yyww, addr 0x5cfc1dc, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yyww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yyy, addr 0x5cfbe30, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 yyy(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method yyy, addr 0x5cfbe70, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 yyy(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method yyy, addr 0x5cfbefc, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 yyy(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yyyw, addr 0x5cfc1bc, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yyyw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yyyy, addr 0x5cfbfd0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yyyy(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method yyyy, addr 0x5cfc068, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yyyy(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method yyyy, addr 0x5cfc19c, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yyyy(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yyyz, addr 0x5cfc078, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yyyz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method yyyz, addr 0x5cfc1ac, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yyyz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yyz, addr 0x5cfbe7c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 yyz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method yyz, addr 0x5cfbf08, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 yyz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yyzw, addr 0x5cfc1d4, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yyzw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yyzz, addr 0x5cfc088, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yyzz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method yyzz, addr 0x5cfc1c8, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yyzz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yz, addr 0x5cfbd8c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 yz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method yz, addr 0x5cfbdc8, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 yz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yzw, addr 0x5cfbf28, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 yzw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yzww, addr 0x5cfc204, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yzww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yzz, addr 0x5cfbe84, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 yzz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method yzz, addr 0x5cfbf1c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 yzz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yzzw, addr 0x5cfc1f8, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yzzw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method yzzz, addr 0x5cfc094, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yzzz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method yzzz, addr 0x5cfc1e8, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 yzzz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method zw, addr 0x5cfbdec, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 zw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method zww, addr 0x5cfbf64, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 zww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method zwww, addr 0x5cfc250, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 zwww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method zz, addr 0x5cfbd98, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 zz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method zz, addr 0x5cfbde0, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 zz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method zzw, addr 0x5cfbf54, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 zzw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method zzww, addr 0x5cfc240, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 zzww(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method zzz, addr 0x5cfbe90, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 zzz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method zzz, addr 0x5cfbf48, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 zzz(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method zzzw, addr 0x5cfc234, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 zzzw(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method zzzz, addr 0x5cfc0a4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 zzzz(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method zzzz, addr 0x5cfc224, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 zzzz(::UnityEngine::Vector4  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTExt(GTExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTExt(GTExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4571};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::GTExt) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions

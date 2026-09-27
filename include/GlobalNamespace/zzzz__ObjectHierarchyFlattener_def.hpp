#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectHierarchyFlattener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectHierarchyFlattener)
namespace GlobalNamespace {
class FlattenerCrumb;
}
namespace GlobalNamespace {
class IGorillaSimpleBackgroundWorker;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectHierarchyFlattener;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ObjectHierarchyFlattener*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectHierarchyFlattener*, "", "ObjectHierarchyFlattener");
// [DefaultExecutionOrder(2001)]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectHierarchyFlattener
class CORDL_TYPE ObjectHierarchyFlattener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field abandonWork, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_abandonWork, put=__cordl_internal_set_abandonWork)) bool  abandonWork;

/// @brief Field calcOffset, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_calcOffset, put=__cordl_internal_set_calcOffset)) ::UnityEngine::Vector3  calcOffset;

/// @brief Field crumb, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_crumb, put=__cordl_internal_set_crumb)) ::UnityW<::GlobalNamespace::FlattenerCrumb>  crumb;

/// @brief Field initialized, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field isAttachedToOverride, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAttachedToOverride, put=__cordl_internal_set_isAttachedToOverride)) bool  isAttachedToOverride;

/// @brief Field maintainRelativeScale, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_maintainRelativeScale, put=__cordl_internal_set_maintainRelativeScale)) bool  maintainRelativeScale;

/// @brief Field originalLocalPosition, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalLocalPosition, put=__cordl_internal_set_originalLocalPosition)) ::UnityEngine::Vector3  originalLocalPosition;

/// @brief Field originalLocalRotation, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_originalLocalRotation, put=__cordl_internal_set_originalLocalRotation)) ::UnityEngine::Quaternion  originalLocalRotation;

/// @brief Field originalParentGO, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalParentGO, put=__cordl_internal_set_originalParentGO)) ::UnityW<::UnityEngine::GameObject>  originalParentGO;

/// @brief Field originalParentScale, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_originalParentScale, put=__cordl_internal_set_originalParentScale)) float_t  originalParentScale;

/// @brief Field originalParentTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalParentTransform, put=__cordl_internal_set_originalParentTransform)) ::UnityW<::UnityEngine::Transform>  originalParentTransform;

/// @brief Field originalScale, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalScale, put=__cordl_internal_set_originalScale)) ::UnityEngine::Vector3  originalScale;

/// @brief Field overrideParentTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideParentTransform, put=__cordl_internal_set_overrideParentTransform)) ::UnityW<::UnityEngine::Transform>  overrideParentTransform;

/// @brief Field trackTransformOfParent, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_trackTransformOfParent, put=__cordl_internal_set_trackTransformOfParent)) bool  trackTransformOfParent;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr operator  ::GlobalNamespace::IGorillaSimpleBackgroundWorker*() noexcept;

/// @brief Method CrumbDisabled, addr 0x5674478, size 0x100, virtual false, abstract: false, final false
inline void CrumbDisabled() ;

/// @brief Method InvokeLateUpdate, addr 0x567c2e0, size 0x1dc, virtual false, abstract: false, final false
inline void InvokeLateUpdate() ;

static inline ::GlobalNamespace::ObjectHierarchyFlattener* New_ctor() ;

/// @brief Method OnDestroy, addr 0x567c5b8, size 0x8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x567c518, size 0xa0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x567c4bc, size 0x5c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetTransform, addr 0x567c0d4, size 0x10c, virtual false, abstract: false, final false
inline void ResetTransform() ;

/// @brief Method ResetTransformIfStillDisabled, addr 0x567c5c0, size 0x28, virtual false, abstract: false, final false
inline void ResetTransformIfStillDisabled() ;

/// @brief Method SimpleWork, addr 0x567c5e8, size 0x270, virtual true, abstract: false, final true
inline void SimpleWork() ;

constexpr bool const& __cordl_internal_get_abandonWork() const;

constexpr bool& __cordl_internal_get_abandonWork() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_calcOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_calcOffset() ;

constexpr ::UnityW<::GlobalNamespace::FlattenerCrumb> const& __cordl_internal_get_crumb() const;

constexpr ::UnityW<::GlobalNamespace::FlattenerCrumb>& __cordl_internal_get_crumb() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr bool const& __cordl_internal_get_isAttachedToOverride() const;

constexpr bool& __cordl_internal_get_isAttachedToOverride() ;

constexpr bool const& __cordl_internal_get_maintainRelativeScale() const;

constexpr bool& __cordl_internal_get_maintainRelativeScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalLocalPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_originalLocalRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_originalLocalRotation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_originalParentGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_originalParentGO() ;

constexpr float_t const& __cordl_internal_get_originalParentScale() const;

constexpr float_t& __cordl_internal_get_originalParentScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_originalParentTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_originalParentTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_overrideParentTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_overrideParentTransform() ;

constexpr bool const& __cordl_internal_get_trackTransformOfParent() const;

constexpr bool& __cordl_internal_get_trackTransformOfParent() ;

constexpr void __cordl_internal_set_abandonWork(bool  value) ;

constexpr void __cordl_internal_set_calcOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_crumb(::UnityW<::GlobalNamespace::FlattenerCrumb>  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_isAttachedToOverride(bool  value) ;

constexpr void __cordl_internal_set_maintainRelativeScale(bool  value) ;

constexpr void __cordl_internal_set_originalLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_originalLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_originalParentGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_originalParentScale(float_t  value) ;

constexpr void __cordl_internal_set_originalParentTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_originalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_overrideParentTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_trackTransformOfParent(bool  value) ;

/// @brief Method .ctor, addr 0x567c9ac, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr ::GlobalNamespace::IGorillaSimpleBackgroundWorker* i___GlobalNamespace__IGorillaSimpleBackgroundWorker() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectHierarchyFlattener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectHierarchyFlattener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectHierarchyFlattener(ObjectHierarchyFlattener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHierarchyFlattener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectHierarchyFlattener(ObjectHierarchyFlattener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{864};

/// @brief Field k_monoDefaultExecutionOrder offset 0xffffffff size 0x4
static constexpr int32_t  k_monoDefaultExecutionOrder{static_cast<int32_t>(0x7d1)};

/// [DebugReadout]
/// @brief Field originalParentGO, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___originalParentGO;

/// @brief Field originalParentTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___originalParentTransform;

/// @brief Field originalLocalPosition, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalLocalPosition;

/// @brief Field calcOffset, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___calcOffset;

/// @brief Field originalLocalRotation, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___originalLocalRotation;

/// @brief Field originalScale, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalScale;

/// @brief Field originalParentScale, offset: 0x64, size: 0x4, def value: None
 float_t  ___originalParentScale;

/// @brief Field trackTransformOfParent, offset: 0x68, size: 0x1, def value: None
 bool  ___trackTransformOfParent;

/// @brief Field maintainRelativeScale, offset: 0x69, size: 0x1, def value: None
 bool  ___maintainRelativeScale;

/// @brief Field crumb, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FlattenerCrumb>  ___crumb;

/// @brief Field overrideParentTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___overrideParentTransform;

/// @brief Field isAttachedToOverride, offset: 0x80, size: 0x1, def value: None
 bool  ___isAttachedToOverride;

/// @brief Field initialized, offset: 0x81, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field abandonWork, offset: 0x82, size: 0x1, def value: None
 bool  ___abandonWork;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___originalParentGO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___originalParentTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___originalLocalPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___calcOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___originalLocalRotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___originalScale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___originalParentScale) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___trackTransformOfParent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___maintainRelativeScale) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___crumb) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___overrideParentTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___isAttachedToOverride) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___initialized) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectHierarchyFlattener, ___abandonWork) == 0x82, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObjectHierarchyFlattener) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace

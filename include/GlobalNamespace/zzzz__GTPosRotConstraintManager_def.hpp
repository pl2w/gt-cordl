#pragma once
// IWYU pragma private; include "GlobalNamespace/GTPosRotConstraintManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTPosRotConstraintManager)
namespace GlobalNamespace {
struct GTPosRotConstraintManager_Range;
}
namespace GlobalNamespace {
class GTPosRotConstraints;
}
namespace GlobalNamespace {
struct GorillaPosRotConstraint;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GTPosRotConstraintManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTPosRotConstraintManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTPosRotConstraintManager*, "", "GTPosRotConstraintManager");
// [DefaultExecutionOrder(1300)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTPosRotConstraintManager
class CORDL_TYPE GTPosRotConstraintManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Range = ::GlobalNamespace::GTPosRotConstraintManager_Range;

/// @brief Field componentRanges, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_componentRanges, put=setStaticF_componentRanges)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GTPosRotConstraintManager_Range>*  componentRanges;

/// @brief Field constraints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_constraints, put=setStaticF_constraints)) ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPosRotConstraint>*  constraints;

/// @brief Field constraintsToDisable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_constraintsToDisable, put=__cordl_internal_set_constraintsToDisable)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTPosRotConstraints>>*  constraintsToDisable;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GTPosRotConstraintManager>  instance;

/// @brief Field originalOffset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalOffset, put=__cordl_internal_set_originalOffset)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*  originalOffset;

/// @brief Field originalParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalParent, put=__cordl_internal_set_originalParent)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  originalParent;

/// @brief Field originalRot, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalRot, put=__cordl_internal_set_originalRot)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Quaternion>*  originalRot;

/// @brief Field originalScale, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalScale, put=__cordl_internal_set_originalScale)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*  originalScale;

/// @brief Method Awake, addr 0x56786f0, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5678f68, size 0x12c, virtual false, abstract: false, final false
static inline void CreateManager() ;

/// @brief Method InvokeConstraint, addr 0x5678b74, size 0x118, virtual false, abstract: false, final false
inline void InvokeConstraint(::GlobalNamespace::GorillaPosRotConstraint  constraint, int32_t  index) ;

/// @brief Method LateUpdate, addr 0x5678c8c, size 0x2dc, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GTPosRotConstraintManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5678aa4, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Register, addr 0x5679094, size 0x7bc, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::GTPosRotConstraints*  component) ;

/// @brief Method SetInstance, addr 0x56787e4, size 0x2c0, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::GTPosRotConstraintManager*  manager) ;

/// @brief Method Unregister, addr 0x5679850, size 0x378, virtual false, abstract: false, final false
static inline void Unregister(::GlobalNamespace::GTPosRotConstraints*  component) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTPosRotConstraints>>* const& __cordl_internal_get_constraintsToDisable() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTPosRotConstraints>>*& __cordl_internal_get_constraintsToDisable() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>* const& __cordl_internal_get_originalOffset() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*& __cordl_internal_get_originalOffset() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_originalParent() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_originalParent() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Quaternion>* const& __cordl_internal_get_originalRot() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Quaternion>*& __cordl_internal_get_originalRot() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>* const& __cordl_internal_get_originalScale() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*& __cordl_internal_get_originalScale() ;

constexpr void __cordl_internal_set_constraintsToDisable(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTPosRotConstraints>>*  value) ;

constexpr void __cordl_internal_set_originalOffset(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_originalParent(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_originalRot(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set_originalScale(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x5679bc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GTPosRotConstraintManager_Range>* getStaticF_componentRanges() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPosRotConstraint>* getStaticF_constraints() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::GTPosRotConstraintManager> getStaticF_instance() ;

static inline void setStaticF_componentRanges(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GTPosRotConstraintManager_Range>*  value) ;

static inline void setStaticF_constraints(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPosRotConstraint>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GTPosRotConstraintManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTPosRotConstraintManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTPosRotConstraintManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTPosRotConstraintManager(GTPosRotConstraintManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTPosRotConstraintManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTPosRotConstraintManager(GTPosRotConstraintManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{848};

/// @brief Field _kComponentsCapacity offset 0xffffffff size 0x4
static constexpr int32_t  _kComponentsCapacity{static_cast<int32_t>(0x100)};

/// @brief Field _kConstraintsCapacity offset 0xffffffff size 0x4
static constexpr int32_t  _kConstraintsCapacity{static_cast<int32_t>(0x400)};

/// @brief Field originalParent, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  ___originalParent;

/// @brief Field originalOffset, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*  ___originalOffset;

/// @brief Field originalScale, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*  ___originalScale;

/// @brief Field originalRot, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Quaternion>*  ___originalRot;

/// @brief Field constraintsToDisable, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTPosRotConstraints>>*  ___constraintsToDisable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTPosRotConstraintManager, ___originalParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPosRotConstraintManager, ___originalOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPosRotConstraintManager, ___originalScale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPosRotConstraintManager, ___originalRot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPosRotConstraintManager, ___constraintsToDisable) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTPosRotConstraintManager) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GorillaTagScripts/AttachPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AttachPoint)
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts {
class AttachPoint;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::AttachPoint*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::AttachPoint*, "GorillaTagScripts", "AttachPoint");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.AttachPoint
class CORDL_TYPE AttachPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field attachPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachPoint, put=__cordl_internal_set_attachPoint)) ::UnityW<::UnityEngine::Transform>  attachPoint;

/// @brief Field inForest, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_inForest, put=__cordl_internal_set_inForest)) bool  inForest;

/// @brief Field isHooked, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHooked, put=__cordl_internal_set_isHooked)) bool  isHooked;

/// @brief Field onHookedChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHookedChanged, put=__cordl_internal_set_onHookedChanged)) ::UnityEngine::Events::UnityAction*  onHookedChanged;

/// @brief Field wasHooked, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHooked, put=__cordl_internal_set_wasHooked)) bool  wasHooked;

/// @brief Method IsHooked, addr 0x5b80da0, size 0x38, virtual false, abstract: false, final false
inline bool IsHooked() ;

static inline ::GorillaTagScripts::AttachPoint* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5b80c50, size 0x130, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5b80dd8, size 0x118, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method SetIsHook, addr 0x5b80ef0, size 0x20, virtual false, abstract: false, final false
inline void SetIsHook(bool  isHooked) ;

/// @brief Method Start, addr 0x5b80c20, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateHookState, addr 0x5b80d80, size 0x20, virtual false, abstract: false, final false
inline void UpdateHookState(bool  isHooked) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_attachPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_attachPoint() ;

constexpr bool const& __cordl_internal_get_inForest() const;

constexpr bool& __cordl_internal_get_inForest() ;

constexpr bool const& __cordl_internal_get_isHooked() const;

constexpr bool& __cordl_internal_get_isHooked() ;

constexpr ::UnityEngine::Events::UnityAction* const& __cordl_internal_get_onHookedChanged() const;

constexpr ::UnityEngine::Events::UnityAction*& __cordl_internal_get_onHookedChanged() ;

constexpr bool const& __cordl_internal_get_wasHooked() const;

constexpr bool& __cordl_internal_get_wasHooked() ;

constexpr void __cordl_internal_set_attachPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_inForest(bool  value) ;

constexpr void __cordl_internal_set_isHooked(bool  value) ;

constexpr void __cordl_internal_set_onHookedChanged(::UnityEngine::Events::UnityAction*  value) ;

constexpr void __cordl_internal_set_wasHooked(bool  value) ;

/// @brief Method .ctor, addr 0x5b80f10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttachPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttachPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AttachPoint(AttachPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttachPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttachPoint(AttachPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3918};

/// @brief Field attachPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___attachPoint;

/// @brief Field onHookedChanged, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction*  ___onHookedChanged;

/// @brief Field isHooked, offset: 0x30, size: 0x1, def value: None
 bool  ___isHooked;

/// @brief Field wasHooked, offset: 0x31, size: 0x1, def value: None
 bool  ___wasHooked;

/// @brief Field inForest, offset: 0x32, size: 0x1, def value: None
 bool  ___inForest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::AttachPoint, ___attachPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AttachPoint, ___onHookedChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AttachPoint, ___isHooked) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AttachPoint, ___wasHooked) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AttachPoint, ___inForest) == 0x32, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::AttachPoint) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts

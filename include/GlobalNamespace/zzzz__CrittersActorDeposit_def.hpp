#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActorDeposit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CrittersActorDeposit)
namespace GlobalNamespace {
class CrittersActor;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersActorDeposit;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersActorDeposit*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersActorDeposit*, "", "CrittersActorDeposit");
// Dependencies CrittersActor::CrittersActorType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersActorDeposit
class CORDL_TYPE CrittersActorDeposit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field actorType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorType, put=__cordl_internal_set_actorType)) ::GlobalNamespace::CrittersActor_CrittersActorType  actorType;

/// @brief Field allowMultiAttach, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowMultiAttach, put=__cordl_internal_set_allowMultiAttach)) bool  allowMultiAttach;

/// @brief Field attachPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachPoint, put=__cordl_internal_set_attachPoint)) ::UnityW<::GlobalNamespace::CrittersActor>  attachPoint;

/// @brief Field currentAttach, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentAttach, put=__cordl_internal_set_currentAttach)) ::UnityW<::GlobalNamespace::CrittersActor>  currentAttach;

/// @brief Field disableGrabOnAttach, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableGrabOnAttach, put=__cordl_internal_set_disableGrabOnAttach)) bool  disableGrabOnAttach;

/// @brief Field snapOnAttach, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapOnAttach, put=__cordl_internal_set_snapOnAttach)) bool  snapOnAttach;

/// @brief Method CanDeposit, addr 0x55f73ec, size 0xd8, virtual true, abstract: false, final false
inline bool CanDeposit(::GlobalNamespace::CrittersActor*  depositActor) ;

/// @brief Method HandleDeposit, addr 0x55f74c4, size 0xe8, virtual true, abstract: false, final false
inline void HandleDeposit(::GlobalNamespace::CrittersActor*  depositedActor) ;

/// @brief Method HandleDetach, addr 0x55f75ac, size 0xc, virtual true, abstract: false, final false
inline void HandleDetach(::GlobalNamespace::CrittersActor*  detachingActor) ;

/// @brief Method IsAttachAvailable, addr 0x55f7374, size 0x78, virtual false, abstract: false, final false
inline bool IsAttachAvailable() ;

static inline ::GlobalNamespace::CrittersActorDeposit* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x55f7220, size 0x154, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& __cordl_internal_get_actorType() const;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& __cordl_internal_get_actorType() ;

constexpr bool const& __cordl_internal_get_allowMultiAttach() const;

constexpr bool& __cordl_internal_get_allowMultiAttach() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_attachPoint() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_attachPoint() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_currentAttach() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_currentAttach() ;

constexpr bool const& __cordl_internal_get_disableGrabOnAttach() const;

constexpr bool& __cordl_internal_get_disableGrabOnAttach() ;

constexpr bool const& __cordl_internal_get_snapOnAttach() const;

constexpr bool& __cordl_internal_get_snapOnAttach() ;

constexpr void __cordl_internal_set_actorType(::GlobalNamespace::CrittersActor_CrittersActorType  value) ;

constexpr void __cordl_internal_set_allowMultiAttach(bool  value) ;

constexpr void __cordl_internal_set_attachPoint(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_currentAttach(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_disableGrabOnAttach(bool  value) ;

constexpr void __cordl_internal_set_snapOnAttach(bool  value) ;

/// @brief Method .ctor, addr 0x55f75b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersActorDeposit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorDeposit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersActorDeposit(CrittersActorDeposit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorDeposit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersActorDeposit(CrittersActorDeposit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{75};

/// @brief Field attachPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___attachPoint;

/// @brief Field actorType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CrittersActor_CrittersActorType  ___actorType;

/// @brief Field disableGrabOnAttach, offset: 0x2c, size: 0x1, def value: None
 bool  ___disableGrabOnAttach;

/// @brief Field allowMultiAttach, offset: 0x2d, size: 0x1, def value: None
 bool  ___allowMultiAttach;

/// @brief Field snapOnAttach, offset: 0x2e, size: 0x1, def value: None
 bool  ___snapOnAttach;

/// @brief Field currentAttach, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___currentAttach;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersActorDeposit, ___attachPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorDeposit, ___actorType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorDeposit, ___disableGrabOnAttach) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorDeposit, ___allowMultiAttach) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorDeposit, ___snapOnAttach) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorDeposit, ___currentAttach) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersActorDeposit) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticBoundaryTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
CORDL_MODULE_EXPORT(CosmeticBoundaryTrigger)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticBoundaryTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticBoundaryTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticBoundaryTrigger*, "", "CosmeticBoundaryTrigger");
// Dependencies GorillaTriggerBox, TimeSince
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticBoundaryTrigger
class CORDL_TYPE CosmeticBoundaryTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field rigRef, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigRef, put=__cordl_internal_set_rigRef)) ::UnityW<::GlobalNamespace::VRRig>  rigRef;

/// @brief Field sinceLastTryOnEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sinceLastTryOnEvent, put=setStaticF_sinceLastTryOnEvent)) ::GlobalNamespace::TimeSince  sinceLastTryOnEvent;

static inline ::GlobalNamespace::CosmeticBoundaryTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x574ae34, size 0x1cc, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x574b88c, size 0x21c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rigRef() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rigRef() ;

constexpr void __cordl_internal_set_rigRef(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x574baa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::TimeSince getStaticF_sinceLastTryOnEvent() ;

static inline void setStaticF_sinceLastTryOnEvent(::GlobalNamespace::TimeSince  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticBoundaryTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticBoundaryTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticBoundaryTrigger(CosmeticBoundaryTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticBoundaryTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticBoundaryTrigger(CosmeticBoundaryTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1288};

/// @brief Field rigRef, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rigRef;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticBoundaryTrigger, ___rigRef) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticBoundaryTrigger) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

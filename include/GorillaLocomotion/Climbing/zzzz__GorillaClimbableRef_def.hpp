#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/GorillaClimbableRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbable_def.hpp"
CORDL_MODULE_EXPORT(GorillaClimbableRef)
namespace GorillaLocomotion::Climbing {
class GorillaClimbable;
}
// Forward declare root types
namespace GorillaLocomotion::Climbing {
class GorillaClimbableRef;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Climbing::GorillaClimbableRef*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Climbing::GorillaClimbableRef*, "GorillaLocomotion.Climbing", "GorillaClimbableRef");
// Dependencies GorillaLocomotion.Climbing.GorillaClimbable
namespace GorillaLocomotion::Climbing {
// Is value type: false
// CS Name: GorillaLocomotion.Climbing.GorillaClimbableRef
class CORDL_TYPE GorillaClimbableRef : public ::GorillaLocomotion::Climbing::GorillaClimbable {
public:
// Declarations
/// @brief Field climb, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_climb, put=__cordl_internal_set_climb)) ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  climb;

static inline ::GorillaLocomotion::Climbing::GorillaClimbableRef* New_ctor() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& __cordl_internal_get_climb() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& __cordl_internal_get_climb() ;

constexpr void __cordl_internal_set_climb(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value) ;

/// @brief Method .ctor, addr 0x5cf35f0, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaClimbableRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaClimbableRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaClimbableRef(GorillaClimbableRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaClimbableRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaClimbableRef(GorillaClimbableRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4548};

/// @brief Field climb, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  ___climb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbableRef, ___climb) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Climbing::GorillaClimbableRef) == 0x58, "Size mismatch!");

} // namespace end def GorillaLocomotion::Climbing

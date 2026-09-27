#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaRopeSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaRopeSegment)
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSwing;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSegment;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::GorillaRopeSegment*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::GorillaRopeSegment*, "GorillaLocomotion.Gameplay", "GorillaRopeSegment");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.GorillaRopeSegment
class CORDL_TYPE GorillaRopeSegment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field boneIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_boneIndex, put=__cordl_internal_set_boneIndex)) int32_t  boneIndex;

/// @brief Field swing, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_swing, put=__cordl_internal_set_swing)) ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  swing;

static inline ::GorillaLocomotion::Gameplay::GorillaRopeSegment* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_boneIndex() const;

constexpr int32_t& __cordl_internal_get_boneIndex() ;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing> const& __cordl_internal_get_swing() const;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>& __cordl_internal_get_swing() ;

constexpr void __cordl_internal_set_boneIndex(int32_t  value) ;

constexpr void __cordl_internal_set_swing(::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  value) ;

/// @brief Method .ctor, addr 0x5ce94c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaRopeSegment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaRopeSegment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaRopeSegment(GorillaRopeSegment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaRopeSegment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaRopeSegment(GorillaRopeSegment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4527};

/// @brief Field swing, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  ___swing;

/// @brief Field boneIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___boneIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSegment, ___swing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSegment, ___boneIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::GorillaRopeSegment) == 0x30, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay

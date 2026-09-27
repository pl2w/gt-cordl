#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaZiplineSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaZiplineSegment)
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class GorillaZiplineSegment;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::GorillaZiplineSegment*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::GorillaZiplineSegment*, "GorillaLocomotion.Gameplay", "GorillaZiplineSegment");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.GorillaZiplineSegment
class CORDL_TYPE GorillaZiplineSegment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field startT, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_startT, put=__cordl_internal_set_startT)) float_t  startT;

static inline ::GorillaLocomotion::Gameplay::GorillaZiplineSegment* New_ctor() ;

constexpr float_t const& __cordl_internal_get_startT() const;

constexpr float_t& __cordl_internal_get_startT() ;

constexpr void __cordl_internal_set_startT(float_t  value) ;

/// @brief Method .ctor, addr 0x5cee008, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaZiplineSegment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaZiplineSegment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaZiplineSegment(GorillaZiplineSegment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaZiplineSegment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaZiplineSegment(GorillaZiplineSegment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4532};

/// @brief Field startT, offset: 0x20, size: 0x4, def value: None
 float_t  ___startT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZiplineSegment, ___startT) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::GorillaZiplineSegment) == 0x28, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay

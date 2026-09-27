#pragma once
// IWYU pragma private; include "Oculus/Interaction/CandidatePositionComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__CandidateComparer_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CandidatePositionComparer)
namespace Oculus::Interaction {
class ICandidatePosition;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class CandidatePositionComparer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::CandidatePositionComparer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::CandidatePositionComparer*, "Oculus.Interaction", "CandidatePositionComparer");
// Dependencies Oculus.Interaction.CandidateComparer`1<T>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.CandidatePositionComparer
class CORDL_TYPE CandidatePositionComparer : public ::Oculus::Interaction::CandidateComparer_1<::Oculus::Interaction::ICandidatePosition*> {
public:
// Declarations
/// @brief Field _compareOrigin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__compareOrigin, put=__cordl_internal_set__compareOrigin)) ::UnityW<::UnityEngine::Transform>  _compareOrigin;

/// @brief Method Compare, addr 0xa41171c, size 0x1cc, virtual true, abstract: false, final false
inline int32_t Compare(::Oculus::Interaction::ICandidatePosition*  a, ::Oculus::Interaction::ICandidatePosition*  b) ;

static inline ::Oculus::Interaction::CandidatePositionComparer* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__compareOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__compareOrigin() ;

constexpr void __cordl_internal_set__compareOrigin(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4118e8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CandidatePositionComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CandidatePositionComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CandidatePositionComparer(CandidatePositionComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CandidatePositionComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CandidatePositionComparer(CandidatePositionComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15748};

/// [SerializeField]
/// @brief Field _compareOrigin, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____compareOrigin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::CandidatePositionComparer, ____compareOrigin) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::CandidatePositionComparer) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction

#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtAudioTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtAudioTrigger)
namespace Liv::Lck {
class LckDiscreetAudioController;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtAudioTrigger;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtAudioTrigger*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtAudioTrigger*, "Liv.Lck.GorillaTag", "GtAudioTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtAudioTrigger
class CORDL_TYPE GtAudioTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

static inline ::Liv::Lck::GorillaTag::GtAudioTrigger* New_ctor() ;

/// @brief Method PlayTapEndedSound, addr 0x9d212d4, size 0x1c, virtual false, abstract: false, final false
inline void PlayTapEndedSound() ;

/// @brief Method PlayTapStartedSound, addr 0x9d212b8, size 0x1c, virtual false, abstract: false, final false
inline void PlayTapStartedSound() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

/// @brief Method .ctor, addr 0x9d212f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtAudioTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtAudioTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtAudioTrigger(GtAudioTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtAudioTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtAudioTrigger(GtAudioTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29619};

/// [SerializeField]
/// @brief Field _audioController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioTrigger, ____audioController) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtAudioTrigger) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag

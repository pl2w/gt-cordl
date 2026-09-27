#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MonkeVoteOption)
namespace GlobalNamespace {
class VotingCard;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeVoteOption;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeVoteOption*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteOption*, "", "MonkeVoteOption");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteOption
class CORDL_TYPE MonkeVoteOption : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CanVote, put=set_CanVote)) bool  CanVote;

/// @brief Field OnVote, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnVote, put=__cordl_internal_set_OnVote)) ::System::Action_2<::UnityW<::GlobalNamespace::MonkeVoteOption>,::UnityW<::UnityEngine::Collider>>*  OnVote;

 __declspec(property(get=get_Text, put=set_Text)) ::StringW  Text;

/// @brief Field _canVote, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__canVote, put=__cordl_internal_set__canVote)) bool  _canVote;

/// @brief Field _guessIndicator, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__guessIndicator, put=__cordl_internal_set__guessIndicator)) ::UnityW<::GlobalNamespace::VotingCard>  _guessIndicator;

/// @brief Field _optionText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__optionText, put=__cordl_internal_set__optionText)) ::UnityW<::TMPro::TMP_Text>  _optionText;

/// @brief Field _text, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::StringW  _text;

/// @brief Field _trigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__trigger, put=__cordl_internal_set__trigger)) ::UnityW<::UnityEngine::Collider>  _trigger;

/// @brief Field _voteIndicator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__voteIndicator, put=__cordl_internal_set__voteIndicator)) ::UnityW<::GlobalNamespace::VotingCard>  _voteIndicator;

/// @brief Method Configure, addr 0x5623050, size 0x134, virtual false, abstract: false, final false
inline void Configure() ;

/// @brief Method IsValidVotingRock, addr 0x56231d0, size 0xb4, virtual false, abstract: false, final false
inline bool IsValidVotingRock(::UnityEngine::Collider*  other) ;

static inline ::GlobalNamespace::MonkeVoteOption* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5623184, size 0x4c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method Reset, addr 0x562304c, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetState, addr 0x562036c, size 0x2c, virtual false, abstract: false, final false
inline void ResetState() ;

/// @brief Method SendVote, addr 0x56232b0, size 0x30, virtual false, abstract: false, final false
inline void SendVote(::UnityEngine::Collider*  other) ;

/// @brief Method SetDynamicMeshesVisible, addr 0x5621368, size 0x4c, virtual false, abstract: false, final false
inline void SetDynamicMeshesVisible(bool  visible) ;

/// @brief Method ShowIndicators, addr 0x5621d18, size 0x50, virtual false, abstract: false, final false
inline void ShowIndicators(bool  showVote, bool  showPrediction, bool  instant) ;

/// @brief Method Vote, addr 0x5623284, size 0x2c, virtual false, abstract: false, final false
inline void Vote() ;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MonkeVoteOption>,::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_OnVote() const;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MonkeVoteOption>,::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_OnVote() ;

constexpr bool const& __cordl_internal_get__canVote() const;

constexpr bool& __cordl_internal_get__canVote() ;

constexpr ::UnityW<::GlobalNamespace::VotingCard> const& __cordl_internal_get__guessIndicator() const;

constexpr ::UnityW<::GlobalNamespace::VotingCard>& __cordl_internal_get__guessIndicator() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__optionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__optionText() ;

constexpr ::StringW const& __cordl_internal_get__text() const;

constexpr ::StringW& __cordl_internal_get__text() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__trigger() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__trigger() ;

constexpr ::UnityW<::GlobalNamespace::VotingCard> const& __cordl_internal_get__voteIndicator() const;

constexpr ::UnityW<::GlobalNamespace::VotingCard>& __cordl_internal_get__voteIndicator() ;

constexpr void __cordl_internal_set_OnVote(::System::Action_2<::UnityW<::GlobalNamespace::MonkeVoteOption>,::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set__canVote(bool  value) ;

constexpr void __cordl_internal_set__guessIndicator(::UnityW<::GlobalNamespace::VotingCard>  value) ;

constexpr void __cordl_internal_set__optionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__text(::StringW  value) ;

constexpr void __cordl_internal_set__trigger(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__voteIndicator(::UnityW<::GlobalNamespace::VotingCard>  value) ;

/// @brief Method .ctor, addr 0x56232e0, size 0x528, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnVote, addr 0x5620398, size 0xb0, virtual false, abstract: false, final false
inline void add_OnVote(::System::Action_2<::UnityW<::GlobalNamespace::MonkeVoteOption>,::UnityW<::UnityEngine::Collider>>*  value) ;

/// @brief Method get_CanVote, addr 0x5623020, size 0x8, virtual false, abstract: false, final false
inline bool get_CanVote() ;

/// @brief Method get_Text, addr 0x5623018, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

/// [CompilerGenerated]
/// @brief Method remove_OnVote, addr 0x5622f68, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnVote(::System::Action_2<::UnityW<::GlobalNamespace::MonkeVoteOption>,::UnityW<::UnityEngine::Collider>>*  value) ;

/// @brief Method set_CanVote, addr 0x5623028, size 0x24, virtual false, abstract: false, final false
inline void set_CanVote(bool  value) ;

/// @brief Method set_Text, addr 0x5621cd8, size 0x40, virtual false, abstract: false, final false
inline void set_Text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteOption() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteOption", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteOption(MonkeVoteOption && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteOption", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteOption(MonkeVoteOption const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{583};

/// [SerializeField]
/// @brief Field _trigger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____trigger;

/// [SerializeField]
/// @brief Field _optionText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____optionText;

/// [SerializeField]
/// @brief Field _voteIndicator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VotingCard>  ____voteIndicator;

/// [FormerlySerializedAs("_predictionIndicator")]
/// [SerializeField]
/// @brief Field _guessIndicator, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VotingCard>  ____guessIndicator;

/// [CompilerGenerated]
/// @brief Field OnVote, offset: 0x40, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::GlobalNamespace::MonkeVoteOption>,::UnityW<::UnityEngine::Collider>>*  ___OnVote;

/// @brief Field _text, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____text;

/// @brief Field _canVote, offset: 0x50, size: 0x1, def value: None
 bool  ____canVote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteOption, ____trigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteOption, ____optionText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteOption, ____voteIndicator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteOption, ____guessIndicator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteOption, ___OnVote) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteOption, ____text) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteOption, ____canVote) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteOption) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

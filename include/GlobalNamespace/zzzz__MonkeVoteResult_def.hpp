#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeVoteResult)
namespace GlobalNamespace {
class MonkeVoteMachine;
}
namespace GlobalNamespace {
class RockPiles;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeVoteResult;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeVoteResult*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteResult*, "", "MonkeVoteResult");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteResult
class CORDL_TYPE MonkeVoteResult : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Text, put=set_Text)) ::StringW  Text;

/// @brief Field _canVote, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__canVote, put=__cordl_internal_set__canVote)) bool  _canVote;

/// @brief Field _guessLoseIndicator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__guessLoseIndicator, put=__cordl_internal_set__guessLoseIndicator)) ::UnityW<::UnityEngine::GameObject>  _guessLoseIndicator;

/// @brief Field _guessWinIndicator, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__guessWinIndicator, put=__cordl_internal_set__guessWinIndicator)) ::UnityW<::UnityEngine::GameObject>  _guessWinIndicator;

/// @brief Field _machine, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__machine, put=__cordl_internal_set__machine)) ::UnityW<::GlobalNamespace::MonkeVoteMachine>  _machine;

/// @brief Field _mostPopularIndicator, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__mostPopularIndicator, put=__cordl_internal_set__mostPopularIndicator)) ::UnityW<::UnityEngine::GameObject>  _mostPopularIndicator;

/// @brief Field _optionIndicator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__optionIndicator, put=__cordl_internal_set__optionIndicator)) ::UnityW<::UnityEngine::GameObject>  _optionIndicator;

/// @brief Field _optionText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__optionText, put=__cordl_internal_set__optionText)) ::UnityW<::TMPro::TMP_Text>  _optionText;

/// @brief Field _rockPileHeight, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__rockPileHeight, put=__cordl_internal_set__rockPileHeight)) float_t  _rockPileHeight;

/// @brief Field _rockPiles, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__rockPiles, put=__cordl_internal_set__rockPiles)) ::UnityW<::GlobalNamespace::RockPiles>  _rockPiles;

/// @brief Field _scoreIndicator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__scoreIndicator, put=__cordl_internal_set__scoreIndicator)) ::UnityW<::UnityEngine::GameObject>  _scoreIndicator;

/// @brief Field _scoreText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__scoreText, put=__cordl_internal_set__scoreText)) ::UnityW<::TMPro::TMP_Text>  _scoreText;

/// @brief Field _text, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::StringW  _text;

/// @brief Field _voteIndicator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__voteIndicator, put=__cordl_internal_set__voteIndicator)) ::UnityW<::UnityEngine::GameObject>  _voteIndicator;

/// @brief Field _youWinIndicator, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__youWinIndicator, put=__cordl_internal_set__youWinIndicator)) ::UnityW<::UnityEngine::GameObject>  _youWinIndicator;

/// @brief Method HideResult, addr 0x5623bb8, size 0x98, virtual false, abstract: false, final false
inline void HideResult() ;

static inline ::GlobalNamespace::MonkeVoteResult* New_ctor() ;

/// @brief Method SetDynamicMeshesVisible, addr 0x5623ce0, size 0x84, virtual false, abstract: false, final false
inline void SetDynamicMeshesVisible(bool  visible) ;

/// @brief Method ShowResult, addr 0x5623a18, size 0x18c, virtual false, abstract: false, final false
inline void ShowResult(::StringW  questionOption, int32_t  percentage, bool  showVote, bool  showPrediction, bool  isWinner) ;

/// @brief Method ShowRockPile, addr 0x5623ba4, size 0x14, virtual false, abstract: false, final false
inline void ShowRockPile(int32_t  percentage) ;

constexpr bool const& __cordl_internal_get__canVote() const;

constexpr bool& __cordl_internal_get__canVote() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__guessLoseIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__guessLoseIndicator() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__guessWinIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__guessWinIndicator() ;

constexpr ::UnityW<::GlobalNamespace::MonkeVoteMachine> const& __cordl_internal_get__machine() const;

constexpr ::UnityW<::GlobalNamespace::MonkeVoteMachine>& __cordl_internal_get__machine() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__mostPopularIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__mostPopularIndicator() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__optionIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__optionIndicator() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__optionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__optionText() ;

constexpr float_t const& __cordl_internal_get__rockPileHeight() const;

constexpr float_t& __cordl_internal_get__rockPileHeight() ;

constexpr ::UnityW<::GlobalNamespace::RockPiles> const& __cordl_internal_get__rockPiles() const;

constexpr ::UnityW<::GlobalNamespace::RockPiles>& __cordl_internal_get__rockPiles() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__scoreIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__scoreIndicator() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__scoreText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__scoreText() ;

constexpr ::StringW const& __cordl_internal_get__text() const;

constexpr ::StringW& __cordl_internal_get__text() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__voteIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__voteIndicator() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__youWinIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__youWinIndicator() ;

constexpr void __cordl_internal_set__canVote(bool  value) ;

constexpr void __cordl_internal_set__guessLoseIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__guessWinIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__machine(::UnityW<::GlobalNamespace::MonkeVoteMachine>  value) ;

constexpr void __cordl_internal_set__mostPopularIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__optionIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__optionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__rockPileHeight(float_t  value) ;

constexpr void __cordl_internal_set__rockPiles(::UnityW<::GlobalNamespace::RockPiles>  value) ;

constexpr void __cordl_internal_set__scoreIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__scoreText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__text(::StringW  value) ;

constexpr void __cordl_internal_set__voteIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__youWinIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5623d64, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Text, addr 0x56239d0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

/// @brief Method set_Text, addr 0x56239d8, size 0x40, virtual false, abstract: false, final false
inline void set_Text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteResult(MonkeVoteResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteResult(MonkeVoteResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{585};

/// [SerializeField]
/// @brief Field _optionIndicator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____optionIndicator;

/// [SerializeField]
/// @brief Field _optionText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____optionText;

/// [FormerlySerializedAs("_scoreLabelPost")]
/// [SerializeField]
/// @brief Field _scoreIndicator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____scoreIndicator;

/// [SerializeField]
/// @brief Field _scoreText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____scoreText;

/// [SerializeField]
/// @brief Field _voteIndicator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____voteIndicator;

/// [SerializeField]
/// @brief Field _guessWinIndicator, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____guessWinIndicator;

/// [SerializeField]
/// @brief Field _guessLoseIndicator, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____guessLoseIndicator;

/// [SerializeField]
/// @brief Field _mostPopularIndicator, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____mostPopularIndicator;

/// [SerializeField]
/// @brief Field _youWinIndicator, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____youWinIndicator;

/// [SerializeField]
/// @brief Field _rockPiles, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RockPiles>  ____rockPiles;

/// @brief Field _machine, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeVoteMachine>  ____machine;

/// @brief Field _text, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____text;

/// @brief Field _canVote, offset: 0x80, size: 0x1, def value: None
 bool  ____canVote;

/// @brief Field _rockPileHeight, offset: 0x84, size: 0x4, def value: None
 float_t  ____rockPileHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____optionIndicator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____optionText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____scoreIndicator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____scoreText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____voteIndicator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____guessWinIndicator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____guessLoseIndicator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____mostPopularIndicator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____youWinIndicator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____rockPiles) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____machine) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____text) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____canVote) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteResult, ____rockPileHeight) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteResult) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace

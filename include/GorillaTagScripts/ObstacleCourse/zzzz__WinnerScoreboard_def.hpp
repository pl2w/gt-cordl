#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/WinnerScoreboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WinnerScoreboard)
namespace GlobalNamespace {
struct ObstacleCourse_RaceState;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GorillaTagScripts::ObstacleCourse {
class WinnerScoreboard;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::ObstacleCourse::WinnerScoreboard*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ObstacleCourse::WinnerScoreboard*, "GorillaTagScripts.ObstacleCourse", "WinnerScoreboard");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::ObstacleCourse {
// Is value type: false
// CS Name: GorillaTagScripts.ObstacleCourse.WinnerScoreboard
class CORDL_TYPE WinnerScoreboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field output, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::UnityW<::TMPro::TextMeshPro>  output;

/// @brief Field raceLoading, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceLoading, put=__cordl_internal_set_raceLoading)) ::StringW  raceLoading;

/// @brief Field raceStarted, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceStarted, put=__cordl_internal_set_raceStarted)) ::StringW  raceStarted;

static inline ::GorillaTagScripts::ObstacleCourse::WinnerScoreboard* New_ctor() ;

/// @brief Method UpdateBoard, addr 0x5c176d8, size 0x16c, virtual false, abstract: false, final false
inline void UpdateBoard(::StringW  winner, ::GlobalNamespace::ObstacleCourse_RaceState  _currentState) ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_output() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_output() ;

constexpr ::StringW const& __cordl_internal_get_raceLoading() const;

constexpr ::StringW& __cordl_internal_get_raceLoading() ;

constexpr ::StringW const& __cordl_internal_get_raceStarted() const;

constexpr ::StringW& __cordl_internal_get_raceStarted() ;

constexpr void __cordl_internal_set_output(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_raceLoading(::StringW  value) ;

constexpr void __cordl_internal_set_raceStarted(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c19258, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WinnerScoreboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WinnerScoreboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WinnerScoreboard(WinnerScoreboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WinnerScoreboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WinnerScoreboard(WinnerScoreboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4121};

/// @brief Field raceStarted, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___raceStarted;

/// @brief Field raceLoading, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___raceLoading;

/// [SerializeField]
/// @brief Field output, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___output;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::WinnerScoreboard, ___raceStarted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::WinnerScoreboard, ___raceLoading) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::WinnerScoreboard, ___output) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::WinnerScoreboard) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::ObstacleCourse

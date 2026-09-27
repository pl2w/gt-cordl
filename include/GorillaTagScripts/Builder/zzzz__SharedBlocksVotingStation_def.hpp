#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksVotingStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksVotingStation)
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IntVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class StringVariable;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class SharedBlocksVotingStation;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksVotingStation*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksVotingStation*, "GorillaTagScripts.Builder", "SharedBlocksVotingStation");
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksVotingStation
class CORDL_TYPE SharedBlocksVotingStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _mapDisplayIndexVar, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__mapDisplayIndexVar, put=__cordl_internal_set__mapDisplayIndexVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _mapDisplayIndexVar;

/// @brief Field _mapNameVar, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__mapNameVar, put=__cordl_internal_set__mapNameVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  _mapNameVar;

/// @brief Field _screenLocText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__screenLocText, put=__cordl_internal_set__screenLocText)) ::UnityW<::GlobalNamespace::LocalizedText>  _screenLocText;

/// @brief Field _statusIndexVar, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__statusIndexVar, put=__cordl_internal_set__statusIndexVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _statusIndexVar;

/// @brief Field _statusLocText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__statusLocText, put=__cordl_internal_set__statusLocText)) ::UnityW<::GlobalNamespace::LocalizedText>  _statusLocText;

/// @brief Field buttonDefaultMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonDefaultMaterial, put=__cordl_internal_set_buttonDefaultMaterial)) ::UnityW<::UnityEngine::Material>  buttonDefaultMaterial;

/// @brief Field buttonDisabledMaterial, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonDisabledMaterial, put=__cordl_internal_set_buttonDisabledMaterial)) ::UnityW<::UnityEngine::Material>  buttonDisabledMaterial;

/// @brief Field clearStatusDelay, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_clearStatusDelay, put=__cordl_internal_set_clearStatusDelay)) float_t  clearStatusDelay;

/// @brief Field clearStatusTime, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_clearStatusTime, put=__cordl_internal_set_clearStatusTime)) float_t  clearStatusTime;

/// @brief Field downVoteButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_downVoteButton, put=__cordl_internal_set_downVoteButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  downVoteButton;

/// @brief Field loadedMapID, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadedMapID, put=__cordl_internal_set_loadedMapID)) ::StringW  loadedMapID;

/// @brief Field meshes, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshes, put=__cordl_internal_set_meshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  meshes;

/// @brief Field screenText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenText, put=__cordl_internal_set_screenText)) ::UnityW<::TMPro::TMP_Text>  screenText;

/// @brief Field statusText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_statusText, put=__cordl_internal_set_statusText)) ::UnityW<::TMPro::TMP_Text>  statusText;

/// @brief Field table, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::UnityW<::GorillaTagScripts::BuilderTable>  table;

/// @brief Field tableZone, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_tableZone, put=__cordl_internal_set_tableZone)) ::GlobalNamespace::GTZone  tableZone;

/// @brief Field upVoteButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_upVoteButton, put=__cordl_internal_set_upVoteButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  upVoteButton;

/// @brief Field voteInProgress, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_voteInProgress, put=__cordl_internal_set_voteInProgress)) bool  voteInProgress;

/// @brief Field waitingToClearStatus, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingToClearStatus, put=__cordl_internal_set_waitingToClearStatus)) bool  waitingToClearStatus;

/// @brief Method LateUpdate, addr 0x5c46d80, size 0xa0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTagScripts::Builder::SharedBlocksVotingStation* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c46540, size 0x2e8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDownVotePressed, addr 0x5c469e8, size 0x1c0, virtual false, abstract: false, final false
inline void OnDownVotePressed() ;

/// @brief Method OnLoadedMapChanged, addr 0x5c4637c, size 0x50, virtual false, abstract: false, final false
inline void OnLoadedMapChanged(::StringW  mapID) ;

/// @brief Method OnMapCleared, addr 0x5c46fe8, size 0x54, virtual false, abstract: false, final false
inline void OnMapCleared() ;

/// @brief Method OnUpVotePressed, addr 0x5c46828, size 0x1c0, virtual false, abstract: false, final false
inline void OnUpVotePressed() ;

/// @brief Method OnVoteResponse, addr 0x5c46ba8, size 0x1d8, virtual false, abstract: false, final false
inline void OnVoteResponse(bool  success, ::StringW  message) ;

/// @brief Method OnZoneChanged, addr 0x5c463cc, size 0x174, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method SetupLocalization, addr 0x5c45f00, size 0x47c, virtual false, abstract: false, final false
inline void SetupLocalization() ;

/// @brief Method Start, addr 0x5c45b80, size 0x380, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateScreen, addr 0x5c46e20, size 0x1c8, virtual false, abstract: false, final false
inline void UpdateScreen() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__mapDisplayIndexVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__mapDisplayIndexVar() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable* const& __cordl_internal_get__mapNameVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*& __cordl_internal_get__mapNameVar() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get__screenLocText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get__screenLocText() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__statusIndexVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__statusIndexVar() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get__statusLocText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get__statusLocText() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_buttonDefaultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_buttonDefaultMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_buttonDisabledMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_buttonDisabledMaterial() ;

constexpr float_t const& __cordl_internal_get_clearStatusDelay() const;

constexpr float_t& __cordl_internal_get_clearStatusDelay() ;

constexpr float_t const& __cordl_internal_get_clearStatusTime() const;

constexpr float_t& __cordl_internal_get_clearStatusTime() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_downVoteButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_downVoteButton() ;

constexpr ::StringW const& __cordl_internal_get_loadedMapID() const;

constexpr ::StringW& __cordl_internal_get_loadedMapID() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& __cordl_internal_get_meshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& __cordl_internal_get_meshes() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_screenText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_screenText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_statusText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_statusText() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_table() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_table() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_tableZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_tableZone() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_upVoteButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_upVoteButton() ;

constexpr bool const& __cordl_internal_get_voteInProgress() const;

constexpr bool& __cordl_internal_get_voteInProgress() ;

constexpr bool const& __cordl_internal_get_waitingToClearStatus() const;

constexpr bool& __cordl_internal_get_waitingToClearStatus() ;

constexpr void __cordl_internal_set__mapDisplayIndexVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set__mapNameVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  value) ;

constexpr void __cordl_internal_set__screenLocText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set__statusIndexVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set__statusLocText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_buttonDefaultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_buttonDisabledMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_clearStatusDelay(float_t  value) ;

constexpr void __cordl_internal_set_clearStatusTime(float_t  value) ;

constexpr void __cordl_internal_set_downVoteButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_loadedMapID(::StringW  value) ;

constexpr void __cordl_internal_set_meshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

constexpr void __cordl_internal_set_screenText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_statusText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_tableZone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_upVoteButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_voteInProgress(bool  value) ;

constexpr void __cordl_internal_set_waitingToClearStatus(bool  value) ;

/// @brief Method .ctor, addr 0x5c4703c, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksVotingStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksVotingStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksVotingStation(SharedBlocksVotingStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksVotingStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksVotingStation(SharedBlocksVotingStation const& ) = delete;

/// @brief Field MAP_DISPLAY_INDEX_NAMED_MAP offset 0xffffffff size 0x4
static constexpr int32_t  MAP_DISPLAY_INDEX_NAMED_MAP{static_cast<int32_t>(0x1)};

/// @brief Field MAP_DISPLAY_INDEX_NONE offset 0xffffffff size 0x4
static constexpr int32_t  MAP_DISPLAY_INDEX_NONE{static_cast<int32_t>(0x0)};

/// @brief Field VOTING_STATUS_INDEX_EMPTY offset 0xffffffff size 0x4
static constexpr int32_t  VOTING_STATUS_INDEX_EMPTY{static_cast<int32_t>(0x2)};

/// @brief Field VOTING_STATUS_INDEX_NOT_LOGGED_IN offset 0xffffffff size 0x4
static constexpr int32_t  VOTING_STATUS_INDEX_NOT_LOGGED_IN{static_cast<int32_t>(0x1)};

/// @brief Field VOTING_STATUS_INDEX_SUCCESS offset 0xffffffff size 0x4
static constexpr int32_t  VOTING_STATUS_INDEX_SUCCESS{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4220};

/// [SerializeField]
/// @brief Field screenText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___screenText;

/// [SerializeField]
/// @brief Field statusText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___statusText;

/// [SerializeField]
/// @brief Field upVoteButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___upVoteButton;

/// [SerializeField]
/// @brief Field downVoteButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___downVoteButton;

/// [SerializeField]
/// @brief Field tableZone, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___tableZone;

/// [SerializeField]
/// @brief Field buttonDefaultMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___buttonDefaultMaterial;

/// [SerializeField]
/// @brief Field buttonDisabledMaterial, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___buttonDisabledMaterial;

/// [Header("Localization Setup")]
/// [SerializeField]
/// @brief Field _statusLocText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ____statusLocText;

/// [SerializeField]
/// @brief Field _screenLocText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ____screenLocText;

/// @brief Field table, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___table;

/// @brief Field loadedMapID, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___loadedMapID;

/// @brief Field voteInProgress, offset: 0x78, size: 0x1, def value: None
 bool  ___voteInProgress;

/// @brief Field waitingToClearStatus, offset: 0x79, size: 0x1, def value: None
 bool  ___waitingToClearStatus;

/// @brief Field clearStatusTime, offset: 0x7c, size: 0x4, def value: None
 float_t  ___clearStatusTime;

/// @brief Field clearStatusDelay, offset: 0x80, size: 0x4, def value: None
 float_t  ___clearStatusDelay;

/// @brief Field _statusIndexVar, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____statusIndexVar;

/// @brief Field _mapDisplayIndexVar, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____mapDisplayIndexVar;

/// @brief Field _mapNameVar, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  ____mapNameVar;

/// @brief Field meshes, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  ___meshes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___screenText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___statusText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___upVoteButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___downVoteButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___tableZone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___buttonDefaultMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___buttonDisabledMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ____statusLocText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ____screenLocText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___table) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___loadedMapID) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___voteInProgress) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___waitingToClearStatus) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___clearStatusTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___clearStatusDelay) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ____statusIndexVar) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ____mapDisplayIndexVar) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ____mapNameVar) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksVotingStation, ___meshes) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksVotingStation) == 0xa8, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder

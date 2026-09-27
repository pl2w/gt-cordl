#pragma once
// IWYU pragma private; include "GlobalNamespace/AnnouncementManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SAnnouncementData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnnouncementManager)
namespace GlobalNamespace {
class MessageBox;
}
namespace PlayFab {
class PlayFabError;
}
// Forward declare root types
namespace GlobalNamespace {
class AnnouncementManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnnouncementManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnnouncementManager*, "", "AnnouncementManager");
// Dependencies SAnnouncementData, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnnouncementManager
class CORDL_TYPE AnnouncementManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <_announcementActive>k__BackingField, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get___announcementActive_k__BackingField, put=__cordl_internal_set___announcementActive_k__BackingField)) bool  __announcementActive_k__BackingField;

/// @brief Field <_completedSetup>k__BackingField, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get___completedSetup_k__BackingField, put=__cordl_internal_set___completedSetup_k__BackingField)) bool  __completedSetup_k__BackingField;

 __declspec(property(get=get__announcementActive, put=set__announcementActive)) bool  _announcementActive;

/// @brief Field _announcementData, offset 0x30, size 0x20 
 __declspec(property(get=__cordl_internal_get__announcementData, put=__cordl_internal_set__announcementData)) ::GlobalNamespace::SAnnouncementData  _announcementData;

/// @brief Field _announcementIDPref, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__announcementIDPref, put=setStaticF__announcementIDPref)) ::StringW  _announcementIDPref;

/// @brief Field _announcementMessageBox, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__announcementMessageBox, put=__cordl_internal_set__announcementMessageBox)) ::UnityW<::GlobalNamespace::MessageBox>  _announcementMessageBox;

/// @brief Field _announcementString, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__announcementString, put=__cordl_internal_set__announcementString)) ::StringW  _announcementString;

 __declspec(property(get=get__completedSetup, put=set__completedSetup)) bool  _completedSetup;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::AnnouncementManager>  _instance;

/// @brief Field _showAnnouncement, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__showAnnouncement, put=__cordl_internal_set__showAnnouncement)) bool  _showAnnouncement;

/// @brief Method Awake, addr 0x5a24f9c, size 0x168, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ConfigureAnnouncement, addr 0x5a25480, size 0x290, virtual false, abstract: false, final false
inline void ConfigureAnnouncement(::StringW  data) ;

static inline ::GlobalNamespace::AnnouncementManager* New_ctor() ;

/// @brief Method OnContinuePressed, addr 0x5a252c4, size 0x120, virtual false, abstract: false, final false
inline void OnContinuePressed() ;

/// @brief Method OnError, addr 0x5a253e4, size 0x9c, virtual false, abstract: false, final false
inline void OnError(::PlayFab::PlayFabError*  error) ;

/// @brief Method ShowAnnouncement, addr 0x5a24d84, size 0x8, virtual false, abstract: false, final false
inline bool ShowAnnouncement() ;

/// @brief Method Start, addr 0x5a25104, size 0x1c0, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get___announcementActive_k__BackingField() const;

constexpr bool& __cordl_internal_get___announcementActive_k__BackingField() ;

constexpr bool const& __cordl_internal_get___completedSetup_k__BackingField() const;

constexpr bool& __cordl_internal_get___completedSetup_k__BackingField() ;

constexpr ::GlobalNamespace::SAnnouncementData const& __cordl_internal_get__announcementData() const;

constexpr ::GlobalNamespace::SAnnouncementData& __cordl_internal_get__announcementData() ;

constexpr ::UnityW<::GlobalNamespace::MessageBox> const& __cordl_internal_get__announcementMessageBox() const;

constexpr ::UnityW<::GlobalNamespace::MessageBox>& __cordl_internal_get__announcementMessageBox() ;

constexpr ::StringW const& __cordl_internal_get__announcementString() const;

constexpr ::StringW& __cordl_internal_get__announcementString() ;

constexpr bool const& __cordl_internal_get__showAnnouncement() const;

constexpr bool& __cordl_internal_get__showAnnouncement() ;

constexpr void __cordl_internal_set___announcementActive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set___completedSetup_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__announcementData(::GlobalNamespace::SAnnouncementData  value) ;

constexpr void __cordl_internal_set__announcementMessageBox(::UnityW<::GlobalNamespace::MessageBox>  value) ;

constexpr void __cordl_internal_set__announcementString(::StringW  value) ;

constexpr void __cordl_internal_set__showAnnouncement(bool  value) ;

/// @brief Method .ctor, addr 0x5a25710, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF__announcementIDPref() ;

static inline ::UnityW<::GlobalNamespace::AnnouncementManager> getStaticF__instance() ;

/// @brief Method get_AnnouncementDPlayerPref, addr 0x5a24ea0, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_AnnouncementDPlayerPref() ;

/// @brief Method get_Instance, addr 0x5a24dac, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::AnnouncementManager> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get__announcementActive, addr 0x5a24d9c, size 0x8, virtual false, abstract: false, final false
inline bool get__announcementActive() ;

/// [CompilerGenerated]
/// @brief Method get__completedSetup, addr 0x5a24d8c, size 0x8, virtual false, abstract: false, final false
inline bool get__completedSetup() ;

static inline void setStaticF__announcementIDPref(::StringW  value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::AnnouncementManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set__announcementActive, addr 0x5a24da4, size 0x8, virtual false, abstract: false, final false
inline void set__announcementActive(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set__completedSetup, addr 0x5a24d94, size 0x8, virtual false, abstract: false, final false
inline void set__completedSetup(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnnouncementManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnnouncementManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnnouncementManager(AnnouncementManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnnouncementManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnnouncementManager(AnnouncementManager const& ) = delete;

/// @brief Field ANNOUNCEMENT_BUTTON_TEXT offset 0xffffffff size 0x8
static constexpr ::ConstString  ANNOUNCEMENT_BUTTON_TEXT{u"Continue"};

/// @brief Field ANNOUNCEMENT_HEADING offset 0xffffffff size 0x8
static constexpr ::ConstString  ANNOUNCEMENT_HEADING{u"Announcement!"};

/// @brief Field ANNOUNCEMENT_ID_PLAYERPREF_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  ANNOUNCEMENT_ID_PLAYERPREF_PREFIX{u"announcement-id-"};

/// @brief Field ANNOUNCEMENT_TITLE_DATA_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ANNOUNCEMENT_TITLE_DATA_KEY{u"AnnouncementData"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2857};

/// [SerializeField]
/// @brief Field _announcementMessageBox, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MessageBox>  ____announcementMessageBox;

/// @brief Field _announcementString, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____announcementString;

/// @brief Field _announcementData, offset: 0x30, size: 0x20, def value: None
 ::GlobalNamespace::SAnnouncementData  ____announcementData;

/// @brief Field _showAnnouncement, offset: 0x50, size: 0x1, def value: None
 bool  ____showAnnouncement;

/// [CompilerGenerated]
/// @brief Field <_completedSetup>k__BackingField, offset: 0x51, size: 0x1, def value: None
 bool  _____completedSetup_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <_announcementActive>k__BackingField, offset: 0x52, size: 0x1, def value: None
 bool  _____announcementActive_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnnouncementManager, ____announcementMessageBox) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnouncementManager, ____announcementString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnouncementManager, ____announcementData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnouncementManager, ____showAnnouncement) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnouncementManager, _____completedSetup_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnouncementManager, _____announcementActive_k__BackingField) == 0x52, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnnouncementManager) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

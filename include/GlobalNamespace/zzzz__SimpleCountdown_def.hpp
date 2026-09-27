#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleCountdown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableBehavior_def.hpp"
#include "GlobalNamespace/zzzz__SimpleCountdown_DisplayFormat_def.hpp"
#include "GlobalNamespace/zzzz__SimpleCountdown_Mode_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleCountdown)
namespace GlobalNamespace {
class ServerTimeSyncRule;
}
namespace GlobalNamespace {
struct SimpleCountdown_DisplayFormat;
}
namespace GlobalNamespace {
struct SimpleCountdown_Mode;
}
namespace GlobalNamespace {
struct SimpleCountdown__Start_d__14;
}
namespace GlobalNamespace {
class TitleDataActivation_TitleDataObjectActivationData;
}
namespace PlayFab {
class PlayFabError;
}
namespace System {
class Action;
}
namespace System {
struct DateTime;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleCountdown;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimpleCountdown*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleCountdown*, "", "SimpleCountdown");
// [RequireComponent(typeof(TMPro.TextMeshPro))]
// Dependencies ObservableBehavior, SimpleCountdown::DisplayFormat, SimpleCountdown::Mode, System.DateTime, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleCountdown
class CORDL_TYPE SimpleCountdown : public ::GlobalNamespace::ObservableBehavior {
public:
// Declarations
using DisplayFormat = ::GlobalNamespace::SimpleCountdown_DisplayFormat;

using Mode = ::GlobalNamespace::SimpleCountdown_Mode;

using _Start_d__14 = ::GlobalNamespace::SimpleCountdown__Start_d__14;

/// @brief Field ManualCountdownComplete, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_ManualCountdownComplete, put=__cordl_internal_set_ManualCountdownComplete)) ::System::Action*  ManualCountdownComplete;

/// @brief Field activationData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_activationData, put=__cordl_internal_set_activationData)) ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*  activationData;

/// @brief Field date, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_date, put=__cordl_internal_set_date)) ::StringW  date;

/// @brief Field displayFormat, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_displayFormat, put=__cordl_internal_set_displayFormat)) ::GlobalNamespace::SimpleCountdown_DisplayFormat  displayFormat;

/// @brief Field dt, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_dt, put=__cordl_internal_set_dt)) ::System::DateTime  dt;

/// @brief Field hourRange, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_hourRange, put=__cordl_internal_set_hourRange)) ::UnityEngine::Vector2  hourRange;

/// @brief Field mode, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::SimpleCountdown_Mode  mode;

/// @brief Field overrideDt, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideDt, put=__cordl_internal_set_overrideDt)) ::System::DateTime  overrideDt;

/// @brief Field timeSyncRule, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeSyncRule, put=__cordl_internal_set_timeSyncRule)) ::UnityW<::GlobalNamespace::ServerTimeSyncRule>  timeSyncRule;

/// @brief Field titleDataKey, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataKey, put=__cordl_internal_set_titleDataKey)) ::StringW  titleDataKey;

/// @brief Field titleDataObjectID, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataObjectID, put=__cordl_internal_set_titleDataObjectID)) ::StringW  titleDataObjectID;

/// @brief Field tmp, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmp, put=__cordl_internal_set_tmp)) ::UnityW<::TMPro::TextMeshPro>  tmp;

/// @brief Method ConsiderTime, addr 0x5d138cc, size 0xbc, virtual false, abstract: false, final false
static inline void ConsiderTime(::System::DateTime  candidate, ::System::DateTime  now, ::by_ref<bool>  found, ::by_ref<::System::DateTime>  target) ;

/// @brief Method GetEventWindowDateTime, addr 0x5d13708, size 0x1c4, virtual false, abstract: false, final false
inline ::System::DateTime GetEventWindowDateTime(::System::DateTime  now) ;

static inline ::GlobalNamespace::SimpleCountdown* New_ctor() ;

/// @brief Method ObservableSliceUpdate, addr 0x5d13d84, size 0x844, virtual true, abstract: false, final false
inline void ObservableSliceUpdate() ;

/// @brief Method OnBecameObservable, addr 0x5d145c8, size 0x4, virtual true, abstract: false, final false
inline void OnBecameObservable() ;

/// @brief Method OnLostObservable, addr 0x5d145cc, size 0x4, virtual true, abstract: false, final false
inline void OnLostObservable() ;

/// @brief Method ParseDateTime, addr 0x5d139a4, size 0x208, virtual false, abstract: false, final false
inline void ParseDateTime() ;

/// [AsyncStateMachine(typeof(SimpleCountdown::<Start>d__14))]
/// @brief Method Start, addr 0x5d132bc, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartCountdown, addr 0x5d145d0, size 0xc4, virtual false, abstract: false, final false
inline void StartCountdown(int32_t  seconds) ;

constexpr ::System::Action* const& __cordl_internal_get_ManualCountdownComplete() const;

constexpr ::System::Action*& __cordl_internal_get_ManualCountdownComplete() ;

constexpr ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData* const& __cordl_internal_get_activationData() const;

constexpr ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*& __cordl_internal_get_activationData() ;

constexpr ::StringW const& __cordl_internal_get_date() const;

constexpr ::StringW& __cordl_internal_get_date() ;

constexpr ::GlobalNamespace::SimpleCountdown_DisplayFormat const& __cordl_internal_get_displayFormat() const;

constexpr ::GlobalNamespace::SimpleCountdown_DisplayFormat& __cordl_internal_get_displayFormat() ;

constexpr ::System::DateTime const& __cordl_internal_get_dt() const;

constexpr ::System::DateTime& __cordl_internal_get_dt() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_hourRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_hourRange() ;

constexpr ::GlobalNamespace::SimpleCountdown_Mode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::SimpleCountdown_Mode& __cordl_internal_get_mode() ;

constexpr ::System::DateTime const& __cordl_internal_get_overrideDt() const;

constexpr ::System::DateTime& __cordl_internal_get_overrideDt() ;

constexpr ::UnityW<::GlobalNamespace::ServerTimeSyncRule> const& __cordl_internal_get_timeSyncRule() const;

constexpr ::UnityW<::GlobalNamespace::ServerTimeSyncRule>& __cordl_internal_get_timeSyncRule() ;

constexpr ::StringW const& __cordl_internal_get_titleDataKey() const;

constexpr ::StringW& __cordl_internal_get_titleDataKey() ;

constexpr ::StringW const& __cordl_internal_get_titleDataObjectID() const;

constexpr ::StringW& __cordl_internal_get_titleDataObjectID() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_tmp() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_tmp() ;

constexpr void __cordl_internal_set_ManualCountdownComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set_activationData(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*  value) ;

constexpr void __cordl_internal_set_date(::StringW  value) ;

constexpr void __cordl_internal_set_displayFormat(::GlobalNamespace::SimpleCountdown_DisplayFormat  value) ;

constexpr void __cordl_internal_set_dt(::System::DateTime  value) ;

constexpr void __cordl_internal_set_hourRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::SimpleCountdown_Mode  value) ;

constexpr void __cordl_internal_set_overrideDt(::System::DateTime  value) ;

constexpr void __cordl_internal_set_timeSyncRule(::UnityW<::GlobalNamespace::ServerTimeSyncRule>  value) ;

constexpr void __cordl_internal_set_titleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_titleDataObjectID(::StringW  value) ;

constexpr void __cordl_internal_set_tmp(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x5d14694, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method onEventTD, addr 0x5d13364, size 0x1fc, virtual false, abstract: false, final false
inline void onEventTD(::StringW  s) ;

/// @brief Method onEventTDError, addr 0x5d13560, size 0x1a8, virtual false, abstract: false, final false
inline void onEventTDError(::PlayFab::PlayFabError*  error) ;

/// @brief Method onTD, addr 0x5d13988, size 0x1c, virtual false, abstract: false, final false
inline void onTD(::StringW  s) ;

/// @brief Method onTDError, addr 0x5d13bac, size 0x1d8, virtual false, abstract: false, final false
inline void onTDError(::PlayFab::PlayFabError*  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleCountdown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleCountdown", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleCountdown(SimpleCountdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleCountdown", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleCountdown(SimpleCountdown const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{475};

/// [SerializeField]
/// @brief Field displayFormat, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::SimpleCountdown_DisplayFormat  ___displayFormat;

/// [SerializeField]
/// @brief Field mode, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::SimpleCountdown_Mode  ___mode;

/// [SerializeField]
/// @brief Field titleDataKey, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___titleDataKey;

/// [SerializeField]
/// @brief Field titleDataObjectID, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___titleDataObjectID;

/// [SerializeField]
/// @brief Field date, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___date;

/// [SerializeField]
/// @brief Field timeSyncRule, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ServerTimeSyncRule>  ___timeSyncRule;

/// [SerializeField]
/// @brief Field hourRange, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___hourRange;

/// @brief Field dt, offset: 0x70, size: 0x8, def value: None
 ::System::DateTime  ___dt;

/// @brief Field activationData, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*  ___activationData;

/// @brief Field tmp, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___tmp;

/// @brief Field overrideDt, offset: 0x88, size: 0x8, def value: None
 ::System::DateTime  ___overrideDt;

/// @brief Field ManualCountdownComplete, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___ManualCountdownComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___displayFormat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___mode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___titleDataKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___titleDataObjectID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___date) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___timeSyncRule) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___hourRange) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___dt) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___activationData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___tmp) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___overrideDt) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCountdown, ___ManualCountdownComplete) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleCountdown) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace

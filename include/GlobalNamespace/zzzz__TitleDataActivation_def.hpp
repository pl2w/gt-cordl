#pragma once
// IWYU pragma private; include "GlobalNamespace/TitleDataActivation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TitleDataActivation_RelativeDateTime_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TitleDataActivation)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class TitleDataActivation_AbsoluteDateTimeWindow;
}
namespace GlobalNamespace {
class TitleDataActivation_RelativeDateTimeWindow;
}
namespace GlobalNamespace {
struct TitleDataActivation_RelativeDateTime;
}
namespace GlobalNamespace {
class TitleDataActivation_TitleDataActivationData;
}
namespace GlobalNamespace {
class TitleDataActivation_TitleDataObjectActivationData;
}
namespace GlobalNamespace {
struct TitleDataActivation__Initialize_d__16;
}
namespace GlobalNamespace {
struct TitleDataActivation__RuntimeInit_d__2;
}
namespace PlayFab {
class PlayFabError;
}
namespace System {
struct DateTime;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class TitleDataActivation;
}
namespace GlobalNamespace {
class TitleDataActivation_AbsoluteDateTimeWindow;
}
namespace GlobalNamespace {
class TitleDataActivation_RelativeDateTimeWindow;
}
namespace GlobalNamespace {
class TitleDataActivation_TitleDataActivationData;
}
namespace GlobalNamespace {
class TitleDataActivation_TitleDataObjectActivationData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TitleDataActivation*);
MARK_REF_T(::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*);
MARK_REF_T(::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*);
MARK_REF_T(::GlobalNamespace::TitleDataActivation_TitleDataActivationData*);
MARK_REF_T(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleDataActivation*, "", "TitleDataActivation");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*, "", "TitleDataActivation/AbsoluteDateTimeWindow");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*, "", "TitleDataActivation/RelativeDateTimeWindow");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleDataActivation_TitleDataActivationData*, "", "TitleDataActivation/TitleDataActivationData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*, "", "TitleDataActivation/TitleDataObjectActivationData");
// Dependencies System.DateTime, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TitleDataActivation
class CORDL_TYPE TitleDataActivation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AbsoluteDateTimeWindow = ::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow;

using RelativeDateTime = ::GlobalNamespace::TitleDataActivation_RelativeDateTime;

using RelativeDateTimeWindow = ::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow;

using TitleDataActivationData = ::GlobalNamespace::TitleDataActivation_TitleDataActivationData;

using TitleDataObjectActivationData = ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData;

using _Initialize_d__16 = ::GlobalNamespace::TitleDataActivation__Initialize_d__16;

using _RuntimeInit_d__2 = ::GlobalNamespace::TitleDataActivation__RuntimeInit_d__2;

/// @brief Field ReferenceDate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReferenceDate, put=setStaticF_ReferenceDate)) ::System::DateTime  ReferenceDate;

/// @brief Field UpdatedReferenceDateFromTitleData, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_UpdatedReferenceDateFromTitleData, put=setStaticF_UpdatedReferenceDateFromTitleData)) bool  UpdatedReferenceDateFromTitleData;

/// @brief Field activationData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_activationData, put=__cordl_internal_set_activationData)) ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*  activationData;

/// @brief Field gameObjects, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjects, put=__cordl_internal_set_gameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjects;

/// @brief Field initialized, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field onOffState, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_onOffState, put=__cordl_internal_set_onOffState)) bool  onOffState;

/// @brief Field titleDataKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataKey, put=__cordl_internal_set_titleDataKey)) ::StringW  titleDataKey;

/// @brief Field titleDataObjectID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataObjectID, put=__cordl_internal_set_titleDataObjectID)) ::StringW  titleDataObjectID;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method GetDelayedActivationTime, addr 0x5b36970, size 0x194, virtual false, abstract: false, final false
inline float_t GetDelayedActivationTime() ;

/// @brief Method IGorillaSliceableSimple.SliceUpdate, addr 0x5b363ec, size 0x1ac, virtual true, abstract: false, final true
inline void IGorillaSliceableSimple_SliceUpdate() ;

/// [AsyncStateMachine(typeof(TitleDataActivation::<Initialize>d__16))]
/// @brief Method Initialize, addr 0x5b3606c, size 0xa8, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::TitleDataActivation* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b363e0, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b363c0, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayAnimatorAtScheduledTime, addr 0x5b36b04, size 0x1d4, virtual false, abstract: false, final false
inline void PlayAnimatorAtScheduledTime(::UnityEngine::Animator*  animator) ;

/// [AsyncStateMachine(typeof(TitleDataActivation::<RuntimeInit>d__2))]
/// [RuntimeInitializeOnLoadMethod]
/// @brief Method RuntimeInit, addr 0x5b35e58, size 0x90, virtual false, abstract: false, final false
static inline void RuntimeInit() ;

/// @brief Method SetState, addr 0x5b367d8, size 0x198, virtual false, abstract: false, final false
inline void SetState(bool  onOff, float_t  delayedActivation) ;

constexpr ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData* const& __cordl_internal_get_activationData() const;

constexpr ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*& __cordl_internal_get_activationData() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjects() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr bool const& __cordl_internal_get_onOffState() const;

constexpr bool& __cordl_internal_get_onOffState() ;

constexpr ::StringW const& __cordl_internal_get_titleDataKey() const;

constexpr ::StringW& __cordl_internal_get_titleDataKey() ;

constexpr ::StringW const& __cordl_internal_get_titleDataObjectID() const;

constexpr ::StringW& __cordl_internal_get_titleDataObjectID() ;

constexpr void __cordl_internal_set_activationData(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*  value) ;

constexpr void __cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_onOffState(bool  value) ;

constexpr void __cordl_internal_set_titleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_titleDataObjectID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b36cd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::DateTime getStaticF_ReferenceDate() ;

static inline bool getStaticF_UpdatedReferenceDateFromTitleData() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Method onTD, addr 0x5b36114, size 0x1fc, virtual false, abstract: false, final false
inline void onTD(::StringW  s) ;

/// @brief Method onTDError, addr 0x5b36310, size 0xb0, virtual false, abstract: false, final false
inline void onTDError(::PlayFab::PlayFabError*  error) ;

/// @brief Method onTDReferenceDate, addr 0x5b35ee8, size 0xf8, virtual false, abstract: false, final false
static inline void onTDReferenceDate(::StringW  s) ;

/// @brief Method onTDReferenceDateError, addr 0x5b35fe0, size 0x8c, virtual false, abstract: false, final false
static inline void onTDReferenceDateError(::PlayFab::PlayFabError*  error) ;

static inline void setStaticF_ReferenceDate(::System::DateTime  value) ;

static inline void setStaticF_UpdatedReferenceDateFromTitleData(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleDataActivation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleDataActivation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleDataActivation(TitleDataActivation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleDataActivation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleDataActivation(TitleDataActivation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3685};

/// [SerializeField]
/// @brief Field titleDataKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___titleDataKey;

/// [SerializeField]
/// @brief Field titleDataObjectID, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___titleDataObjectID;

/// @brief Field activationData, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*  ___activationData;

/// @brief Field gameObjects, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjects;

/// @brief Field initialized, offset: 0x40, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field onOffState, offset: 0x41, size: 0x1, def value: None
 bool  ___onOffState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleDataActivation, ___titleDataKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation, ___titleDataObjectID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation, ___activationData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation, ___gameObjects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation, ___initialized) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation, ___onOffState) == 0x41, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleDataActivation) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, TitleDataActivation::TitleDataObjectActivationData
namespace GlobalNamespace {
// Is value type: false
// CS Name: TitleDataActivation/TitleDataActivationData
class CORDL_TYPE TitleDataActivation_TitleDataActivationData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::ArrayW<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>  Data;

/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>  data;

/// @brief Field validated, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_validated, put=__cordl_internal_set_validated)) bool  validated;

static inline ::GlobalNamespace::TitleDataActivation_TitleDataActivationData* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>& __cordl_internal_get_data() ;

constexpr bool const& __cordl_internal_get_validated() const;

constexpr bool& __cordl_internal_get_validated() ;

constexpr void __cordl_internal_set_data(::ArrayW<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>  value) ;

constexpr void __cordl_internal_set_validated(bool  value) ;

/// @brief Method .ctor, addr 0x5b36d88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x5b36d78, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*> get_Data() ;

/// @brief Method set_Data, addr 0x5b36d80, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::ArrayW<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleDataActivation_TitleDataActivationData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleDataActivation_TitleDataActivationData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleDataActivation_TitleDataActivationData(TitleDataActivation_TitleDataActivationData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleDataActivation_TitleDataActivationData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleDataActivation_TitleDataActivationData(TitleDataActivation_TitleDataActivationData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3678};

/// [SerializeField]
/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>  ___data;

/// @brief Field validated, offset: 0x18, size: 0x1, def value: None
 bool  ___validated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleDataActivation_TitleDataActivationData, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_TitleDataActivationData, ___validated) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleDataActivation_TitleDataActivationData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, TitleDataActivation::AbsoluteDateTimeWindow, TitleDataActivation::RelativeDateTimeWindow
namespace GlobalNamespace {
// Is value type: false
// CS Name: TitleDataActivation/TitleDataObjectActivationData
class CORDL_TYPE TitleDataActivation_TitleDataObjectActivationData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AbsoluteDateTimeWindow, put=set_AbsoluteDateTimeWindow)) ::ArrayW<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>  AbsoluteDateTimeWindow;

 __declspec(property(get=get_RelativeDateTimeWindow, put=set_RelativeDateTimeWindow)) ::ArrayW<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>  RelativeDateTimeWindow;

 __declspec(property(get=get_TitleDataObjectID, put=set_TitleDataObjectID)) ::StringW  TitleDataObjectID;

/// @brief Field absoluteDateTimeWindow, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_absoluteDateTimeWindow, put=__cordl_internal_set_absoluteDateTimeWindow)) ::ArrayW<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>  absoluteDateTimeWindow;

/// @brief Field relativeDateTimeWindow, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_relativeDateTimeWindow, put=__cordl_internal_set_relativeDateTimeWindow)) ::ArrayW<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>  relativeDateTimeWindow;

/// @brief Field titleDataObjectID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataObjectID, put=__cordl_internal_set_titleDataObjectID)) ::StringW  titleDataObjectID;

/// @brief Field validated, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_validated, put=__cordl_internal_set_validated)) bool  validated;

static inline ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*> const& __cordl_internal_get_absoluteDateTimeWindow() const;

constexpr ::ArrayW<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>& __cordl_internal_get_absoluteDateTimeWindow() ;

constexpr ::ArrayW<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*> const& __cordl_internal_get_relativeDateTimeWindow() const;

constexpr ::ArrayW<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>& __cordl_internal_get_relativeDateTimeWindow() ;

constexpr ::StringW const& __cordl_internal_get_titleDataObjectID() const;

constexpr ::StringW& __cordl_internal_get_titleDataObjectID() ;

constexpr bool const& __cordl_internal_get_validated() const;

constexpr bool& __cordl_internal_get_validated() ;

constexpr void __cordl_internal_set_absoluteDateTimeWindow(::ArrayW<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>  value) ;

constexpr void __cordl_internal_set_relativeDateTimeWindow(::ArrayW<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>  value) ;

constexpr void __cordl_internal_set_titleDataObjectID(::StringW  value) ;

constexpr void __cordl_internal_set_validated(bool  value) ;

/// @brief Method .ctor, addr 0x5b36dc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AbsoluteDateTimeWindow, addr 0x5b36da0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*> get_AbsoluteDateTimeWindow() ;

/// @brief Method get_RelativeDateTimeWindow, addr 0x5b36db0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*> get_RelativeDateTimeWindow() ;

/// @brief Method get_TitleDataObjectID, addr 0x5b36d90, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TitleDataObjectID() ;

/// @brief Method set_AbsoluteDateTimeWindow, addr 0x5b36da8, size 0x8, virtual false, abstract: false, final false
inline void set_AbsoluteDateTimeWindow(::ArrayW<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>  value) ;

/// @brief Method set_RelativeDateTimeWindow, addr 0x5b36db8, size 0x8, virtual false, abstract: false, final false
inline void set_RelativeDateTimeWindow(::ArrayW<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>  value) ;

/// @brief Method set_TitleDataObjectID, addr 0x5b36d98, size 0x8, virtual false, abstract: false, final false
inline void set_TitleDataObjectID(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleDataActivation_TitleDataObjectActivationData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleDataActivation_TitleDataObjectActivationData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleDataActivation_TitleDataObjectActivationData(TitleDataActivation_TitleDataObjectActivationData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleDataActivation_TitleDataObjectActivationData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleDataActivation_TitleDataObjectActivationData(TitleDataActivation_TitleDataObjectActivationData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3679};

/// [SerializeField]
/// @brief Field titleDataObjectID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___titleDataObjectID;

/// [SerializeField]
/// @brief Field absoluteDateTimeWindow, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>  ___absoluteDateTimeWindow;

/// [SerializeField]
/// @brief Field relativeDateTimeWindow, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>  ___relativeDateTimeWindow;

/// @brief Field validated, offset: 0x28, size: 0x1, def value: None
 bool  ___validated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData, ___titleDataObjectID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData, ___absoluteDateTimeWindow) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData, ___relativeDateTimeWindow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData, ___validated) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTime, System.Object, TitleDataActivation::RelativeDateTime
namespace GlobalNamespace {
// Is value type: false
// CS Name: TitleDataActivation/RelativeDateTimeWindow
class CORDL_TYPE TitleDataActivation_RelativeDateTimeWindow : public ::System::Object {
public:
// Declarations
/// @brief [JsonIgnore]
 __declspec(property(get=get_EndDate)) ::System::DateTime  EndDate;

 __declspec(property(get=get_EndDateTime, put=set_EndDateTime)) ::GlobalNamespace::TitleDataActivation_RelativeDateTime  EndDateTime;

/// @brief [JsonIgnore]
 __declspec(property(get=get_StartDate)) ::System::DateTime  StartDate;

 __declspec(property(get=get_StartDateTime, put=set_StartDateTime)) ::GlobalNamespace::TitleDataActivation_RelativeDateTime  StartDateTime;

/// @brief Field dtEnd, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_dtEnd, put=__cordl_internal_set_dtEnd)) ::System::DateTime  dtEnd;

/// @brief Field dtStart, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dtStart, put=__cordl_internal_set_dtStart)) ::System::DateTime  dtStart;

/// @brief Field endDateTime, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_endDateTime, put=__cordl_internal_set_endDateTime)) ::GlobalNamespace::TitleDataActivation_RelativeDateTime  endDateTime;

/// @brief Field startDateTime, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_startDateTime, put=__cordl_internal_set_startDateTime)) ::GlobalNamespace::TitleDataActivation_RelativeDateTime  startDateTime;

/// @brief Method IsInWindow, addr 0x5b366b8, size 0x120, virtual false, abstract: false, final false
inline void IsInWindow(::System::DateTime  d, ::by_ref<bool>  inRange, ::by_ref<float_t>  delay) ;

static inline ::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get_dtEnd() const;

constexpr ::System::DateTime& __cordl_internal_get_dtEnd() ;

constexpr ::System::DateTime const& __cordl_internal_get_dtStart() const;

constexpr ::System::DateTime& __cordl_internal_get_dtStart() ;

constexpr ::GlobalNamespace::TitleDataActivation_RelativeDateTime const& __cordl_internal_get_endDateTime() const;

constexpr ::GlobalNamespace::TitleDataActivation_RelativeDateTime& __cordl_internal_get_endDateTime() ;

constexpr ::GlobalNamespace::TitleDataActivation_RelativeDateTime const& __cordl_internal_get_startDateTime() const;

constexpr ::GlobalNamespace::TitleDataActivation_RelativeDateTime& __cordl_internal_get_startDateTime() ;

constexpr void __cordl_internal_set_dtEnd(::System::DateTime  value) ;

constexpr void __cordl_internal_set_dtStart(::System::DateTime  value) ;

constexpr void __cordl_internal_set_endDateTime(::GlobalNamespace::TitleDataActivation_RelativeDateTime  value) ;

constexpr void __cordl_internal_set_startDateTime(::GlobalNamespace::TitleDataActivation_RelativeDateTime  value) ;

/// @brief Method .ctor, addr 0x5b37158, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EndDate, addr 0x5b36f48, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_EndDate() ;

/// @brief Method get_EndDateTime, addr 0x5b37054, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::TitleDataActivation_RelativeDateTime get_EndDateTime() ;

/// @brief Method get_StartDate, addr 0x5b36f40, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_StartDate() ;

/// @brief Method get_StartDateTime, addr 0x5b36f50, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::TitleDataActivation_RelativeDateTime get_StartDateTime() ;

/// @brief Method set_EndDateTime, addr 0x5b37060, size 0xf8, virtual false, abstract: false, final false
inline void set_EndDateTime(::GlobalNamespace::TitleDataActivation_RelativeDateTime  value) ;

/// @brief Method set_StartDateTime, addr 0x5b36f5c, size 0xf8, virtual false, abstract: false, final false
inline void set_StartDateTime(::GlobalNamespace::TitleDataActivation_RelativeDateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleDataActivation_RelativeDateTimeWindow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleDataActivation_RelativeDateTimeWindow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleDataActivation_RelativeDateTimeWindow(TitleDataActivation_RelativeDateTimeWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleDataActivation_RelativeDateTimeWindow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleDataActivation_RelativeDateTimeWindow(TitleDataActivation_RelativeDateTimeWindow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3681};

/// @brief Field dtStart, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ___dtStart;

/// @brief Field dtEnd, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___dtEnd;

/// [SerializeField]
/// @brief Field startDateTime, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::TitleDataActivation_RelativeDateTime  ___startDateTime;

/// [SerializeField]
/// @brief Field endDateTime, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::TitleDataActivation_RelativeDateTime  ___endDateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow, ___dtStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow, ___dtEnd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow, ___startDateTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow, ___endDateTime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTime, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TitleDataActivation/AbsoluteDateTimeWindow
class CORDL_TYPE TitleDataActivation_AbsoluteDateTimeWindow : public ::System::Object {
public:
// Declarations
/// @brief [JsonIgnore]
 __declspec(property(get=get_EndDate)) ::System::DateTime  EndDate;

 __declspec(property(get=get_EndDateTime, put=set_EndDateTime)) ::StringW  EndDateTime;

/// @brief [JsonIgnore]
 __declspec(property(get=get_StartDate)) ::System::DateTime  StartDate;

 __declspec(property(get=get_StartDateTime, put=set_StartDateTime)) ::StringW  StartDateTime;

/// @brief Field dtEnd, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_dtEnd, put=__cordl_internal_set_dtEnd)) ::System::DateTime  dtEnd;

/// @brief Field dtStart, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dtStart, put=__cordl_internal_set_dtStart)) ::System::DateTime  dtStart;

/// @brief Field endDateTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_endDateTime, put=__cordl_internal_set_endDateTime)) ::StringW  endDateTime;

/// @brief Field startDateTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_startDateTime, put=__cordl_internal_set_startDateTime)) ::StringW  startDateTime;

/// @brief Method IsInWindow, addr 0x5b36598, size 0x120, virtual false, abstract: false, final false
inline void IsInWindow(::System::DateTime  d, ::by_ref<bool>  inRange, ::by_ref<float_t>  delay) ;

static inline ::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get_dtEnd() const;

constexpr ::System::DateTime& __cordl_internal_get_dtEnd() ;

constexpr ::System::DateTime const& __cordl_internal_get_dtStart() const;

constexpr ::System::DateTime& __cordl_internal_get_dtStart() ;

constexpr ::StringW const& __cordl_internal_get_endDateTime() const;

constexpr ::StringW& __cordl_internal_get_endDateTime() ;

constexpr ::StringW const& __cordl_internal_get_startDateTime() const;

constexpr ::StringW& __cordl_internal_get_startDateTime() ;

constexpr void __cordl_internal_set_dtEnd(::System::DateTime  value) ;

constexpr void __cordl_internal_set_dtStart(::System::DateTime  value) ;

constexpr void __cordl_internal_set_endDateTime(::StringW  value) ;

constexpr void __cordl_internal_set_startDateTime(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b36f38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EndDate, addr 0x5b36dd0, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_EndDate() ;

/// @brief Method get_EndDateTime, addr 0x5b36e88, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_EndDateTime() ;

/// @brief Method get_StartDate, addr 0x5b36dc8, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_StartDate() ;

/// @brief Method get_StartDateTime, addr 0x5b36dd8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StartDateTime() ;

/// @brief Method set_EndDateTime, addr 0x5b36e90, size 0xa8, virtual false, abstract: false, final false
inline void set_EndDateTime(::StringW  value) ;

/// @brief Method set_StartDateTime, addr 0x5b36de0, size 0xa8, virtual false, abstract: false, final false
inline void set_StartDateTime(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleDataActivation_AbsoluteDateTimeWindow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleDataActivation_AbsoluteDateTimeWindow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleDataActivation_AbsoluteDateTimeWindow(TitleDataActivation_AbsoluteDateTimeWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleDataActivation_AbsoluteDateTimeWindow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleDataActivation_AbsoluteDateTimeWindow(TitleDataActivation_AbsoluteDateTimeWindow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3680};

/// @brief Field dtStart, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ___dtStart;

/// @brief Field dtEnd, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___dtEnd;

/// [SerializeField]
/// @brief Field startDateTime, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___startDateTime;

/// [SerializeField]
/// @brief Field endDateTime, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___endDateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow, ___dtStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow, ___dtEnd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow, ___startDateTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow, ___endDateTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

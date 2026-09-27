#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksVotingStation.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksVotingStation_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IntVariable_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__StringVariable_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)()>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::Start)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5c45b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)()>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::OnDestroy)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5c46540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.SetupLocalization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)()>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::SetupLocalization)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5c45f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"SetupLocalization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)()>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::OnZoneChanged)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c463cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.OnUpVotePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)()>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::OnUpVotePressed)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c46828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnUpVotePressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.OnDownVotePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)()>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::OnDownVotePressed)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c469e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnDownVotePressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.OnVoteResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)(bool, ::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::OnVoteResponse)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5c46ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnVoteResponse", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)()>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::LateUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c46d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.OnLoadedMapChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::OnLoadedMapChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c4637c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnLoadedMapChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.OnMapCleared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)()>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::OnMapCleared)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c46fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnMapCleared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation.UpdateScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)()>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::UpdateScreen)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5c46e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"UpdateScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksVotingStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksVotingStation::*)()>(&::GorillaTagScripts::Builder::SharedBlocksVotingStation::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c4703c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_screenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_screenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_screenText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_statusText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_statusText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusText;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_statusText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusText = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_upVoteButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upVoteButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_upVoteButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upVoteButton;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_upVoteButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upVoteButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_downVoteButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downVoteButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_downVoteButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downVoteButton;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_downVoteButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downVoteButton = value;
}
constexpr ::GlobalNamespace::GTZone& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_tableZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableZone;
}
constexpr ::GlobalNamespace::GTZone const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_tableZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableZone;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_tableZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableZone = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_buttonDefaultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonDefaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_buttonDefaultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonDefaultMaterial;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_buttonDefaultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonDefaultMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_buttonDisabledMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonDisabledMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_buttonDisabledMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonDisabledMaterial;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_buttonDisabledMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonDisabledMaterial = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get__statusLocText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusLocText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get__statusLocText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusLocText;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set__statusLocText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statusLocText = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get__screenLocText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenLocText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get__screenLocText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenLocText;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set__screenLocText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____screenLocText = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___table = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_loadedMapID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadedMapID;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_loadedMapID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadedMapID;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_loadedMapID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadedMapID = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_voteInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voteInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_voteInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voteInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_voteInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voteInProgress = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_waitingToClearStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingToClearStatus;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_waitingToClearStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingToClearStatus;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_waitingToClearStatus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingToClearStatus = value;
}
constexpr float_t& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_clearStatusTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearStatusTime;
}
constexpr float_t const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_clearStatusTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearStatusTime;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_clearStatusTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearStatusTime = value;
}
constexpr float_t& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_clearStatusDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearStatusDelay;
}
constexpr float_t const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_clearStatusDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearStatusDelay;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_clearStatusDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearStatusDelay = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get__statusIndexVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusIndexVar;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get__statusIndexVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusIndexVar;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set__statusIndexVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statusIndexVar = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get__mapDisplayIndexVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapDisplayIndexVar;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get__mapDisplayIndexVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapDisplayIndexVar;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set__mapDisplayIndexVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mapDisplayIndexVar = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get__mapNameVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapNameVar;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable* const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get__mapNameVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapNameVar;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set__mapNameVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mapNameVar = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_get_meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksVotingStation::__cordl_internal_set_meshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshes = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::SetupLocalization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"SetupLocalization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::OnZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::OnUpVotePressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnUpVotePressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::OnDownVotePressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnDownVotePressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::OnVoteResponse(bool  success, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnVoteResponse", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, message);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::OnLoadedMapChanged(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnLoadedMapChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::OnMapCleared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"OnMapCleared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::UpdateScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {"UpdateScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksVotingStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksVotingStation* GorillaTagScripts::Builder::SharedBlocksVotingStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksVotingStation*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksVotingStation::SharedBlocksVotingStation()   {
}

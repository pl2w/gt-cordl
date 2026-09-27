#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaMetaReport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaMetaReport_def.hpp"
#include "GlobalNamespace/zzzz__GorillaMetaReport_def.hpp"
#include "GlobalNamespace/zzzz__GorillaReportButton_def.hpp"
#include "GlobalNamespace/zzzz__GorillaScoreBoard_def.hpp"
#include "GlobalNamespace/zzzz__NotificationsMessageResponse_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.get_localPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::GTPlayer> (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::get_localPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5712c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"get_localPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::Start)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5712cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::OnDisable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5712d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.OnReportButtonIntentNotif
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)(::Oculus::Platform::Message_1<::StringW>*)>(&::GlobalNamespace::GorillaMetaReport::OnReportButtonIntentNotif)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5712e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"OnReportButtonIntentNotif", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.OnNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)(::GlobalNamespace::NotificationsMessageResponse*, ::System::IntPtr)>(&::GlobalNamespace::GorillaMetaReport::OnNotification)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x57131f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"OnNotification", {}, {::i2c::type_of<::GlobalNamespace::NotificationsMessageResponse*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.OnWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)(::StringW)>(&::GlobalNamespace::GorillaMetaReport::OnWarning)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x57133ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"OnWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.OnMuteSanction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)(::StringW)>(&::GlobalNamespace::GorillaMetaReport::OnMuteSanction)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x571356c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"OnMuteSanction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.FormatListToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::ArrayW<::StringW>>)>(&::GlobalNamespace::GorillaMetaReport::FormatListToString)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x571381c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"FormatListToString", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.Submitted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::Submitted)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5713928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"Submitted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.DuplicateScoreboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::DuplicateScoreboard)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x57139bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"DuplicateScoreboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.ToggleLevelVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)(bool)>(&::GlobalNamespace::GorillaMetaReport::ToggleLevelVisibility)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5713d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"ToggleLevelVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.Teardown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::Teardown)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5713e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"Teardown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.CheckReportSubmit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::CheckReportSubmit)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x57140f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"CheckReportSubmit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.GetIdealScreenPositionRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::GorillaMetaReport::GetIdealScreenPositionRotation)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5713b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"GetIdealScreenPositionRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.StartOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)(bool)>(&::GlobalNamespace::GorillaMetaReport::StartOverlay)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5712edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"StartOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.CheckDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::CheckDistance)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5714588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"CheckDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::Update)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x57148f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport.UpdateHandPosRot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::UpdateHandPosRot)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5714384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"UpdateHandPosRot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport::*)()>(&::GlobalNamespace::GorillaMetaReport::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5714b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_occluder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occluder;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_occluder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occluder;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_occluder(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occluder = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_reportScoreboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportScoreboard;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_reportScoreboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportScoreboard;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_reportScoreboard(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportScoreboard = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_ReportText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReportText;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_ReportText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReportText;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_ReportText(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReportText = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_visibleLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_visibleLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleLayers;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_visibleLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleLayers = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaReportButton>& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_closeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaReportButton> const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_closeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeButton;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_closeButton(::UnityW<::GlobalNamespace::GorillaReportButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_leftHandObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_leftHandObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandObject;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_leftHandObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_rightHandObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_rightHandObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandObject;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_rightHandObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandObject = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_handRotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRotOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_handRotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRotOffset;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_handRotOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handRotOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_playerLocalScreenPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLocalScreenPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_playerLocalScreenPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLocalScreenPosition;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_playerLocalScreenPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLocalScreenPosition = value;
}
constexpr float_t& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_blockButtonsUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockButtonsUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_blockButtonsUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockButtonsUntilTimestamp;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_blockButtonsUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockButtonsUntilTimestamp = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaScoreBoard>& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_currentScoreboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScoreboard;
}
constexpr ::UnityW<::GlobalNamespace::GorillaScoreBoard> const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_currentScoreboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScoreboard;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_currentScoreboard(::UnityW<::GlobalNamespace::GorillaScoreBoard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentScoreboard = value;
}
constexpr int32_t& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_savedCullingLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedCullingLayers;
}
constexpr int32_t const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_savedCullingLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedCullingLayers;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_savedCullingLayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedCullingLayers = value;
}
constexpr bool& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_hasSavedCullingMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasSavedCullingMask;
}
constexpr bool const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_hasSavedCullingMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasSavedCullingMask;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_hasSavedCullingMask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasSavedCullingMask = value;
}
constexpr bool& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_testPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPress;
}
constexpr bool const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_testPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPress;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_testPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testPress = value;
}
constexpr bool& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_isMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMoving;
}
constexpr bool const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_isMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMoving;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_isMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMoving = value;
}
constexpr float_t& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_movementTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementTime;
}
constexpr float_t const& GlobalNamespace::GorillaMetaReport::__cordl_internal_get_movementTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementTime;
}
constexpr void GlobalNamespace::GorillaMetaReport::__cordl_internal_set_movementTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementTime = value;
}
inline ::UnityW<::GorillaLocomotion::GTPlayer> GlobalNamespace::GorillaMetaReport::get_localPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"get_localPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::GTPlayer>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport::OnReportButtonIntentNotif(::Oculus::Platform::Message_1<::StringW>*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"OnReportButtonIntentNotif", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::GorillaMetaReport::OnNotification(::GlobalNamespace::NotificationsMessageResponse*  notification, /* [NativeInteger] */ ::System::IntPtr  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"OnNotification", {}, {::i2c::type_of<::GlobalNamespace::NotificationsMessageResponse*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notification, _);
}
inline void GlobalNamespace::GorillaMetaReport::OnWarning(::StringW  warningNotification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"OnWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, warningNotification);
}
inline void GlobalNamespace::GorillaMetaReport::OnMuteSanction(::StringW  muteNotification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"OnMuteSanction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, muteNotification);
}
inline ::StringW GlobalNamespace::GorillaMetaReport::FormatListToString(/* [IsReadOnly] */ ::by_ref<::ArrayW<::StringW>>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"FormatListToString", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, list);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaMetaReport::Submitted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"Submitted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport::DuplicateScoreboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"DuplicateScoreboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport::ToggleLevelVisibility(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"ToggleLevelVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::GorillaMetaReport::Teardown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"Teardown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport::CheckReportSubmit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"CheckReportSubmit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport::GetIdealScreenPositionRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"GetIdealScreenPositionRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline void GlobalNamespace::GorillaMetaReport::StartOverlay(bool  isSanction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"StartOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSanction);
}
inline void GlobalNamespace::GorillaMetaReport::CheckDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"CheckDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport::UpdateHandPosRot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {"UpdateHandPosRot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaMetaReport* GlobalNamespace::GorillaMetaReport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaMetaReport*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaMetaReport::GorillaMetaReport()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport__Submitted_d__23._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport__Submitted_d__23::*)(int32_t)>(&::GlobalNamespace::GorillaMetaReport__Submitted_d__23::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5713994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport__Submitted_d__23.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport__Submitted_d__23::*)()>(&::GlobalNamespace::GorillaMetaReport__Submitted_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5714b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport__Submitted_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaMetaReport__Submitted_d__23::*)()>(&::GlobalNamespace::GorillaMetaReport__Submitted_d__23::MoveNext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5714b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport__Submitted_d__23.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaMetaReport__Submitted_d__23::*)()>(&::GlobalNamespace::GorillaMetaReport__Submitted_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5714bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport__Submitted_d__23.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMetaReport__Submitted_d__23::*)()>(&::GlobalNamespace::GorillaMetaReport__Submitted_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5714bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMetaReport__Submitted_d__23.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaMetaReport__Submitted_d__23::*)()>(&::GlobalNamespace::GorillaMetaReport__Submitted_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5714c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaMetaReport__Submitted_d__23::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaMetaReport__Submitted_d__23::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaMetaReport__Submitted_d__23::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaMetaReport__Submitted_d__23::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaMetaReport__Submitted_d__23::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaMetaReport__Submitted_d__23::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaMetaReport>& GlobalNamespace::GorillaMetaReport__Submitted_d__23::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaMetaReport> const& GlobalNamespace::GorillaMetaReport__Submitted_d__23::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaMetaReport__Submitted_d__23::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaMetaReport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GorillaMetaReport__Submitted_d__23::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaMetaReport__Submitted_d__23::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaMetaReport__Submitted_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaMetaReport__Submitted_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMetaReport__Submitted_d__23::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaMetaReport__Submitted_d__23::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaMetaReport__Submitted_d__23* GlobalNamespace::GorillaMetaReport__Submitted_d__23::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaMetaReport__Submitted_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaMetaReport__Submitted_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaMetaReport__Submitted_d__23::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaMetaReport__Submitted_d__23::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaMetaReport__Submitted_d__23::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaMetaReport__Submitted_d__23::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaMetaReport__Submitted_d__23::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaMetaReport__Submitted_d__23::GorillaMetaReport__Submitted_d__23()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUIPlayerQuestEntry.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIUIPlayerQuestEntry_def.hpp"
#include "GlobalNamespace/zzzz__SIUIProgressBar_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIUIPlayerQuestEntry.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUIPlayerQuestEntry::*)()>(&::GlobalNamespace::SIUIPlayerQuestEntry::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af7d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUIPlayerQuestEntry*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUIPlayerQuestEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUIPlayerQuestEntry::*)()>(&::GlobalNamespace::SIUIPlayerQuestEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af7d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUIPlayerQuestEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_background()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___background;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_background() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___background;
}
constexpr void GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_set_background(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___background = value;
}
constexpr ::UnityW<::GlobalNamespace::SIUIProgressBar>& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::UnityW<::GlobalNamespace::SIUIProgressBar> const& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_set_progress(::UnityW<::GlobalNamespace::SIUIProgressBar>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_questDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questDescription;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_questDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questDescription;
}
constexpr void GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_set_questDescription(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questDescription = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_completeOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completeOverlay;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_completeOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completeOverlay;
}
constexpr void GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_set_completeOverlay(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completeOverlay = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_questInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questInfo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_questInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questInfo;
}
constexpr void GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_set_questInfo(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questInfo = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_noQuestAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noQuestAvailable;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_noQuestAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noQuestAvailable;
}
constexpr void GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_set_noQuestAvailable(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noQuestAvailable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_newQuestTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newQuestTag;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_newQuestTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newQuestTag;
}
constexpr void GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_set_newQuestTag(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newQuestTag = value;
}
constexpr int32_t& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_lastQuestId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQuestId;
}
constexpr int32_t const& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_lastQuestId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQuestId;
}
constexpr void GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_set_lastQuestId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastQuestId = value;
}
constexpr int32_t& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_lastQuestProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQuestProgress;
}
constexpr int32_t const& GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_get_lastQuestProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQuestProgress;
}
constexpr void GlobalNamespace::SIUIPlayerQuestEntry::__cordl_internal_set_lastQuestProgress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastQuestProgress = value;
}
inline void GlobalNamespace::SIUIPlayerQuestEntry::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUIPlayerQuestEntry*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIUIPlayerQuestEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUIPlayerQuestEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIUIPlayerQuestEntry* GlobalNamespace::SIUIPlayerQuestEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIUIPlayerQuestEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIUIPlayerQuestEntry::SIUIPlayerQuestEntry()   {
}

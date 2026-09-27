#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__QuestDisplay_def.hpp"
#include "GlobalNamespace/zzzz__ProgressDisplay_def.hpp"
#include "GlobalNamespace/zzzz__RotatingQuest_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuestDisplay.get_IsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::QuestDisplay::*)()>(&::GlobalNamespace::QuestDisplay::get_IsChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56258dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuestDisplay*>(),
                        {"get_IsChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestDisplay.UpdateDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestDisplay::*)()>(&::GlobalNamespace::QuestDisplay::UpdateDisplay)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5625900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuestDisplay*>(),
                        {"UpdateDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestDisplay.UpdateCompletionIndicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestDisplay::*)()>(&::GlobalNamespace::QuestDisplay::UpdateCompletionIndicator)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x562bd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuestDisplay*>(),
                        {"UpdateCompletionIndicator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestDisplay::*)()>(&::GlobalNamespace::QuestDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x562bde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuestDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressDisplay>& GlobalNamespace::QuestDisplay::__cordl_internal_get_progressDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressDisplay;
}
constexpr ::UnityW<::GlobalNamespace::ProgressDisplay> const& GlobalNamespace::QuestDisplay::__cordl_internal_get_progressDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressDisplay;
}
constexpr void GlobalNamespace::QuestDisplay::__cordl_internal_set_progressDisplay(::UnityW<::GlobalNamespace::ProgressDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressDisplay = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::QuestDisplay::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::QuestDisplay::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::QuestDisplay::__cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::QuestDisplay::__cordl_internal_get_statusText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::QuestDisplay::__cordl_internal_get_statusText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusText;
}
constexpr void GlobalNamespace::QuestDisplay::__cordl_internal_set_statusText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::QuestDisplay::__cordl_internal_get_dailyIncompleteIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyIncompleteIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::QuestDisplay::__cordl_internal_get_dailyIncompleteIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyIncompleteIndicator;
}
constexpr void GlobalNamespace::QuestDisplay::__cordl_internal_set_dailyIncompleteIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dailyIncompleteIndicator = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::QuestDisplay::__cordl_internal_get_dailyCompleteIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyCompleteIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::QuestDisplay::__cordl_internal_get_dailyCompleteIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyCompleteIndicator;
}
constexpr void GlobalNamespace::QuestDisplay::__cordl_internal_set_dailyCompleteIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dailyCompleteIndicator = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::QuestDisplay::__cordl_internal_get_weeklyIncompleteIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weeklyIncompleteIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::QuestDisplay::__cordl_internal_get_weeklyIncompleteIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weeklyIncompleteIndicator;
}
constexpr void GlobalNamespace::QuestDisplay::__cordl_internal_set_weeklyIncompleteIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weeklyIncompleteIndicator = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::QuestDisplay::__cordl_internal_get_weeklyCompleteIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weeklyCompleteIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::QuestDisplay::__cordl_internal_get_weeklyCompleteIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weeklyCompleteIndicator;
}
constexpr void GlobalNamespace::QuestDisplay::__cordl_internal_set_weeklyCompleteIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weeklyCompleteIndicator = value;
}
constexpr ::GlobalNamespace::RotatingQuest*& GlobalNamespace::QuestDisplay::__cordl_internal_get_quest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quest;
}
constexpr ::GlobalNamespace::RotatingQuest* const& GlobalNamespace::QuestDisplay::__cordl_internal_get_quest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quest;
}
constexpr void GlobalNamespace::QuestDisplay::__cordl_internal_set_quest(::GlobalNamespace::RotatingQuest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quest = value;
}
constexpr int32_t& GlobalNamespace::QuestDisplay::__cordl_internal_get__lastUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdate;
}
constexpr int32_t const& GlobalNamespace::QuestDisplay::__cordl_internal_get__lastUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdate;
}
constexpr void GlobalNamespace::QuestDisplay::__cordl_internal_set__lastUpdate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdate = value;
}
inline bool GlobalNamespace::QuestDisplay::get_IsChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuestDisplay*>(),
                        {"get_IsChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::QuestDisplay::UpdateDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuestDisplay*>(),
                        {"UpdateDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::QuestDisplay::UpdateCompletionIndicator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuestDisplay*>(),
                        {"UpdateCompletionIndicator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::QuestDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuestDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuestDisplay* GlobalNamespace::QuestDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuestDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestDisplay::QuestDisplay()   {
}

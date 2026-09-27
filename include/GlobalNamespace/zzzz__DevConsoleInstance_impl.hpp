#pragma once
// IWYU pragma private; include "GlobalNamespace/DevConsoleInstance.hpp"
#include "GlobalNamespace/zzzz__GorillaDevButton_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevConsoleInstance_def.hpp"
#include "GlobalNamespace/zzzz__DevConsole_def.hpp"
#include "GlobalNamespace/zzzz__GorillaDevButton_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevConsoleInstance.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevConsoleInstance::*)()>(&::GlobalNamespace::DevConsoleInstance::OnEnable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x566f728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsoleInstance*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevConsoleInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevConsoleInstance::*)()>(&::GlobalNamespace::DevConsoleInstance::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x566f5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsoleInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>> const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttons = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_disableWhileActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhileActive;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_disableWhileActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhileActive;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_disableWhileActive(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableWhileActive = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_enableWhileActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhileActive;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_enableWhileActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhileActive;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_enableWhileActive(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableWhileActive = value;
}
constexpr float_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_maxHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHeight;
}
constexpr float_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_maxHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHeight;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_maxHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHeight = value;
}
constexpr float_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_lineHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineHeight;
}
constexpr float_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_lineHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineHeight;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_lineHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineHeight = value;
}
constexpr int32_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_targetLogIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetLogIndex;
}
constexpr int32_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_targetLogIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetLogIndex;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_targetLogIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetLogIndex = value;
}
constexpr int32_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_currentLogIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLogIndex;
}
constexpr int32_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_currentLogIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLogIndex;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_currentLogIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLogIndex = value;
}
constexpr int32_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_expandAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expandAmount;
}
constexpr int32_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_expandAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expandAmount;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_expandAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expandAmount = value;
}
constexpr int32_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_expandedMessageIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expandedMessageIndex;
}
constexpr int32_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_expandedMessageIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expandedMessageIndex;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_expandedMessageIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expandedMessageIndex = value;
}
constexpr bool& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_canExpand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canExpand;
}
constexpr bool const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_canExpand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canExpand;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_canExpand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canExpand = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_logLines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLines;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>* const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_logLines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLines;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_logLines(::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logLines = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::LogType>*& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_selectedLogTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedLogTypes;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::LogType>* const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_selectedLogTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedLogTypes;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_selectedLogTypes(::System::Collections::Generic::HashSet_1<::UnityEngine::LogType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedLogTypes = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_logTypeButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logTypeButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>> const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_logTypeButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logTypeButtons;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_logTypeButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logTypeButtons = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_BottomButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BottomButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_BottomButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BottomButton;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_BottomButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BottomButton = value;
}
constexpr float_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_lineStartHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStartHeight;
}
constexpr float_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_lineStartHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStartHeight;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_lineStartHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineStartHeight = value;
}
constexpr float_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_lineStartZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStartZ;
}
constexpr float_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_lineStartZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStartZ;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_lineStartZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineStartZ = value;
}
constexpr float_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_textStartHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textStartHeight;
}
constexpr float_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_textStartHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textStartHeight;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_textStartHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textStartHeight = value;
}
constexpr float_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_lineStartTextWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStartTextWidth;
}
constexpr float_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_lineStartTextWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStartTextWidth;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_lineStartTextWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineStartTextWidth = value;
}
constexpr double_t& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_textScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textScale;
}
constexpr double_t const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_textScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textScale;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_textScale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textScale = value;
}
constexpr bool& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_isEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnabled;
}
constexpr bool const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_isEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnabled;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_isEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEnabled = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_ConsoleLineExample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConsoleLineExample;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::DevConsoleInstance::__cordl_internal_get_ConsoleLineExample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConsoleLineExample;
}
constexpr void GlobalNamespace::DevConsoleInstance::__cordl_internal_set_ConsoleLineExample(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConsoleLineExample = value;
}
inline void GlobalNamespace::DevConsoleInstance::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsoleInstance*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DevConsoleInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsoleInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevConsoleInstance* GlobalNamespace::DevConsoleInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevConsoleInstance*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevConsoleInstance::DevConsoleInstance()   {
}

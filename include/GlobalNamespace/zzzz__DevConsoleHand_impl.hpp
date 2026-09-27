#pragma once
// IWYU pragma private; include "GlobalNamespace/DevConsoleHand.hpp"
#include "GlobalNamespace/zzzz__ConsoleMode_impl.hpp"
#include "GlobalNamespace/zzzz__DevConsoleInstance_impl.hpp"
#include "GlobalNamespace/zzzz__DevConsoleHand_def.hpp"
#include "GlobalNamespace/zzzz__DevInspector_def.hpp"
#include "GlobalNamespace/zzzz__GorillaDevButton_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevConsoleHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevConsoleHand::*)()>(&::GlobalNamespace::DevConsoleHand::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x566f5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsoleHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::DevConsoleHand::__cordl_internal_get_otherButtonsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherButtonsList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_otherButtonsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherButtonsList;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_otherButtonsList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherButtonsList = value;
}
constexpr bool& GlobalNamespace::DevConsoleHand::__cordl_internal_get_isStillEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStillEnabled;
}
constexpr bool const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_isStillEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStillEnabled;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_isStillEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStillEnabled = value;
}
constexpr bool& GlobalNamespace::DevConsoleHand::__cordl_internal_get_isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr bool const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHand = value;
}
constexpr ::GlobalNamespace::ConsoleMode& GlobalNamespace::DevConsoleHand::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::ConsoleMode const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_mode(::GlobalNamespace::ConsoleMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr double_t& GlobalNamespace::DevConsoleHand::__cordl_internal_get_debugScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugScale;
}
constexpr double_t const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_debugScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugScale;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_debugScale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugScale = value;
}
constexpr double_t& GlobalNamespace::DevConsoleHand::__cordl_internal_get_inspectorScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspectorScale;
}
constexpr double_t const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_inspectorScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspectorScale;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_inspectorScale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inspectorScale = value;
}
constexpr double_t& GlobalNamespace::DevConsoleHand::__cordl_internal_get_componentInspectorScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentInspectorScale;
}
constexpr double_t const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_componentInspectorScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentInspectorScale;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_componentInspectorScale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentInspectorScale = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::DevConsoleHand::__cordl_internal_get_consoleButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consoleButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_consoleButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consoleButtons;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_consoleButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___consoleButtons = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::DevConsoleHand::__cordl_internal_get_inspectorButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspectorButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_inspectorButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspectorButtons;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_inspectorButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inspectorButtons = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::DevConsoleHand::__cordl_internal_get_componentInspectorButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentInspectorButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_componentInspectorButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentInspectorButtons;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_componentInspectorButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentInspectorButtons = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& GlobalNamespace::DevConsoleHand::__cordl_internal_get_consoleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consoleButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_consoleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consoleButton;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_consoleButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___consoleButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& GlobalNamespace::DevConsoleHand::__cordl_internal_get_inspectorButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspectorButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_inspectorButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspectorButton;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_inspectorButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inspectorButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& GlobalNamespace::DevConsoleHand::__cordl_internal_get_componentInspectorButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentInspectorButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_componentInspectorButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentInspectorButton;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_componentInspectorButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentInspectorButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& GlobalNamespace::DevConsoleHand::__cordl_internal_get_showNonStarItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNonStarItems;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_showNonStarItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNonStarItems;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_showNonStarItems(::UnityW<::GlobalNamespace::GorillaDevButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showNonStarItems = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& GlobalNamespace::DevConsoleHand::__cordl_internal_get_showPrivateItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPrivateItems;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_showPrivateItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPrivateItems;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_showPrivateItems(::UnityW<::GlobalNamespace::GorillaDevButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showPrivateItems = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::DevConsoleHand::__cordl_internal_get_componentInspectionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentInspectionText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_componentInspectionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentInspectionText;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_componentInspectionText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentInspectionText = value;
}
constexpr ::UnityW<::GlobalNamespace::DevInspector>& GlobalNamespace::DevConsoleHand::__cordl_internal_get_selectedInspector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedInspector;
}
constexpr ::UnityW<::GlobalNamespace::DevInspector> const& GlobalNamespace::DevConsoleHand::__cordl_internal_get_selectedInspector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedInspector;
}
constexpr void GlobalNamespace::DevConsoleHand::__cordl_internal_set_selectedInspector(::UnityW<::GlobalNamespace::DevInspector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedInspector = value;
}
inline void GlobalNamespace::DevConsoleHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsoleHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevConsoleHand* GlobalNamespace::DevConsoleHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevConsoleHand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevConsoleHand::DevConsoleHand()   {
}

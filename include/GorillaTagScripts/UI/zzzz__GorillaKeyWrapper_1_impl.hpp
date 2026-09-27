#pragma once
// IWYU pragma private; include "GorillaTagScripts/UI/GorillaKeyWrapper_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/UI/zzzz__GorillaKeyWrapper_1_def.hpp"
#include "GlobalNamespace/zzzz__GorillaKeyButton_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
template<typename TBinding>
constexpr ::UnityEngine::Events::UnityEvent_1<TBinding>*& GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::__cordl_internal_get_OnKeyPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnKeyPressed;
}
template<typename TBinding>
constexpr ::UnityEngine::Events::UnityEvent_1<TBinding>* const& GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::__cordl_internal_get_OnKeyPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnKeyPressed;
}
template<typename TBinding>
constexpr void GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::__cordl_internal_set_OnKeyPressed(::UnityEngine::Events::UnityEvent_1<TBinding>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnKeyPressed = value;
}
template<typename TBinding>
constexpr bool& GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::__cordl_internal_get_defineButtonsManually()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defineButtonsManually;
}
template<typename TBinding>
constexpr bool const& GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::__cordl_internal_get_defineButtonsManually() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defineButtonsManually;
}
template<typename TBinding>
constexpr void GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::__cordl_internal_set_defineButtonsManually(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defineButtonsManually = value;
}
template<typename TBinding>
constexpr ::System::Collections::Generic::List_1<::UnityW<TBinding>>*& GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::__cordl_internal_get_buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
template<typename TBinding>
constexpr ::System::Collections::Generic::List_1<::UnityW<TBinding>>* const& GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::__cordl_internal_get_buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
template<typename TBinding>
constexpr void GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::__cordl_internal_set_buttons(::System::Collections::Generic::List_1<::UnityW<TBinding>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttons = value;
}
template<typename TBinding>
inline void GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline void GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline void GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::FindMatchingButtons(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>*>(),
                        {"FindMatchingButtons", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TBinding>
inline void GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::OnKeyButtonPressed(TBinding  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>*>(),
                        {"OnKeyButtonPressed", {}, {::i2c::type_of<TBinding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binding);
}
template<typename TBinding>
inline void GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline ::GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>* GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>*>());
}
// Ctor Parameters []
template<typename TBinding>
constexpr ::GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>::GorillaKeyWrapper_1()   {
}

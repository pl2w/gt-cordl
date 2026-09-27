#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaKeyButton_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaKeyButton_1_def.hpp"
#include "GlobalNamespace/zzzz__GorillaKeyButton_1_def.hpp"
#include "GorillaTag/zzzz__ButtonColorSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
template<typename TBinding>
constexpr ::StringW& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_characterString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterString;
}
template<typename TBinding>
constexpr ::StringW const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_characterString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterString;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_characterString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___characterString = value;
}
template<typename TBinding>
constexpr TBinding& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_Binding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Binding;
}
template<typename TBinding>
constexpr TBinding const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_Binding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Binding;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_Binding(TBinding  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Binding = value;
}
template<typename TBinding>
constexpr bool& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_functionKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___functionKey;
}
template<typename TBinding>
constexpr bool const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_functionKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___functionKey;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_functionKey(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___functionKey = value;
}
template<typename TBinding>
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_ButtonRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ButtonRenderer;
}
template<typename TBinding>
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_ButtonRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ButtonRenderer;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_ButtonRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ButtonRenderer = value;
}
template<typename TBinding>
constexpr ::UnityW<::GorillaTag::ButtonColorSettings>& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_ButtonColorSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ButtonColorSettings;
}
template<typename TBinding>
constexpr ::UnityW<::GorillaTag::ButtonColorSettings> const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_ButtonColorSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ButtonColorSettings;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_ButtonColorSettings(::UnityW<::GorillaTag::ButtonColorSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ButtonColorSettings = value;
}
template<typename TBinding>
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_linkedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedObjects;
}
template<typename TBinding>
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_linkedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedObjects;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_linkedObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linkedObjects = value;
}
template<typename TBinding>
constexpr ::UnityEngine::Events::UnityEvent_1<TBinding>*& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_OnKeyButtonPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnKeyButtonPressed;
}
template<typename TBinding>
constexpr ::UnityEngine::Events::UnityEvent_1<TBinding>* const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_OnKeyButtonPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnKeyButtonPressed;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_OnKeyButtonPressed(::UnityEngine::Events::UnityEvent_1<TBinding>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnKeyButtonPressed = value;
}
template<typename TBinding>
constexpr bool& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_testClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testClick;
}
template<typename TBinding>
constexpr bool const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_testClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testClick;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_testClick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testClick = value;
}
template<typename TBinding>
constexpr bool& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_repeatTestClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatTestClick;
}
template<typename TBinding>
constexpr bool const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_repeatTestClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatTestClick;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_repeatTestClick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatTestClick = value;
}
template<typename TBinding>
constexpr float_t& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_repeatCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatCooldown;
}
template<typename TBinding>
constexpr float_t const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_repeatCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatCooldown;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_repeatCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatCooldown = value;
}
template<typename TBinding>
constexpr float_t& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_pressTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressTime;
}
template<typename TBinding>
constexpr float_t const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_pressTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressTime;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_pressTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressTime = value;
}
template<typename TBinding>
constexpr float_t& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_lastTestClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTestClick;
}
template<typename TBinding>
constexpr float_t const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_lastTestClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTestClick;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_lastTestClick(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTestClick = value;
}
template<typename TBinding>
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_propBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propBlock;
}
template<typename TBinding>
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_get_propBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propBlock;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1<TBinding>::__cordl_internal_set_propBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propBlock = value;
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::PressButton(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(),
                        {"PressButton", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::OnEnableEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::OnDisableEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::Click(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::PressButtonColourUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::OnButtonPressedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1<TBinding>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaKeyButton_1<TBinding>::_PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>(),
                        {"<PressButtonColourUpdate>g__ButtonColorUpdate_Local|21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TBinding>
inline ::GlobalNamespace::GorillaKeyButton_1<TBinding>* GlobalNamespace::GorillaKeyButton_1<TBinding>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaKeyButton_1<TBinding>*>());
}
// Ctor Parameters []
template<typename TBinding>
constexpr ::GlobalNamespace::GorillaKeyButton_1<TBinding>::GorillaKeyButton_1()   {
}
template<typename TBinding>
constexpr int32_t& GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename TBinding>
constexpr int32_t const& GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename TBinding>
constexpr ::System::Object*& GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename TBinding>
constexpr ::System::Object* const& GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename TBinding>
constexpr ::UnityW<TBinding>& GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TBinding>
constexpr ::UnityW<TBinding> const& GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TBinding>
constexpr void GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::__cordl_internal_set___4__this(::UnityW<TBinding>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline bool GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TBinding>
inline ::System::Object* GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TBinding>
inline void GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TBinding>
inline ::System::Object* GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename TBinding>
inline ::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>* GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename TBinding>
constexpr  GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename TBinding>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TBinding>
constexpr  GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TBinding>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TBinding>
constexpr  GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TBinding>
constexpr ::System::IDisposable* GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TBinding>
constexpr ::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d()   {
}

#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyButtonBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyButtonBase_1_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__IPropertyMonoBehaviourEvents_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
template<typename T>
constexpr ::UnityW<::UnityEngine::UI::Button>& Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
template<typename T>
constexpr ::UnityW<::UnityEngine::UI::Button> const& Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
template<typename T>
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
template<typename T>
constexpr bool& Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_get__ignoreWhileDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreWhileDisabled;
}
template<typename T>
constexpr bool const& Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_get__ignoreWhileDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreWhileDisabled;
}
template<typename T>
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_set__ignoreWhileDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoreWhileDisabled = value;
}
template<typename T>
constexpr ::UnityEngine::Events::UnityEvent_1<T>*& Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_get__onClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onClick;
}
template<typename T>
constexpr ::UnityEngine::Events::UnityEvent_1<T>* const& Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_get__onClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onClick;
}
template<typename T>
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_set__onClick(::UnityEngine::Events::UnityEvent_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onClick = value;
}
template<typename T>
constexpr ::Modio::Mods::Mod*& Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_get__mod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
template<typename T>
constexpr ::Modio::Mods::Mod* const& Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_get__mod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
template<typename T>
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_set__mod(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mod = value;
}
template<typename T>
constexpr bool& Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_get__addedListener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addedListener;
}
template<typename T>
constexpr bool const& Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_get__addedListener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addedListener;
}
template<typename T>
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::__cordl_internal_set__addedListener(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addedListener = value;
}
template<typename T>
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
template<typename T>
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::OnButtonClick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>*>(),
                        {"OnButtonClick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::GetProperty(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, mod);
}
template<typename T>
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>* Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
template<typename T>
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
template<typename T>
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
template<typename T>
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::operator ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept {
return static_cast<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
template<typename T>
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept {
return static_cast<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>::ModPropertyButtonBase_1()   {
}

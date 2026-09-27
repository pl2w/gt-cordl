#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUIInputField.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_impl.hpp"
#include "TMPro/zzzz__TMP_InputField_impl.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__ModioUIInputField_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_SelectionState_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIInputField.get_layoutPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::UI::Components::Selectables::ModioUIInputField::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIInputField::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc12f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIInputField.add_StateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIInputField::*)(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*)>(&::Modio::Unity::UI::Components::Selectables::ModioUIInputField::add_StateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fc12fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"add_StateChanged", {}, {::i2c::type_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIInputField.remove_StateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIInputField::*)(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*)>(&::Modio::Unity::UI::Components::Selectables::ModioUIInputField::remove_StateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fc1398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"remove_StateChanged", {}, {::i2c::type_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIInputField.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IModioUISelectable_SelectionState (::Modio::Unity::UI::Components::Selectables::ModioUIInputField::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIInputField::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc1434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIInputField.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIInputField::*)(::GlobalNamespace::IModioUISelectable_SelectionState)>(&::Modio::Unity::UI::Components::Selectables::ModioUIInputField::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc143c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIInputField.OnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIInputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::Modio::Unity::UI::Components::Selectables::ModioUIInputField::OnSelect)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x9fc1444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIInputField.DoStateTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIInputField::*)(::GlobalNamespace::Selectable_SelectionState, bool)>(&::Modio::Unity::UI::Components::Selectables::ModioUIInputField::DoStateTransition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9fc15f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIInputField.DoVisualOnlyStateTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIInputField::*)(::GlobalNamespace::IModioUISelectable_SelectionState, bool)>(&::Modio::Unity::UI::Components::Selectables::ModioUIInputField::DoVisualOnlyStateTransition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc1644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"DoVisualOnlyStateTransition", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIInputField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIInputField::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIInputField::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fc1654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIInputField._OnSelect_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIInputField::*)(::StringW)>(&::Modio::Unity::UI::Components::Selectables::ModioUIInputField::_OnSelect_b__10_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9fc16b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"<OnSelect>b__10_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Modio::Unity::UI::Components::Selectables::ModioUIInputField::__cordl_internal_get__layoutPriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutPriority;
}
constexpr int32_t const& Modio::Unity::UI::Components::Selectables::ModioUIInputField::__cordl_internal_get__layoutPriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutPriority;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIInputField::__cordl_internal_set__layoutPriority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layoutPriority = value;
}
constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*& Modio::Unity::UI::Components::Selectables::ModioUIInputField::__cordl_internal_get_StateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateChanged;
}
constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate* const& Modio::Unity::UI::Components::Selectables::ModioUIInputField::__cordl_internal_get_StateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateChanged;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIInputField::__cordl_internal_set_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StateChanged = value;
}
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState& Modio::Unity::UI::Components::Selectables::ModioUIInputField::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState const& Modio::Unity::UI::Components::Selectables::ModioUIInputField::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIInputField::__cordl_internal_set__State_k__BackingField(::GlobalNamespace::IModioUISelectable_SelectionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
inline int32_t Modio::Unity::UI::Components::Selectables::ModioUIInputField::get_layoutPriority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIInputField::add_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"add_StateChanged", {}, {::i2c::type_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIInputField::remove_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"remove_StateChanged", {}, {::i2c::type_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IModioUISelectable_SelectionState Modio::Unity::UI::Components::Selectables::ModioUIInputField::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IModioUISelectable_SelectionState>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIInputField::set_State(::GlobalNamespace::IModioUISelectable_SelectionState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIInputField::OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIInputField::DoStateTransition(::GlobalNamespace::Selectable_SelectionState  state, bool  instant)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIInputField::DoVisualOnlyStateTransition(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"DoVisualOnlyStateTransition", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIInputField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIInputField::_OnSelect_b__10_0(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>(),
                        {"<OnSelect>b__10_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::Modio::Unity::UI::Components::Selectables::ModioUIInputField* Modio::Unity::UI::Components::Selectables::ModioUIInputField::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Selectables::ModioUIInputField*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::IModioUISelectable"
constexpr  Modio::Unity::UI::Components::Selectables::ModioUIInputField::operator ::Modio::Unity::UI::Components::Selectables::IModioUISelectable*() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::IModioUISelectable"
constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable* Modio::Unity::UI::Components::Selectables::ModioUIInputField::i___Modio__Unity__UI__Components__Selectables__IModioUISelectable() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Selectables::ModioUIInputField::ModioUIInputField()   {
}

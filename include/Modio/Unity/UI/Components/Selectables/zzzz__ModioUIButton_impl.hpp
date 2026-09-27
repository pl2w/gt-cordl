#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUIButton.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_impl.hpp"
#include "UnityEngine/UI/zzzz__Button_impl.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__ModioUIButton_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_SelectionState_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIButton.add_StateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIButton::*)(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*)>(&::Modio::Unity::UI::Components::Selectables::ModioUIButton::add_StateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fc1140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {"add_StateChanged", {}, {::i2c::type_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIButton.remove_StateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIButton::*)(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*)>(&::Modio::Unity::UI::Components::Selectables::ModioUIButton::remove_StateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fc11dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {"remove_StateChanged", {}, {::i2c::type_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIButton.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IModioUISelectable_SelectionState (::Modio::Unity::UI::Components::Selectables::ModioUIButton::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIButton::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc1278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIButton.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIButton::*)(::GlobalNamespace::IModioUISelectable_SelectionState)>(&::Modio::Unity::UI::Components::Selectables::ModioUIButton::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc1280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIButton.DoStateTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIButton::*)(::GlobalNamespace::Selectable_SelectionState, bool)>(&::Modio::Unity::UI::Components::Selectables::ModioUIButton::DoStateTransition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9fc1288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIButton.DoVisualOnlyStateTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIButton::*)(::GlobalNamespace::IModioUISelectable_SelectionState, bool)>(&::Modio::Unity::UI::Components::Selectables::ModioUIButton::DoVisualOnlyStateTransition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc12dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {"DoVisualOnlyStateTransition", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIButton::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc12ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*& Modio::Unity::UI::Components::Selectables::ModioUIButton::__cordl_internal_get_StateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateChanged;
}
constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate* const& Modio::Unity::UI::Components::Selectables::ModioUIButton::__cordl_internal_get_StateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateChanged;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIButton::__cordl_internal_set_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StateChanged = value;
}
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState& Modio::Unity::UI::Components::Selectables::ModioUIButton::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState const& Modio::Unity::UI::Components::Selectables::ModioUIButton::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIButton::__cordl_internal_set__State_k__BackingField(::GlobalNamespace::IModioUISelectable_SelectionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIButton::add_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {"add_StateChanged", {}, {::i2c::type_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIButton::remove_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {"remove_StateChanged", {}, {::i2c::type_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IModioUISelectable_SelectionState Modio::Unity::UI::Components::Selectables::ModioUIButton::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IModioUISelectable_SelectionState>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIButton::set_State(::GlobalNamespace::IModioUISelectable_SelectionState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIButton::DoStateTransition(::GlobalNamespace::Selectable_SelectionState  state, bool  instant)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIButton::DoVisualOnlyStateTransition(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {"DoVisualOnlyStateTransition", {}, {::i2c::type_of<::GlobalNamespace::IModioUISelectable_SelectionState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::Selectables::ModioUIButton* Modio::Unity::UI::Components::Selectables::ModioUIButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Selectables::ModioUIButton*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::IModioUISelectable"
constexpr  Modio::Unity::UI::Components::Selectables::ModioUIButton::operator ::Modio::Unity::UI::Components::Selectables::IModioUISelectable*() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::IModioUISelectable"
constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable* Modio::Unity::UI::Components::Selectables::ModioUIButton::i___Modio__Unity__UI__Components__Selectables__IModioUISelectable() noexcept {
return static_cast<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Selectables::ModioUIButton::ModioUIButton()   {
}

#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/ISelectableTransition.hpp"
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__ISelectableTransition_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition.OnSelectionStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition::*)(::GlobalNamespace::IModioUISelectable_SelectionState, bool)>(&::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition::OnSelectionStateChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition::OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}

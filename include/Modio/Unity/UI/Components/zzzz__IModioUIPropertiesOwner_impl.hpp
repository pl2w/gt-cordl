#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/IModioUIPropertiesOwner.hpp"
#include "Modio/Unity/UI/Components/zzzz__IModioUIPropertiesOwner_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::IModioUIPropertiesOwner.AddUpdatePropertiesListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::IModioUIPropertiesOwner::*)(::UnityEngine::Events::UnityAction*)>(&::Modio::Unity::UI::Components::IModioUIPropertiesOwner::AddUpdatePropertiesListener)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::IModioUIPropertiesOwner.RemoveUpdatePropertiesListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::IModioUIPropertiesOwner::*)(::UnityEngine::Events::UnityAction*)>(&::Modio::Unity::UI::Components::IModioUIPropertiesOwner::RemoveUpdatePropertiesListener)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::IModioUIPropertiesOwner::AddUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Modio::Unity::UI::Components::IModioUIPropertiesOwner::RemoveUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/IUIHoverInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverExitEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor.get_uiHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::get_uiHoverEntered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor.get_uiHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* (::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::get_uiHoverExited)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor.OnUIHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::OnUIHoverEntered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor.OnUIHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::OnUIHoverExited)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::get_uiHoverEntered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::get_uiHoverExited()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor::i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(static_cast<void*>(this));
}

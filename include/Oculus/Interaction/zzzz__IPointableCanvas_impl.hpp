#pragma once
// IWYU pragma private; include "Oculus/Interaction/IPointableCanvas.hpp"
#include "Oculus/Interaction/zzzz__IPointableCanvas_def.hpp"
#include "Oculus/Interaction/zzzz__IPointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__IPointable_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IPointableCanvas.get_Canvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Canvas> (::Oculus::Interaction::IPointableCanvas::*)()>(&::Oculus::Interaction::IPointableCanvas::get_Canvas)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IPointableCanvas*>(),
                    {::i2c::class_of<::Oculus::Interaction::IPointableCanvas*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Canvas> Oculus::Interaction::IPointableCanvas::get_Canvas()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IPointableCanvas*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>>(this, ___internal_method);
}
/// @brief Convert operator to "::Oculus::Interaction::IPointableElement"
constexpr  Oculus::Interaction::IPointableCanvas::operator ::Oculus::Interaction::IPointableElement*() noexcept {
return static_cast<::Oculus::Interaction::IPointableElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IPointableElement"
constexpr ::Oculus::Interaction::IPointableElement* Oculus::Interaction::IPointableCanvas::i___Oculus__Interaction__IPointableElement() noexcept {
return static_cast<::Oculus::Interaction::IPointableElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IPointable"
constexpr  Oculus::Interaction::IPointableCanvas::operator ::Oculus::Interaction::IPointable*() noexcept {
return static_cast<::Oculus::Interaction::IPointable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IPointable"
constexpr ::Oculus::Interaction::IPointable* Oculus::Interaction::IPointableCanvas::i___Oculus__Interaction__IPointable() noexcept {
return static_cast<::Oculus::Interaction::IPointable*>(static_cast<void*>(this));
}

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/IXRDropTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__IXRDropTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__DropEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__IXRGrabTransformer_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer.get_canProcessOnDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer::get_canProcessOnDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer.OnDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer::OnDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer::get_canProcessOnDrop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer::OnDrop(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, args);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr  UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer::operator ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer::i___UnityEngine__XR__Interaction__Toolkit__Transformers__IXRGrabTransformer() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(static_cast<void*>(this));
}

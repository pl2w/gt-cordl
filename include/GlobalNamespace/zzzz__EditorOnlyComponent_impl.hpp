#pragma once
// IWYU pragma private; include "GlobalNamespace/EditorOnlyComponent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EditorOnlyComponent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EditorOnlyComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditorOnlyComponent::*)()>(&::GlobalNamespace::EditorOnlyComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1ab78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EditorOnlyComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EditorOnlyComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EditorOnlyComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EditorOnlyComponent* GlobalNamespace::EditorOnlyComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EditorOnlyComponent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EditorOnlyComponent::EditorOnlyComponent()   {
}

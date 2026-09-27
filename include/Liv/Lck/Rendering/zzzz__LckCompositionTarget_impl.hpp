#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionTarget.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionTarget_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionTarget::*)()>(&::Liv::Lck::Rendering::LckCompositionTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3fed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Rendering::LckCompositionTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Rendering::LckCompositionTarget* Liv::Lck::Rendering::LckCompositionTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckCompositionTarget*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckCompositionTarget::LckCompositionTarget()   {
}

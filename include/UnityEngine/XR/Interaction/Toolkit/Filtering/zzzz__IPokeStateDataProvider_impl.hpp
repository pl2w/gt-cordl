#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/IPokeStateDataProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IPokeStateDataProvider_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeStateData_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider.get_pokeStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* (::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider::get_pokeStateData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider::get_pokeStateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>(this, ___internal_method);
}

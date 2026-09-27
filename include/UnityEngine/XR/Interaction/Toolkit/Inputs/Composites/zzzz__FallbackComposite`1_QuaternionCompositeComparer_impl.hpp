#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/FallbackComposite`1_QuaternionCompositeComparer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__FallbackComposite`1_QuaternionCompositeComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
template<typename TValue>
inline int32_t GlobalNamespace::FallbackComposite_1_QuaternionCompositeComparer<TValue>::Compare(::UnityEngine::Quaternion  x, ::UnityEngine::Quaternion  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FallbackComposite_1_QuaternionCompositeComparer<TValue>>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, x, y);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>"
template<typename TValue>
constexpr  GlobalNamespace::FallbackComposite_1_QuaternionCompositeComparer<TValue>::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>*()  {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>"
template<typename TValue>
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>* GlobalNamespace::FallbackComposite_1_QuaternionCompositeComparer<TValue>::i___System__Collections__Generic__IComparer_1___UnityEngine__Quaternion_()  {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::GlobalNamespace::FallbackComposite_1_QuaternionCompositeComparer<TValue>::FallbackComposite_1_QuaternionCompositeComparer()   {
}

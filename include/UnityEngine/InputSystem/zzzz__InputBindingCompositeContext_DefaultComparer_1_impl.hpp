#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBindingCompositeContext_DefaultComparer_1.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_DefaultComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template<typename TValue>
inline int32_t GlobalNamespace::InputBindingCompositeContext_DefaultComparer_1<TValue>::Compare(TValue  x, TValue  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputBindingCompositeContext_DefaultComparer_1<TValue>>(),
                        {"Compare", {}, {::i2c::type_of<TValue>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, x, y);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<TValue>"
template<typename TValue>
constexpr  GlobalNamespace::InputBindingCompositeContext_DefaultComparer_1<TValue>::operator ::System::Collections::Generic::IComparer_1<TValue>*()  {
return static_cast<::System::Collections::Generic::IComparer_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<TValue>"
template<typename TValue>
constexpr ::System::Collections::Generic::IComparer_1<TValue>* GlobalNamespace::InputBindingCompositeContext_DefaultComparer_1<TValue>::i___System__Collections__Generic__IComparer_1_TValue_()  {
return static_cast<::System::Collections::Generic::IComparer_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::GlobalNamespace::InputBindingCompositeContext_DefaultComparer_1<TValue>::InputBindingCompositeContext_DefaultComparer_1()   {
}

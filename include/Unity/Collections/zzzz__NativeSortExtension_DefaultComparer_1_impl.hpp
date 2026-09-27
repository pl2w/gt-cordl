#pragma once
// IWYU pragma private; include "Unity/Collections/NativeSortExtension_DefaultComparer_1.hpp"
#include "Unity/Collections/zzzz__NativeSortExtension_DefaultComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template<typename T>
inline int32_t GlobalNamespace::NativeSortExtension_DefaultComparer_1<T>::Compare(T  x, T  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSortExtension_DefaultComparer_1<T>>(),
                        {"Compare", {}, {::i2c::type_of<T>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, x, y);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
template<typename T>
constexpr  GlobalNamespace::NativeSortExtension_DefaultComparer_1<T>::operator ::System::Collections::Generic::IComparer_1<T>*()  {
return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IComparer_1<T>* GlobalNamespace::NativeSortExtension_DefaultComparer_1<T>::i___System__Collections__Generic__IComparer_1_T_()  {
return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NativeSortExtension_DefaultComparer_1<T>::NativeSortExtension_DefaultComparer_1()   {
}

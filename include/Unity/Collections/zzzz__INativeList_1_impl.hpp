#pragma once
// IWYU pragma private; include "Unity/Collections/INativeList_1.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
template<typename T>
inline int32_t Unity::Collections::INativeList_1<T>::get_Capacity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Collections::INativeList_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template<typename T>
constexpr  Unity::Collections::INativeList_1<T>::operator ::Unity::Collections::IIndexable_1<T>*() noexcept {
return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template<typename T>
constexpr ::Unity::Collections::IIndexable_1<T>* Unity::Collections::INativeList_1<T>::i___Unity__Collections__IIndexable_1_T_() noexcept {
return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(this));
}

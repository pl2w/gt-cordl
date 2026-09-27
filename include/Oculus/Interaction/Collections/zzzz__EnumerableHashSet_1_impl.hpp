#pragma once
// IWYU pragma private; include "Oculus/Interaction/Collections/EnumerableHashSet_1.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_impl.hpp"
#include "Oculus/Interaction/Collections/zzzz__EnumerableHashSet_1_def.hpp"
#include "Oculus/Interaction/Collections/zzzz__IEnumerableHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
template<typename T>
inline void Oculus::Interaction::Collections::EnumerableHashSet_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collections::EnumerableHashSet_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Oculus::Interaction::Collections::EnumerableHashSet_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collections::EnumerableHashSet_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
template<typename T>
inline ::GlobalNamespace::HashSet_1_Enumerator<T> Oculus::Interaction::Collections::EnumerableHashSet_1<T>::Oculus_Interaction_Collections_IEnumerableHashSet_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Collections::EnumerableHashSet_1<T>*>(),
                        {"Oculus.Interaction.Collections.IEnumerableHashSet<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HashSet_1_Enumerator<T>>(this, ___internal_method);
}
template<typename T>
inline ::Oculus::Interaction::Collections::EnumerableHashSet_1<T>* Oculus::Interaction::Collections::EnumerableHashSet_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Collections::EnumerableHashSet_1<T>*>());
}
template<typename T>
inline ::Oculus::Interaction::Collections::EnumerableHashSet_1<T>* Oculus::Interaction::Collections::EnumerableHashSet_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  values)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Collections::EnumerableHashSet_1<T>*>(values));
}
/// @brief Convert operator to "::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>"
template<typename T>
constexpr  Oculus::Interaction::Collections::EnumerableHashSet_1<T>::operator ::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*() noexcept {
return static_cast<::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>"
template<typename T>
constexpr ::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>* Oculus::Interaction::Collections::EnumerableHashSet_1<T>::i___Oculus__Interaction__Collections__IEnumerableHashSet_1_T_() noexcept {
return static_cast<::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Oculus::Interaction::Collections::EnumerableHashSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Oculus::Interaction::Collections::EnumerableHashSet_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Oculus::Interaction::Collections::EnumerableHashSet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Oculus::Interaction::Collections::EnumerableHashSet_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<T>::EnumerableHashSet_1()   {
}

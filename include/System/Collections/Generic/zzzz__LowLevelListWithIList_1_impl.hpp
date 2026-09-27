#pragma once
// IWYU pragma private; include "System/Collections/Generic/LowLevelListWithIList_1.hpp"
#include "System/Collections/Generic/zzzz__LowLevelList_1_impl.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList`1_Enumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
template<typename T>
inline void System::Collections::Generic::LowLevelListWithIList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void System::Collections::Generic::LowLevelListWithIList_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline bool System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(),
                        {"System.Collections.Generic.ICollection<T>.get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::LowLevelListWithIList_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::LowLevelListWithIList_1<T>*>());
}
template<typename T>
inline ::System::Collections::Generic::LowLevelListWithIList_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(capacity));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template<typename T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::Generic::IList_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IList_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::i___System__Collections__Generic__IList_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template<typename T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* System::Collections::Generic::LowLevelListWithIList_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Collections::Generic::LowLevelListWithIList_1<T>::LowLevelListWithIList_1()   {
}

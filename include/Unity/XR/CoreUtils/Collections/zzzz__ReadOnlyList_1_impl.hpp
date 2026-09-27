#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Collections/ReadOnlyList_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__ReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::__cordl_internal_get_m_List()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_List;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::__cordl_internal_get_m_List() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_List;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::__cordl_internal_set_m_List(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_List = value;
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::setStaticF_s_EmptyList(::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  value)  {
::cordl_internals::setStaticField<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*, "s_EmptyList", ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(std::forward<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(value));
}
template<typename T>
inline ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>* Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::getStaticF_s_EmptyList()  {
return ::cordl_internals::getStaticField<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*, "s_EmptyList", ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>();
}
template<typename T>
inline int32_t Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline T Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline void Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::_ctor(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>* Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(),
                        {"Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(nullptr, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::List_1_Enumerator<T> Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::List_1_Enumerator<T>>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::Equals(::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::op_Equality(::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  lhs, ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(), ::i2c::type_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::op_Inequality(::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  lhs, ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(), ::i2c::type_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
template<typename T>
inline int32_t Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::StringW Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>* Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::New_ctor(::System::Collections::Generic::List_1<T>*  list)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>(list));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::operator ::System::Collections::Generic::IReadOnlyList_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::i___System__Collections__Generic__IReadOnlyList_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>"
template<typename T>
constexpr  Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::operator ::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>*() noexcept {
return static_cast<::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>"
template<typename T>
constexpr ::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>* Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::i___System__IEquatable_1___Unity__XR__CoreUtils__Collections__ReadOnlyList_1_T___() noexcept {
return static_cast<::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>::ReadOnlyList_1()   {
}

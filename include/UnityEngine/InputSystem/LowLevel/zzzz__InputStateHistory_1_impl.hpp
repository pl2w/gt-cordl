#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory_1.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory`1_Enumerator_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory`1_Record_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
template<typename TValue>
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::_ctor(::System::Nullable_1<int32_t>  maxStateSizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxStateSizeInBytes);
}
template<typename TValue>
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::_ctor(::UnityEngine::InputSystem::InputControl_1<TValue>*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control);
}
template<typename TValue>
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
template<typename TValue>
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TValue>
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::AddRecord(::GlobalNamespace::InputStateHistory_1_Record<TValue>  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(),
                        {"AddRecord", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(this, ___internal_method, record);
}
template<typename TValue>
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::RecordStateChange(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(),
                        {"RecordStateChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(this, ___internal_method, control, value, time);
}
template<typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(this, ___internal_method);
}
template<typename TValue>
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TValue>
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(this, ___internal_method, index);
}
template<typename TValue>
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::set_Item(int32_t  index, ::GlobalNamespace::InputStateHistory_1_Record<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template<typename TValue>
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::New_ctor(::System::Nullable_1<int32_t>  maxStateSizeInBytes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(maxStateSizeInBytes));
}
template<typename TValue>
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::New_ctor(::UnityEngine::InputSystem::InputControl_1<TValue>*  control)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(control));
}
template<typename TValue>
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::New_ctor(::StringW  path)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(path));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
template<typename TValue>
constexpr  UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::operator ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
template<typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::i___System__Collections__Generic__IReadOnlyList_1___GlobalNamespace__InputStateHistory_1_Record_TValue__() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
template<typename TValue>
constexpr  UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
template<typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__InputStateHistory_1_Record_TValue__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TValue>
constexpr  UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TValue>
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
template<typename TValue>
constexpr  UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
template<typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::i___System__Collections__Generic__IReadOnlyCollection_1___GlobalNamespace__InputStateHistory_1_Record_TValue__() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::InputStateHistory_1()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory`1_Record.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory`1_Record_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_RecordHeader_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
template<typename TValue>
inline ::GlobalNamespace::InputStateHistory_RecordHeader* GlobalNamespace::InputStateHistory_1_Record<TValue>::get_header()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"get_header", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_RecordHeader*>(*this, ___internal_method);
}
template<typename TValue>
inline int32_t GlobalNamespace::InputStateHistory_1_Record<TValue>::get_recordIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"get_recordIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TValue>
inline bool GlobalNamespace::InputStateHistory_1_Record<TValue>::get_valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"get_valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TValue>
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* GlobalNamespace::InputStateHistory_1_Record<TValue>::get_owner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"get_owner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(*this, ___internal_method);
}
template<typename TValue>
inline int32_t GlobalNamespace::InputStateHistory_1_Record<TValue>::get_index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"get_index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TValue>
inline double_t GlobalNamespace::InputStateHistory_1_Record<TValue>::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
template<typename TValue>
inline ::UnityEngine::InputSystem::InputControl_1<TValue>* GlobalNamespace::InputStateHistory_1_Record<TValue>::get_control()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"get_control", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl_1<TValue>*>(*this, ___internal_method);
}
template<typename TValue>
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> GlobalNamespace::InputStateHistory_1_Record<TValue>::get_next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"get_next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(*this, ___internal_method);
}
template<typename TValue>
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> GlobalNamespace::InputStateHistory_1_Record<TValue>::get_previous()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"get_previous", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(*this, ___internal_method);
}
template<typename TValue>
inline void GlobalNamespace::InputStateHistory_1_Record<TValue>::_ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*  owner, int32_t  index, ::GlobalNamespace::InputStateHistory_RecordHeader*  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputStateHistory_RecordHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, owner, index, header);
}
template<typename TValue>
inline void GlobalNamespace::InputStateHistory_1_Record<TValue>::_ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*  owner, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, owner, index);
}
template<typename TValue>
inline TValue GlobalNamespace::InputStateHistory_1_Record<TValue>::ReadValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"ReadValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
template<typename TValue>
inline void* GlobalNamespace::InputStateHistory_1_Record<TValue>::GetUnsafeMemoryPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"GetUnsafeMemoryPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
template<typename TValue>
inline void* GlobalNamespace::InputStateHistory_1_Record<TValue>::GetUnsafeMemoryPtrUnchecked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"GetUnsafeMemoryPtrUnchecked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
template<typename TValue>
inline void* GlobalNamespace::InputStateHistory_1_Record<TValue>::GetUnsafeExtraMemoryPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"GetUnsafeExtraMemoryPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
template<typename TValue>
inline void* GlobalNamespace::InputStateHistory_1_Record<TValue>::GetUnsafeExtraMemoryPtrUnchecked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"GetUnsafeExtraMemoryPtrUnchecked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
template<typename TValue>
inline void GlobalNamespace::InputStateHistory_1_Record<TValue>::CopyFrom(::GlobalNamespace::InputStateHistory_1_Record<TValue>  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"CopyFrom", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, record);
}
template<typename TValue>
inline void GlobalNamespace::InputStateHistory_1_Record<TValue>::CheckValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"CheckValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TValue>
inline bool GlobalNamespace::InputStateHistory_1_Record<TValue>::Equals(::GlobalNamespace::InputStateHistory_1_Record<TValue>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename TValue>
inline bool GlobalNamespace::InputStateHistory_1_Record<TValue>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template<typename TValue>
inline int32_t GlobalNamespace::InputStateHistory_1_Record<TValue>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TValue>
inline ::StringW GlobalNamespace::InputStateHistory_1_Record<TValue>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InputStateHistory_1_Record<TValue>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
template<typename TValue>
constexpr  GlobalNamespace::InputStateHistory_1_Record<TValue>::operator ::System::IEquatable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
template<typename TValue>
constexpr ::System::IEquatable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* GlobalNamespace::InputStateHistory_1_Record<TValue>::i___System__IEquatable_1___GlobalNamespace__InputStateHistory_1_Record_TValue__()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IndexPlusOne", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TValue>
constexpr ::GlobalNamespace::InputStateHistory_1_Record<TValue>::InputStateHistory_1_Record(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*  m_Owner, int32_t  m_IndexPlusOne, uint32_t  m_Version) noexcept  {
this->m_Owner = m_Owner;
this->m_IndexPlusOne = m_IndexPlusOne;
this->m_Version = m_Version;
}
// Ctor Parameters []
template<typename TValue>
constexpr ::GlobalNamespace::InputStateHistory_1_Record<TValue>::InputStateHistory_1_Record()   {
}

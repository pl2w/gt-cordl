#pragma once
// IWYU pragma private; include "System/Collections/Generic/LinkedList`1_Enumerator.hpp"
#include "System/Collections/Generic/zzzz__LinkedList`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void GlobalNamespace::LinkedList_1_Enumerator<T>::_ctor(::System::Collections::Generic::LinkedList_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinkedList_1_Enumerator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::LinkedList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template<typename T>
inline void GlobalNamespace::LinkedList_1_Enumerator<T>::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinkedList_1_Enumerator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
template<typename T>
inline T GlobalNamespace::LinkedList_1_Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinkedList_1_Enumerator<T>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::LinkedList_1_Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinkedList_1_Enumerator<T>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::LinkedList_1_Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinkedList_1_Enumerator<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LinkedList_1_Enumerator<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinkedList_1_Enumerator<T>>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LinkedList_1_Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinkedList_1_Enumerator<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LinkedList_1_Enumerator<T>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinkedList_1_Enumerator<T>>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
template<typename T>
inline void GlobalNamespace::LinkedList_1_Enumerator<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinkedList_1_Enumerator<T>>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  GlobalNamespace::LinkedList_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::LinkedList_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::LinkedList_1_Enumerator<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::LinkedList_1_Enumerator<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::LinkedList_1_Enumerator<T>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LinkedList_1_Enumerator<T>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template<typename T>
constexpr  GlobalNamespace::LinkedList_1_Enumerator<T>::operator ::System::Runtime::Serialization::ISerializable*()  {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template<typename T>
constexpr ::System::Runtime::Serialization::ISerializable* GlobalNamespace::LinkedList_1_Enumerator<T>::i___System__Runtime__Serialization__ISerializable()  {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template<typename T>
constexpr  GlobalNamespace::LinkedList_1_Enumerator<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*()  {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template<typename T>
constexpr ::System::Runtime::Serialization::IDeserializationCallback* GlobalNamespace::LinkedList_1_Enumerator<T>::i___System__Runtime__Serialization__IDeserializationCallback()  {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::LinkedList_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_node", ty: "::System::Collections::Generic::LinkedListNode_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::LinkedList_1_Enumerator<T>::LinkedList_1_Enumerator(::System::Collections::Generic::LinkedList_1<T>*  _list, ::System::Collections::Generic::LinkedListNode_1<T>*  _node, int32_t  _version, T  _current, int32_t  _index) noexcept  {
this->_list = _list;
this->_node = _node;
this->_version = _version;
this->_current = _current;
this->_index = _index;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::LinkedList_1_Enumerator<T>::LinkedList_1_Enumerator()   {
}

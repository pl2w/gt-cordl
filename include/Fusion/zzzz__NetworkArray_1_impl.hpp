#pragma once
// IWYU pragma private; include "Fusion/NetworkArray_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__INetworkArray_def.hpp"
#include "Fusion/zzzz__NetworkArrayReadOnly_1_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
#include "Fusion/zzzz__NetworkArray`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Lazy_1<::ArrayW<T>>*& Fusion::NetworkArray_1_DebuggerProxy<T>::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr ::System::Lazy_1<::ArrayW<T>>* const& Fusion::NetworkArray_1_DebuggerProxy<T>::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr void Fusion::NetworkArray_1_DebuggerProxy<T>::__cordl_internal_set__items(::System::Lazy_1<::ArrayW<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
template<typename T>
inline void Fusion::NetworkArray_1_DebuggerProxy<T>::_ctor(::Fusion::NetworkArray_1<T>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1_DebuggerProxy<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkArray_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
template<typename T>
inline ::ArrayW<T> Fusion::NetworkArray_1_DebuggerProxy<T>::get_Items()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1_DebuggerProxy<T>*>(),
                        {"get_Items", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::NetworkArray_1_DebuggerProxy<T>* Fusion::NetworkArray_1_DebuggerProxy<T>::New_ctor(::Fusion::NetworkArray_1<T>  array)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkArray_1_DebuggerProxy<T>*>(array));
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkArray_1_DebuggerProxy<T>::NetworkArray_1_DebuggerProxy()   {
}
template<typename T>
constexpr ::Fusion::NetworkArray_1<T>& Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>::__cordl_internal_get_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
template<typename T>
constexpr ::Fusion::NetworkArray_1<T> const& Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>::__cordl_internal_get_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
template<typename T>
constexpr void Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>::__cordl_internal_set_array(::Fusion::NetworkArray_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___array = value;
}
template<typename T>
inline void Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>::__ctor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>* Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0()   {
}
template<typename T>
inline void Fusion::NetworkArray_1<T>::setStaticF__stringBuilderCached(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "_stringBuilderCached", ::Fusion::NetworkArray_1<T>>(std::forward<::System::Text::StringBuilder*>(value));
}
template<typename T>
inline ::System::Text::StringBuilder* Fusion::NetworkArray_1<T>::getStaticF__stringBuilderCached()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "_stringBuilderCached", ::Fusion::NetworkArray_1<T>>();
}
template<typename T>
inline int32_t Fusion::NetworkArray_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline T Fusion::NetworkArray_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline void Fusion::NetworkArray_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template<typename T>
inline ::System::Object* Fusion::NetworkArray_1<T>::Fusion_INetworkArray_get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"Fusion.INetworkArray.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, index);
}
template<typename T>
inline void Fusion::NetworkArray_1<T>::Fusion_INetworkArray_set_Item(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"Fusion.INetworkArray.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template<typename T>
inline void Fusion::NetworkArray_1<T>::_ctor(uint8_t*  array, int32_t  length, ::Fusion::IElementReaderWriter_1<T>*  readerWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, length, readerWriter);
}
template<typename T>
inline ::Fusion::NetworkArrayReadOnly_1<T> Fusion::NetworkArray_1<T>::ToReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"ToReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArrayReadOnly_1<T>>(*this, ___internal_method);
}
template<typename T>
inline T Fusion::NetworkArray_1<T>::Get(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline T Fusion::NetworkArray_1<T>::Set(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index, value);
}
template<typename T>
inline ::by_ref<T> Fusion::NetworkArray_1<T>::GetRef(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"GetRef", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template<typename T>
inline ::ArrayW<T> Fusion::NetworkArray_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkArray_1<T>::CopyTo(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template<typename T>
inline void Fusion::NetworkArray_1<T>::CopyTo(::Fusion::NetworkArray_1<T>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkArray_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template<typename T>
inline void Fusion::NetworkArray_1<T>::CopyTo(::ArrayW<T>  array, bool  throwIfOverflow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, throwIfOverflow);
}
template<typename T>
inline ::StringW Fusion::NetworkArray_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkArray_1<T>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::NetworkArray_1_Enumerator<T> Fusion::NetworkArray_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkArray_1_Enumerator<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Fusion::NetworkArray_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Fusion::NetworkArray_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkArray_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkArray_1<T>::CopyFrom(::ArrayW<T>  source, int32_t  sourceOffset, int32_t  sourceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"CopyFrom", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, sourceOffset, sourceCount);
}
template<typename T>
inline void Fusion::NetworkArray_1<T>::CopyFrom(::System::Collections::Generic::List_1<T>*  source, int32_t  sourceOffset, int32_t  sourceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"CopyFrom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, sourceOffset, sourceCount);
}
template<typename T>
inline ::StringW Fusion::NetworkArray_1<T>::ToListString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"ToListString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename T>
inline ::Fusion::NetworkArrayReadOnly_1<T> Fusion::NetworkArray_1<T>::op_Implicit___Fusion__NetworkArrayReadOnly_1_T_(::Fusion::NetworkArray_1<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArray_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkArray_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArrayReadOnly_1<T>>(nullptr, ___internal_method, value);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Fusion::NetworkArray_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Fusion::NetworkArray_1<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Fusion::NetworkArray_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Fusion::NetworkArray_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Fusion::INetworkArray"
template<typename T>
constexpr  Fusion::NetworkArray_1<T>::operator ::Fusion::INetworkArray*()  {
return static_cast<::Fusion::INetworkArray*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkArray"
template<typename T>
constexpr ::Fusion::INetworkArray* Fusion::NetworkArray_1<T>::i___Fusion__INetworkArray()  {
return static_cast<::Fusion::INetworkArray*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_array", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_readerWriter", ty: "::Fusion::IElementReaderWriter_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Fusion::NetworkArray_1<T>::NetworkArray_1(uint8_t*  _array, int32_t  _length, ::Fusion::IElementReaderWriter_1<T>*  _readerWriter) noexcept  {
this->_array = _array;
this->_length = _length;
this->_readerWriter = _readerWriter;
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkArray_1<T>::NetworkArray_1()   {
}

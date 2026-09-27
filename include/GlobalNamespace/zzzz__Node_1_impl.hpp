#pragma once
// IWYU pragma private; include "GlobalNamespace/Node_1.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Node_1_def.hpp"
#include "GlobalNamespace/zzzz__Node_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr T& GlobalNamespace::Node_1<T>::__cordl_internal_get__Value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
template<typename T>
constexpr T const& GlobalNamespace::Node_1<T>::__cordl_internal_get__Value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
template<typename T>
constexpr void GlobalNamespace::Node_1<T>::__cordl_internal_set__Value_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Value_k__BackingField = value;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>*& GlobalNamespace::Node_1<T>::__cordl_internal_get__Parent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parent_k__BackingField;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>* const& GlobalNamespace::Node_1<T>::__cordl_internal_get__Parent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parent_k__BackingField;
}
template<typename T>
constexpr void GlobalNamespace::Node_1<T>::__cordl_internal_set__Parent_k__BackingField(::GlobalNamespace::Node_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parent_k__BackingField = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Node_1<T>*>*& GlobalNamespace::Node_1<T>::__cordl_internal_get__Children_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Children_k__BackingField;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Node_1<T>*>* const& GlobalNamespace::Node_1<T>::__cordl_internal_get__Children_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Children_k__BackingField;
}
template<typename T>
constexpr void GlobalNamespace::Node_1<T>::__cordl_internal_set__Children_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::Node_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Children_k__BackingField = value;
}
template<typename T>
inline T GlobalNamespace::Node_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::Node_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::GlobalNamespace::Node_1<T>* GlobalNamespace::Node_1<T>::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"get_Parent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Node_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::Node_1<T>::set_Parent(::GlobalNamespace::Node_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"set_Parent", {}, {::i2c::type_of<::GlobalNamespace::Node_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::Collections::Generic::List_1<::GlobalNamespace::Node_1<T>*>* GlobalNamespace::Node_1<T>::get_Children()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"get_Children", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::Node_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::Node_1<T>::_ctor(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::GlobalNamespace::Node_1<T>* GlobalNamespace::Node_1<T>::AddChild(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"AddChild", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Node_1<T>*>(this, ___internal_method, value);
}
template<typename T>
inline ::GlobalNamespace::Node_1<T>* GlobalNamespace::Node_1<T>::AddChild(::GlobalNamespace::Node_1<T>*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"AddChild", {}, {::i2c::type_of<::GlobalNamespace::Node_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Node_1<T>*>(this, ___internal_method, child);
}
template<typename T>
inline void GlobalNamespace::Node_1<T>::RemoveChild(::GlobalNamespace::Node_1<T>*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"RemoveChild", {}, {::i2c::type_of<::GlobalNamespace::Node_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>* GlobalNamespace::Node_1<T>::TraversePreOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"TraversePreOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>* GlobalNamespace::Node_1<T>::TraverseBreadthFirst()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"TraverseBreadthFirst", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::List_1<::GlobalNamespace::Node_1<T>*>* GlobalNamespace::Node_1<T>::GetPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1<T>*>(),
                        {"GetPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::Node_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::Node_1<T>* GlobalNamespace::Node_1<T>::New_ctor(T  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Node_1<T>*>(value));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>::Node_1()   {
}
template<typename T>
constexpr int32_t& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>*& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>* const& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_set___2__current(::GlobalNamespace::Node_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>*& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>* const& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_set___4__this(::GlobalNamespace::Node_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::Node_1<T>*>& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
template<typename T>
constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::Node_1<T>*> const& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_set___7__wrap1(::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::Node_1<T>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>*& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>* const& GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
template<typename T>
inline void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::Node_1<T>* GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::System_Collections_Generic_IEnumerator_Node_T___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(),
                        {"System.Collections.Generic.IEnumerator<Node<T>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Node_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>* GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::System_Collections_Generic_IEnumerable_Node_T___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(),
                        {"System.Collections.Generic.IEnumerable<Node<T>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>* GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>* GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__Node_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>* GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__Node_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Node_1__TraversePreOrder_d__15<T>::Node_1__TraversePreOrder_d__15()   {
}
template<typename T>
constexpr int32_t& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>*& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>* const& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_set___2__current(::GlobalNamespace::Node_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>*& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>* const& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_set___4__this(::GlobalNamespace::Node_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::Node_1<T>*>*& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get__queue_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queue_5__2;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::Node_1<T>*>* const& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get__queue_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queue_5__2;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_set__queue_5__2(::System::Collections::Generic::Queue_1<::GlobalNamespace::Node_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queue_5__2 = value;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>*& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get__current_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current_5__3;
}
template<typename T>
constexpr ::GlobalNamespace::Node_1<T>* const& GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_get__current_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current_5__3;
}
template<typename T>
constexpr void GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::__cordl_internal_set__current_5__3(::GlobalNamespace::Node_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current_5__3 = value;
}
template<typename T>
inline void GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::Node_1<T>* GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::System_Collections_Generic_IEnumerator_Node_T___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>*>(),
                        {"System.Collections.Generic.IEnumerator<Node<T>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Node_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>* GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::System_Collections_Generic_IEnumerable_Node_T___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>*>(),
                        {"System.Collections.Generic.IEnumerable<Node<T>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>* GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>* GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__Node_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Node_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>* GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__Node_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Node_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Node_1__TraverseBreadthFirst_d__16<T>::Node_1__TraverseBreadthFirst_d__16()   {
}

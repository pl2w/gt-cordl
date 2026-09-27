#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphNode_1.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GraphNode_1_def.hpp"
#include "GlobalNamespace/zzzz__GraphNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr T& GlobalNamespace::GraphNode_1<T>::__cordl_internal_get__Value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
template<typename T>
constexpr T const& GlobalNamespace::GraphNode_1<T>::__cordl_internal_get__Value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1<T>::__cordl_internal_set__Value_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Value_k__BackingField = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*& GlobalNamespace::GraphNode_1<T>::__cordl_internal_get__Parents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parents_k__BackingField;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>* const& GlobalNamespace::GraphNode_1<T>::__cordl_internal_get__Parents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parents_k__BackingField;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1<T>::__cordl_internal_set__Parents_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parents_k__BackingField = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*& GlobalNamespace::GraphNode_1<T>::__cordl_internal_get__Children_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Children_k__BackingField;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>* const& GlobalNamespace::GraphNode_1<T>::__cordl_internal_get__Children_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Children_k__BackingField;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1<T>::__cordl_internal_set__Children_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Children_k__BackingField = value;
}
template<typename T>
inline T GlobalNamespace::GraphNode_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1<T>::get_Parents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"get_Parents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1<T>::get_Children()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"get_Children", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::GraphNode_1<T>::get_ChildCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"get_ChildCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1<T>::_ctor(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1<T>::_ctor(T  value, ::GlobalNamespace::GraphNode_1<T>*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<::GlobalNamespace::GraphNode_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, parent);
}
template<typename T>
inline int32_t GlobalNamespace::GraphNode_1<T>::GetSubtreeWidth(int32_t  depthLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"GetSubtreeWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, depthLimit);
}
template<typename T>
inline ::GlobalNamespace::GraphNode_1<T>* GlobalNamespace::GraphNode_1<T>::AddChild(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"AddChild", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GraphNode_1<T>*>(this, ___internal_method, value);
}
template<typename T>
inline ::GlobalNamespace::GraphNode_1<T>* GlobalNamespace::GraphNode_1<T>::AddChild(::GlobalNamespace::GraphNode_1<T>*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"AddChild", {}, {::i2c::type_of<::GlobalNamespace::GraphNode_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GraphNode_1<T>*>(this, ___internal_method, child);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1<T>::RemoveChild(::GlobalNamespace::GraphNode_1<T>*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"RemoveChild", {}, {::i2c::type_of<::GlobalNamespace::GraphNode_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1<T>::TraversePreOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"TraversePreOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1<T>::TraversePreOrderDistinct(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  visited)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"TraversePreOrderDistinct", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(this, ___internal_method, visited);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1<T>::TraverseBreadthFirst()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"TraverseBreadthFirst", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1<T>::TraverseBreadthFirstDistinct()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"TraverseBreadthFirstDistinct", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::GraphNode_1<T>::GetGraphDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"GetGraphDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::GraphNode_1<T>::GetNodeDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1<T>*>(),
                        {"GetNodeDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::GraphNode_1<T>* GlobalNamespace::GraphNode_1<T>::New_ctor(T  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GraphNode_1<T>*>(value));
}
template<typename T>
inline ::GlobalNamespace::GraphNode_1<T>* GlobalNamespace::GraphNode_1<T>::New_ctor(T  value, ::GlobalNamespace::GraphNode_1<T>*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GraphNode_1<T>*>(value, parent));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>::GraphNode_1()   {
}
template<typename T>
constexpr int32_t& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>*& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>* const& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_set___2__current(::GlobalNamespace::GraphNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get_visited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visited;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>* const& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get_visited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visited;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_set_visited(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visited = value;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___3__visited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__visited;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>* const& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___3__visited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__visited;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_set___3__visited(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__visited = value;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>*& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>* const& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_set___4__this(::GlobalNamespace::GraphNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
template<typename T>
constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*> const& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_set___7__wrap1(::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* const& GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::GraphNode_1<T>* GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::System_Collections_Generic_IEnumerator_GraphNode_T___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(),
                        {"System.Collections.Generic.IEnumerator<GraphNode<T>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GraphNode_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::System_Collections_Generic_IEnumerable_GraphNode_T___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(),
                        {"System.Collections.Generic.IEnumerable<GraphNode<T>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>* GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__GraphNode_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__GraphNode_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>::GraphNode_1__TraversePreOrderDistinct_d__19()   {
}
template<typename T>
constexpr int32_t& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>*& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>* const& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_set___2__current(::GlobalNamespace::GraphNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>*& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>* const& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_set___4__this(::GlobalNamespace::GraphNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
template<typename T>
constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*> const& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_set___7__wrap1(::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* const& GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::GraphNode_1<T>* GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::System_Collections_Generic_IEnumerator_GraphNode_T___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(),
                        {"System.Collections.Generic.IEnumerator<GraphNode<T>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GraphNode_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::System_Collections_Generic_IEnumerable_GraphNode_T___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(),
                        {"System.Collections.Generic.IEnumerable<GraphNode<T>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>* GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__GraphNode_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__GraphNode_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>::GraphNode_1__TraversePreOrder_d__18()   {
}
template<typename T>
constexpr int32_t& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>*& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>* const& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_set___2__current(::GlobalNamespace::GraphNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>*& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>* const& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_set___4__this(::GlobalNamespace::GraphNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get__queue_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queue_5__2;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>* const& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get__queue_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queue_5__2;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_set__queue_5__2(::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queue_5__2 = value;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get__visited_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visited_5__3;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>* const& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get__visited_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visited_5__3;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_set__visited_5__3(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visited_5__3 = value;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>*& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get__current_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current_5__4;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>* const& GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_get__current_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current_5__4;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::__cordl_internal_set__current_5__4(::GlobalNamespace::GraphNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current_5__4 = value;
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::GraphNode_1<T>* GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::System_Collections_Generic_IEnumerator_GraphNode_T___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>*>(),
                        {"System.Collections.Generic.IEnumerator<GraphNode<T>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GraphNode_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::System_Collections_Generic_IEnumerable_GraphNode_T___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>*>(),
                        {"System.Collections.Generic.IEnumerable<GraphNode<T>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>* GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__GraphNode_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__GraphNode_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>::GraphNode_1__TraverseBreadthFirstDistinct_d__21()   {
}
template<typename T>
constexpr int32_t& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>*& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>* const& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_set___2__current(::GlobalNamespace::GraphNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>*& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>* const& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_set___4__this(::GlobalNamespace::GraphNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get__queue_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queue_5__2;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>* const& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get__queue_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queue_5__2;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_set__queue_5__2(::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queue_5__2 = value;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>*& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get__current_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current_5__3;
}
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1<T>* const& GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_get__current_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current_5__3;
}
template<typename T>
constexpr void GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::__cordl_internal_set__current_5__3(::GlobalNamespace::GraphNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current_5__3 = value;
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::GraphNode_1<T>* GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::System_Collections_Generic_IEnumerator_GraphNode_T___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>*>(),
                        {"System.Collections.Generic.IEnumerator<GraphNode<T>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GraphNode_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::System_Collections_Generic_IEnumerable_GraphNode_T___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>*>(),
                        {"System.Collections.Generic.IEnumerable<GraphNode<T>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>* GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__GraphNode_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__GraphNode_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>::GraphNode_1__TraverseBreadthFirst_d__20()   {
}

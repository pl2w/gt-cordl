#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/DebugTreeUI_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTreeUI_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTreeUI_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__INodeUI_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__ITreeNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
template<typename TLeaf>
constexpr ::UnityW<::UnityEngine::RectTransform>& Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_get__contentArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentArea;
}
template<typename TLeaf>
constexpr ::UnityW<::UnityEngine::RectTransform> const& Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_get__contentArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentArea;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_set__contentArea(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contentArea = value;
}
template<typename TLeaf>
constexpr ::UnityW<::TMPro::TMP_Text>& Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_get__title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____title;
}
template<typename TLeaf>
constexpr ::UnityW<::TMPro::TMP_Text> const& Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_get__title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____title;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_set__title(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____title = value;
}
template<typename TLeaf>
constexpr bool& Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_get__buildTreeOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buildTreeOnStart;
}
template<typename TLeaf>
constexpr bool const& Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_get__buildTreeOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buildTreeOnStart;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_set__buildTreeOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buildTreeOnStart = value;
}
template<typename TLeaf>
constexpr ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*& Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_get__tree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tree;
}
template<typename TLeaf>
constexpr ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>* const& Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_get__tree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tree;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_set__tree(::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tree = value;
}
template<typename TLeaf>
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*,::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>*& Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_get__nodeToUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodeToUI;
}
template<typename TLeaf>
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*,::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>* const& Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_get__nodeToUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodeToUI;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::__cordl_internal_set__nodeToUI(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*,::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nodeToUI = value;
}
template<typename TLeaf>
inline TLeaf Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<TLeaf>(this, ___internal_method);
}
template<typename TLeaf>
inline ::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>* Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::get_NodePrefab()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>(this, ___internal_method);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TLeaf>
inline ::System::Collections::IEnumerator* Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::BuildTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>(),
                        {"BuildTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::BuildTreeRecursive(::UnityEngine::RectTransform*  parent, ::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*  node, bool  isRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>(),
                        {"BuildTreeRecursive", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, node, isRoot);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::ClearContentArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>(),
                        {"ClearContentArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::SetTitleText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>(),
                        {"SetTitleText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TLeaf>
inline ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>* Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::CreateTree(TLeaf  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*>(this, ___internal_method, value);
}
template<typename TLeaf>
inline ::StringW Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::TitleForValue(TLeaf  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TLeaf>
inline ::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>* Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>*>());
}
// Ctor Parameters []
template<typename TLeaf>
constexpr ::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>::DebugTreeUI_1()   {
}
template<typename TLeaf>
constexpr int32_t& Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename TLeaf>
constexpr int32_t const& Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename TLeaf>
constexpr ::System::Object*& Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename TLeaf>
constexpr ::System::Object* const& Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename TLeaf>
constexpr ::UnityW<TLeaf>& Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TLeaf>
constexpr ::UnityW<TLeaf> const& Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::__cordl_internal_set___4__this(::UnityW<TLeaf>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TLeaf>
inline bool Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TLeaf>
inline ::System::Object* Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TLeaf>
inline ::System::Object* Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename TLeaf>
inline ::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>* Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename TLeaf>
constexpr  Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename TLeaf>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TLeaf>
constexpr  Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TLeaf>
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TLeaf>
constexpr  Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TLeaf>
constexpr ::System::IDisposable* Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TLeaf>
constexpr ::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>::DebugTreeUI_1__BuildTree_d__10()   {
}
template<typename TLeaf>
constexpr ::System::Threading::Tasks::Task*& Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
template<typename TLeaf>
constexpr ::System::Threading::Tasks::Task* const& Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>::__cordl_internal_set_task(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___task = value;
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TLeaf>
inline bool Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>::_BuildTree_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>*>(),
                        {"<BuildTree>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TLeaf>
inline ::Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>* Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>*>());
}
// Ctor Parameters []
template<typename TLeaf>
constexpr ::Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>::DebugTreeUI_1___c__DisplayClass10_0()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/DebugTree_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree`1__BuildTreeAsync_d__8_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree`1__BuildTreeRecursiveAsync_d__9_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree`1__RebuildAsync_d__7_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__ITreeNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
template<typename TLeaf>
constexpr ::System::Collections::Generic::Dictionary_2<TLeaf,::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*& Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::__cordl_internal_get__existingNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____existingNodes;
}
template<typename TLeaf>
constexpr ::System::Collections::Generic::Dictionary_2<TLeaf,::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>* const& Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::__cordl_internal_get__existingNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____existingNodes;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::__cordl_internal_set__existingNodes(::System::Collections::Generic::Dictionary_2<TLeaf,::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____existingNodes = value;
}
template<typename TLeaf>
constexpr TLeaf& Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::__cordl_internal_get_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
template<typename TLeaf>
constexpr TLeaf const& Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::__cordl_internal_get_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::__cordl_internal_set_Root(TLeaf  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Root = value;
}
template<typename TLeaf>
constexpr ::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*& Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::__cordl_internal_get__rootNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootNode;
}
template<typename TLeaf>
constexpr ::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>* const& Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::__cordl_internal_get__rootNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootNode;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::__cordl_internal_set__rootNode(::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootNode = value;
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::_ctor(TLeaf  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*>(),
                        {".ctor", {}, {::i2c::type_of<TLeaf>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
template<typename TLeaf>
inline ::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>* Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::GetRootNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*>(),
                        {"GetRootNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>(this, ___internal_method);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*>(),
                        {"Rebuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TLeaf>
inline ::System::Threading::Tasks::Task* Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::RebuildAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*>(),
                        {"RebuildAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
template<typename TLeaf>
inline ::System::Threading::Tasks::Task_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>* Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::BuildTreeAsync(TLeaf  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*>(),
                        {"BuildTreeAsync", {}, {::i2c::type_of<TLeaf>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*>(this, ___internal_method, root);
}
template<typename TLeaf>
inline ::System::Threading::Tasks::Task_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>* Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::BuildTreeRecursiveAsync(TLeaf  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*>(),
                        {"BuildTreeRecursiveAsync", {}, {::i2c::type_of<TLeaf>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*>(this, ___internal_method, value);
}
template<typename TLeaf>
inline bool Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::TryGetChildren(TLeaf  node, ::by_ref<::System::Collections::Generic::IEnumerable_1<TLeaf>*>  children)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, children);
}
template<typename TLeaf>
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<TLeaf>*>* Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::TryGetChildrenAsync(TLeaf  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<TLeaf>*>*>(this, ___internal_method, node);
}
template<typename TLeaf>
inline ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>* Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::New_ctor(TLeaf  root)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*>(root));
}
// Ctor Parameters []
template<typename TLeaf>
constexpr ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>::DebugTree_1()   {
}
template<typename TLeaf>
constexpr TLeaf& Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::__cordl_internal_get__Value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
template<typename TLeaf>
constexpr TLeaf const& Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::__cordl_internal_get__Value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::__cordl_internal_set__Value_k__BackingField(TLeaf  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Value_k__BackingField = value;
}
template<typename TLeaf>
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*& Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::__cordl_internal_get__Children_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Children_k__BackingField;
}
template<typename TLeaf>
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>* const& Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::__cordl_internal_get__Children_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Children_k__BackingField;
}
template<typename TLeaf>
constexpr void Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::__cordl_internal_set__Children_k__BackingField(::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Children_k__BackingField = value;
}
template<typename TLeaf>
inline TLeaf Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::Oculus_Interaction_DebugTree_ITreeNode_TLeaf__get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>(),
                        {"Oculus.Interaction.DebugTree.ITreeNode<TLeaf>.get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TLeaf>(this, ___internal_method);
}
template<typename TLeaf>
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>* Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::Oculus_Interaction_DebugTree_ITreeNode_TLeaf__get_Children()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>(),
                        {"Oculus.Interaction.DebugTree.ITreeNode<TLeaf>.get_Children", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>*>(this, ___internal_method);
}
template<typename TLeaf>
inline TLeaf Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TLeaf>(this, ___internal_method);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::set_Value(TLeaf  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>(),
                        {"set_Value", {}, {::i2c::type_of<TLeaf>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TLeaf>
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>* Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::get_Children()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>(),
                        {"get_Children", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*>(this, ___internal_method);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::set_Children(::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>(),
                        {"set_Children", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TLeaf>
inline ::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>* Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>());
}
/// @brief Convert operator to "::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>"
template<typename TLeaf>
constexpr  Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::operator ::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*() noexcept {
return static_cast<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>"
template<typename TLeaf>
constexpr ::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>* Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::i___Oculus__Interaction__DebugTree__ITreeNode_1_TLeaf_() noexcept {
return static_cast<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TLeaf>
constexpr ::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>::DebugTree_1_Node()   {
}

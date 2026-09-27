#pragma once
// IWYU pragma private; include "Fusion/NestedComponentUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Fusion/zzzz__NestedComponentUtilities_def.hpp"
#include "Fusion/zzzz__NestedComponentUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
inline void Fusion::NestedComponentUtilities::setStaticF_nodesQueue(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*, "nodesQueue", ::Fusion::NestedComponentUtilities*>(std::forward<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* Fusion::NestedComponentUtilities::getStaticF_nodesQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*, "nodesQueue", ::Fusion::NestedComponentUtilities*>();
}
inline void Fusion::NestedComponentUtilities::setStaticF_nodeStack(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*, "nodeStack", ::Fusion::NestedComponentUtilities*>(std::forward<::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>* Fusion::NestedComponentUtilities::getStaticF_nodeStack()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*, "nodeStack", ::Fusion::NestedComponentUtilities*>();
}
template<typename T,typename TStopOn>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStopOn, ::UnityEngine::Component*>)
inline T Fusion::NestedComponentUtilities::EnsureRootComponentExists(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"EnsureRootComponentExists", {::i2c::class_of<T>(), ::i2c::class_of<TStopOn>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStopOn>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, transform);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Fusion::NestedComponentUtilities::GetParentComponent(::UnityEngine::Transform*  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"GetParentComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, t);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void Fusion::NestedComponentUtilities::GetNestedComponentsInParents(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"GetNestedComponentsInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, list);
}
template<typename T,typename TStopOn>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TStopOn>)
inline T Fusion::NestedComponentUtilities::GetNestedComponentInChildren(::UnityEngine::Transform*  t, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"GetNestedComponentInChildren", {::i2c::class_of<T>(), ::i2c::class_of<TStopOn>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStopOn>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, t, includeInactive);
}
template<typename T,typename TStopOn>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TStopOn>)
inline T Fusion::NestedComponentUtilities::GetNestedComponentInParent(::UnityEngine::Transform*  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"GetNestedComponentInParent", {::i2c::class_of<T>(), ::i2c::class_of<TStopOn>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStopOn>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, t);
}
template<typename T,typename TStopOn>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TStopOn>)
inline T Fusion::NestedComponentUtilities::GetNestedComponentInParents(::UnityEngine::Transform*  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"GetNestedComponentInParents", {::i2c::class_of<T>(), ::i2c::class_of<TStopOn>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStopOn>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, t);
}
template<typename T,typename TStop>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TStop>)
inline void Fusion::NestedComponentUtilities::GetNestedComponentsInParents(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"GetNestedComponentsInParents", {::i2c::class_of<T>(), ::i2c::class_of<TStop>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, list);
}
template<typename T,typename TStopOn>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TStopOn>)
inline ::System::Collections::Generic::List_1<T>* Fusion::NestedComponentUtilities::GetNestedComponentsInChildren(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"GetNestedComponentsInChildren", {::i2c::class_of<T>(), ::i2c::class_of<TStopOn>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStopOn>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, t, list, includeInactive);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline ::System::Collections::Generic::List_1<T>* Fusion::NestedComponentUtilities::GetNestedComponentsInChildren(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list, bool  includeInactive, /* [ParamArray] */ ::ArrayW<::System::Type*>  stopOn)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"GetNestedComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, t, list, includeInactive, stopOn);
}
template<typename T,typename TSearch,typename TStop>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TSearch>)
inline void Fusion::NestedComponentUtilities::GetNestedComponentsInChildren(::UnityEngine::Transform*  t, bool  includeInactive, ::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"GetNestedComponentsInChildren", {::i2c::class_of<T>(), ::i2c::class_of<TSearch>(), ::i2c::class_of<TStop>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TSearch>(), ::i2c::class_of<TStop>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, includeInactive, list);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline ::ArrayW<T> Fusion::NestedComponentUtilities::FindObjectsOfTypeInOrder(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"FindObjectsOfTypeInOrder", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, scene, includeInactive);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline void Fusion::NestedComponentUtilities::FindObjectsOfTypeInOrder(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::List_1<T>*  list, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"FindObjectsOfTypeInOrder", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, list, includeInactive);
}
template<typename T,typename TCast>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TCast>)
inline ::ArrayW<TCast> Fusion::NestedComponentUtilities::FindObjectsOfTypeInOrder(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"FindObjectsOfTypeInOrder", {::i2c::class_of<T>(), ::i2c::class_of<TCast>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TCast>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TCast>>(nullptr, ___internal_method, scene, includeInactive);
}
template<typename T,typename TCast>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TCast>)
inline void Fusion::NestedComponentUtilities::FindObjectsOfTypeInOrder(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::List_1<TCast>*  list, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NestedComponentUtilities*>(),
                    {"FindObjectsOfTypeInOrder", {::i2c::class_of<T>(), ::i2c::class_of<TCast>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::List_1<TCast>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TCast>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, list, includeInactive);
}
// Ctor Parameters []
constexpr ::Fusion::NestedComponentUtilities::NestedComponentUtilities()   {
}
template<typename T>
inline void Fusion::NestedComponentUtilities_RecyclableList_1<T>::setStaticF_List(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<T>*, "List", ::Fusion::NestedComponentUtilities_RecyclableList_1<T>*>(std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Fusion::NestedComponentUtilities_RecyclableList_1<T>::getStaticF_List()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<T>*, "List", ::Fusion::NestedComponentUtilities_RecyclableList_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NestedComponentUtilities_RecyclableList_1<T>::NestedComponentUtilities_RecyclableList_1()   {
}

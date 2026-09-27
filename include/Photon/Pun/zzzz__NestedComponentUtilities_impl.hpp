#pragma once
// IWYU pragma private; include "Photon/Pun/NestedComponentUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Photon/Pun/zzzz__NestedComponentUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
inline void Photon::Pun::NestedComponentUtilities::setStaticF_nodesQueue(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*, "nodesQueue", ::Photon::Pun::NestedComponentUtilities*>(std::forward<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* Photon::Pun::NestedComponentUtilities::getStaticF_nodesQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*, "nodesQueue", ::Photon::Pun::NestedComponentUtilities*>();
}
inline void Photon::Pun::NestedComponentUtilities::setStaticF_searchLists(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::ICollection*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::ICollection*>*, "searchLists", ::Photon::Pun::NestedComponentUtilities*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::ICollection*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::ICollection*>* Photon::Pun::NestedComponentUtilities::getStaticF_searchLists()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::ICollection*>*, "searchLists", ::Photon::Pun::NestedComponentUtilities*>();
}
inline void Photon::Pun::NestedComponentUtilities::setStaticF_nodeStack(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*, "nodeStack", ::Photon::Pun::NestedComponentUtilities*>(std::forward<::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>* Photon::Pun::NestedComponentUtilities::getStaticF_nodeStack()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*, "nodeStack", ::Photon::Pun::NestedComponentUtilities*>();
}
template<typename T,typename NestedT>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<NestedT, ::UnityEngine::Component*>)
inline T Photon::Pun::NestedComponentUtilities::EnsureRootComponentExists(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::NestedComponentUtilities*>(),
                    {"EnsureRootComponentExists", {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, transform);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Photon::Pun::NestedComponentUtilities::GetParentComponent(::UnityEngine::Transform*  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::NestedComponentUtilities*>(),
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
inline void Photon::Pun::NestedComponentUtilities::GetNestedComponentsInParents(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::NestedComponentUtilities*>(),
                    {"GetNestedComponentsInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, list);
}
template<typename T,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<NestedT>)
inline T Photon::Pun::NestedComponentUtilities::GetNestedComponentInChildren(::UnityEngine::Transform*  t, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::NestedComponentUtilities*>(),
                    {"GetNestedComponentInChildren", {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, t, includeInactive);
}
template<typename T,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<NestedT>)
inline T Photon::Pun::NestedComponentUtilities::GetNestedComponentInParent(::UnityEngine::Transform*  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::NestedComponentUtilities*>(),
                    {"GetNestedComponentInParent", {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, t);
}
template<typename T,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<NestedT>)
inline T Photon::Pun::NestedComponentUtilities::GetNestedComponentInParents(::UnityEngine::Transform*  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::NestedComponentUtilities*>(),
                    {"GetNestedComponentInParents", {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, t);
}
template<typename T,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<NestedT>)
inline void Photon::Pun::NestedComponentUtilities::GetNestedComponentsInParents(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::NestedComponentUtilities*>(),
                    {"GetNestedComponentsInParents", {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, list);
}
template<typename T,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<NestedT>)
inline ::System::Collections::Generic::List_1<T>* Photon::Pun::NestedComponentUtilities::GetNestedComponentsInChildren(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::NestedComponentUtilities*>(),
                    {"GetNestedComponentsInChildren", {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<NestedT>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, t, list, includeInactive);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline ::System::Collections::Generic::List_1<T>* Photon::Pun::NestedComponentUtilities::GetNestedComponentsInChildren(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list, bool  includeInactive, /* [ParamArray] */ ::ArrayW<::System::Type*>  stopOn)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::NestedComponentUtilities*>(),
                    {"GetNestedComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, t, list, includeInactive, stopOn);
}
template<typename T,typename SearchT,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<SearchT>)
inline void Photon::Pun::NestedComponentUtilities::GetNestedComponentsInChildren(::UnityEngine::Transform*  t, bool  includeInactive, ::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::NestedComponentUtilities*>(),
                    {"GetNestedComponentsInChildren", {::i2c::class_of<T>(), ::i2c::class_of<SearchT>(), ::i2c::class_of<NestedT>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<SearchT>(), ::i2c::class_of<NestedT>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, includeInactive, list);
}
// Ctor Parameters []
constexpr ::Photon::Pun::NestedComponentUtilities::NestedComponentUtilities()   {
}

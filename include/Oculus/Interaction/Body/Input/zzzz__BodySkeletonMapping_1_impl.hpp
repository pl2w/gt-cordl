#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/BodySkeletonMapping_1.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodySkeletonMapping_1_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodySkeletonMapping_1_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodySkeletonMapping`1_JointInfo_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "Oculus/Interaction/Collections/zzzz__IEnumerableHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>*& Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_get__tree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tree;
}
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>* const& Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_get__tree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tree;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_set__tree(::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tree = value;
}
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*& Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_get__joints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joints;
}
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* const& Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_get__joints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joints;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_set__joints(::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joints = value;
}
template<typename TSourceJointId>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TSourceJointId,::Oculus::Interaction::Body::Input::BodyJointId>*& Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_get__forwardMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardMap;
}
template<typename TSourceJointId>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TSourceJointId,::Oculus::Interaction::Body::Input::BodyJointId>* const& Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_get__forwardMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardMap;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_set__forwardMap(::System::Collections::Generic::IReadOnlyDictionary_2<TSourceJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardMap = value;
}
template<typename TSourceJointId>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,TSourceJointId>*& Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_get__reverseMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverseMap;
}
template<typename TSourceJointId>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,TSourceJointId>* const& Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_get__reverseMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverseMap;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_set__reverseMap(::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,TSourceJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reverseMap = value;
}
template<typename TSourceJointId>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*& Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_get__jointToParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointToParent;
}
template<typename TSourceJointId>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>* const& Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_get__jointToParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointToParent;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::__cordl_internal_set__jointToParent(::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointToParent = value;
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::get_Joints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>*>(),
                        {"get_Joints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*>(this, ___internal_method);
}
template<typename TSourceJointId>
inline bool Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::TryGetParentJointId(::Oculus::Interaction::Body::Input::BodyJointId  jointId, ::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>  parentJointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>*>(),
                        {"TryGetParentJointId", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, parentJointId);
}
template<typename TSourceJointId>
inline bool Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::TryGetSourceJointId(::Oculus::Interaction::Body::Input::BodyJointId  jointId, ::by_ref<TSourceJointId>  sourceJointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>*>(),
                        {"TryGetSourceJointId", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<TSourceJointId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, sourceJointId);
}
template<typename TSourceJointId>
inline bool Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::TryGetBodyJointId(TSourceJointId  jointId, ::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>  bodyJointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>*>(),
                        {"TryGetBodyJointId", {}, {::i2c::type_of<TSourceJointId>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, bodyJointId);
}
template<typename TSourceJointId>
inline TSourceJointId Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::GetSourceJointFromBodyJoint(::Oculus::Interaction::Body::Input::BodyJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>*>(),
                        {"GetSourceJointFromBodyJoint", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSourceJointId>(this, ___internal_method, jointId);
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::BodyJointId Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::GetBodyJointFromSourceJoint(TSourceJointId  sourceJointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>*>(),
                        {"GetBodyJointFromSourceJoint", {}, {::i2c::type_of<TSourceJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::BodyJointId>(this, ___internal_method, sourceJointId);
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::_ctor(TSourceJointId  root, ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>*  jointMapping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>*>(),
                        {".ctor", {}, {::i2c::type_of<TSourceJointId>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, jointMapping);
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::New_ctor(TSourceJointId  root, ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>*  jointMapping)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>*>(root, jointMapping));
}
/// @brief Convert operator to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
template<typename TSourceJointId>
constexpr  Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::operator ::Oculus::Interaction::Body::Input::ISkeletonMapping*() noexcept {
return static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping* Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::i___Oculus__Interaction__Body__Input__ISkeletonMapping() noexcept {
return static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>::BodySkeletonMapping_1()   {
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::setStaticF___9(::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*, "<>9", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(std::forward<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(value));
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*, "<>9", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>();
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::setStaticF___9__7_0(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*, "<>9__7_0", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(std::forward<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*>(value));
}
template<typename TSourceJointId>
inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*, "<>9__7_0", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>();
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::setStaticF___9__7_1(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*, "<>9__7_1", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(std::forward<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*>(value));
}
template<typename TSourceJointId>
inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::getStaticF___9__7_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*, "<>9__7_1", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>();
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::setStaticF___9__7_2(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*, "<>9__7_2", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(std::forward<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*>(value));
}
template<typename TSourceJointId>
inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::getStaticF___9__7_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*, "<>9__7_2", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>();
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::setStaticF___9__7_3(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*, "<>9__7_3", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(std::forward<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*>(value));
}
template<typename TSourceJointId>
inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::getStaticF___9__7_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*, "<>9__7_3", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>();
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::setStaticF___9__7_4(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*, "<>9__7_4", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(std::forward<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*>(value));
}
template<typename TSourceJointId>
inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::getStaticF___9__7_4()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*, "<>9__7_4", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>();
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::setStaticF___9__7_5(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*, "<>9__7_5", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(std::forward<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*>(value));
}
template<typename TSourceJointId>
inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::getStaticF___9__7_5()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*, "<>9__7_5", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>();
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::setStaticF___9__7_6(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*, "<>9__7_6", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(std::forward<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*>(value));
}
template<typename TSourceJointId>
inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::getStaticF___9__7_6()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*, "<>9__7_6", ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>();
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::BodyJointId Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::__ctor_b__7_0(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(),
                        {"<.ctor>b__7_0", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::BodyJointId>(this, ___internal_method, n);
}
template<typename TSourceJointId>
inline TSourceJointId Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::__ctor_b__7_1(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(),
                        {"<.ctor>b__7_1", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSourceJointId>(this, ___internal_method, n);
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::BodyJointId Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::__ctor_b__7_2(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(),
                        {"<.ctor>b__7_2", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::BodyJointId>(this, ___internal_method, n);
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::BodyJointId Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::__ctor_b__7_3(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(),
                        {"<.ctor>b__7_3", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::BodyJointId>(this, ___internal_method, n);
}
template<typename TSourceJointId>
inline TSourceJointId Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::__ctor_b__7_4(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(),
                        {"<.ctor>b__7_4", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSourceJointId>(this, ___internal_method, n);
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::BodyJointId Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::__ctor_b__7_5(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(),
                        {"<.ctor>b__7_5", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::BodyJointId>(this, ___internal_method, n);
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::BodyJointId Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::__ctor_b__7_6(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>(),
                        {"<.ctor>b__7_6", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::BodyJointId>(this, ___internal_method, n);
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*>());
}
// Ctor Parameters []
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>::BodySkeletonMapping_1___c()   {
}
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*& Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>::__cordl_internal_get_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>* const& Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>::__cordl_internal_get_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>::__cordl_internal_set_Root(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Root = value;
}
template<typename TSourceJointId>
constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*& Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>::__cordl_internal_get_Nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Nodes;
}
template<typename TSourceJointId>
constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>* const& Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>::__cordl_internal_get_Nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Nodes;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>::__cordl_internal_set_Nodes(::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Nodes = value;
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>::_ctor(TSourceJointId  root, ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>*  mapping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>*>(),
                        {".ctor", {}, {::i2c::type_of<TSourceJointId>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, mapping);
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>* Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>::New_ctor(TSourceJointId  root, ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>*  mapping)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>*>(root, mapping));
}
// Ctor Parameters []
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>::BodySkeletonMapping_1_SkeletonTree()   {
}
template<typename TSourceJointId>
constexpr TSourceJointId& Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_get_SourceJointId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SourceJointId;
}
template<typename TSourceJointId>
constexpr TSourceJointId const& Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_get_SourceJointId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SourceJointId;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_set_SourceJointId(TSourceJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SourceJointId = value;
}
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::BodyJointId& Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_get_BodyJointId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BodyJointId;
}
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::BodyJointId const& Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_get_BodyJointId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BodyJointId;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_set_BodyJointId(::Oculus::Interaction::Body::Input::BodyJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BodyJointId = value;
}
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*& Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_get_Parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parent;
}
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>* const& Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_get_Parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parent;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_set_Parent(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parent = value;
}
template<typename TSourceJointId>
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*& Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_get_Children()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Children;
}
template<typename TSourceJointId>
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>* const& Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_get_Children() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Children;
}
template<typename TSourceJointId>
constexpr void Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::__cordl_internal_set_Children(::System::Collections::Generic::List_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Children = value;
}
template<typename TSourceJointId>
inline void Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::_ctor(TSourceJointId  sourceJointId, ::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>(),
                        {".ctor", {}, {::i2c::type_of<TSourceJointId>(), ::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceJointId, bodyJointId);
}
template<typename TSourceJointId>
inline ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>* Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::New_ctor(TSourceJointId  sourceJointId, ::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>(sourceJointId, bodyJointId));
}
// Ctor Parameters []
template<typename TSourceJointId>
constexpr ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>::SkeletonTree_BodySkeletonMapping_1_Node()   {
}

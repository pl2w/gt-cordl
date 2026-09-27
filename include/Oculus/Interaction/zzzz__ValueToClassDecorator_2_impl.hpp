#pragma once
// IWYU pragma private; include "Oculus/Interaction/ValueToClassDecorator_2.hpp"
#include "Oculus/Interaction/zzzz__DecoratorBase_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__ValueToClassDecorator_2_def.hpp"
#include "Oculus/Interaction/zzzz__FinalAction_def.hpp"
#include "Oculus/Interaction/zzzz__ValueToClassDecorator_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
template<typename InstanceT,typename DecorationT>
constexpr ::System::Collections::Generic::Dictionary_2<InstanceT,::System::WeakReference_1<DecorationT>*>*& Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::__cordl_internal_get__instanceToDecoration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instanceToDecoration;
}
template<typename InstanceT,typename DecorationT>
constexpr ::System::Collections::Generic::Dictionary_2<InstanceT,::System::WeakReference_1<DecorationT>*>* const& Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::__cordl_internal_get__instanceToDecoration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instanceToDecoration;
}
template<typename InstanceT,typename DecorationT>
constexpr void Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::__cordl_internal_set__instanceToDecoration(::System::Collections::Generic::Dictionary_2<InstanceT,::System::WeakReference_1<DecorationT>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instanceToDecoration = value;
}
template<typename InstanceT,typename DecorationT>
constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<DecorationT,::Oculus::Interaction::FinalAction*>*& Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::__cordl_internal_get__cleanupActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cleanupActions;
}
template<typename InstanceT,typename DecorationT>
constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<DecorationT,::Oculus::Interaction::FinalAction*>* const& Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::__cordl_internal_get__cleanupActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cleanupActions;
}
template<typename InstanceT,typename DecorationT>
constexpr void Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::__cordl_internal_set__cleanupActions(::System::Runtime::CompilerServices::ConditionalWeakTable_2<DecorationT,::Oculus::Interaction::FinalAction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cleanupActions = value;
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::AddDecoration(InstanceT  instance, DecorationT  decoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*>(),
                        {"AddDecoration", {}, {::i2c::type_of<InstanceT>(), ::i2c::type_of<DecorationT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, decoration);
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::RemoveDecoration(InstanceT  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*>(),
                        {"RemoveDecoration", {}, {::i2c::type_of<InstanceT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename InstanceT,typename DecorationT>
inline bool Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::TryGetDecoration(InstanceT  instance, ::by_ref<DecorationT>  decoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*>(),
                        {"TryGetDecoration", {}, {::i2c::type_of<InstanceT>(), ::i2c::type_of<::by_ref<DecorationT>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, decoration);
}
template<typename InstanceT,typename DecorationT>
inline ::System::Threading::Tasks::Task_1<DecorationT>* Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::GetDecorationAsync(InstanceT  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*>(),
                        {"GetDecorationAsync", {}, {::i2c::type_of<InstanceT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<DecorationT>*>(this, ___internal_method, instance);
}
template<typename InstanceT,typename DecorationT>
inline ::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>* Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*>());
}
// Ctor Parameters []
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>::ValueToClassDecorator_2()   {
}
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*& Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>* const& Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename InstanceT,typename DecorationT>
constexpr void Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>::__cordl_internal_set___4__this(::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename InstanceT,typename DecorationT>
constexpr InstanceT& Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>::__cordl_internal_get_instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
template<typename InstanceT,typename DecorationT>
constexpr InstanceT const& Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>::__cordl_internal_get_instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
template<typename InstanceT,typename DecorationT>
constexpr void Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>::__cordl_internal_set_instance(InstanceT  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instance = value;
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>::_AddDecoration_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>*>(),
                        {"<AddDecoration>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename InstanceT,typename DecorationT>
inline ::Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>* Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>*>());
}
// Ctor Parameters []
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>::ValueToClassDecorator_2___c__DisplayClass3_0()   {
}

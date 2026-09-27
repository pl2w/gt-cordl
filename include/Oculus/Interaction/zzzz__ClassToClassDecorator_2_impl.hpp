#pragma once
// IWYU pragma private; include "Oculus/Interaction/ClassToClassDecorator_2.hpp"
#include "Oculus/Interaction/zzzz__DecoratorBase_2_impl.hpp"
#include "Oculus/Interaction/zzzz__ClassToClassDecorator_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template<typename InstanceT,typename DecorationT>
constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<InstanceT,DecorationT>*& Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>::__cordl_internal_get__instanceToDecoration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instanceToDecoration;
}
template<typename InstanceT,typename DecorationT>
constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<InstanceT,DecorationT>* const& Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>::__cordl_internal_get__instanceToDecoration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instanceToDecoration;
}
template<typename InstanceT,typename DecorationT>
constexpr void Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>::__cordl_internal_set__instanceToDecoration(::System::Runtime::CompilerServices::ConditionalWeakTable_2<InstanceT,DecorationT>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instanceToDecoration = value;
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>::AddDecoration(InstanceT  instance, DecorationT  decoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>*>(),
                        {"AddDecoration", {}, {::i2c::type_of<InstanceT>(), ::i2c::type_of<DecorationT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, decoration);
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>::RemoveDecoration(InstanceT  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>*>(),
                        {"RemoveDecoration", {}, {::i2c::type_of<InstanceT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename InstanceT,typename DecorationT>
inline bool Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>::TryGetDecoration(InstanceT  instance, ::by_ref<DecorationT>  decoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>*>(),
                        {"TryGetDecoration", {}, {::i2c::type_of<InstanceT>(), ::i2c::type_of<::by_ref<DecorationT>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, decoration);
}
template<typename InstanceT,typename DecorationT>
inline ::System::Threading::Tasks::Task_1<DecorationT>* Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>::GetDecorationAsync(InstanceT  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>*>(),
                        {"GetDecorationAsync", {}, {::i2c::type_of<InstanceT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<DecorationT>*>(this, ___internal_method, instance);
}
template<typename InstanceT,typename DecorationT>
inline ::Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>* Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>*>());
}
// Ctor Parameters []
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>::ClassToClassDecorator_2()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/DecoratorBase_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__DecoratorBase_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template<typename InstanceT,typename DecorationT>
constexpr ::System::Collections::Generic::Dictionary_2<InstanceT,::System::Threading::Tasks::TaskCompletionSource_1<DecorationT>*>*& Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>::__cordl_internal_get__instanceToCompletionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instanceToCompletionSource;
}
template<typename InstanceT,typename DecorationT>
constexpr ::System::Collections::Generic::Dictionary_2<InstanceT,::System::Threading::Tasks::TaskCompletionSource_1<DecorationT>*>* const& Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>::__cordl_internal_get__instanceToCompletionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instanceToCompletionSource;
}
template<typename InstanceT,typename DecorationT>
constexpr void Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>::__cordl_internal_set__instanceToCompletionSource(::System::Collections::Generic::Dictionary_2<InstanceT,::System::Threading::Tasks::TaskCompletionSource_1<DecorationT>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instanceToCompletionSource = value;
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>::CompleteAsynchronousRequests(InstanceT  instance, DecorationT  decoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>*>(),
                        {"CompleteAsynchronousRequests", {}, {::i2c::type_of<InstanceT>(), ::i2c::type_of<DecorationT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, decoration);
}
template<typename InstanceT,typename DecorationT>
inline ::System::Threading::Tasks::Task_1<DecorationT>* Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>::GetAsynchronousRequest(InstanceT  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>*>(),
                        {"GetAsynchronousRequest", {}, {::i2c::type_of<InstanceT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<DecorationT>*>(this, ___internal_method, instance);
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename InstanceT,typename DecorationT>
inline ::Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>* Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>*>());
}
// Ctor Parameters []
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>::DecoratorBase_2()   {
}

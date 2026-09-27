#pragma once
// IWYU pragma private; include "Oculus/Interaction/ClassToValueDecorator_2.hpp"
#include "Oculus/Interaction/zzzz__ClassToClassDecorator_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__ClassToValueDecorator_2_def.hpp"
#include "Oculus/Interaction/zzzz__ClassToValueDecorator_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>*& Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>::__cordl_internal_get__decorator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decorator;
}
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>* const& Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>::__cordl_internal_get__decorator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decorator;
}
template<typename InstanceT,typename DecorationT>
constexpr void Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>::__cordl_internal_set__decorator(::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decorator = value;
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>::AddDecoration(InstanceT  instance, DecorationT  decoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>*>(),
                        {"AddDecoration", {}, {::i2c::type_of<InstanceT>(), ::i2c::type_of<DecorationT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, decoration);
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>::RemoveDecoration(InstanceT  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>*>(),
                        {"RemoveDecoration", {}, {::i2c::type_of<InstanceT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename InstanceT,typename DecorationT>
inline bool Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>::TryGetDecoration(InstanceT  instance, ::by_ref<DecorationT>  decoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>*>(),
                        {"TryGetDecoration", {}, {::i2c::type_of<InstanceT>(), ::i2c::type_of<::by_ref<DecorationT>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance, decoration);
}
template<typename InstanceT,typename DecorationT>
inline ::System::Threading::Tasks::Task_1<DecorationT>* Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>::GetDecorationAsync(InstanceT  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>*>(),
                        {"GetDecorationAsync", {}, {::i2c::type_of<InstanceT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<DecorationT>*>(this, ___internal_method, instance);
}
template<typename InstanceT,typename DecorationT>
inline ::Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>* Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>*>());
}
// Ctor Parameters []
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>::ClassToValueDecorator_2()   {
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>::setStaticF___9(::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*, "<>9", ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*>(std::forward<::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*>(value));
}
template<typename InstanceT,typename DecorationT>
inline ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>* Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*, "<>9", ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*>();
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>::setStaticF___9__7_0(::System::Func_2<::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*,DecorationT>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*,DecorationT>*, "<>9__7_0", ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*>(std::forward<::System::Func_2<::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*,DecorationT>*>(value));
}
template<typename InstanceT,typename DecorationT>
inline ::System::Func_2<::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*,DecorationT>* Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*,DecorationT>*, "<>9__7_0", ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*>();
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename InstanceT,typename DecorationT>
inline DecorationT Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>::_GetDecorationAsync_b__7_0(::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*>(),
                        {"<GetDecorationAsync>b__7_0", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<DecorationT>(this, ___internal_method, wrapper);
}
template<typename InstanceT,typename DecorationT>
inline ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>* Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*>());
}
// Ctor Parameters []
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>::ClassToValueDecorator_2___c()   {
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename InstanceT,typename DecorationT>
inline ::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>* Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>*>());
}
// Ctor Parameters []
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>::ClassToValueDecorator_2_InternalDecorator()   {
}
template<typename InstanceT,typename DecorationT>
constexpr DecorationT& Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>::__cordl_internal_get__decoration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoration;
}
template<typename InstanceT,typename DecorationT>
constexpr DecorationT const& Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>::__cordl_internal_get__decoration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoration;
}
template<typename InstanceT,typename DecorationT>
constexpr void Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>::__cordl_internal_set__decoration(DecorationT  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decoration = value;
}
template<typename InstanceT,typename DecorationT>
inline void Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename InstanceT,typename DecorationT>
inline ::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>* Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>());
}
// Ctor Parameters []
template<typename InstanceT,typename DecorationT>
constexpr ::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>::ClassToValueDecorator_2_Wrapper()   {
}

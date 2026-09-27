#pragma once
// IWYU pragma private; include "Modio/ModioServices.hpp"
#include "Modio/zzzz__ModioServicePriority_impl.hpp"
#include "Modio/zzzz__ModioServices_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__ModioServices_def.hpp"
#include "Modio/zzzz__ModioServicePriority_def.hpp"
#include "Modio/zzzz__ModioServices_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::ModioServices.RemoveAllBindingsWithPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::ModioServicePriority)>(&::Modio::ModioServices::RemoveAllBindingsWithPriority)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xa01b6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices*>(),
                        {"RemoveAllBindingsWithPriority", {}, {::i2c::type_of<::Modio::ModioServicePriority>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::ModioServices::setStaticF_Bindings(::System::Collections::Generic::Dictionary_2<::System::Type*,::Modio::ModioServices_ServiceBindings*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Modio::ModioServices_ServiceBindings*>*, "Bindings", ::Modio::ModioServices*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::Modio::ModioServices_ServiceBindings*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Modio::ModioServices_ServiceBindings*>* Modio::ModioServices::getStaticF_Bindings()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Modio::ModioServices_ServiceBindings*>*, "Bindings", ::Modio::ModioServices*>();
}
template<typename T>
inline ::Modio::ModioServices_IBindType_1<T>* Modio::ModioServices::Bind()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices*>(),
                    {"Bind", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IBindType_1<T>*>(nullptr, ___internal_method);
}
template<typename T>
inline void Modio::ModioServices::BindInstance(T  instance, ::Modio::ModioServicePriority  priority)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices*>(),
                    {"BindInstance", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Modio::ModioServicePriority>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance, priority);
}
template<typename T>
inline void Modio::ModioServices::BindErrorMessage(::StringW  message, ::Modio::ModioServicePriority  priority)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices*>(),
                    {"BindErrorMessage", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::ModioServicePriority>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, priority);
}
inline void Modio::ModioServices::RemoveAllBindingsWithPriority(::Modio::ModioServicePriority  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices*>(),
                        {"RemoveAllBindingsWithPriority", {}, {::i2c::type_of<::Modio::ModioServicePriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, priority);
}
template<typename T>
inline T Modio::ModioServices::Resolve()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices*>(),
                    {"Resolve", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline bool Modio::ModioServices::TryResolve(::by_ref<T>  result)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices*>(),
                    {"TryResolve", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result);
}
template<typename T>
inline ::Modio::ModioServices_IResolveType_1<T>* Modio::ModioServices::GetBindings(bool  createIfMissing)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices*>(),
                    {"GetBindings", {::i2c::class_of<T>()}, {::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IResolveType_1<T>*>(nullptr, ___internal_method, createIfMissing);
}
template<typename T>
inline void Modio::ModioServices::AddBindingChangedListener(::System::Action_1<T>*  onNewValue, bool  fireImmediatelyIfValueBound)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices*>(),
                    {"AddBindingChangedListener", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onNewValue, fireImmediatelyIfValueBound);
}
template<typename T>
inline void Modio::ModioServices::RemoveBindingChangedListener(::System::Action_1<T>*  onNewValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices*>(),
                    {"RemoveBindingChangedListener", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onNewValue);
}
// Ctor Parameters []
constexpr ::Modio::ModioServices::ModioServices()   {
}
template<typename T>
constexpr ::StringW& Modio::ModioServices___c__DisplayClass3_0_1<T>::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
template<typename T>
constexpr ::StringW const& Modio::ModioServices___c__DisplayClass3_0_1<T>::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
template<typename T>
constexpr void Modio::ModioServices___c__DisplayClass3_0_1<T>::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
template<typename T>
inline void Modio::ModioServices___c__DisplayClass3_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices___c__DisplayClass3_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Modio::ModioServices___c__DisplayClass3_0_1<T>::_BindErrorMessage_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices___c__DisplayClass3_0_1<T>*>(),
                        {"<BindErrorMessage>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::Modio::ModioServices___c__DisplayClass3_0_1<T>* Modio::ModioServices___c__DisplayClass3_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioServices___c__DisplayClass3_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::ModioServices___c__DisplayClass3_0_1<T>::ModioServices___c__DisplayClass3_0_1()   {
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Modio::ModioServices_Binding_1<T>*>*& Modio::ModioServices_ServiceBindings_1<T>::__cordl_internal_get_Bindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bindings;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Modio::ModioServices_Binding_1<T>*>* const& Modio::ModioServices_ServiceBindings_1<T>::__cordl_internal_get_Bindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bindings;
}
template<typename T>
constexpr void Modio::ModioServices_ServiceBindings_1<T>::__cordl_internal_set_Bindings(::System::Collections::Generic::List_1<::Modio::ModioServices_Binding_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bindings = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& Modio::ModioServices_ServiceBindings_1<T>::__cordl_internal_get_OnNewBinding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNewBinding;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Modio::ModioServices_ServiceBindings_1<T>::__cordl_internal_get_OnNewBinding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNewBinding;
}
template<typename T>
constexpr void Modio::ModioServices_ServiceBindings_1<T>::__cordl_internal_set_OnNewBinding(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnNewBinding = value;
}
template<typename T>
inline int32_t Modio::ModioServices_ServiceBindings_1<T>::get_BindingCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Modio::ModioServices_ServiceBindings_1<T>::add_OnNewBinding(::System::Action_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                        {"add_OnNewBinding", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Modio::ModioServices_ServiceBindings_1<T>::remove_OnNewBinding(::System::Action_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                        {"remove_OnNewBinding", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_ServiceBindings_1<T>::FromInstance(T  value, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                        {"FromInstance", {}, {::i2c::type_of<T>(), ::i2c::type_of<::Modio::ModioServicePriority>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, value, priority, condition);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_ServiceBindings_1<T>::FromMethod(::System::Func_1<T>*  factory, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                        {"FromMethod", {}, {::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::Modio::ModioServicePriority>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, factory, priority, condition);
}
template<typename T>
template<typename TResolved>
requires(::cordl_internals::type_constraint<TResolved, T> && ::cordl_internals::default_constructor_constraint<TResolved>)
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_ServiceBindings_1<T>::FromNew(::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                    {"FromNew", {::i2c::class_of<TResolved>()}, {::i2c::type_of<::Modio::ModioServicePriority>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResolved>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, priority, condition);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_ServiceBindings_1<T>::FromNew(::System::Type*  type, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                        {"FromNew", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Modio::ModioServicePriority>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, type, priority, condition);
}
template<typename T>
template<typename TOther>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_ServiceBindings_1<T>::WithOtherBinding(::Modio::ModioServices_Binding_1<TOther>*  binding, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                    {"WithOtherBinding", {::i2c::class_of<TOther>()}, {::i2c::type_of<::Modio::ModioServices_Binding_1<TOther>*>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOther>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, binding, condition);
}
template<typename T>
template<typename TI1>
inline ::Modio::ModioServices_IBindType_1<T>* Modio::ModioServices_ServiceBindings_1<T>::WithInterfaces(::System::Func_1<bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                    {"WithInterfaces", {::i2c::class_of<TI1>()}, {::i2c::type_of<::System::Func_1<bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TI1>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IBindType_1<T>*>(this, ___internal_method, condition);
}
template<typename T>
template<typename TI1,typename TI2>
inline ::Modio::ModioServices_IBindType_1<T>* Modio::ModioServices_ServiceBindings_1<T>::WithInterfaces(::System::Func_1<bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                    {"WithInterfaces", {::i2c::class_of<TI1>(), ::i2c::class_of<TI2>()}, {::i2c::type_of<::System::Func_1<bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TI1>(), ::i2c::class_of<TI2>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IBindType_1<T>*>(this, ___internal_method, condition);
}
template<typename T>
template<typename TI1,typename TI2,typename TI3>
inline ::Modio::ModioServices_IBindType_1<T>* Modio::ModioServices_ServiceBindings_1<T>::WithInterfaces(::System::Func_1<bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                    {"WithInterfaces", {::i2c::class_of<TI1>(), ::i2c::class_of<TI2>(), ::i2c::class_of<TI3>()}, {::i2c::type_of<::System::Func_1<bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TI1>(), ::i2c::class_of<TI2>(), ::i2c::class_of<TI3>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IBindType_1<T>*>(this, ___internal_method, condition);
}
template<typename T>
inline void Modio::ModioServices_ServiceBindings_1<T>::RemoveAllWithPriority(::Modio::ModioServicePriority  priority)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priority);
}
template<typename T>
inline void Modio::ModioServices_ServiceBindings_1<T>::InvokeNewBindingIfHighestPriority(::Modio::ModioServicePriority  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                        {"InvokeNewBindingIfHighestPriority", {}, {::i2c::type_of<::Modio::ModioServicePriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priority);
}
template<typename T>
inline T Modio::ModioServices_ServiceBindings_1<T>::Resolve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                        {"Resolve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool Modio::ModioServices_ServiceBindings_1<T>::TryResolve(::by_ref<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                        {"TryResolve", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T,::Modio::ModioServicePriority>>* Modio::ModioServices_ServiceBindings_1<T>::ResolveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                        {"ResolveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T,::Modio::ModioServicePriority>>*>(this, ___internal_method);
}
template<typename T>
inline void Modio::ModioServices_ServiceBindings_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Modio::ModioServices_ServiceBindings_1<T>* Modio::ModioServices_ServiceBindings_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioServices_ServiceBindings_1<T>*>());
}
/// @brief Convert operator to "::Modio::ModioServices_IBindType_1<T>"
template<typename T>
constexpr  Modio::ModioServices_ServiceBindings_1<T>::operator ::Modio::ModioServices_IBindType_1<T>*() noexcept {
return static_cast<::Modio::ModioServices_IBindType_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::ModioServices_IBindType_1<T>"
template<typename T>
constexpr ::Modio::ModioServices_IBindType_1<T>* Modio::ModioServices_ServiceBindings_1<T>::i___Modio__ModioServices_IBindType_1_T_() noexcept {
return static_cast<::Modio::ModioServices_IBindType_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::ModioServices_IResolveType_1<T>"
template<typename T>
constexpr  Modio::ModioServices_ServiceBindings_1<T>::operator ::Modio::ModioServices_IResolveType_1<T>*() noexcept {
return static_cast<::Modio::ModioServices_IResolveType_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::ModioServices_IResolveType_1<T>"
template<typename T>
constexpr ::Modio::ModioServices_IResolveType_1<T>* Modio::ModioServices_ServiceBindings_1<T>::i___Modio__ModioServices_IResolveType_1_T_() noexcept {
return static_cast<::Modio::ModioServices_IResolveType_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::ModioServices_ServiceBindings_1<T>::ModioServices_ServiceBindings_1()   {
}
template<typename T>
constexpr ::System::Type*& Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
template<typename T>
constexpr ::System::Type* const& Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
template<typename T>
constexpr void Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
template<typename T>
inline void Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>::_FromNew_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>*>(),
                        {"<FromNew>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>* Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::ServiceBindings_1_ModioServices___c__DisplayClass9_0<T>::ServiceBindings_1_ModioServices___c__DisplayClass9_0()   {
}
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr ::System::Func_1<bool>*& Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>::__cordl_internal_get_condition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr ::System::Func_1<bool>* const& Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>::__cordl_internal_get_condition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr void Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>::__cordl_internal_set_condition(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___condition = value;
}
template<typename T,typename TI1,typename TI2,typename TI3>
inline void Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TI1,typename TI2,typename TI3>
inline void Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>::_WithInterfaces_b__0(::Modio::ModioServices_Binding_1<T>*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>*>(),
                        {"<WithInterfaces>b__0", {}, {::i2c::type_of<::Modio::ModioServices_Binding_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
template<typename T,typename TI1,typename TI2,typename TI3>
inline ::Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>* Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>*>());
}
// Ctor Parameters []
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr ::Modio::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3<T,TI1,TI2,TI3>::ServiceBindings_1_ModioServices___c__DisplayClass13_0_3()   {
}
template<typename T,typename TI1,typename TI2>
constexpr ::System::Func_1<bool>*& Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>::__cordl_internal_get_condition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1,typename TI2>
constexpr ::System::Func_1<bool>* const& Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>::__cordl_internal_get_condition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1,typename TI2>
constexpr void Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>::__cordl_internal_set_condition(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___condition = value;
}
template<typename T,typename TI1,typename TI2>
inline void Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TI1,typename TI2>
inline void Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>::_WithInterfaces_b__0(::Modio::ModioServices_Binding_1<T>*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>*>(),
                        {"<WithInterfaces>b__0", {}, {::i2c::type_of<::Modio::ModioServices_Binding_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
template<typename T,typename TI1,typename TI2>
inline ::Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>* Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>*>());
}
// Ctor Parameters []
template<typename T,typename TI1,typename TI2>
constexpr ::Modio::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2<T,TI1,TI2>::ServiceBindings_1_ModioServices___c__DisplayClass12_0_2()   {
}
template<typename T,typename TI1>
constexpr ::System::Func_1<bool>*& Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>::__cordl_internal_get_condition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1>
constexpr ::System::Func_1<bool>* const& Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>::__cordl_internal_get_condition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1>
constexpr void Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>::__cordl_internal_set_condition(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___condition = value;
}
template<typename T,typename TI1>
inline void Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TI1>
inline void Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>::_WithInterfaces_b__0(::Modio::ModioServices_Binding_1<T>*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>*>(),
                        {"<WithInterfaces>b__0", {}, {::i2c::type_of<::Modio::ModioServices_Binding_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
template<typename T,typename TI1>
inline ::Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>* Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>*>());
}
// Ctor Parameters []
template<typename T,typename TI1>
constexpr ::Modio::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1<T,TI1>::ServiceBindings_1_ModioServices___c__DisplayClass11_0_1()   {
}
template<typename T,typename TOther>
constexpr ::System::Func_1<bool>*& Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::__cordl_internal_get_condition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TOther>
constexpr ::System::Func_1<bool>* const& Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::__cordl_internal_get_condition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TOther>
constexpr void Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::__cordl_internal_set_condition(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___condition = value;
}
template<typename T,typename TOther>
constexpr ::Modio::ModioServices_Binding_1<TOther>*& Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::__cordl_internal_get_binding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binding;
}
template<typename T,typename TOther>
constexpr ::Modio::ModioServices_Binding_1<TOther>* const& Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::__cordl_internal_get_binding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binding;
}
template<typename T,typename TOther>
constexpr void Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::__cordl_internal_set_binding(::Modio::ModioServices_Binding_1<TOther>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___binding = value;
}
template<typename T,typename TOther>
inline void Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TOther>
inline bool Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::_WithOtherBinding_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>*>(),
                        {"<WithOtherBinding>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T,typename TOther>
inline T Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::_WithOtherBinding_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>*>(),
                        {"<WithOtherBinding>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T,typename TOther>
inline ::Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>* Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>*>());
}
// Ctor Parameters []
template<typename T,typename TOther>
constexpr ::Modio::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1<T,TOther>::ServiceBindings_1_ModioServices___c__DisplayClass10_0_1()   {
}
template<typename T,typename TResolved>
inline void Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>::setStaticF___9(::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*  value)  {
::cordl_internals::setStaticField<::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*, "<>9", ::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*>(std::forward<::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*>(value));
}
template<typename T,typename TResolved>
inline ::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>* Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*, "<>9", ::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*>();
}
template<typename T,typename TResolved>
inline void Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>::setStaticF___9__8_0(::System::Func_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<T>*, "<>9__8_0", ::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*>(std::forward<::System::Func_1<T>*>(value));
}
template<typename T,typename TResolved>
inline ::System::Func_1<T>* Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<T>*, "<>9__8_0", ::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*>();
}
template<typename T,typename TResolved>
inline void Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TResolved>
inline T Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>::_FromNew_b__8_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*>(),
                        {"<FromNew>b__8_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T,typename TResolved>
inline ::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>* Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>*>());
}
// Ctor Parameters []
template<typename T,typename TResolved>
constexpr ::Modio::ServiceBindings_1_ModioServices___c__8_1<T,TResolved>::ServiceBindings_1_ModioServices___c__8_1()   {
}
template<typename T>
inline void Modio::ServiceBindings_1_ModioServices___c<T>::setStaticF___9(::Modio::ServiceBindings_1_ModioServices___c<T>*  value)  {
::cordl_internals::setStaticField<::Modio::ServiceBindings_1_ModioServices___c<T>*, "<>9", ::Modio::ServiceBindings_1_ModioServices___c<T>*>(std::forward<::Modio::ServiceBindings_1_ModioServices___c<T>*>(value));
}
template<typename T>
inline ::Modio::ServiceBindings_1_ModioServices___c<T>* Modio::ServiceBindings_1_ModioServices___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::ServiceBindings_1_ModioServices___c<T>*, "<>9", ::Modio::ServiceBindings_1_ModioServices___c<T>*>();
}
template<typename T>
inline void Modio::ServiceBindings_1_ModioServices___c<T>::setStaticF___9__19_0(::System::Func_2<::Modio::ModioServices_Binding_1<T>*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::ModioServices_Binding_1<T>*,bool>*, "<>9__19_0", ::Modio::ServiceBindings_1_ModioServices___c<T>*>(std::forward<::System::Func_2<::Modio::ModioServices_Binding_1<T>*,bool>*>(value));
}
template<typename T>
inline ::System::Func_2<::Modio::ModioServices_Binding_1<T>*,bool>* Modio::ServiceBindings_1_ModioServices___c<T>::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::ModioServices_Binding_1<T>*,bool>*, "<>9__19_0", ::Modio::ServiceBindings_1_ModioServices___c<T>*>();
}
template<typename T>
inline void Modio::ServiceBindings_1_ModioServices___c<T>::setStaticF___9__19_1(::System::Func_2<::Modio::ModioServices_Binding_1<T>*,::System::ValueTuple_2<T,::Modio::ModioServicePriority>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::ModioServices_Binding_1<T>*,::System::ValueTuple_2<T,::Modio::ModioServicePriority>>*, "<>9__19_1", ::Modio::ServiceBindings_1_ModioServices___c<T>*>(std::forward<::System::Func_2<::Modio::ModioServices_Binding_1<T>*,::System::ValueTuple_2<T,::Modio::ModioServicePriority>>*>(value));
}
template<typename T>
inline ::System::Func_2<::Modio::ModioServices_Binding_1<T>*,::System::ValueTuple_2<T,::Modio::ModioServicePriority>>* Modio::ServiceBindings_1_ModioServices___c<T>::getStaticF___9__19_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::ModioServices_Binding_1<T>*,::System::ValueTuple_2<T,::Modio::ModioServicePriority>>*, "<>9__19_1", ::Modio::ServiceBindings_1_ModioServices___c<T>*>();
}
template<typename T>
inline void Modio::ServiceBindings_1_ModioServices___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Modio::ServiceBindings_1_ModioServices___c<T>::_ResolveAll_b__19_0(::Modio::ModioServices_Binding_1<T>*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c<T>*>(),
                        {"<ResolveAll>b__19_0", {}, {::i2c::type_of<::Modio::ModioServices_Binding_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, b);
}
template<typename T>
inline ::System::ValueTuple_2<T,::Modio::ModioServicePriority> Modio::ServiceBindings_1_ModioServices___c<T>::_ResolveAll_b__19_1(::Modio::ModioServices_Binding_1<T>*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices___c<T>*>(),
                        {"<ResolveAll>b__19_1", {}, {::i2c::type_of<::Modio::ModioServices_Binding_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T,::Modio::ModioServicePriority>>(this, ___internal_method, b);
}
template<typename T>
inline ::Modio::ServiceBindings_1_ModioServices___c<T>* Modio::ServiceBindings_1_ModioServices___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ServiceBindings_1_ModioServices___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::ServiceBindings_1_ModioServices___c<T>::ServiceBindings_1_ModioServices___c()   {
}
template<typename T>
constexpr ::Modio::ModioServices_ServiceBindings_1<T>*& Modio::ServiceBindings_1_ModioServices_MultiBind<T>::__cordl_internal_get__coreBinding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coreBinding;
}
template<typename T>
constexpr ::Modio::ModioServices_ServiceBindings_1<T>* const& Modio::ServiceBindings_1_ModioServices_MultiBind<T>::__cordl_internal_get__coreBinding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coreBinding;
}
template<typename T>
constexpr void Modio::ServiceBindings_1_ModioServices_MultiBind<T>::__cordl_internal_set__coreBinding(::Modio::ModioServices_ServiceBindings_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coreBinding = value;
}
template<typename T>
constexpr ::System::Action_1<::Modio::ModioServices_Binding_1<T>*>*& Modio::ServiceBindings_1_ModioServices_MultiBind<T>::__cordl_internal_get__afterBinding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____afterBinding;
}
template<typename T>
constexpr ::System::Action_1<::Modio::ModioServices_Binding_1<T>*>* const& Modio::ServiceBindings_1_ModioServices_MultiBind<T>::__cordl_internal_get__afterBinding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____afterBinding;
}
template<typename T>
constexpr void Modio::ServiceBindings_1_ModioServices_MultiBind<T>::__cordl_internal_set__afterBinding(::System::Action_1<::Modio::ModioServices_Binding_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____afterBinding = value;
}
template<typename T>
inline void Modio::ServiceBindings_1_ModioServices_MultiBind<T>::_ctor(::Modio::ModioServices_ServiceBindings_1<T>*  coreBinding, ::System::Action_1<::Modio::ModioServices_Binding_1<T>*>*  afterBinding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::ModioServices_ServiceBindings_1<T>*>(), ::i2c::type_of<::System::Action_1<::Modio::ModioServices_Binding_1<T>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coreBinding, afterBinding);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::FromInstance(T  value, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(),
                        {"FromInstance", {}, {::i2c::type_of<T>(), ::i2c::type_of<::Modio::ModioServicePriority>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, value, priority, condition);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::FromMethod(::System::Func_1<T>*  factory, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(),
                        {"FromMethod", {}, {::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::Modio::ModioServicePriority>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, factory, priority, condition);
}
template<typename T>
template<typename TResolved>
requires(::cordl_internals::type_constraint<TResolved, T> && ::cordl_internals::default_constructor_constraint<TResolved>)
inline ::Modio::ModioServices_Binding_1<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::FromNew(::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(),
                    {"FromNew", {::i2c::class_of<TResolved>()}, {::i2c::type_of<::Modio::ModioServicePriority>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResolved>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, priority, condition);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::FromNew(::System::Type*  type, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(),
                        {"FromNew", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Modio::ModioServicePriority>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, type, priority, condition);
}
template<typename T>
template<typename TOther>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::WithOtherBinding(::Modio::ModioServices_Binding_1<TOther>*  binding, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(),
                    {"WithOtherBinding", {::i2c::class_of<TOther>()}, {::i2c::type_of<::Modio::ModioServices_Binding_1<TOther>*>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOther>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, binding, condition);
}
template<typename T>
template<typename TI1>
inline ::Modio::ModioServices_IBindType_1<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::WithInterfaces(::System::Func_1<bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(),
                    {"WithInterfaces", {::i2c::class_of<TI1>()}, {::i2c::type_of<::System::Func_1<bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TI1>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IBindType_1<T>*>(this, ___internal_method, condition);
}
template<typename T>
template<typename TI1,typename TI2>
inline ::Modio::ModioServices_IBindType_1<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::WithInterfaces(::System::Func_1<bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(),
                    {"WithInterfaces", {::i2c::class_of<TI1>(), ::i2c::class_of<TI2>()}, {::i2c::type_of<::System::Func_1<bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TI1>(), ::i2c::class_of<TI2>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IBindType_1<T>*>(this, ___internal_method, condition);
}
template<typename T>
template<typename TI1,typename TI2,typename TI3>
inline ::Modio::ModioServices_IBindType_1<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::WithInterfaces(::System::Func_1<bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(),
                    {"WithInterfaces", {::i2c::class_of<TI1>(), ::i2c::class_of<TI2>(), ::i2c::class_of<TI3>()}, {::i2c::type_of<::System::Func_1<bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TI1>(), ::i2c::class_of<TI2>(), ::i2c::class_of<TI3>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IBindType_1<T>*>(this, ___internal_method, condition);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::BindWith(::Modio::ModioServices_Binding_1<T>*  core)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(),
                        {"BindWith", {}, {::i2c::type_of<::Modio::ModioServices_Binding_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, core);
}
template<typename T>
inline ::Modio::ServiceBindings_1_ModioServices_MultiBind<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::New_ctor(::Modio::ModioServices_ServiceBindings_1<T>*  coreBinding, ::System::Action_1<::Modio::ModioServices_Binding_1<T>*>*  afterBinding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*>(coreBinding, afterBinding));
}
/// @brief Convert operator to "::Modio::ModioServices_IBindType_1<T>"
template<typename T>
constexpr  Modio::ServiceBindings_1_ModioServices_MultiBind<T>::operator ::Modio::ModioServices_IBindType_1<T>*() noexcept {
return static_cast<::Modio::ModioServices_IBindType_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::ModioServices_IBindType_1<T>"
template<typename T>
constexpr ::Modio::ModioServices_IBindType_1<T>* Modio::ServiceBindings_1_ModioServices_MultiBind<T>::i___Modio__ModioServices_IBindType_1_T_() noexcept {
return static_cast<::Modio::ModioServices_IBindType_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::ServiceBindings_1_ModioServices_MultiBind<T>::ServiceBindings_1_ModioServices_MultiBind()   {
}
template<typename T,typename TI1,typename TI2>
constexpr ::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T,typename TI1,typename TI2>
constexpr ::Modio::ServiceBindings_1_ModioServices_MultiBind<T>* const& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T,typename TI1,typename TI2>
constexpr void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>::__cordl_internal_set___4__this(::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T,typename TI1,typename TI2>
constexpr ::System::Func_1<bool>*& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>::__cordl_internal_get_condition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1,typename TI2>
constexpr ::System::Func_1<bool>* const& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>::__cordl_internal_get_condition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1,typename TI2>
constexpr void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>::__cordl_internal_set_condition(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___condition = value;
}
template<typename T,typename TI1,typename TI2>
inline void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TI1,typename TI2>
inline void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>::_WithInterfaces_b__0(::Modio::ModioServices_Binding_1<T>*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>*>(),
                        {"<WithInterfaces>b__0", {}, {::i2c::type_of<::Modio::ModioServices_Binding_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
template<typename T,typename TI1,typename TI2>
inline ::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>* Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>*>());
}
// Ctor Parameters []
template<typename T,typename TI1,typename TI2>
constexpr ::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2<T,TI1,TI2>::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass9_0_2()   {
}
template<typename T,typename TI1>
constexpr ::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T,typename TI1>
constexpr ::Modio::ServiceBindings_1_ModioServices_MultiBind<T>* const& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T,typename TI1>
constexpr void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>::__cordl_internal_set___4__this(::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T,typename TI1>
constexpr ::System::Func_1<bool>*& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>::__cordl_internal_get_condition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1>
constexpr ::System::Func_1<bool>* const& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>::__cordl_internal_get_condition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1>
constexpr void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>::__cordl_internal_set_condition(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___condition = value;
}
template<typename T,typename TI1>
inline void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TI1>
inline void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>::_WithInterfaces_b__0(::Modio::ModioServices_Binding_1<T>*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>*>(),
                        {"<WithInterfaces>b__0", {}, {::i2c::type_of<::Modio::ModioServices_Binding_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
template<typename T,typename TI1>
inline ::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>* Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>*>());
}
// Ctor Parameters []
template<typename T,typename TI1>
constexpr ::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1<T,TI1>::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass8_0_1()   {
}
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr ::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr ::Modio::ServiceBindings_1_ModioServices_MultiBind<T>* const& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>::__cordl_internal_set___4__this(::Modio::ServiceBindings_1_ModioServices_MultiBind<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr ::System::Func_1<bool>*& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>::__cordl_internal_get_condition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr ::System::Func_1<bool>* const& Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>::__cordl_internal_get_condition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___condition;
}
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>::__cordl_internal_set_condition(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___condition = value;
}
template<typename T,typename TI1,typename TI2,typename TI3>
inline void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TI1,typename TI2,typename TI3>
inline void Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>::_WithInterfaces_b__0(::Modio::ModioServices_Binding_1<T>*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>*>(),
                        {"<WithInterfaces>b__0", {}, {::i2c::type_of<::Modio::ModioServices_Binding_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
template<typename T,typename TI1,typename TI2,typename TI3>
inline ::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>* Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>*>());
}
// Ctor Parameters []
template<typename T,typename TI1,typename TI2,typename TI3>
constexpr ::Modio::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3<T,TI1,TI2,TI3>::MultiBind_ServiceBindings_1_ModioServices___c__DisplayClass10_0_3()   {
}
template<typename T>
constexpr ::Modio::ModioServicePriority& Modio::ModioServices_Binding_1<T>::__cordl_internal_get_Priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
template<typename T>
constexpr ::Modio::ModioServicePriority const& Modio::ModioServices_Binding_1<T>::__cordl_internal_get_Priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
template<typename T>
constexpr void Modio::ModioServices_Binding_1<T>::__cordl_internal_set_Priority(::Modio::ModioServicePriority  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Priority = value;
}
template<typename T>
constexpr ::System::Func_1<bool>*& Modio::ModioServices_Binding_1<T>::__cordl_internal_get_Condition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Condition;
}
template<typename T>
constexpr ::System::Func_1<bool>* const& Modio::ModioServices_Binding_1<T>::__cordl_internal_get_Condition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Condition;
}
template<typename T>
constexpr void Modio::ModioServices_Binding_1<T>::__cordl_internal_set_Condition(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Condition = value;
}
template<typename T>
constexpr ::System::Func_1<T>*& Modio::ModioServices_Binding_1<T>::__cordl_internal_get__factory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factory;
}
template<typename T>
constexpr ::System::Func_1<T>* const& Modio::ModioServices_Binding_1<T>::__cordl_internal_get__factory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factory;
}
template<typename T>
constexpr void Modio::ModioServices_Binding_1<T>::__cordl_internal_set__factory(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____factory = value;
}
template<typename T>
constexpr T& Modio::ModioServices_Binding_1<T>::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
template<typename T>
constexpr T const& Modio::ModioServices_Binding_1<T>::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
template<typename T>
constexpr void Modio::ModioServices_Binding_1<T>::__cordl_internal_set__value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
template<typename T>
constexpr bool& Modio::ModioServices_Binding_1<T>::__cordl_internal_get__runningFactoryMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningFactoryMethod;
}
template<typename T>
constexpr bool const& Modio::ModioServices_Binding_1<T>::__cordl_internal_get__runningFactoryMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningFactoryMethod;
}
template<typename T>
constexpr void Modio::ModioServices_Binding_1<T>::__cordl_internal_set__runningFactoryMethod(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runningFactoryMethod = value;
}
template<typename T>
inline void Modio::ModioServices_Binding_1<T>::_ctor(T  value, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_Binding_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<::Modio::ModioServicePriority>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, priority, condition);
}
template<typename T>
inline void Modio::ModioServices_Binding_1<T>::_ctor(::System::Func_1<T>*  factory, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_Binding_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::Modio::ModioServicePriority>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factory, priority, condition);
}
template<typename T>
inline T Modio::ModioServices_Binding_1<T>::Resolve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_Binding_1<T>*>(),
                        {"Resolve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_Binding_1<T>::New_ctor(T  value, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioServices_Binding_1<T>*>(value, priority, condition));
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_Binding_1<T>::New_ctor(::System::Func_1<T>*  factory, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioServices_Binding_1<T>*>(factory, priority, condition));
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::ModioServices_Binding_1<T>::ModioServices_Binding_1()   {
}
//  Writing Method size for method: ::Modio::ModioServices_ServiceBindings.RemoveAllWithPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioServices_ServiceBindings::*)(::Modio::ModioServicePriority)>(&::Modio::ModioServices_ServiceBindings::RemoveAllWithPriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices_ServiceBindings*>(),
                    {::i2c::class_of<::Modio::ModioServices_ServiceBindings*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioServices_ServiceBindings.get_BindingCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::ModioServices_ServiceBindings::*)()>(&::Modio::ModioServices_ServiceBindings::get_BindingCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioServices_ServiceBindings*>(),
                    {::i2c::class_of<::Modio::ModioServices_ServiceBindings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioServices_ServiceBindings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioServices_ServiceBindings::*)()>(&::Modio::ModioServices_ServiceBindings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01ba2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::ModioServices_ServiceBindings::RemoveAllWithPriority(::Modio::ModioServicePriority  priority)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_ServiceBindings*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priority);
}
inline int32_t Modio::ModioServices_ServiceBindings::get_BindingCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_ServiceBindings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::ModioServices_ServiceBindings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioServices_ServiceBindings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::ModioServices_ServiceBindings* Modio::ModioServices_ServiceBindings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioServices_ServiceBindings*>());
}
// Ctor Parameters []
constexpr ::Modio::ModioServices_ServiceBindings::ModioServices_ServiceBindings()   {
}
template<typename T>
inline T Modio::ModioServices_IResolveType_1<T>::Resolve()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_IResolveType_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool Modio::ModioServices_IResolveType_1<T>::TryResolve(::by_ref<T>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_IResolveType_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename T>
inline void Modio::ModioServices_IResolveType_1<T>::add_OnNewBinding(::System::Action_1<T>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_IResolveType_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Modio::ModioServices_IResolveType_1<T>::remove_OnNewBinding(::System::Action_1<T>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_IResolveType_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T,::Modio::ModioServicePriority>>* Modio::ModioServices_IResolveType_1<T>::ResolveAll()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_IResolveType_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T,::Modio::ModioServicePriority>>*>(this, ___internal_method);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_IBindType_1<T>::FromInstance(T  value, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_IBindType_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, value, priority, condition);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_IBindType_1<T>::FromMethod(::System::Func_1<T>*  factory, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_IBindType_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, factory, priority, condition);
}
template<typename T>
template<typename TResolved>
requires(::cordl_internals::type_constraint<TResolved, T> && ::cordl_internals::default_constructor_constraint<TResolved>)
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_IBindType_1<T>::FromNew(::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Modio::ModioServices_IBindType_1<T>*>(), 2}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TResolved>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, priority, condition);
}
template<typename T>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_IBindType_1<T>::FromNew(::System::Type*  type, ::Modio::ModioServicePriority  priority, ::System::Func_1<bool>*  condition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioServices_IBindType_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, type, priority, condition);
}
template<typename T>
template<typename TOther>
inline ::Modio::ModioServices_Binding_1<T>* Modio::ModioServices_IBindType_1<T>::WithOtherBinding(::Modio::ModioServices_Binding_1<TOther>*  binding, ::System::Func_1<bool>*  condition)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Modio::ModioServices_IBindType_1<T>*>(), 4}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TOther>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_Binding_1<T>*>(this, ___internal_method, binding, condition);
}
template<typename T>
template<typename TI1>
inline ::Modio::ModioServices_IBindType_1<T>* Modio::ModioServices_IBindType_1<T>::WithInterfaces(::System::Func_1<bool>*  condition)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Modio::ModioServices_IBindType_1<T>*>(), 5}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TI1>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IBindType_1<T>*>(this, ___internal_method, condition);
}
template<typename T>
template<typename TI1,typename TI2>
inline ::Modio::ModioServices_IBindType_1<T>* Modio::ModioServices_IBindType_1<T>::WithInterfaces(::System::Func_1<bool>*  condition)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Modio::ModioServices_IBindType_1<T>*>(), 6}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TI1>(), ::i2c::class_of<TI2>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IBindType_1<T>*>(this, ___internal_method, condition);
}
template<typename T>
template<typename TI1,typename TI2,typename TI3>
inline ::Modio::ModioServices_IBindType_1<T>* Modio::ModioServices_IBindType_1<T>::WithInterfaces(::System::Func_1<bool>*  condition)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Modio::ModioServices_IBindType_1<T>*>(), 7}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TI1>(), ::i2c::class_of<TI2>(), ::i2c::class_of<TI3>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServices_IBindType_1<T>*>(this, ___internal_method, condition);
}

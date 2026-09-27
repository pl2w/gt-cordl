#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDiCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiCollection_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiCollection_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiServiceRegistration_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckServiceProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiCollection.GetRegistrations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>* (::Liv::Lck::DependencyInjection::LckDiCollection::*)()>(&::Liv::Lck::DependencyInjection::LckDiCollection::GetRegistrations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d34700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                        {"GetRegistrations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiCollection.GetRegistration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::DependencyInjection::LckDiServiceRegistration* (::Liv::Lck::DependencyInjection::LckDiCollection::*)(::System::Type*)>(&::Liv::Lck::DependencyInjection::LckDiCollection::GetRegistration)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d34708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                        {"GetRegistration", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiCollection.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::DependencyInjection::LckServiceProvider* (::Liv::Lck::DependencyInjection::LckDiCollection::*)()>(&::Liv::Lck::DependencyInjection::LckDiCollection::Build)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9d34778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                        {"Build", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckDiCollection::*)()>(&::Liv::Lck::DependencyInjection::LckDiCollection::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d348dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*& Liv::Lck::DependencyInjection::LckDiCollection::__cordl_internal_get__registrations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registrations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>* const& Liv::Lck::DependencyInjection::LckDiCollection::__cordl_internal_get__registrations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registrations;
}
constexpr void Liv::Lck::DependencyInjection::LckDiCollection::__cordl_internal_set__registrations(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____registrations = value;
}
template<typename TService,typename TImplementation>
requires(::cordl_internals::reference_type_constraint<TService> && ::cordl_internals::type_constraint<TImplementation, TService>)
inline void Liv::Lck::DependencyInjection::LckDiCollection::AddTransient()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                    {"AddTransient", {::i2c::class_of<TService>(), ::i2c::class_of<TImplementation>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>(), ::i2c::class_of<TImplementation>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TService>
requires(::cordl_internals::reference_type_constraint<TService>)
inline void Liv::Lck::DependencyInjection::LckDiCollection::AddTransientFactory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  factory)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                    {"AddTransientFactory", {::i2c::class_of<TService>()}, {::i2c::type_of<::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factory);
}
template<typename TService,typename TImplementation>
requires(::cordl_internals::reference_type_constraint<TService> && ::cordl_internals::type_constraint<TImplementation, TService>)
inline void Liv::Lck::DependencyInjection::LckDiCollection::AddSingleton()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                    {"AddSingleton", {::i2c::class_of<TService>(), ::i2c::class_of<TImplementation>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>(), ::i2c::class_of<TImplementation>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TService>
requires(::cordl_internals::reference_type_constraint<TService>)
inline void Liv::Lck::DependencyInjection::LckDiCollection::AddSingletonFactory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  factory)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                    {"AddSingletonFactory", {::i2c::class_of<TService>()}, {::i2c::type_of<::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factory);
}
template<typename TService>
requires(::cordl_internals::reference_type_constraint<TService>)
inline void Liv::Lck::DependencyInjection::LckDiCollection::AddSingleton(TService  instance)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                    {"AddSingleton", {::i2c::class_of<TService>()}, {::i2c::type_of<TService>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename TService,typename TForwardTo>
requires(::cordl_internals::reference_type_constraint<TService> && ::cordl_internals::type_constraint<TForwardTo, TService> && ::cordl_internals::reference_type_constraint<TForwardTo>)
inline void Liv::Lck::DependencyInjection::LckDiCollection::AddSingletonForward()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                    {"AddSingletonForward", {::i2c::class_of<TService>(), ::i2c::class_of<TForwardTo>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>(), ::i2c::class_of<TForwardTo>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>* Liv::Lck::DependencyInjection::LckDiCollection::GetRegistrations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                        {"GetRegistrations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*>(this, ___internal_method);
}
inline ::Liv::Lck::DependencyInjection::LckDiServiceRegistration* Liv::Lck::DependencyInjection::LckDiCollection::GetRegistration(::System::Type*  serviceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                        {"GetRegistration", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>(this, ___internal_method, serviceType);
}
inline ::Liv::Lck::DependencyInjection::LckServiceProvider* Liv::Lck::DependencyInjection::LckDiCollection::Build()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                        {"Build", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::DependencyInjection::LckServiceProvider*>(this, ___internal_method);
}
inline void Liv::Lck::DependencyInjection::LckDiCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::DependencyInjection::LckDiCollection* Liv::Lck::DependencyInjection::LckDiCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::LckDiCollection*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::DependencyInjection::LckDiCollection::LckDiCollection()   {
}
template<typename TService>
constexpr ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*& Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>::__cordl_internal_get_factory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factory;
}
template<typename TService>
constexpr ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>* const& Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>::__cordl_internal_get_factory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factory;
}
template<typename TService>
constexpr void Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>::__cordl_internal_set_factory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___factory = value;
}
template<typename TService>
inline void Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TService>
inline ::System::Object* Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>::_AddSingletonFactory_b__0(::Liv::Lck::DependencyInjection::LckServiceProvider*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>*>(),
                        {"<AddSingletonFactory>b__0", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, p);
}
template<typename TService>
inline ::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>* Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>*>());
}
// Ctor Parameters []
template<typename TService>
constexpr ::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>::LckDiCollection___c__DisplayClass4_0_1()   {
}
template<typename TService>
constexpr ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*& Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>::__cordl_internal_get_factory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factory;
}
template<typename TService>
constexpr ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>* const& Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>::__cordl_internal_get_factory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factory;
}
template<typename TService>
constexpr void Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>::__cordl_internal_set_factory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___factory = value;
}
template<typename TService>
inline void Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TService>
inline ::System::Object* Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>::_AddTransientFactory_b__0(::Liv::Lck::DependencyInjection::LckServiceProvider*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>*>(),
                        {"<AddTransientFactory>b__0", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, p);
}
template<typename TService>
inline ::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>* Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>*>());
}
// Ctor Parameters []
template<typename TService>
constexpr ::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>::LckDiCollection___c__DisplayClass2_0_1()   {
}

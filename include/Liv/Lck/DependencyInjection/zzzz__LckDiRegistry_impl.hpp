#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDiRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiRegistry_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiCollection_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiServiceRegistration_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckMonoBehaviourDependencyInjector_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckServiceProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiRegistry.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::DependencyInjection::LckDiRegistry* (*)()>(&::Liv::Lck::DependencyInjection::LckDiRegistry::get_Instance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d34aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiRegistry.GetInjector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector* (::Liv::Lck::DependencyInjection::LckDiRegistry::*)()>(&::Liv::Lck::DependencyInjection::LckDiRegistry::GetInjector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d35070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {"GetInjector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiRegistry.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckDiRegistry::*)()>(&::Liv::Lck::DependencyInjection::LckDiRegistry::Build)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9d34de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {"Build", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiRegistry.GetRegistrations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>* (::Liv::Lck::DependencyInjection::LckDiRegistry::*)()>(&::Liv::Lck::DependencyInjection::LckDiRegistry::GetRegistrations)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d350a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {"GetRegistrations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiRegistry.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckDiRegistry::*)()>(&::Liv::Lck::DependencyInjection::LckDiRegistry::Reset)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x9d34be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckDiRegistry::*)()>(&::Liv::Lck::DependencyInjection::LckDiRegistry::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d35008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::DependencyInjection::LckDiCollection*& Liv::Lck::DependencyInjection::LckDiRegistry::__cordl_internal_get__collection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collection;
}
constexpr ::Liv::Lck::DependencyInjection::LckDiCollection* const& Liv::Lck::DependencyInjection::LckDiRegistry::__cordl_internal_get__collection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collection;
}
constexpr void Liv::Lck::DependencyInjection::LckDiRegistry::__cordl_internal_set__collection(::Liv::Lck::DependencyInjection::LckDiCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collection = value;
}
constexpr ::Liv::Lck::DependencyInjection::LckServiceProvider*& Liv::Lck::DependencyInjection::LckDiRegistry::__cordl_internal_get__provider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____provider;
}
constexpr ::Liv::Lck::DependencyInjection::LckServiceProvider* const& Liv::Lck::DependencyInjection::LckDiRegistry::__cordl_internal_get__provider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____provider;
}
constexpr void Liv::Lck::DependencyInjection::LckDiRegistry::__cordl_internal_set__provider(::Liv::Lck::DependencyInjection::LckServiceProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____provider = value;
}
constexpr ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*& Liv::Lck::DependencyInjection::LckDiRegistry::__cordl_internal_get__lckMonoBehaviourDependencyInjector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckMonoBehaviourDependencyInjector;
}
constexpr ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector* const& Liv::Lck::DependencyInjection::LckDiRegistry::__cordl_internal_get__lckMonoBehaviourDependencyInjector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckMonoBehaviourDependencyInjector;
}
constexpr void Liv::Lck::DependencyInjection::LckDiRegistry::__cordl_internal_set__lckMonoBehaviourDependencyInjector(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckMonoBehaviourDependencyInjector = value;
}
inline void Liv::Lck::DependencyInjection::LckDiRegistry::setStaticF__instance(::Liv::Lck::DependencyInjection::LckDiRegistry*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::DependencyInjection::LckDiRegistry*, "_instance", ::Liv::Lck::DependencyInjection::LckDiRegistry*>(std::forward<::Liv::Lck::DependencyInjection::LckDiRegistry*>(value));
}
inline ::Liv::Lck::DependencyInjection::LckDiRegistry* Liv::Lck::DependencyInjection::LckDiRegistry::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Liv::Lck::DependencyInjection::LckDiRegistry*, "_instance", ::Liv::Lck::DependencyInjection::LckDiRegistry*>();
}
inline ::Liv::Lck::DependencyInjection::LckDiRegistry* Liv::Lck::DependencyInjection::LckDiRegistry::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::DependencyInjection::LckDiRegistry*>(nullptr, ___internal_method);
}
template<typename TService,typename TImplementation>
requires(::cordl_internals::reference_type_constraint<TService> && ::cordl_internals::type_constraint<TImplementation, TService>)
inline void Liv::Lck::DependencyInjection::LckDiRegistry::AddTransient()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
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
inline void Liv::Lck::DependencyInjection::LckDiRegistry::AddTransientFactory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  factory)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
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
inline void Liv::Lck::DependencyInjection::LckDiRegistry::AddSingleton()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
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
inline void Liv::Lck::DependencyInjection::LckDiRegistry::AddSingleton(TService  instance)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                    {"AddSingleton", {::i2c::class_of<TService>()}, {::i2c::type_of<TService>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename TService>
requires(::cordl_internals::reference_type_constraint<TService>)
inline void Liv::Lck::DependencyInjection::LckDiRegistry::AddSingletonFactory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  factory)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                    {"AddSingletonFactory", {::i2c::class_of<TService>()}, {::i2c::type_of<::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factory);
}
template<typename TService,typename TForwardTo>
requires(::cordl_internals::reference_type_constraint<TService> && ::cordl_internals::type_constraint<TForwardTo, TService> && ::cordl_internals::reference_type_constraint<TForwardTo>)
inline void Liv::Lck::DependencyInjection::LckDiRegistry::AddSingletonForward()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                    {"AddSingletonForward", {::i2c::class_of<TService>(), ::i2c::class_of<TForwardTo>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>(), ::i2c::class_of<TForwardTo>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T Liv::Lck::DependencyInjection::LckDiRegistry::GetService()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                    {"GetService", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline bool Liv::Lck::DependencyInjection::LckDiRegistry::HasService()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                    {"HasService", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector* Liv::Lck::DependencyInjection::LckDiRegistry::GetInjector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {"GetInjector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*>(this, ___internal_method);
}
inline void Liv::Lck::DependencyInjection::LckDiRegistry::Build()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {"Build", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>* Liv::Lck::DependencyInjection::LckDiRegistry::GetRegistrations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {"GetRegistrations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*>(this, ___internal_method);
}
inline void Liv::Lck::DependencyInjection::LckDiRegistry::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::DependencyInjection::LckDiRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiRegistry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::DependencyInjection::LckDiRegistry* Liv::Lck::DependencyInjection::LckDiRegistry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::LckDiRegistry*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::DependencyInjection::LckDiRegistry::LckDiRegistry()   {
}

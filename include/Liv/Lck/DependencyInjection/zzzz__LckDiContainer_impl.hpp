#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDiContainer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiContainer_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckMonoBehaviourDependencyInjector_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckServiceProvider_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiContainer.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer> (*)()>(&::Liv::Lck::DependencyInjection::LckDiContainer::get_Instance)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x9d32430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiContainer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckDiContainer::*)()>(&::Liv::Lck::DependencyInjection::LckDiContainer::Awake)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9d34964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiContainer.GetInjector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector* (::Liv::Lck::DependencyInjection::LckDiContainer::*)()>(&::Liv::Lck::DependencyInjection::LckDiContainer::GetInjector)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d33d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {"GetInjector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiContainer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckDiContainer::*)()>(&::Liv::Lck::DependencyInjection::LckDiContainer::OnDestroy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9d34b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiContainer.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckDiContainer::*)()>(&::Liv::Lck::DependencyInjection::LckDiContainer::Build)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d32bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {"Build", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDiContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckDiContainer::*)()>(&::Liv::Lck::DependencyInjection::LckDiContainer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d35000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::DependencyInjection::LckDiContainer::setStaticF__instance(::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>  value)  {
::cordl_internals::setStaticField<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>, "_instance", ::Liv::Lck::DependencyInjection::LckDiContainer*>(std::forward<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>(value));
}
inline ::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer> Liv::Lck::DependencyInjection::LckDiContainer::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>, "_instance", ::Liv::Lck::DependencyInjection::LckDiContainer*>();
}
inline ::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer> Liv::Lck::DependencyInjection::LckDiContainer::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>(nullptr, ___internal_method);
}
inline void Liv::Lck::DependencyInjection::LckDiContainer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TService,typename TImplementation>
requires(::cordl_internals::reference_type_constraint<TService> && ::cordl_internals::type_constraint<TImplementation, TService>)
inline void Liv::Lck::DependencyInjection::LckDiContainer::AddTransient()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                    {"AddTransient", {::i2c::class_of<TService>(), ::i2c::class_of<TImplementation>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>(), ::i2c::class_of<TImplementation>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TService,typename TImplementation>
requires(::cordl_internals::reference_type_constraint<TService> && ::cordl_internals::type_constraint<TImplementation, TService>)
inline void Liv::Lck::DependencyInjection::LckDiContainer::AddSingleton()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
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
inline void Liv::Lck::DependencyInjection::LckDiContainer::AddTransientFactory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  factory)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                    {"AddTransientFactory", {::i2c::class_of<TService>()}, {::i2c::type_of<::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TService>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factory);
}
template<typename TService>
requires(::cordl_internals::reference_type_constraint<TService>)
inline void Liv::Lck::DependencyInjection::LckDiContainer::AddSingletonFactory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  factory)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
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
inline void Liv::Lck::DependencyInjection::LckDiContainer::AddSingleton(TService  instance)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
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
inline void Liv::Lck::DependencyInjection::LckDiContainer::AddSingletonForward()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
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
inline T Liv::Lck::DependencyInjection::LckDiContainer::GetService()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
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
inline bool Liv::Lck::DependencyInjection::LckDiContainer::HasService()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                    {"HasService", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector* Liv::Lck::DependencyInjection::LckDiContainer::GetInjector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {"GetInjector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*>(this, ___internal_method);
}
inline void Liv::Lck::DependencyInjection::LckDiContainer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::DependencyInjection::LckDiContainer::Build()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {"Build", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::DependencyInjection::LckDiContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::DependencyInjection::LckDiContainer* Liv::Lck::DependencyInjection::LckDiContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::LckDiContainer*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::DependencyInjection::LckDiContainer::LckDiContainer()   {
}

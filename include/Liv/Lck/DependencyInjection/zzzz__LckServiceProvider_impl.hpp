#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckServiceProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckServiceProvider_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiServiceRegistration_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckServiceProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckServiceProvider::*)(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*)>(&::Liv::Lck::DependencyInjection::LckServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d348ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckServiceProvider.GetService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::DependencyInjection::LckServiceProvider::*)(::System::Type*)>(&::Liv::Lck::DependencyInjection::LckServiceProvider::GetService)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9d35878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                        {"GetService", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckServiceProvider.ProvideService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::DependencyInjection::LckServiceProvider::*)(::System::Type*)>(&::Liv::Lck::DependencyInjection::LckServiceProvider::ProvideService)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x9d35b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                        {"ProvideService", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckServiceProvider.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::DependencyInjection::LckServiceProvider::*)(::ArrayW<::System::Reflection::ConstructorInfo*>, ::Liv::Lck::DependencyInjection::LckDiServiceRegistration*)>(&::Liv::Lck::DependencyInjection::LckServiceProvider::CreateInstance)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x9d35fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::ArrayW<::System::Reflection::ConstructorInfo*>>(), ::i2c::type_of<::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckServiceProvider.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckServiceProvider::*)()>(&::Liv::Lck::DependencyInjection::LckServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x9d350c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*& Liv::Lck::DependencyInjection::LckServiceProvider::__cordl_internal_get__registrations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registrations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>* const& Liv::Lck::DependencyInjection::LckServiceProvider::__cordl_internal_get__registrations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registrations;
}
constexpr void Liv::Lck::DependencyInjection::LckServiceProvider::__cordl_internal_set__registrations(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____registrations = value;
}
constexpr bool& Liv::Lck::DependencyInjection::LckServiceProvider::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Liv::Lck::DependencyInjection::LckServiceProvider::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Liv::Lck::DependencyInjection::LckServiceProvider::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void Liv::Lck::DependencyInjection::LckServiceProvider::_ctor(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  registrations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, registrations);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T Liv::Lck::DependencyInjection::LckServiceProvider::GetService()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                    {"GetService", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::DependencyInjection::LckServiceProvider::GetService(::System::Type*  serviceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                        {"GetService", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serviceType);
}
inline ::System::Object* Liv::Lck::DependencyInjection::LckServiceProvider::ProvideService(::System::Type*  serviceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                        {"ProvideService", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serviceType);
}
inline ::System::Object* Liv::Lck::DependencyInjection::LckServiceProvider::CreateInstance(::ArrayW<::System::Reflection::ConstructorInfo*>  constructors, ::Liv::Lck::DependencyInjection::LckDiServiceRegistration*  registration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::ArrayW<::System::Reflection::ConstructorInfo*>>(), ::i2c::type_of<::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, constructors, registration);
}
inline void Liv::Lck::DependencyInjection::LckServiceProvider::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::DependencyInjection::LckServiceProvider* Liv::Lck::DependencyInjection::LckServiceProvider::New_ctor(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  registrations)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::LckServiceProvider*>(registrations));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::DependencyInjection::LckServiceProvider::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::DependencyInjection::LckServiceProvider::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::DependencyInjection::LckServiceProvider::LckServiceProvider()   {
}
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckServiceProvider___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckServiceProvider___c::*)()>(&::Liv::Lck::DependencyInjection::LckServiceProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d36760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckServiceProvider___c._CreateInstance_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Liv::Lck::DependencyInjection::LckServiceProvider___c::*)(::System::Reflection::ConstructorInfo*)>(&::Liv::Lck::DependencyInjection::LckServiceProvider___c::_CreateInstance_b__6_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d36768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider___c*>(),
                        {"<CreateInstance>b__6_0", {}, {::i2c::type_of<::System::Reflection::ConstructorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::DependencyInjection::LckServiceProvider___c::setStaticF___9(::Liv::Lck::DependencyInjection::LckServiceProvider___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::DependencyInjection::LckServiceProvider___c*, "<>9", ::Liv::Lck::DependencyInjection::LckServiceProvider___c*>(std::forward<::Liv::Lck::DependencyInjection::LckServiceProvider___c*>(value));
}
inline ::Liv::Lck::DependencyInjection::LckServiceProvider___c* Liv::Lck::DependencyInjection::LckServiceProvider___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::DependencyInjection::LckServiceProvider___c*, "<>9", ::Liv::Lck::DependencyInjection::LckServiceProvider___c*>();
}
inline void Liv::Lck::DependencyInjection::LckServiceProvider___c::setStaticF___9__6_0(::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*, "<>9__6_0", ::Liv::Lck::DependencyInjection::LckServiceProvider___c*>(std::forward<::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*>(value));
}
inline ::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>* Liv::Lck::DependencyInjection::LckServiceProvider___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*, "<>9__6_0", ::Liv::Lck::DependencyInjection::LckServiceProvider___c*>();
}
inline void Liv::Lck::DependencyInjection::LckServiceProvider___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Liv::Lck::DependencyInjection::LckServiceProvider___c::_CreateInstance_b__6_0(::System::Reflection::ConstructorInfo*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckServiceProvider___c*>(),
                        {"<CreateInstance>b__6_0", {}, {::i2c::type_of<::System::Reflection::ConstructorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c);
}
inline ::Liv::Lck::DependencyInjection::LckServiceProvider___c* Liv::Lck::DependencyInjection::LckServiceProvider___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::LckServiceProvider___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::DependencyInjection::LckServiceProvider___c::LckServiceProvider___c()   {
}

#pragma once
// IWYU pragma private; include "Liv/Lck/LckModuleLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckModuleLoader_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckModuleLoader.RegisterModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*, ::StringW)>(&::Liv::Lck::LckModuleLoader::RegisterModule)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9cef374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckModuleLoader*>(),
                        {"RegisterModule", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckModuleLoader.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::DependencyInjection::LckDiContainer*)>(&::Liv::Lck::LckModuleLoader::Configure)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9cef4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckModuleLoader*>(),
                        {"Configure", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckDiContainer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckModuleLoader::setStaticF__moduleConfigurators(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>*, "_moduleConfigurators", ::Liv::Lck::LckModuleLoader*>(std::forward<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>* Liv::Lck::LckModuleLoader::getStaticF__moduleConfigurators()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>*, "_moduleConfigurators", ::Liv::Lck::LckModuleLoader*>();
}
inline void Liv::Lck::LckModuleLoader::RegisterModule(::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*  configure, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckModuleLoader*>(),
                        {"RegisterModule", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, configure, name);
}
inline void Liv::Lck::LckModuleLoader::Configure(::Liv::Lck::DependencyInjection::LckDiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckModuleLoader*>(),
                        {"Configure", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckDiContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckModuleLoader::LckModuleLoader()   {
}

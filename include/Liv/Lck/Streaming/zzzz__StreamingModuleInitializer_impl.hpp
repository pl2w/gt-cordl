#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/StreamingModuleInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__StreamingModuleInitializer_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiContainer_def.hpp"
#include "Liv/Lck/Streaming/zzzz__StreamingModuleInitializer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::StreamingModuleInitializer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::Streaming::StreamingModuleInitializer::Initialize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9cfd06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::StreamingModuleInitializer*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Streaming::StreamingModuleInitializer::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::StreamingModuleInitializer*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::StreamingModuleInitializer::StreamingModuleInitializer()   {
}
//  Writing Method size for method: ::Liv::Lck::Streaming::StreamingModuleInitializer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::StreamingModuleInitializer___c::*)()>(&::Liv::Lck::Streaming::StreamingModuleInitializer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cfd1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::StreamingModuleInitializer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::StreamingModuleInitializer___c._Initialize_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::StreamingModuleInitializer___c::*)(::Liv::Lck::DependencyInjection::LckDiContainer*)>(&::Liv::Lck::Streaming::StreamingModuleInitializer___c::_Initialize_b__0_0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9cfd1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::StreamingModuleInitializer___c*>(),
                        {"<Initialize>b__0_0", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckDiContainer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Streaming::StreamingModuleInitializer___c::setStaticF___9(::Liv::Lck::Streaming::StreamingModuleInitializer___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Streaming::StreamingModuleInitializer___c*, "<>9", ::Liv::Lck::Streaming::StreamingModuleInitializer___c*>(std::forward<::Liv::Lck::Streaming::StreamingModuleInitializer___c*>(value));
}
inline ::Liv::Lck::Streaming::StreamingModuleInitializer___c* Liv::Lck::Streaming::StreamingModuleInitializer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Streaming::StreamingModuleInitializer___c*, "<>9", ::Liv::Lck::Streaming::StreamingModuleInitializer___c*>();
}
inline void Liv::Lck::Streaming::StreamingModuleInitializer___c::setStaticF___9__0_0(::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*, "<>9__0_0", ::Liv::Lck::Streaming::StreamingModuleInitializer___c*>(std::forward<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>(value));
}
inline ::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>* Liv::Lck::Streaming::StreamingModuleInitializer___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*, "<>9__0_0", ::Liv::Lck::Streaming::StreamingModuleInitializer___c*>();
}
inline void Liv::Lck::Streaming::StreamingModuleInitializer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::StreamingModuleInitializer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::StreamingModuleInitializer___c::_Initialize_b__0_0(::Liv::Lck::DependencyInjection::LckDiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::StreamingModuleInitializer___c*>(),
                        {"<Initialize>b__0_0", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckDiContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::Liv::Lck::Streaming::StreamingModuleInitializer___c* Liv::Lck::Streaming::StreamingModuleInitializer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::StreamingModuleInitializer___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::StreamingModuleInitializer___c::StreamingModuleInitializer___c()   {
}

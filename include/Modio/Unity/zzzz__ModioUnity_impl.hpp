#pragma once
// IWYU pragma private; include "Modio/Unity/ModioUnity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/zzzz__ModioUnity_def.hpp"
#include "Modio/Unity/zzzz__ModioUnity_def.hpp"
#include "Modio/zzzz__LogLevel_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::Unity::ModioUnity.OnAfterAssembliesLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::Unity::ModioUnity::OnAfterAssembliesLoaded)> {
  constexpr static std::size_t size = 0x990;
  constexpr static std::size_t addrs = 0x9f949d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnity*>(),
                        {"OnAfterAssembliesLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioUnity.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::LogLevel, ::System::Object*)>(&::Modio::Unity::ModioUnity::Log)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f95494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnity*>(),
                        {"Log", {}, {::i2c::type_of<::Modio::LogLevel>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioUnity.InitPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::Unity::ModioUnity::InitPlatform)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f95390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnity*>(),
                        {"InitPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::ModioUnity::OnAfterAssembliesLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnity*>(),
                        {"OnAfterAssembliesLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Modio::Unity::ModioUnity::Log(::Modio::LogLevel  logLevel, ::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnity*>(),
                        {"Log", {}, {::i2c::type_of<::Modio::LogLevel>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logLevel, message);
}
inline void Modio::Unity::ModioUnity::InitPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnity*>(),
                        {"InitPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Modio::Unity::ModioUnity::ModioUnity()   {
}
//  Writing Method size for method: ::Modio::Unity::ModioUnity___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioUnity___c::*)()>(&::Modio::Unity::ModioUnity___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f955d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnity___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioUnity___c._OnAfterAssembliesLoaded_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioUnity___c::*)()>(&::Modio::Unity::ModioUnity___c::_OnAfterAssembliesLoaded_b__0_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f955dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnity___c*>(),
                        {"<OnAfterAssembliesLoaded>b__0_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::ModioUnity___c::setStaticF___9(::Modio::Unity::ModioUnity___c*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::ModioUnity___c*, "<>9", ::Modio::Unity::ModioUnity___c*>(std::forward<::Modio::Unity::ModioUnity___c*>(value));
}
inline ::Modio::Unity::ModioUnity___c* Modio::Unity::ModioUnity___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Unity::ModioUnity___c*, "<>9", ::Modio::Unity::ModioUnity___c*>();
}
inline void Modio::Unity::ModioUnity___c::setStaticF___9__0_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__0_0", ::Modio::Unity::ModioUnity___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Modio::Unity::ModioUnity___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__0_0", ::Modio::Unity::ModioUnity___c*>();
}
inline void Modio::Unity::ModioUnity___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnity___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::ModioUnity___c::_OnAfterAssembliesLoaded_b__0_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnity___c*>(),
                        {"<OnAfterAssembliesLoaded>b__0_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::ModioUnity___c* Modio::Unity::ModioUnity___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ModioUnity___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::ModioUnity___c::ModioUnity___c()   {
}

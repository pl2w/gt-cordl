#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/ParsingErrorsPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__ParsingErrorsPool_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__ParsingErrors_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__ParsingErrorsPool_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*)>(&::UnityEngine::Localization::SmartFormat::ParsingErrorsPool::Get)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb02ea1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*)>(&::UnityEngine::Localization::SmartFormat::ParsingErrorsPool::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb02eab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::ParsingErrorsPool::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>* UnityEngine::Localization::SmartFormat::ParsingErrorsPool::getStaticF_s_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool*>();
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* UnityEngine::Localization::SmartFormat::ParsingErrorsPool::Get(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(nullptr, ___internal_method, format);
}
inline void UnityEngine::Localization::SmartFormat::ParsingErrorsPool::Release(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  toRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool::ParsingErrorsPool()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02ed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c.__cctor_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* (::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::__cctor_b__3_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb02ed38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*>(),
                        {"<.cctor>b__3_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c.__cctor_b__3_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*)>(&::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::__cctor_b__3_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb02ed8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*>(),
                        {"<.cctor>b__3_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*>(std::forward<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c* UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*>();
}
inline void UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::__cctor_b__3_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*>(),
                        {"<.cctor>b__3_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::__cctor_b__3_1(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  pe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*>(),
                        {"<.cctor>b__3_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pe);
}
inline ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c* UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c::ParsingErrorsPool___c()   {
}

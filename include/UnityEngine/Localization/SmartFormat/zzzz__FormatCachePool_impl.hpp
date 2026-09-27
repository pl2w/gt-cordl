#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/FormatCachePool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__FormatCachePool_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormatCache_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__FormatCachePool_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatCachePool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*)>(&::UnityEngine::Localization::SmartFormat::FormatCachePool::Get)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb02accc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatCachePool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*> (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>)>(&::UnityEngine::Localization::SmartFormat::FormatCachePool::Get)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb02c6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatCachePool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*)>(&::UnityEngine::Localization::SmartFormat::FormatCachePool::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb02c784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::FormatCachePool::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::FormatCachePool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>* UnityEngine::Localization::SmartFormat::FormatCachePool::getStaticF_s_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::FormatCachePool*>();
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* UnityEngine::Localization::SmartFormat::FormatCachePool::Get(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*> UnityEngine::Localization::SmartFormat::FormatCachePool::Get(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>(nullptr, ___internal_method, format, value);
}
inline void UnityEngine::Localization::SmartFormat::FormatCachePool::Release(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  toRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::FormatCachePool::FormatCachePool()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatCachePool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormatCachePool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormatCachePool___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02ca00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatCachePool___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* (::UnityEngine::Localization::SmartFormat::FormatCachePool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormatCachePool___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb02ca08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatCachePool___c.__cctor_b__4_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormatCachePool___c::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*)>(&::UnityEngine::Localization::SmartFormat::FormatCachePool___c::__cctor_b__4_1)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb02ca5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool___c*>(),
                        {"<.cctor>b__4_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::FormatCachePool___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::FormatCachePool___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::FormatCachePool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::FormatCachePool___c*>(std::forward<::UnityEngine::Localization::SmartFormat::FormatCachePool___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::FormatCachePool___c* UnityEngine::Localization::SmartFormat::FormatCachePool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::FormatCachePool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::FormatCachePool___c*>();
}
inline void UnityEngine::Localization::SmartFormat::FormatCachePool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* UnityEngine::Localization::SmartFormat::FormatCachePool___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::FormatCachePool___c::__cctor_b__4_1(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  fc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatCachePool___c*>(),
                        {"<.cctor>b__4_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fc);
}
inline ::UnityEngine::Localization::SmartFormat::FormatCachePool___c* UnityEngine::Localization::SmartFormat::FormatCachePool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::FormatCachePool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::FormatCachePool___c::FormatCachePool___c()   {
}

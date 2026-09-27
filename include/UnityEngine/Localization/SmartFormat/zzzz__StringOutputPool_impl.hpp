#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/StringOutputPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__StringOutputPool_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Output/zzzz__StringOutput_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__StringOutputPool_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::StringOutputPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput* (*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::StringOutputPool::Get)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb02f434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::StringOutputPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*> (*)(int32_t, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>)>(&::UnityEngine::Localization::SmartFormat::StringOutputPool::Get)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb02943c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::StringOutputPool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*)>(&::UnityEngine::Localization::SmartFormat::StringOutputPool::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb02f4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::StringOutputPool::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::StringOutputPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>* UnityEngine::Localization::SmartFormat::StringOutputPool::getStaticF_s_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::StringOutputPool*>();
}
inline ::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput* UnityEngine::Localization::SmartFormat::StringOutputPool::Get(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>(nullptr, ___internal_method, capacity);
}
inline ::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*> UnityEngine::Localization::SmartFormat::StringOutputPool::Get(int32_t  capacity, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>>(nullptr, ___internal_method, capacity, value);
}
inline void UnityEngine::Localization::SmartFormat::StringOutputPool::Release(::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*  toRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::StringOutputPool::StringOutputPool()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::StringOutputPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::StringOutputPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::StringOutputPool___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02f748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::StringOutputPool___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput* (::UnityEngine::Localization::SmartFormat::StringOutputPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::StringOutputPool___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb02f750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::StringOutputPool___c.__cctor_b__4_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::StringOutputPool___c::*)(::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*)>(&::UnityEngine::Localization::SmartFormat::StringOutputPool___c::__cctor_b__4_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb02f7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool___c*>(),
                        {"<.cctor>b__4_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::StringOutputPool___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::StringOutputPool___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::StringOutputPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::StringOutputPool___c*>(std::forward<::UnityEngine::Localization::SmartFormat::StringOutputPool___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::StringOutputPool___c* UnityEngine::Localization::SmartFormat::StringOutputPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::StringOutputPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::StringOutputPool___c*>();
}
inline void UnityEngine::Localization::SmartFormat::StringOutputPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput* UnityEngine::Localization::SmartFormat::StringOutputPool___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::StringOutputPool___c::__cctor_b__4_1(::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*  so)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::StringOutputPool___c*>(),
                        {"<.cctor>b__4_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, so);
}
inline ::UnityEngine::Localization::SmartFormat::StringOutputPool___c* UnityEngine::Localization::SmartFormat::StringOutputPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::StringOutputPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::StringOutputPool___c::StringOutputPool___c()   {
}

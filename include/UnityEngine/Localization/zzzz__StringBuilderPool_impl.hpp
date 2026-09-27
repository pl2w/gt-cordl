#pragma once
// IWYU pragma private; include "UnityEngine/Localization/StringBuilderPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__StringBuilderPool_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/Localization/zzzz__StringBuilderPool_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::StringBuilderPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)()>(&::UnityEngine::Localization::StringBuilderPool::Get)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb015e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool*>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::StringBuilderPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::PooledObject_1<::System::Text::StringBuilder*> (*)(::by_ref<::System::Text::StringBuilder*>)>(&::UnityEngine::Localization::StringBuilderPool::Get)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb015e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool*>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::StringBuilderPool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::UnityEngine::Localization::StringBuilderPool::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb015f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool*>(),
                        {"Release", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::StringBuilderPool::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*, "s_Pool", ::UnityEngine::Localization::StringBuilderPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* UnityEngine::Localization::StringBuilderPool::getStaticF_s_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*, "s_Pool", ::UnityEngine::Localization::StringBuilderPool*>();
}
inline ::System::Text::StringBuilder* UnityEngine::Localization::StringBuilderPool::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Pool::PooledObject_1<::System::Text::StringBuilder*> UnityEngine::Localization::StringBuilderPool::Get(::by_ref<::System::Text::StringBuilder*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool*>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<::System::Text::StringBuilder*>>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Localization::StringBuilderPool::Release(::System::Text::StringBuilder*  toRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool*>(),
                        {"Release", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::StringBuilderPool::StringBuilderPool()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::StringBuilderPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::StringBuilderPool___c::*)()>(&::UnityEngine::Localization::StringBuilderPool___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb016180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::StringBuilderPool___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::UnityEngine::Localization::StringBuilderPool___c::*)()>(&::UnityEngine::Localization::StringBuilderPool___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb016188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::StringBuilderPool___c.__cctor_b__4_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::StringBuilderPool___c::*)(::System::Text::StringBuilder*)>(&::UnityEngine::Localization::StringBuilderPool___c::__cctor_b__4_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb0161dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool___c*>(),
                        {"<.cctor>b__4_1", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::StringBuilderPool___c::setStaticF___9(::UnityEngine::Localization::StringBuilderPool___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::StringBuilderPool___c*, "<>9", ::UnityEngine::Localization::StringBuilderPool___c*>(std::forward<::UnityEngine::Localization::StringBuilderPool___c*>(value));
}
inline ::UnityEngine::Localization::StringBuilderPool___c* UnityEngine::Localization::StringBuilderPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::StringBuilderPool___c*, "<>9", ::UnityEngine::Localization::StringBuilderPool___c*>();
}
inline void UnityEngine::Localization::StringBuilderPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* UnityEngine::Localization::StringBuilderPool___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method);
}
inline void UnityEngine::Localization::StringBuilderPool___c::__cctor_b__4_1(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::StringBuilderPool___c*>(),
                        {"<.cctor>b__4_1", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline ::UnityEngine::Localization::StringBuilderPool___c* UnityEngine::Localization::StringBuilderPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::StringBuilderPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::StringBuilderPool___c::StringBuilderPool___c()   {
}

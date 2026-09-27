#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/SplitListPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SplitListPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SplitListPool_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SplitListPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList* (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::Localization::SmartFormat::SplitListPool::Get)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb02eda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SplitListPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SplitListPool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*)>(&::UnityEngine::Localization::SmartFormat::SplitListPool::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb02ef48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SplitListPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::SplitListPool::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::SplitListPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>* UnityEngine::Localization::SmartFormat::SplitListPool::getStaticF_s_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::SplitListPool*>();
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList* UnityEngine::Localization::SmartFormat::SplitListPool::Get(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Collections::Generic::List_1<int32_t>*  splits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SplitListPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>(nullptr, ___internal_method, format, splits);
}
inline void UnityEngine::Localization::SmartFormat::SplitListPool::Release(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*  toRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SplitListPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::SplitListPool::SplitListPool()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SplitListPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SplitListPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::SplitListPool___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02f1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SplitListPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SplitListPool___c.__cctor_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList* (::UnityEngine::Localization::SmartFormat::SplitListPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::SplitListPool___c::__cctor_b__3_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb02f1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SplitListPool___c*>(),
                        {"<.cctor>b__3_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SplitListPool___c.__cctor_b__3_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SplitListPool___c::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*)>(&::UnityEngine::Localization::SmartFormat::SplitListPool___c::__cctor_b__3_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb02f2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SplitListPool___c*>(),
                        {"<.cctor>b__3_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::SplitListPool___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::SplitListPool___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::SplitListPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::SplitListPool___c*>(std::forward<::UnityEngine::Localization::SmartFormat::SplitListPool___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::SplitListPool___c* UnityEngine::Localization::SmartFormat::SplitListPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::SplitListPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::SplitListPool___c*>();
}
inline void UnityEngine::Localization::SmartFormat::SplitListPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SplitListPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList* UnityEngine::Localization::SmartFormat::SplitListPool___c::__cctor_b__3_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SplitListPool___c*>(),
                        {"<.cctor>b__3_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::SplitListPool___c::__cctor_b__3_1(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*  sl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SplitListPool___c*>(),
                        {"<.cctor>b__3_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sl);
}
inline ::UnityEngine::Localization::SmartFormat::SplitListPool___c* UnityEngine::Localization::SmartFormat::SplitListPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::SplitListPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::SplitListPool___c::SplitListPool___c()   {
}

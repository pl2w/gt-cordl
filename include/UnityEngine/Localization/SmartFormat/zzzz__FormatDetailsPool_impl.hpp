#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/FormatDetailsPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__FormatDetailsPool_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormatCache_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormatDetails_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Output/zzzz__IOutput_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__FormatDetailsPool_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatDetailsPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* (*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*, ::System::IFormatProvider*, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*)>(&::UnityEngine::Localization::SmartFormat::FormatDetailsPool::Get)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb02a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatDetailsPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*> (*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, ::ArrayW<::System::Object*>, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*, ::System::IFormatProvider*, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>)>(&::UnityEngine::Localization::SmartFormat::FormatDetailsPool::Get)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb02cb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatDetailsPool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*)>(&::UnityEngine::Localization::SmartFormat::FormatDetailsPool::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb02a7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::FormatDetailsPool::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::FormatDetailsPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>* UnityEngine::Localization::SmartFormat::FormatDetailsPool::getStaticF_s_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::FormatDetailsPool*>();
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* UnityEngine::Localization::SmartFormat::FormatDetailsPool::Get(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  originalFormat, ::System::Collections::Generic::IList_1<::System::Object*>*  originalArgs, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  formatCache, ::System::IFormatProvider*  provider, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(nullptr, ___internal_method, formatter, originalFormat, originalArgs, formatCache, provider, output);
}
inline ::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*> UnityEngine::Localization::SmartFormat::FormatDetailsPool::Get(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  originalFormat, ::ArrayW<::System::Object*>  originalArgs, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  formatCache, ::System::IFormatProvider*  provider, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  output, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>>(nullptr, ___internal_method, formatter, originalFormat, originalArgs, formatCache, provider, output, value);
}
inline void UnityEngine::Localization::SmartFormat::FormatDetailsPool::Release(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  toRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::FormatDetailsPool::FormatDetailsPool()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02ce38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* (::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb02ce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c.__cctor_b__4_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*)>(&::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::__cctor_b__4_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb02ce94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*>(),
                        {"<.cctor>b__4_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*>(std::forward<::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c* UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*>();
}
inline void UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::__cctor_b__4_1(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  fd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*>(),
                        {"<.cctor>b__4_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fd);
}
inline ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c* UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c::FormatDetailsPool___c()   {
}

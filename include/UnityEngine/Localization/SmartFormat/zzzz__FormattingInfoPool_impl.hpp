#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/FormattingInfoPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__FormattingInfoPool_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormatDetails_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormattingInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Placeholder_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__FormattingInfoPool_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormattingInfoPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* (*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, ::System::Object*)>(&::UnityEngine::Localization::SmartFormat::FormattingInfoPool::Get)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb02aee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormattingInfoPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* (*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, ::System::Object*)>(&::UnityEngine::Localization::SmartFormat::FormattingInfoPool::Get)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb02e62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormattingInfoPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* (*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*, ::System::Object*)>(&::UnityEngine::Localization::SmartFormat::FormattingInfoPool::Get)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb02e6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormattingInfoPool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::FormattingInfoPool::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb02af90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::FormattingInfoPool::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::FormattingInfoPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>* UnityEngine::Localization::SmartFormat::FormattingInfoPool::getStaticF_s_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*, "s_Pool", ::UnityEngine::Localization::SmartFormat::FormattingInfoPool*>();
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* UnityEngine::Localization::SmartFormat::FormattingInfoPool::Get(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  currentValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>(nullptr, ___internal_method, formatDetails, format, currentValue);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* UnityEngine::Localization::SmartFormat::FormattingInfoPool::Get(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  parent, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  currentValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>(nullptr, ___internal_method, parent, formatDetails, format, currentValue);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* UnityEngine::Localization::SmartFormat::FormattingInfoPool::Get(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  parent, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  placeholder, ::System::Object*  currentValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>(nullptr, ___internal_method, parent, formatDetails, placeholder, currentValue);
}
inline void UnityEngine::Localization::SmartFormat::FormattingInfoPool::Release(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  toRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::FormattingInfoPool::FormattingInfoPool()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02e9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c.__cctor_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* (::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::__cctor_b__5_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb02e9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c.__cctor_b__5_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::__cctor_b__5_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb02ea04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*>(),
                        {"<.cctor>b__5_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*>(std::forward<::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c* UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*>();
}
inline void UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::__cctor_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::__cctor_b__5_1(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  fi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*>(),
                        {"<.cctor>b__5_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fi);
}
inline ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c* UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c::FormattingInfoPool___c()   {
}

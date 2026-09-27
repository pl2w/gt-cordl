#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/FormatItemPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__FormatItemPool_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__LiteralText_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Placeholder_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Selector_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Settings/zzzz__SmartSettings_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__FormatItemPool_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.GetLiteralText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* (*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*, int32_t)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::GetLiteralText)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb02ceac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetLiteralText", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.GetLiteralText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* (*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*, int32_t, int32_t)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::GetLiteralText)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb02cf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetLiteralText", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.GetLiteralText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* (*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*, ::StringW, int32_t, int32_t)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::GetLiteralText)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb02d054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetLiteralText", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.GetFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, ::StringW)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::GetFormat)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb02d17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.GetFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, ::StringW, int32_t, int32_t)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::GetFormat)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb02d234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.GetFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, ::StringW, int32_t, int32_t, bool)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::GetFormat)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb02d2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.GetFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*, int32_t)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::GetFormat)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb02d3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.GetPlaceholder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* (*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, int32_t, int32_t)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::GetPlaceholder)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb02d47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetPlaceholder", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.GetPlaceholder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* (*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, int32_t, int32_t, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, int32_t)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::GetPlaceholder)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb02d56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetPlaceholder", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.GetSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector* (*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*, ::StringW, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::GetSelector)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb02d680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.ReleaseLiteralText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::ReleaseLiteralText)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb02d758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"ReleaseLiteralText", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.ReleaseFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::ReleaseFormat)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb02a870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"ReleaseFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.ReleasePlaceholder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::ReleasePlaceholder)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb02d7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"ReleasePlaceholder", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.ReleaseSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::ReleaseSelector)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb02d858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"ReleaseSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool::Release)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb02d8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::FormatItemPool::setStaticF_s_LiteralTextPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>*, "s_LiteralTextPool", ::UnityEngine::Localization::SmartFormat::FormatItemPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>* UnityEngine::Localization::SmartFormat::FormatItemPool::getStaticF_s_LiteralTextPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>*, "s_LiteralTextPool", ::UnityEngine::Localization::SmartFormat::FormatItemPool*>();
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool::setStaticF_s_FormatPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*, "s_FormatPool", ::UnityEngine::Localization::SmartFormat::FormatItemPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* UnityEngine::Localization::SmartFormat::FormatItemPool::getStaticF_s_FormatPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*, "s_FormatPool", ::UnityEngine::Localization::SmartFormat::FormatItemPool*>();
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool::setStaticF_s_PlaceholderPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>*, "s_PlaceholderPool", ::UnityEngine::Localization::SmartFormat::FormatItemPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>* UnityEngine::Localization::SmartFormat::FormatItemPool::getStaticF_s_PlaceholderPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>*, "s_PlaceholderPool", ::UnityEngine::Localization::SmartFormat::FormatItemPool*>();
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool::setStaticF_s_SelectorPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*, "s_SelectorPool", ::UnityEngine::Localization::SmartFormat::FormatItemPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>* UnityEngine::Localization::SmartFormat::FormatItemPool::getStaticF_s_SelectorPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*, "s_SelectorPool", ::UnityEngine::Localization::SmartFormat::FormatItemPool*>();
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* UnityEngine::Localization::SmartFormat::FormatItemPool::GetLiteralText(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetLiteralText", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(nullptr, ___internal_method, smartSettings, parent, startIndex);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* UnityEngine::Localization::SmartFormat::FormatItemPool::GetLiteralText(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, int32_t  startIndex, int32_t  endIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetLiteralText", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(nullptr, ___internal_method, smartSettings, parent, startIndex, endIndex);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* UnityEngine::Localization::SmartFormat::FormatItemPool::GetLiteralText(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, ::StringW  baseString, int32_t  startIndex, int32_t  endIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetLiteralText", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(nullptr, ___internal_method, smartSettings, parent, baseString, startIndex, endIndex);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::FormatItemPool::GetFormat(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::StringW  baseString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(nullptr, ___internal_method, smartSettings, baseString);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::FormatItemPool::GetFormat(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::StringW  baseString, int32_t  startIndex, int32_t  endIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(nullptr, ___internal_method, smartSettings, baseString, startIndex, endIndex);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::FormatItemPool::GetFormat(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::StringW  baseString, int32_t  startIndex, int32_t  endIndex, bool  nested)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(nullptr, ___internal_method, smartSettings, baseString, startIndex, endIndex, nested);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::FormatItemPool::GetFormat(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  parent, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(nullptr, ___internal_method, smartSettings, parent, startIndex);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* UnityEngine::Localization::SmartFormat::FormatItemPool::GetPlaceholder(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  parent, int32_t  startIndex, int32_t  nestedDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetPlaceholder", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(nullptr, ___internal_method, smartSettings, parent, startIndex, nestedDepth);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* UnityEngine::Localization::SmartFormat::FormatItemPool::GetPlaceholder(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  parent, int32_t  startIndex, int32_t  nestedDepth, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  itemFormat, int32_t  endIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetPlaceholder", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(nullptr, ___internal_method, smartSettings, parent, startIndex, nestedDepth, itemFormat, endIndex);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector* UnityEngine::Localization::SmartFormat::FormatItemPool::GetSelector(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, ::StringW  baseString, int32_t  startIndex, int32_t  endIndex, int32_t  operatorStart, int32_t  selectorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"GetSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(nullptr, ___internal_method, smartSettings, parent, baseString, startIndex, endIndex, operatorStart, selectorIndex);
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool::ReleaseLiteralText(::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*  literal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"ReleaseLiteralText", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, literal);
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool::ReleaseFormat(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"ReleaseFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format);
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool::ReleasePlaceholder(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  placeholder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"ReleasePlaceholder", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, placeholder);
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool::ReleaseSelector(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"ReleaseSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, selector);
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool::Release(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::FormatItemPool::FormatItemPool()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormatItemPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormatItemPool___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02e054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool___c.__cctor_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* (::UnityEngine::Localization::SmartFormat::FormatItemPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb02e05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool___c.__cctor_b__19_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormatItemPool___c::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb02e0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool___c.__cctor_b__19_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (::UnityEngine::Localization::SmartFormat::FormatItemPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb02e0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool___c.__cctor_b__19_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormatItemPool___c::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb02e204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_3", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool___c.__cctor_b__19_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* (::UnityEngine::Localization::SmartFormat::FormatItemPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_4)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb02e54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool___c.__cctor_b__19_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormatItemPool___c::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_5)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb02e5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_5", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool___c.__cctor_b__19_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector* (::UnityEngine::Localization::SmartFormat::FormatItemPool___c::*)()>(&::UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_6)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb02e5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::FormatItemPool___c.__cctor_b__19_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::FormatItemPool___c::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*)>(&::UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_7)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb02e60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_7", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::FormatItemPool___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::FormatItemPool___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(std::forward<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::FormatItemPool___c* UnityEngine::Localization::SmartFormat::FormatItemPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*, "<>9", ::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>();
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_1(::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*  lt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lt);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_3(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_3", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_5(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_5", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector* UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::FormatItemPool___c::__cctor_b__19_7(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>(),
                        {"<.cctor>b__19_7", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::UnityEngine::Localization::SmartFormat::FormatItemPool___c* UnityEngine::Localization::SmartFormat::FormatItemPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::FormatItemPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::FormatItemPool___c::FormatItemPool___c()   {
}

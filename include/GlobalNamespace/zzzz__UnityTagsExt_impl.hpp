#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityTagsExt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityTagsExt_def.hpp"
#include "GlobalNamespace/zzzz__UnityTag_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityTagsExt.ToTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTag (*)(::StringW)>(&::GlobalNamespace::UnityTagsExt::ToTag)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56b2148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"ToTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityTagsExt.SetTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::GlobalNamespace::UnityTag)>(&::GlobalNamespace::UnityTagsExt::SetTag)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x56b21f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"SetTag", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::GlobalNamespace::UnityTag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityTagsExt.SetTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::GlobalNamespace::UnityTag)>(&::GlobalNamespace::UnityTagsExt::SetTag)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x56b2324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"SetTag", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UnityTag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityTagsExt.TryGetTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::by_ref<::GlobalNamespace::UnityTag>)>(&::GlobalNamespace::UnityTagsExt::TryGetTag)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x56b2450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"TryGetTag", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::UnityTag>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityTagsExt.TryGetTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Component*, ::by_ref<::GlobalNamespace::UnityTag>)>(&::GlobalNamespace::UnityTagsExt::TryGetTag)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x56b2548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"TryGetTag", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::UnityTag>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityTagsExt.CompareTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::GlobalNamespace::UnityTag)>(&::GlobalNamespace::UnityTagsExt::CompareTag)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x56b2640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"CompareTag", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UnityTag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityTagsExt.CompareTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Component*, ::GlobalNamespace::UnityTag)>(&::GlobalNamespace::UnityTagsExt::CompareTag)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x56b2770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"CompareTag", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::GlobalNamespace::UnityTag>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::UnityTag GlobalNamespace::UnityTagsExt::ToTag(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"ToTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTag>(nullptr, ___internal_method, s);
}
inline void GlobalNamespace::UnityTagsExt::SetTag(::UnityEngine::Component*  c, ::GlobalNamespace::UnityTag  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"SetTag", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::GlobalNamespace::UnityTag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, tag);
}
inline void GlobalNamespace::UnityTagsExt::SetTag(::UnityEngine::GameObject*  g, ::GlobalNamespace::UnityTag  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"SetTag", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UnityTag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, tag);
}
inline bool GlobalNamespace::UnityTagsExt::TryGetTag(::UnityEngine::GameObject*  g, ::by_ref<::GlobalNamespace::UnityTag>  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"TryGetTag", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::UnityTag>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, g, tag);
}
inline bool GlobalNamespace::UnityTagsExt::TryGetTag(::UnityEngine::Component*  c, ::by_ref<::GlobalNamespace::UnityTag>  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"TryGetTag", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::UnityTag>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c, tag);
}
inline bool GlobalNamespace::UnityTagsExt::CompareTag(::UnityEngine::GameObject*  g, ::GlobalNamespace::UnityTag  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"CompareTag", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UnityTag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, g, tag);
}
inline bool GlobalNamespace::UnityTagsExt::CompareTag(::UnityEngine::Component*  c, ::GlobalNamespace::UnityTag  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityTagsExt*>(),
                        {"CompareTag", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::GlobalNamespace::UnityTag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c, tag);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityTagsExt::UnityTagsExt()   {
}

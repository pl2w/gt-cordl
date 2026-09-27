#pragma once
// IWYU pragma private; include "GorillaExtensions/GTTryFindByExactPath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "GorillaExtensions/zzzz__GTTryFindByExactPath_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaExtensions::GTTryFindByExactPath.XformWithSiblingIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaExtensions::GTTryFindByExactPath::XformWithSiblingIndex)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5d18024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTTryFindByExactPath*>(),
                        {"XformWithSiblingIndex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline bool GorillaExtensions::GTTryFindByExactPath::WithSiblingIndexAndTypeName(::StringW  path, ::by_ref<T>  out_component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTTryFindByExactPath*>(),
                    {"WithSiblingIndexAndTypeName", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, out_component);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline bool GorillaExtensions::GTTryFindByExactPath::WithSiblingIndex(::StringW  xformPath, ::by_ref<T>  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTTryFindByExactPath*>(),
                    {"WithSiblingIndex", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xformPath, component);
}
inline bool GorillaExtensions::GTTryFindByExactPath::XformWithSiblingIndex(::StringW  xformPath, ::by_ref<::UnityEngine::Transform*>  finalXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTTryFindByExactPath*>(),
                        {"XformWithSiblingIndex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xformPath, finalXform);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::GTTryFindByExactPath::GTTryFindByExactPath()   {
}

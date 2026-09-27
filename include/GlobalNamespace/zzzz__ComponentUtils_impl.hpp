#pragma once
// IWYU pragma private; include "GlobalNamespace/ComponentUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ComponentUtils_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ComponentUtils.ComputeStaticHash128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (*)(::UnityEngine::Component*, ::StringW)>(&::GlobalNamespace::ComponentUtils::ComputeStaticHash128)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5b020b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                        {"ComputeStaticHash128", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComponentUtils.ComputeStaticHash128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (*)(::UnityEngine::Component*, int32_t)>(&::GlobalNamespace::ComponentUtils::ComputeStaticHash128)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x5b021d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                        {"ComputeStaticHash128", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ComponentUtils::setStaticF_kHashBits(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "kHashBits", ::GlobalNamespace::ComponentUtils*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> GlobalNamespace::ComponentUtils::getStaticF_kHashBits()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "kHashBits", ::GlobalNamespace::ComponentUtils*>();
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GlobalNamespace::ComponentUtils::EnsureComponent(::UnityEngine::Component*  ctx, ::by_ref<T>  target)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                    {"EnsureComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, ctx, target);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline bool GlobalNamespace::ComponentUtils::TryEnsureComponent(::UnityEngine::Component*  ctx, ::by_ref<T>  target)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                    {"TryEnsureComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx, target);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GlobalNamespace::ComponentUtils::AddComponent(::UnityEngine::Component*  c)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                    {"AddComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, c);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void GlobalNamespace::ComponentUtils::GetOrAddComponent(::UnityEngine::Component*  c, ::by_ref<T>  result)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                    {"GetOrAddComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, result);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline bool GlobalNamespace::ComponentUtils::GetComponentAndSetFieldIfNullElseLogAndDisable(::UnityEngine::Behaviour*  c, ::by_ref<T>  fieldRef, ::StringW  fieldName, ::StringW  fieldTypeName, ::StringW  msgSuffix, /* [CallerMemberName] */ ::StringW  caller)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                    {"GetComponentAndSetFieldIfNullElseLogAndDisable", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Behaviour*>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c, fieldRef, fieldName, fieldTypeName, msgSuffix, caller);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline bool GlobalNamespace::ComponentUtils::GetComponentAndSetFieldIfNullElseLog(::UnityEngine::Behaviour*  c, ::by_ref<T>  fieldRef, ::StringW  fieldName, ::StringW  fieldTypeName, ::StringW  msgSuffix, /* [CallerMemberName] */ ::StringW  caller)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                    {"GetComponentAndSetFieldIfNullElseLog", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Behaviour*>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c, fieldRef, fieldName, fieldTypeName, msgSuffix, caller);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline bool GlobalNamespace::ComponentUtils::DisableIfNull(::UnityEngine::Behaviour*  c, T  fieldRef, ::StringW  fieldName, ::StringW  fieldTypeName, /* [CallerMemberName] */ ::StringW  caller)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                    {"DisableIfNull", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Behaviour*>(), ::i2c::type_of<T>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c, fieldRef, fieldName, fieldTypeName, caller);
}
inline ::UnityEngine::Hash128 GlobalNamespace::ComponentUtils::ComputeStaticHash128(::UnityEngine::Component*  c, ::StringW  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                        {"ComputeStaticHash128", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(nullptr, ___internal_method, c, k);
}
inline ::UnityEngine::Hash128 GlobalNamespace::ComponentUtils::ComputeStaticHash128(::UnityEngine::Component*  c, int32_t  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentUtils*>(),
                        {"ComputeStaticHash128", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(nullptr, ___internal_method, c, k);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ComponentUtils::ComponentUtils()   {
}

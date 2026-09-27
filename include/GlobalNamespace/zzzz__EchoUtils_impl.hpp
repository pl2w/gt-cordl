#pragma once
// IWYU pragma private; include "GlobalNamespace/EchoUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EchoUtils_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename T>
inline T GlobalNamespace::EchoUtils::Echo(T  message)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EchoUtils*>(),
                    {"Echo", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, message);
}
template<typename T>
inline T GlobalNamespace::EchoUtils::Echo(T  message, ::UnityEngine::Object*  context)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EchoUtils*>(),
                    {"Echo", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, message, context);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EchoUtils::EchoUtils()   {
}

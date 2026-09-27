#pragma once
// IWYU pragma private; include "Pathfinding/Util/ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__ObjectPool_1_def.hpp"
template<typename T>
inline T Pathfinding::Util::ObjectPool_1<T>::Claim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ObjectPool_1<T>*>(),
                        {"Claim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void Pathfinding::Util::ObjectPool_1<T>::Release(::by_ref<T>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ObjectPool_1<T>*>(),
                        {"Release", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::Util::ObjectPool_1<T>::ObjectPool_1()   {
}

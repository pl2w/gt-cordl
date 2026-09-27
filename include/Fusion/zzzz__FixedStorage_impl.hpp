#pragma once
// IWYU pragma private; include "Fusion/FixedStorage.hpp"
#include "Fusion/zzzz__IFixedStorage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FixedStorage_def.hpp"
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::FixedStorage::GetWordCount()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FixedStorage*>(),
                    {"GetWordCount", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Fusion::FixedStorage::FixedStorage()   {
}

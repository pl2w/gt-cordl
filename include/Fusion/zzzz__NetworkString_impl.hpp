#pragma once
// IWYU pragma private; include "Fusion/NetworkString.hpp"
#include "Fusion/zzzz__IFixedStorage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkString_def.hpp"
template<typename TSize>
requires(::cordl_internals::type_constraint<TSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TSize> && ::cordl_internals::default_constructor_constraint<TSize>)
inline int32_t Fusion::NetworkString::GetCapacity()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString*>(),
                    {"GetCapacity", {::i2c::class_of<TSize>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Fusion::NetworkString::NetworkString()   {
}

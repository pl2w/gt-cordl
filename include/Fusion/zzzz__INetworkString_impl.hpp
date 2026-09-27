#pragma once
// IWYU pragma private; include "Fusion/INetworkString.hpp"
#include "Fusion/zzzz__IFixedStorage_impl.hpp"
#include "Fusion/zzzz__INetworkString_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Fusion::INetworkString::Equals(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  other)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Fusion::INetworkString*>(), 0}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TOtherSize>()}
                            ));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}

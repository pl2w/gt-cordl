#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/IComponentHost_1.hpp"
#include "Unity/XR/CoreUtils/zzzz__IComponentHost_1_def.hpp"
template<typename THostType>
inline ::ArrayW<THostType> Unity::XR::CoreUtils::IComponentHost_1<THostType>::get_HostedComponents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::IComponentHost_1<THostType>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<THostType>>(this, ___internal_method);
}

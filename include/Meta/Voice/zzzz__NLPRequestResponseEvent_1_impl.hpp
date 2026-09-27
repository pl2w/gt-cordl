#pragma once
// IWYU pragma private; include "Meta/Voice/NLPRequestResponseEvent_1.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Meta/Voice/zzzz__NLPRequestResponseEvent_1_def.hpp"
template<typename TResponseData>
inline void Meta::Voice::NLPRequestResponseEvent_1<TResponseData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResponseData>
inline ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>* Meta::Voice::NLPRequestResponseEvent_1<TResponseData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*>());
}
// Ctor Parameters []
template<typename TResponseData>
constexpr ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>::NLPRequestResponseEvent_1()   {
}

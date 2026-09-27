#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IOneEuroFilter_1.hpp"
#include "Oculus/Interaction/Input/zzzz__IOneEuroFilter_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__OneEuroFilterPropertyBlock_def.hpp"
template<typename TData>
inline TData Oculus::Interaction::Input::IOneEuroFilter_1<TData>::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IOneEuroFilter_1<TData>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TData>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::IOneEuroFilter_1<TData>::SetProperties(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>  properties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IOneEuroFilter_1<TData>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
template<typename TData>
inline TData Oculus::Interaction::Input::IOneEuroFilter_1<TData>::Step(TData  rawValue, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IOneEuroFilter_1<TData>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<TData>(this, ___internal_method, rawValue, deltaTime);
}
template<typename TData>
inline void Oculus::Interaction::Input::IOneEuroFilter_1<TData>::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IOneEuroFilter_1<TData>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IDataSource_1.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
template<typename TData>
inline TData Oculus::Interaction::Input::IDataSource_1<TData>::GetData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IDataSource_1<TData>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TData>(this, ___internal_method);
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IDataSource"
template<typename TData>
constexpr  Oculus::Interaction::Input::IDataSource_1<TData>::operator ::Oculus::Interaction::Input::IDataSource*() noexcept {
return static_cast<::Oculus::Interaction::Input::IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IDataSource"
template<typename TData>
constexpr ::Oculus::Interaction::Input::IDataSource* Oculus::Interaction::Input::IDataSource_1<TData>::i___Oculus__Interaction__Input__IDataSource() noexcept {
return static_cast<::Oculus::Interaction::Input::IDataSource*>(static_cast<void*>(this));
}

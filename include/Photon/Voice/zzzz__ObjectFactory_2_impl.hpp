#pragma once
// IWYU pragma private; include "Photon/Voice/ObjectFactory_2.hpp"
#include "Photon/Voice/zzzz__ObjectFactory_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename TType,typename TInfo>
inline TInfo Photon::Voice::ObjectFactory_2<TType,TInfo>::get_Info()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ObjectFactory_2<TType,TInfo>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TInfo>(this, ___internal_method);
}
template<typename TType,typename TInfo>
inline TType Photon::Voice::ObjectFactory_2<TType,TInfo>::New()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ObjectFactory_2<TType,TInfo>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<TType>(this, ___internal_method);
}
template<typename TType,typename TInfo>
inline TType Photon::Voice::ObjectFactory_2<TType,TInfo>::New(TInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ObjectFactory_2<TType,TInfo>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<TType>(this, ___internal_method, info);
}
template<typename TType,typename TInfo>
inline void Photon::Voice::ObjectFactory_2<TType,TInfo>::Free(TType  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ObjectFactory_2<TType,TInfo>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TType,typename TInfo>
inline void Photon::Voice::ObjectFactory_2<TType,TInfo>::Free(TType  obj, TInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ObjectFactory_2<TType,TInfo>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, info);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TType,typename TInfo>
constexpr  Photon::Voice::ObjectFactory_2<TType,TInfo>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TType,typename TInfo>
constexpr ::System::IDisposable* Photon::Voice::ObjectFactory_2<TType,TInfo>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}

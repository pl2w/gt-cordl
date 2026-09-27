#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonSignal_1.hpp"
#include "GlobalNamespace/zzzz__PhotonSignal_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonSignal_1_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_1_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignalInfo_def.hpp"
#include "Photon/Realtime/zzzz__ReceiverGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1>
constexpr ::GlobalNamespace::OnSignalReceived_1<T1>*& GlobalNamespace::PhotonSignal_1<T1>::__cordl_internal_get__callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
template<typename T1>
constexpr ::GlobalNamespace::OnSignalReceived_1<T1>* const& GlobalNamespace::PhotonSignal_1<T1>::__cordl_internal_get__callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
template<typename T1>
constexpr void GlobalNamespace::PhotonSignal_1<T1>::__cordl_internal_set__callbacks(::GlobalNamespace::OnSignalReceived_1<T1>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callbacks = value;
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal_1<T1>::setStaticF_kSignature(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kSignature", ::GlobalNamespace::PhotonSignal_1<T1>*>(std::forward<int32_t>(value));
}
template<typename T1>
inline int32_t GlobalNamespace::PhotonSignal_1<T1>::getStaticF_kSignature()  {
return ::cordl_internals::getStaticField<int32_t, "kSignature", ::GlobalNamespace::PhotonSignal_1<T1>*>();
}
template<typename T1>
inline int32_t GlobalNamespace::PhotonSignal_1<T1>::get_argCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal_1<T1>::add_OnSignal(::GlobalNamespace::OnSignalReceived_1<T1>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(),
                        {"add_OnSignal", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_1<T1>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal_1<T1>::remove_OnSignal(::GlobalNamespace::OnSignalReceived_1<T1>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(),
                        {"remove_OnSignal", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_1<T1>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal_1<T1>::_ctor(::StringW  signalID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalID);
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal_1<T1>::_ctor(int32_t  signalID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalID);
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal_1<T1>::ClearListeners()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal_1<T1>::Raise(T1  arg1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(),
                        {"Raise", {}, {::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1);
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal_1<T1>::Raise(::Photon::Realtime::ReceiverGroup  receivers, T1  arg1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(),
                        {"Raise", {}, {::i2c::type_of<::Photon::Realtime::ReceiverGroup>(), ::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receivers, arg1);
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal_1<T1>::_Relay(::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonSignalInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, info);
}
template<typename T1>
inline ::GlobalNamespace::PhotonSignal_1<T1>* GlobalNamespace::PhotonSignal_1<T1>::op_Implicit___GlobalNamespace__PhotonSignal_1_T1__(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonSignal_1<T1>*>(nullptr, ___internal_method, s);
}
template<typename T1>
inline ::GlobalNamespace::PhotonSignal_1<T1>* GlobalNamespace::PhotonSignal_1<T1>::op_Explicit___GlobalNamespace__PhotonSignal_1_T1__(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_1<T1>*>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonSignal_1<T1>*>(nullptr, ___internal_method, i);
}
template<typename T1>
inline ::GlobalNamespace::PhotonSignal_1<T1>* GlobalNamespace::PhotonSignal_1<T1>::New_ctor(::StringW  signalID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonSignal_1<T1>*>(signalID));
}
template<typename T1>
inline ::GlobalNamespace::PhotonSignal_1<T1>* GlobalNamespace::PhotonSignal_1<T1>::New_ctor(int32_t  signalID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonSignal_1<T1>*>(signalID));
}
// Ctor Parameters []
template<typename T1>
constexpr ::GlobalNamespace::PhotonSignal_1<T1>::PhotonSignal_1()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonSignal_3.hpp"
#include "GlobalNamespace/zzzz__PhotonSignal_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonSignal_3_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_3_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignalInfo_def.hpp"
#include "Photon/Realtime/zzzz__ReceiverGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1,typename T2,typename T3>
constexpr ::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*& GlobalNamespace::PhotonSignal_3<T1,T2,T3>::__cordl_internal_get__callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
template<typename T1,typename T2,typename T3>
constexpr ::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>* const& GlobalNamespace::PhotonSignal_3<T1,T2,T3>::__cordl_internal_get__callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
template<typename T1,typename T2,typename T3>
constexpr void GlobalNamespace::PhotonSignal_3<T1,T2,T3>::__cordl_internal_set__callbacks(::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callbacks = value;
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal_3<T1,T2,T3>::setStaticF_kSignature(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kSignature", ::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(std::forward<int32_t>(value));
}
template<typename T1,typename T2,typename T3>
inline int32_t GlobalNamespace::PhotonSignal_3<T1,T2,T3>::getStaticF_kSignature()  {
return ::cordl_internals::getStaticField<int32_t, "kSignature", ::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>();
}
template<typename T1,typename T2,typename T3>
inline int32_t GlobalNamespace::PhotonSignal_3<T1,T2,T3>::get_argCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal_3<T1,T2,T3>::add_OnSignal(::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(),
                        {"add_OnSignal", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal_3<T1,T2,T3>::remove_OnSignal(::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(),
                        {"remove_OnSignal", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal_3<T1,T2,T3>::_ctor(::StringW  signalID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalID);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal_3<T1,T2,T3>::_ctor(int32_t  signalID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalID);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal_3<T1,T2,T3>::ClearListeners()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal_3<T1,T2,T3>::Raise(T1  arg1, T2  arg2, T3  arg3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(),
                        {"Raise", {}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2, arg3);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal_3<T1,T2,T3>::Raise(::Photon::Realtime::ReceiverGroup  receivers, T1  arg1, T2  arg2, T3  arg3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(),
                        {"Raise", {}, {::i2c::type_of<::Photon::Realtime::ReceiverGroup>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receivers, arg1, arg2, arg3);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal_3<T1,T2,T3>::_Relay(::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonSignalInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, info);
}
template<typename T1,typename T2,typename T3>
inline ::GlobalNamespace::PhotonSignal_3<T1,T2,T3>* GlobalNamespace::PhotonSignal_3<T1,T2,T3>::op_Implicit___GlobalNamespace__PhotonSignal_3_T1_T2_T3__(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(nullptr, ___internal_method, s);
}
template<typename T1,typename T2,typename T3>
inline ::GlobalNamespace::PhotonSignal_3<T1,T2,T3>* GlobalNamespace::PhotonSignal_3<T1,T2,T3>::op_Explicit___GlobalNamespace__PhotonSignal_3_T1_T2_T3__(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(nullptr, ___internal_method, i);
}
template<typename T1,typename T2,typename T3>
inline ::GlobalNamespace::PhotonSignal_3<T1,T2,T3>* GlobalNamespace::PhotonSignal_3<T1,T2,T3>::New_ctor(::StringW  signalID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(signalID));
}
template<typename T1,typename T2,typename T3>
inline ::GlobalNamespace::PhotonSignal_3<T1,T2,T3>* GlobalNamespace::PhotonSignal_3<T1,T2,T3>::New_ctor(int32_t  signalID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonSignal_3<T1,T2,T3>*>(signalID));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3>
constexpr ::GlobalNamespace::PhotonSignal_3<T1,T2,T3>::PhotonSignal_3()   {
}

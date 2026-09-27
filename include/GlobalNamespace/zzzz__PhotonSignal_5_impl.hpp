#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonSignal_5.hpp"
#include "GlobalNamespace/zzzz__PhotonSignal_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonSignal_5_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_5_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignalInfo_def.hpp"
#include "Photon/Realtime/zzzz__ReceiverGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1,typename T2,typename T3,typename T4,typename T5>
constexpr ::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*& GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::__cordl_internal_get__callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
constexpr ::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>* const& GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::__cordl_internal_get__callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
constexpr void GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::__cordl_internal_set__callbacks(::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callbacks = value;
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::setStaticF_kSignature(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kSignature", ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(std::forward<int32_t>(value));
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline int32_t GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::getStaticF_kSignature()  {
return ::cordl_internals::getStaticField<int32_t, "kSignature", ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>();
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline int32_t GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::get_argCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::add_OnSignal(::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(),
                        {"add_OnSignal", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::remove_OnSignal(::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(),
                        {"remove_OnSignal", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::_ctor(::StringW  signalID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalID);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::_ctor(int32_t  signalID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalID);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::ClearListeners()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::Raise(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(),
                        {"Raise", {}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2, arg3, arg4, arg5);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::Raise(::Photon::Realtime::ReceiverGroup  receivers, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(),
                        {"Raise", {}, {::i2c::type_of<::Photon::Realtime::ReceiverGroup>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receivers, arg1, arg2, arg3, arg4, arg5);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::_Relay(::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonSignalInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>* GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::op_Implicit___GlobalNamespace__PhotonSignal_5_T1_T2_T3_T4_T5__(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(nullptr, ___internal_method, s);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>* GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::op_Explicit___GlobalNamespace__PhotonSignal_5_T1_T2_T3_T4_T5__(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(nullptr, ___internal_method, i);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>* GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::New_ctor(::StringW  signalID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(signalID));
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>* GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::New_ctor(int32_t  signalID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>*>(signalID));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3,typename T4,typename T5>
constexpr ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>::PhotonSignal_5()   {
}

#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequestDecodeDelegate_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestDecodeDelegate_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
template<typename TValue>
inline void Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<TValue>* Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>::Invoke(::UnityEngine::Networking::UnityWebRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TValue>*>(this, ___internal_method, request);
}
template<typename TValue>
inline ::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>* Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*>(object, method));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>::VRequestDecodeDelegate_1()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/TickSystem_1.hpp"
#include "GlobalNamespace/zzzz__TickSystem_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TickSystem_1_def.hpp"
#include "GlobalNamespace/zzzz__CallbackContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__ICallBack_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPre_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystem_def.hpp"
#include "GlobalNamespace/zzzz__TickSystem_1_def.hpp"
#include "GorillaTag/zzzz__ObjectPoolEvents_def.hpp"
#include "GorillaTag/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::setStaticF_preTickWrapperPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*, "preTickWrapperPool", ::GlobalNamespace::TickSystem_1<T>*>(std::forward<::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*>(value));
}
template<typename T>
inline ::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>* GlobalNamespace::TickSystem_1<T>::getStaticF_preTickWrapperPool()  {
return ::cordl_internals::getStaticField<::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*, "preTickWrapperPool", ::GlobalNamespace::TickSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::setStaticF_preTickCallbacks(::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*, "preTickCallbacks", ::GlobalNamespace::TickSystem_1<T>*>(std::forward<::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*>(value));
}
template<typename T>
inline ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>* GlobalNamespace::TickSystem_1<T>::getStaticF_preTickCallbacks()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*, "preTickCallbacks", ::GlobalNamespace::TickSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::setStaticF_preTickWrapperTable(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPre*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPre*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*, "preTickWrapperTable", ::GlobalNamespace::TickSystem_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPre*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPre*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>* GlobalNamespace::TickSystem_1<T>::getStaticF_preTickWrapperTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPre*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*, "preTickWrapperTable", ::GlobalNamespace::TickSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::setStaticF_tickWrapperPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*, "tickWrapperPool", ::GlobalNamespace::TickSystem_1<T>*>(std::forward<::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*>(value));
}
template<typename T>
inline ::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>* GlobalNamespace::TickSystem_1<T>::getStaticF_tickWrapperPool()  {
return ::cordl_internals::getStaticField<::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*, "tickWrapperPool", ::GlobalNamespace::TickSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::setStaticF_tickCallbacks(::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*, "tickCallbacks", ::GlobalNamespace::TickSystem_1<T>*>(std::forward<::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*>(value));
}
template<typename T>
inline ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>* GlobalNamespace::TickSystem_1<T>::getStaticF_tickCallbacks()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*, "tickCallbacks", ::GlobalNamespace::TickSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::setStaticF_tickWrapperTable(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemTick*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemTick*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*, "tickWrapperTable", ::GlobalNamespace::TickSystem_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemTick*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemTick*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>* GlobalNamespace::TickSystem_1<T>::getStaticF_tickWrapperTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemTick*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*, "tickWrapperTable", ::GlobalNamespace::TickSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::setStaticF_postTickWrapperPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*, "postTickWrapperPool", ::GlobalNamespace::TickSystem_1<T>*>(std::forward<::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*>(value));
}
template<typename T>
inline ::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>* GlobalNamespace::TickSystem_1<T>::getStaticF_postTickWrapperPool()  {
return ::cordl_internals::getStaticField<::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*, "postTickWrapperPool", ::GlobalNamespace::TickSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::setStaticF_postTickCallbacks(::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*, "postTickCallbacks", ::GlobalNamespace::TickSystem_1<T>*>(std::forward<::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*>(value));
}
template<typename T>
inline ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>* GlobalNamespace::TickSystem_1<T>::getStaticF_postTickCallbacks()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*, "postTickCallbacks", ::GlobalNamespace::TickSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::setStaticF_postTickWrapperTable(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPost*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPost*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*, "postTickWrapperTable", ::GlobalNamespace::TickSystem_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPost*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPost*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>* GlobalNamespace::TickSystem_1<T>::getStaticF_postTickWrapperTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPost*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*, "postTickWrapperTable", ::GlobalNamespace::TickSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::OnEnterPlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"OnEnterPlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::AddPreTickCallback(::GlobalNamespace::ITickSystemPre*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"AddPreTickCallback", {}, {::i2c::type_of<::GlobalNamespace::ITickSystemPre*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::AddTickCallback(::GlobalNamespace::ITickSystemTick*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"AddTickCallback", {}, {::i2c::type_of<::GlobalNamespace::ITickSystemTick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::AddPostTickCallback(::GlobalNamespace::ITickSystemPost*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"AddPostTickCallback", {}, {::i2c::type_of<::GlobalNamespace::ITickSystemPost*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::AddTickSystemCallBack(::GlobalNamespace::ITickSystem*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"AddTickSystemCallBack", {}, {::i2c::type_of<::GlobalNamespace::ITickSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::AddCallbackTarget(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"AddCallbackTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::RemovePreTickCallback(::GlobalNamespace::ITickSystemPre*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"RemovePreTickCallback", {}, {::i2c::type_of<::GlobalNamespace::ITickSystemPre*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::RemoveTickCallback(::GlobalNamespace::ITickSystemTick*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"RemoveTickCallback", {}, {::i2c::type_of<::GlobalNamespace::ITickSystemTick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::RemovePostTickCallback(::GlobalNamespace::ITickSystemPost*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"RemovePostTickCallback", {}, {::i2c::type_of<::GlobalNamespace::ITickSystemPost*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::RemoveTickSystemCallback(::GlobalNamespace::ITickSystem*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"RemoveTickSystemCallback", {}, {::i2c::type_of<::GlobalNamespace::ITickSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::RemoveCallbackTarget(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {"RemoveCallbackTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::TickSystem_1<T>* GlobalNamespace::TickSystem_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TickSystem_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::TickSystem_1<T>::TickSystem_1()   {
}
template<typename T>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>::CallBack()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>* GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>::TickSystem_1_TickCallbackWrapperPost()   {
}
template<typename T>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>::CallBack()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>* GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>::TickSystem_1_TickCallbackWrapperTick()   {
}
template<typename T>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>::CallBack()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>* GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>::TickSystem_1_TickCallbackWrapperPre()   {
}
template<typename T,typename U>
constexpr U& GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::__cordl_internal_get_m_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_target;
}
template<typename T,typename U>
constexpr U const& GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::__cordl_internal_get_m_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_target;
}
template<typename T,typename U>
constexpr void GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::__cordl_internal_set_m_target(U  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_target = value;
}
template<typename T,typename U>
inline U GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::get_target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>*>(),
                        {"get_target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<U>(this, ___internal_method);
}
template<typename T,typename U>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::set_target(U  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>*>(),
                        {"set_target", {}, {::i2c::type_of<U>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T,typename U>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::CallBack()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename U>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::OnTaken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>*>(),
                        {"OnTaken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename U>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::OnReturned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>*>(),
                        {"OnReturned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename U>
inline void GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename U>
inline ::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>* GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>*>());
}
/// @brief Convert operator to "::GorillaTag::ObjectPoolEvents"
template<typename T,typename U>
constexpr  GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::operator ::GorillaTag::ObjectPoolEvents*() noexcept {
return static_cast<::GorillaTag::ObjectPoolEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ObjectPoolEvents"
template<typename T,typename U>
constexpr ::GorillaTag::ObjectPoolEvents* GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::i___GorillaTag__ObjectPoolEvents() noexcept {
return static_cast<::GorillaTag::ObjectPoolEvents*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ICallBack"
template<typename T,typename U>
constexpr  GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::operator ::GlobalNamespace::ICallBack*() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallBack"
template<typename T,typename U>
constexpr ::GlobalNamespace::ICallBack* GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::i___GlobalNamespace__ICallBack() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T,typename U>
constexpr ::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>::TickSystem_1_TickCallbackWrapper_1()   {
}

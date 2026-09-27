#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSystem_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GTSystem_1_def.hpp"
#include "GlobalNamespace/zzzz__GTSystem_1_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::GTSystem_1<T>::__cordl_internal_get__instances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instances;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& GlobalNamespace::GTSystem_1<T>::__cordl_internal_get__instances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instances;
}
template<typename T>
constexpr void GlobalNamespace::GTSystem_1<T>::__cordl_internal_set__instances(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instances = value;
}
template<typename T>
constexpr bool& GlobalNamespace::GTSystem_1<T>::__cordl_internal_get__networked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networked;
}
template<typename T>
constexpr bool const& GlobalNamespace::GTSystem_1<T>::__cordl_internal_get__networked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networked;
}
template<typename T>
constexpr void GlobalNamespace::GTSystem_1<T>::__cordl_internal_set__networked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networked = value;
}
template<typename T>
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GTSystem_1<T>::__cordl_internal_get__photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photonView;
}
template<typename T>
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GTSystem_1<T>::__cordl_internal_get__photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photonView;
}
template<typename T>
constexpr void GlobalNamespace::GTSystem_1<T>::__cordl_internal_set__photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____photonView = value;
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::setStaticF_gSingleton(::UnityW<T>  value)  {
::cordl_internals::setStaticField<::UnityW<T>, "gSingleton", ::GlobalNamespace::GTSystem_1<T>*>(std::forward<::UnityW<T>>(value));
}
template<typename T>
inline ::UnityW<T> GlobalNamespace::GTSystem_1<T>::getStaticF_gSingleton()  {
return ::cordl_internals::getStaticField<::UnityW<T>, "gSingleton", ::GlobalNamespace::GTSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::setStaticF_gInitializing(bool  value)  {
::cordl_internals::setStaticField<bool, "gInitializing", ::GlobalNamespace::GTSystem_1<T>*>(std::forward<bool>(value));
}
template<typename T>
inline bool GlobalNamespace::GTSystem_1<T>::getStaticF_gInitializing()  {
return ::cordl_internals::getStaticField<bool, "gInitializing", ::GlobalNamespace::GTSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::setStaticF_gAppQuitting(bool  value)  {
::cordl_internals::setStaticField<bool, "gAppQuitting", ::GlobalNamespace::GTSystem_1<T>*>(std::forward<bool>(value));
}
template<typename T>
inline bool GlobalNamespace::GTSystem_1<T>::getStaticF_gAppQuitting()  {
return ::cordl_internals::getStaticField<bool, "gAppQuitting", ::GlobalNamespace::GTSystem_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::setStaticF_gQueueRegister(::System::Collections::Generic::HashSet_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<T>*, "gQueueRegister", ::GlobalNamespace::GTSystem_1<T>*>(std::forward<::System::Collections::Generic::HashSet_1<T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::GTSystem_1<T>::getStaticF_gQueueRegister()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<T>*, "gQueueRegister", ::GlobalNamespace::GTSystem_1<T>*>();
}
template<typename T>
inline ::UnityW<::Photon::Pun::PhotonView> GlobalNamespace::GTSystem_1<T>::get_photonView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"get_photonView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::OnApplicationQuit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::OnTick(float_t  dt, T  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt, instance);
}
template<typename T>
inline bool GlobalNamespace::GTSystem_1<T>::RegisterInstance(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"RegisterInstance", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::OnRegister(T  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename T>
inline bool GlobalNamespace::GTSystem_1<T>::UnregisterInstance(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"UnregisterInstance", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::OnUnregister(T  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::GTSystem_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::GTSystem_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::GTSystem_1<T>::System_Collections_Generic_IReadOnlyCollection_T__get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"System.Collections.Generic.IReadOnlyCollection<T>.get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::GTSystem_1<T>::System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"System.Collections.Generic.IReadOnlyList<T>.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline ::UnityW<::Photon::Pun::PhotonView> GlobalNamespace::GTSystem_1<T>::get_PhotonView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"get_PhotonView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>>(nullptr, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::SetSingleton(::GlobalNamespace::GTSystem_1<T>*  system)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"SetSingleton", {}, {::i2c::type_of<::GlobalNamespace::GTSystem_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, system);
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::Register(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"Register", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance);
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::Unregister(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {"Unregister", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance);
}
template<typename T>
inline void GlobalNamespace::GTSystem_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::GTSystem_1<T>* GlobalNamespace::GTSystem_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTSystem_1<T>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
template<typename T>
constexpr  GlobalNamespace::GTSystem_1<T>::operator ::System::Collections::Generic::IReadOnlyList_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* GlobalNamespace::GTSystem_1<T>::i___System__Collections__Generic__IReadOnlyList_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  GlobalNamespace::GTSystem_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::GTSystem_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::GTSystem_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::GTSystem_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr  GlobalNamespace::GTSystem_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* GlobalNamespace::GTSystem_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GTSystem_1<T>::GTSystem_1()   {
}
template<typename T>
inline void GlobalNamespace::GTSystem_1___c<T>::setStaticF___9(::GlobalNamespace::GTSystem_1___c<T>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GTSystem_1___c<T>*, "<>9", ::GlobalNamespace::GTSystem_1___c<T>*>(std::forward<::GlobalNamespace::GTSystem_1___c<T>*>(value));
}
template<typename T>
inline ::GlobalNamespace::GTSystem_1___c<T>* GlobalNamespace::GTSystem_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GTSystem_1___c<T>*, "<>9", ::GlobalNamespace::GTSystem_1___c<T>*>();
}
template<typename T>
inline void GlobalNamespace::GTSystem_1___c<T>::setStaticF___9__25_0(::System::Func_2<T,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<T,bool>*, "<>9__25_0", ::GlobalNamespace::GTSystem_1___c<T>*>(std::forward<::System::Func_2<T,bool>*>(value));
}
template<typename T>
inline ::System::Func_2<T,bool>* GlobalNamespace::GTSystem_1___c<T>::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<T,bool>*, "<>9__25_0", ::GlobalNamespace::GTSystem_1___c<T>*>();
}
template<typename T>
inline void GlobalNamespace::GTSystem_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::GTSystem_1___c<T>::_SetSingleton_b__25_0(T  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSystem_1___c<T>*>(),
                        {"<SetSingleton>b__25_0", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
template<typename T>
inline ::GlobalNamespace::GTSystem_1___c<T>* GlobalNamespace::GTSystem_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTSystem_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GTSystem_1___c<T>::GTSystem_1___c()   {
}

#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObject_1.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObject_impl.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObject_1_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectUnloadDelegate_def.hpp"
template<typename T>
constexpr bool& Fusion::FusionGlobalScriptableObject_1<T>::__cordl_internal_get__IsGlobal_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsGlobal_k__BackingField;
}
template<typename T>
constexpr bool const& Fusion::FusionGlobalScriptableObject_1<T>::__cordl_internal_get__IsGlobal_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsGlobal_k__BackingField;
}
template<typename T>
constexpr void Fusion::FusionGlobalScriptableObject_1<T>::__cordl_internal_set__IsGlobal_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsGlobal_k__BackingField = value;
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject_1<T>::setStaticF_s_instance(T  value)  {
::cordl_internals::setStaticField<T, "s_instance", ::Fusion::FusionGlobalScriptableObject_1<T>*>(std::forward<T>(value));
}
template<typename T>
inline T Fusion::FusionGlobalScriptableObject_1<T>::getStaticF_s_instance()  {
return ::cordl_internals::getStaticField<T, "s_instance", ::Fusion::FusionGlobalScriptableObject_1<T>*>();
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject_1<T>::setStaticF_s_unloadHandler(::Fusion::FusionGlobalScriptableObjectUnloadDelegate*  value)  {
::cordl_internals::setStaticField<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*, "s_unloadHandler", ::Fusion::FusionGlobalScriptableObject_1<T>*>(std::forward<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>(value));
}
template<typename T>
inline ::Fusion::FusionGlobalScriptableObjectUnloadDelegate* Fusion::FusionGlobalScriptableObject_1<T>::getStaticF_s_unloadHandler()  {
return ::cordl_internals::getStaticField<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*, "s_unloadHandler", ::Fusion::FusionGlobalScriptableObject_1<T>*>();
}
template<typename T>
inline bool Fusion::FusionGlobalScriptableObject_1<T>::get_IsGlobal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"get_IsGlobal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject_1<T>::set_IsGlobal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"set_IsGlobal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject_1<T>::OnLoadedAsGlobal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject_1<T>::OnUnloadedAsGlobal(bool  destroyed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destroyed);
}
template<typename T>
inline ::StringW Fusion::FusionGlobalScriptableObject_1<T>::get_LogPrefix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"get_LogPrefix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
template<typename T>
inline ::StringW Fusion::FusionGlobalScriptableObject_1<T>::AsId(::Fusion::FusionGlobalScriptableObject_1<T>*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"AsId", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObject_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject_1<T>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Fusion::FusionGlobalScriptableObject_1<T>::get_GlobalInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"get_GlobalInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject_1<T>::set_GlobalInternal(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"set_GlobalInternal", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
inline bool Fusion::FusionGlobalScriptableObject_1<T>::get_IsGlobalLoadedInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"get_IsGlobalLoadedInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template<typename T>
inline bool Fusion::FusionGlobalScriptableObject_1<T>::TryGetGlobalInternal(::by_ref<T>  global)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"TryGetGlobalInternal", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, global);
}
template<typename T>
inline bool Fusion::FusionGlobalScriptableObject_1<T>::UnloadGlobalInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"UnloadGlobalInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template<typename T>
inline T Fusion::FusionGlobalScriptableObject_1<T>::GetOrLoadGlobalInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"GetOrLoadGlobalInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline T Fusion::FusionGlobalScriptableObject_1<T>::LoadPlayerInstance(::by_ref<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>  unloadHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"LoadPlayerInstance", {}, {::i2c::type_of<::by_ref<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, unloadHandler);
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject_1<T>::SetGlobalInternal(T  value, ::Fusion::FusionGlobalScriptableObjectUnloadDelegate*  unloadHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {"SetGlobalInternal", {}, {::i2c::type_of<T>(), ::i2c::type_of<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, unloadHandler);
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::FusionGlobalScriptableObject_1<T>* Fusion::FusionGlobalScriptableObject_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObject_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::FusionGlobalScriptableObject_1<T>::FusionGlobalScriptableObject_1()   {
}

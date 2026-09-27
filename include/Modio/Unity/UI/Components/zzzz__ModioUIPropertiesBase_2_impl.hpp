#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIPropertiesBase_2.hpp"
#include "Modio/Unity/UI/Components/zzzz__IPropertyMonoBehaviourEvents_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIPropertiesBase_2_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIPropertiesBase_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename TOwner,typename TProperty>
constexpr TOwner& Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::__cordl_internal_get_Owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
template<typename TOwner,typename TProperty>
constexpr TOwner const& Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::__cordl_internal_get_Owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
template<typename TOwner,typename TProperty>
constexpr void Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::__cordl_internal_set_Owner(TOwner  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Owner = value;
}
template<typename TOwner,typename TProperty>
constexpr ::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>& Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::__cordl_internal_get__monoBehaviourEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monoBehaviourEvents;
}
template<typename TOwner,typename TProperty>
constexpr ::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*> const& Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::__cordl_internal_get__monoBehaviourEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monoBehaviourEvents;
}
template<typename TOwner,typename TProperty>
constexpr void Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::__cordl_internal_set__monoBehaviourEvents(::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monoBehaviourEvents = value;
}
template<typename TOwner,typename TProperty>
inline ::ArrayW<TProperty> Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>>(this, ___internal_method);
}
template<typename TOwner,typename TProperty>
inline void Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner,typename TProperty>
inline void Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner,typename TProperty>
inline void Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner,typename TProperty>
inline void Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner,typename TProperty>
inline void Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner,typename TProperty>
inline void Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::UpdateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner,typename TProperty>
inline void Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner,typename TProperty>
inline ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>* Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>*>());
}
// Ctor Parameters []
template<typename TOwner,typename TProperty>
constexpr ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>::ModioUIPropertiesBase_2()   {
}
template<typename TOwner,typename TProperty>
inline void Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>::setStaticF___9(::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*, "<>9", ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*>(std::forward<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*>(value));
}
template<typename TOwner,typename TProperty>
inline ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>* Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*, "<>9", ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*>();
}
template<typename TOwner,typename TProperty>
inline void Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>::setStaticF___9__4_0(::System::Func_2<TProperty,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TProperty,bool>*, "<>9__4_0", ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*>(std::forward<::System::Func_2<TProperty,bool>*>(value));
}
template<typename TOwner,typename TProperty>
inline ::System::Func_2<TProperty,bool>* Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TProperty,bool>*, "<>9__4_0", ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*>();
}
template<typename TOwner,typename TProperty>
inline void Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner,typename TProperty>
inline bool Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>::_Awake_b__4_0(TProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*>(),
                        {"<Awake>b__4_0", {}, {::i2c::type_of<TProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, property);
}
template<typename TOwner,typename TProperty>
inline ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>* Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*>());
}
// Ctor Parameters []
template<typename TOwner,typename TProperty>
constexpr ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>::ModioUIPropertiesBase_2___c()   {
}

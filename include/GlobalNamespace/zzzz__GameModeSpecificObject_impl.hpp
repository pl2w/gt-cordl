#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSpecificObject.hpp"
#include "GlobalNamespace/zzzz__GameModeSpecificObject_ValidationMethod_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameModeSpecificObject_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSpecificObject_ValidationMethod_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSpecificObject__Awake_d__15_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSpecificObject_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject.add_OnAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*)>(&::GlobalNamespace::GameModeSpecificObject::add_OnAwake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57eb154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"add_OnAwake", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject.remove_OnAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*)>(&::GlobalNamespace::GameModeSpecificObject::remove_OnAwake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57eb20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"remove_OnAwake", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject.add_OnDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*)>(&::GlobalNamespace::GameModeSpecificObject::add_OnDestroyed)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x57eb2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"add_OnDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject.remove_OnDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*)>(&::GlobalNamespace::GameModeSpecificObject::remove_OnDestroyed)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x57eb380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"remove_OnDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject.get_Validation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameModeSpecificObject_ValidationMethod (::GlobalNamespace::GameModeSpecificObject::*)()>(&::GlobalNamespace::GameModeSpecificObject::get_Validation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eb43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"get_Validation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject.get_GameModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>* (::GlobalNamespace::GameModeSpecificObject::*)()>(&::GlobalNamespace::GameModeSpecificObject::get_GameModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eb444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"get_GameModes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObject::*)()>(&::GlobalNamespace::GameModeSpecificObject::Awake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57eb44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObject::*)()>(&::GlobalNamespace::GameModeSpecificObject::OnDestroy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57eb4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject.CheckValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameModeSpecificObject::*)(::GorillaGameModes::GameModeType)>(&::GlobalNamespace::GameModeSpecificObject::CheckValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57eb560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"CheckValid", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObject::*)()>(&::GlobalNamespace::GameModeSpecificObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameModeSpecificObject_ValidationMethod& GlobalNamespace::GameModeSpecificObject::__cordl_internal_get_validationMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationMethod;
}
constexpr ::GlobalNamespace::GameModeSpecificObject_ValidationMethod const& GlobalNamespace::GameModeSpecificObject::__cordl_internal_get_validationMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationMethod;
}
constexpr void GlobalNamespace::GameModeSpecificObject::__cordl_internal_set_validationMethod(::GlobalNamespace::GameModeSpecificObject_ValidationMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validationMethod = value;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeType>& GlobalNamespace::GameModeSpecificObject::__cordl_internal_get__gameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameModes;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& GlobalNamespace::GameModeSpecificObject::__cordl_internal_get__gameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameModes;
}
constexpr void GlobalNamespace::GameModeSpecificObject::__cordl_internal_set__gameModes(::ArrayW<::GorillaGameModes::GameModeType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameModes = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*& GlobalNamespace::GameModeSpecificObject::__cordl_internal_get_gameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModes;
}
constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>* const& GlobalNamespace::GameModeSpecificObject::__cordl_internal_get_gameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModes;
}
constexpr void GlobalNamespace::GameModeSpecificObject::__cordl_internal_set_gameModes(::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModes = value;
}
inline void GlobalNamespace::GameModeSpecificObject::setStaticF_OnAwake(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*, "OnAwake", ::GlobalNamespace::GameModeSpecificObject*>(std::forward<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(value));
}
inline ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* GlobalNamespace::GameModeSpecificObject::getStaticF_OnAwake()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*, "OnAwake", ::GlobalNamespace::GameModeSpecificObject*>();
}
inline void GlobalNamespace::GameModeSpecificObject::setStaticF_OnDestroyed(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*, "OnDestroyed", ::GlobalNamespace::GameModeSpecificObject*>(std::forward<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(value));
}
inline ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* GlobalNamespace::GameModeSpecificObject::getStaticF_OnDestroyed()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*, "OnDestroyed", ::GlobalNamespace::GameModeSpecificObject*>();
}
inline void GlobalNamespace::GameModeSpecificObject::add_OnAwake(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"add_OnAwake", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GameModeSpecificObject::remove_OnAwake(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"remove_OnAwake", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GameModeSpecificObject::add_OnDestroyed(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"add_OnDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GameModeSpecificObject::remove_OnDestroyed(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"remove_OnDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::GameModeSpecificObject_ValidationMethod GlobalNamespace::GameModeSpecificObject::get_Validation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"get_Validation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameModeSpecificObject_ValidationMethod>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>* GlobalNamespace::GameModeSpecificObject::get_GameModes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"get_GameModes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSpecificObject::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSpecificObject::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameModeSpecificObject::CheckValid(::GorillaGameModes::GameModeType  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {"CheckValid", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameMode);
}
inline void GlobalNamespace::GameModeSpecificObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameModeSpecificObject* GlobalNamespace::GameModeSpecificObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameModeSpecificObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameModeSpecificObject::GameModeSpecificObject()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x57eb5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::*)(::GlobalNamespace::GameModeSpecificObject*)>(&::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57eb700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::*)(::GlobalNamespace::GameModeSpecificObject*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57eb714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57eb734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::Invoke(::GlobalNamespace::GameModeSpecificObject*  gameModeSpecificObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameModeSpecificObject);
}
inline ::System::IAsyncResult* GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::BeginInvoke(::GlobalNamespace::GameModeSpecificObject*  gameModeSpecificObject, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, gameModeSpecificObject, callback, object);
}
inline void GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate::GameModeSpecificObject_GameModeSpecificObjectDelegate()   {
}

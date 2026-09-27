#pragma once
// IWYU pragma private; include "Oculus/Interaction/SecondaryInteractorConnection.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__SecondaryInteractorConnection_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::SecondaryInteractorConnection.get_PrimaryInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractorView* (::Oculus::Interaction::SecondaryInteractorConnection::*)()>(&::Oculus::Interaction::SecondaryInteractorConnection::get_PrimaryInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa419b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"get_PrimaryInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SecondaryInteractorConnection.set_PrimaryInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SecondaryInteractorConnection::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::SecondaryInteractorConnection::set_PrimaryInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa419b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"set_PrimaryInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SecondaryInteractorConnection.get_SecondaryInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractorView* (::Oculus::Interaction::SecondaryInteractorConnection::*)()>(&::Oculus::Interaction::SecondaryInteractorConnection::get_SecondaryInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa419b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"get_SecondaryInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SecondaryInteractorConnection.set_SecondaryInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SecondaryInteractorConnection::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::SecondaryInteractorConnection::set_SecondaryInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa419b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"set_SecondaryInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SecondaryInteractorConnection.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SecondaryInteractorConnection::*)()>(&::Oculus::Interaction::SecondaryInteractorConnection::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa419b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                    {::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SecondaryInteractorConnection.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SecondaryInteractorConnection::*)()>(&::Oculus::Interaction::SecondaryInteractorConnection::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa419bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                    {::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SecondaryInteractorConnection.InjectAllSecondaryInteractorConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SecondaryInteractorConnection::*)(::Oculus::Interaction::IInteractorView*, ::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::SecondaryInteractorConnection::InjectAllSecondaryInteractorConnection)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa419bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"InjectAllSecondaryInteractorConnection", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>(), ::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SecondaryInteractorConnection.InjectPrimaryInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SecondaryInteractorConnection::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::SecondaryInteractorConnection::InjectPrimaryInteractor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa419bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"InjectPrimaryInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SecondaryInteractorConnection.InjectSecondaryInteractorConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SecondaryInteractorConnection::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::SecondaryInteractorConnection::InjectSecondaryInteractorConnection)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa419cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"InjectSecondaryInteractorConnection", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SecondaryInteractorConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SecondaryInteractorConnection::*)()>(&::Oculus::Interaction::SecondaryInteractorConnection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa419d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_get__primaryInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryInteractor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_get__primaryInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryInteractor;
}
constexpr void Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_set__primaryInteractor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primaryInteractor = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_get__secondaryInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryInteractor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_get__secondaryInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryInteractor;
}
constexpr void Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_set__secondaryInteractor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondaryInteractor = value;
}
constexpr ::Oculus::Interaction::IInteractorView*& Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_get__PrimaryInteractor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PrimaryInteractor_k__BackingField;
}
constexpr ::Oculus::Interaction::IInteractorView* const& Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_get__PrimaryInteractor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PrimaryInteractor_k__BackingField;
}
constexpr void Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_set__PrimaryInteractor_k__BackingField(::Oculus::Interaction::IInteractorView*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PrimaryInteractor_k__BackingField = value;
}
constexpr ::Oculus::Interaction::IInteractorView*& Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_get__SecondaryInteractor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SecondaryInteractor_k__BackingField;
}
constexpr ::Oculus::Interaction::IInteractorView* const& Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_get__SecondaryInteractor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SecondaryInteractor_k__BackingField;
}
constexpr void Oculus::Interaction::SecondaryInteractorConnection::__cordl_internal_set__SecondaryInteractor_k__BackingField(::Oculus::Interaction::IInteractorView*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SecondaryInteractor_k__BackingField = value;
}
inline ::Oculus::Interaction::IInteractorView* Oculus::Interaction::SecondaryInteractorConnection::get_PrimaryInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"get_PrimaryInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractorView*>(this, ___internal_method);
}
inline void Oculus::Interaction::SecondaryInteractorConnection::set_PrimaryInteractor(::Oculus::Interaction::IInteractorView*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"set_PrimaryInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IInteractorView* Oculus::Interaction::SecondaryInteractorConnection::get_SecondaryInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"get_SecondaryInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractorView*>(this, ___internal_method);
}
inline void Oculus::Interaction::SecondaryInteractorConnection::set_SecondaryInteractor(::Oculus::Interaction::IInteractorView*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"set_SecondaryInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::SecondaryInteractorConnection::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SecondaryInteractorConnection::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SecondaryInteractorConnection::InjectAllSecondaryInteractorConnection(::Oculus::Interaction::IInteractorView*  primaryInteractor, ::Oculus::Interaction::IInteractorView*  secondaryInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"InjectAllSecondaryInteractorConnection", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>(), ::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, primaryInteractor, secondaryInteractor);
}
inline void Oculus::Interaction::SecondaryInteractorConnection::InjectPrimaryInteractor(::Oculus::Interaction::IInteractorView*  interactorView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"InjectPrimaryInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorView);
}
inline void Oculus::Interaction::SecondaryInteractorConnection::InjectSecondaryInteractorConnection(::Oculus::Interaction::IInteractorView*  interactorView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {"InjectSecondaryInteractorConnection", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorView);
}
inline void Oculus::Interaction::SecondaryInteractorConnection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SecondaryInteractorConnection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::SecondaryInteractorConnection* Oculus::Interaction::SecondaryInteractorConnection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::SecondaryInteractorConnection*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SecondaryInteractorConnection::SecondaryInteractorConnection()   {
}

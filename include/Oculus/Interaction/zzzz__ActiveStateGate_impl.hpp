#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateGate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateGate_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.get_OpenSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::ISelector* (::Oculus::Interaction::ActiveStateGate::*)()>(&::Oculus::Interaction::ActiveStateGate::get_OpenSelector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa408c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"get_OpenSelector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.set_OpenSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)(::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::ActiveStateGate::set_OpenSelector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa408c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"set_OpenSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.get_CloseSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::ISelector* (::Oculus::Interaction::ActiveStateGate::*)()>(&::Oculus::Interaction::ActiveStateGate::get_CloseSelector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa408c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"get_CloseSelector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.set_CloseSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)(::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::ActiveStateGate::set_CloseSelector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa408c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"set_CloseSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::ActiveStateGate::*)()>(&::Oculus::Interaction::ActiveStateGate::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa408c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.set_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)(bool)>(&::Oculus::Interaction::ActiveStateGate::set_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa408c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)()>(&::Oculus::Interaction::ActiveStateGate::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa408c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)()>(&::Oculus::Interaction::ActiveStateGate::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa408cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)()>(&::Oculus::Interaction::ActiveStateGate::OnEnable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa408cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)()>(&::Oculus::Interaction::ActiveStateGate::OnDisable)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa408ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.HandleOpenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)()>(&::Oculus::Interaction::ActiveStateGate::HandleOpenSelected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa409054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"HandleOpenSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.HandleCloseSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)()>(&::Oculus::Interaction::ActiveStateGate::HandleCloseSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa409060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"HandleCloseSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.InjectAllActiveStateGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)(::Oculus::Interaction::ISelector*, ::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::ActiveStateGate::InjectAllActiveStateGate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa409068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"InjectAllActiveStateGate", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>(), ::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.InjectOpenState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)(::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::ActiveStateGate::InjectOpenState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa409090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"InjectOpenState", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate.InjectCloseState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)(::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::ActiveStateGate::InjectCloseState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa409160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"InjectCloseState", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGate::*)()>(&::Oculus::Interaction::ActiveStateGate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa409230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__openSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openSelector;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__openSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openSelector;
}
constexpr void Oculus::Interaction::ActiveStateGate::__cordl_internal_set__openSelector(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openSelector = value;
}
constexpr ::Oculus::Interaction::ISelector*& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__OpenSelector_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OpenSelector_k__BackingField;
}
constexpr ::Oculus::Interaction::ISelector* const& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__OpenSelector_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OpenSelector_k__BackingField;
}
constexpr void Oculus::Interaction::ActiveStateGate::__cordl_internal_set__OpenSelector_k__BackingField(::Oculus::Interaction::ISelector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OpenSelector_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__closeSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeSelector;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__closeSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeSelector;
}
constexpr void Oculus::Interaction::ActiveStateGate::__cordl_internal_set__closeSelector(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closeSelector = value;
}
constexpr ::Oculus::Interaction::ISelector*& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__CloseSelector_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseSelector_k__BackingField;
}
constexpr ::Oculus::Interaction::ISelector* const& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__CloseSelector_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseSelector_k__BackingField;
}
constexpr void Oculus::Interaction::ActiveStateGate::__cordl_internal_set__CloseSelector_k__BackingField(::Oculus::Interaction::ISelector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CloseSelector_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__Active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr bool const& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__Active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr void Oculus::Interaction::ActiveStateGate::__cordl_internal_set__Active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Active_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::ActiveStateGate::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::ActiveStateGate::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::ISelector* Oculus::Interaction::ActiveStateGate::get_OpenSelector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"get_OpenSelector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::ISelector*>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGate::set_OpenSelector(::Oculus::Interaction::ISelector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"set_OpenSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::ISelector* Oculus::Interaction::ActiveStateGate::get_CloseSelector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"get_CloseSelector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::ISelector*>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGate::set_CloseSelector(::Oculus::Interaction::ISelector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"set_CloseSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::ActiveStateGate::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGate::set_Active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ActiveStateGate::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGate::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGate::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGate::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGate::HandleOpenSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"HandleOpenSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGate::HandleCloseSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"HandleCloseSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGate::InjectAllActiveStateGate(::Oculus::Interaction::ISelector*  openSelector, ::Oculus::Interaction::ISelector*  closeSelector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"InjectAllActiveStateGate", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>(), ::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, openSelector, closeSelector);
}
inline void Oculus::Interaction::ActiveStateGate::InjectOpenState(::Oculus::Interaction::ISelector*  openSelector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"InjectOpenState", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, openSelector);
}
inline void Oculus::Interaction::ActiveStateGate::InjectCloseState(::Oculus::Interaction::ISelector*  closeSelector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {"InjectCloseState", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closeSelector);
}
inline void Oculus::Interaction::ActiveStateGate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateGate* Oculus::Interaction::ActiveStateGate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateGate*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::ActiveStateGate::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::ActiveStateGate::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateGate::ActiveStateGate()   {
}

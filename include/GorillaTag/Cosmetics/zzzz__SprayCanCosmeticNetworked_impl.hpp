#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SprayCanCosmeticNetworked.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__SprayCanCosmeticNetworked_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::SprayCanCosmeticNetworked.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::*)()>(&::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::OnEnable)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5da2398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SprayCanCosmeticNetworked.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::*)()>(&::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::OnDisable)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5da2624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SprayCanCosmeticNetworked.OnShakeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::OnShakeEvent)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5da2798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {"OnShakeEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SprayCanCosmeticNetworked.OnShakeStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::*)()>(&::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::OnShakeStart)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5da2900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {"OnShakeStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SprayCanCosmeticNetworked.OnShakeEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::*)()>(&::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::OnShakeEnd)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5da2aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {"OnShakeEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SprayCanCosmeticNetworked._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::*)()>(&::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5da2c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_get_transferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_get_transferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableObject = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_get_callLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_get_callLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiter = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_get_HandleOnShakeStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleOnShakeStart;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_get_HandleOnShakeStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleOnShakeStart;
}
constexpr void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_set_HandleOnShakeStart(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandleOnShakeStart = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_get_HandleOnShakeEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleOnShakeEnd;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_get_HandleOnShakeEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleOnShakeEnd;
}
constexpr void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::__cordl_internal_set_HandleOnShakeEnd(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandleOnShakeEnd = value;
}
inline void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::OnShakeEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {"OnShakeEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::OnShakeStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {"OnShakeStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::OnShakeEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {"OnShakeEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::SprayCanCosmeticNetworked::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::SprayCanCosmeticNetworked* GorillaTag::Cosmetics::SprayCanCosmeticNetworked::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::SprayCanCosmeticNetworked::SprayCanCosmeticNetworked()   {
}

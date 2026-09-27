#pragma once
// IWYU pragma private; include "GlobalNamespace/Tappable.hpp"
#include "Photon/Pun/zzzz__RpcTarget_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "GlobalNamespace/zzzz__IClickable_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__TappableManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Tappable.get_IsLocalOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Tappable::*)()>(&::GlobalNamespace::Tappable::get_IsLocalOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595f38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"get_IsLocalOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)()>(&::GlobalNamespace::Tappable::Validate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595f394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)()>(&::GlobalNamespace::Tappable::OnEnable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x595f62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                    {::i2c::class_of<::GlobalNamespace::Tappable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)()>(&::GlobalNamespace::Tappable::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x595f798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                    {::i2c::class_of<::GlobalNamespace::Tappable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.CanTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Tappable::*)(bool)>(&::GlobalNamespace::Tappable::CanTap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595f8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                    {::i2c::class_of<::GlobalNamespace::Tappable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.OnTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)()>(&::GlobalNamespace::Tappable::OnTap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595f8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"OnTap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.OnTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)(float_t)>(&::GlobalNamespace::Tappable::OnTap)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x595f900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"OnTap", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)()>(&::GlobalNamespace::Tappable::OnGrab)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x594fc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"OnGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)()>(&::GlobalNamespace::Tappable::OnRelease)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x594ff14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"OnRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::Tappable::OnTapLocal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                    {::i2c::class_of<::GlobalNamespace::Tappable*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.OnGrabLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)(float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::Tappable::OnGrabLocal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595fb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                    {::i2c::class_of<::GlobalNamespace::Tappable*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.OnReleaseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)(float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::Tappable::OnReleaseLocal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595fb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                    {::i2c::class_of<::GlobalNamespace::Tappable*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.EdRecalculateId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)()>(&::GlobalNamespace::Tappable::EdRecalculateId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595fb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"EdRecalculateId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.CalculateId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)(bool)>(&::GlobalNamespace::Tappable::CalculateId)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x595f39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"CalculateId", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)()>(&::GlobalNamespace::Tappable::OnValidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595fb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable.Click
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)(bool)>(&::GlobalNamespace::Tappable::Click)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595fb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tappable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tappable::*)()>(&::GlobalNamespace::Tappable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595fb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::Tappable::__cordl_internal_get_tappableId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tappableId;
}
constexpr int32_t const& GlobalNamespace::Tappable::__cordl_internal_get_tappableId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tappableId;
}
constexpr void GlobalNamespace::Tappable::__cordl_internal_set_tappableId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tappableId = value;
}
constexpr ::StringW& GlobalNamespace::Tappable::__cordl_internal_get_staticId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticId;
}
constexpr ::StringW const& GlobalNamespace::Tappable::__cordl_internal_get_staticId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticId;
}
constexpr void GlobalNamespace::Tappable::__cordl_internal_set_staticId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticId = value;
}
constexpr bool& GlobalNamespace::Tappable::__cordl_internal_get_useStaticId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useStaticId;
}
constexpr bool const& GlobalNamespace::Tappable::__cordl_internal_get_useStaticId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useStaticId;
}
constexpr void GlobalNamespace::Tappable::__cordl_internal_set_useStaticId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useStaticId = value;
}
constexpr bool& GlobalNamespace::Tappable::__cordl_internal_get_overrideTapCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTapCooldown;
}
constexpr bool const& GlobalNamespace::Tappable::__cordl_internal_get_overrideTapCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTapCooldown;
}
constexpr void GlobalNamespace::Tappable::__cordl_internal_set_overrideTapCooldown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideTapCooldown = value;
}
constexpr ::UnityW<::GlobalNamespace::TappableManager>& GlobalNamespace::Tappable::__cordl_internal_get_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr ::UnityW<::GlobalNamespace::TappableManager> const& GlobalNamespace::Tappable::__cordl_internal_get_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr void GlobalNamespace::Tappable::__cordl_internal_set_manager(::UnityW<::GlobalNamespace::TappableManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manager = value;
}
constexpr ::Photon::Pun::RpcTarget& GlobalNamespace::Tappable::__cordl_internal_get_rpcTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcTarget;
}
constexpr ::Photon::Pun::RpcTarget const& GlobalNamespace::Tappable::__cordl_internal_get_rpcTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcTarget;
}
constexpr void GlobalNamespace::Tappable::__cordl_internal_set_rpcTarget(::Photon::Pun::RpcTarget  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rpcTarget = value;
}
constexpr bool& GlobalNamespace::Tappable::__cordl_internal_get_localOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localOnly;
}
constexpr bool const& GlobalNamespace::Tappable::__cordl_internal_get_localOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localOnly;
}
constexpr void GlobalNamespace::Tappable::__cordl_internal_set_localOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localOnly = value;
}
inline bool GlobalNamespace::Tappable::get_IsLocalOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"get_IsLocalOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::Tappable::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Tappable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Tappable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Tappable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Tappable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::Tappable::CanTap(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Tappable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::Tappable::OnTap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"OnTap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Tappable::OnTap(float_t  tapStrength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"OnTap", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength);
}
inline void GlobalNamespace::Tappable::OnGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"OnGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Tappable::OnRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"OnRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Tappable::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Tappable*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, sender);
}
inline void GlobalNamespace::Tappable::OnGrabLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Tappable*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapTime, sender);
}
inline void GlobalNamespace::Tappable::OnReleaseLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Tappable*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapTime, sender);
}
inline void GlobalNamespace::Tappable::EdRecalculateId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"EdRecalculateId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Tappable::CalculateId(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"CalculateId", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void GlobalNamespace::Tappable::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Tappable::Click(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::Tappable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tappable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Tappable* GlobalNamespace::Tappable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Tappable*>());
}
/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr  GlobalNamespace::Tappable::operator ::GlobalNamespace::IClickable*() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* GlobalNamespace::Tappable::i___GlobalNamespace__IClickable() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tappable::Tappable()   {
}

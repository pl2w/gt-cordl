#pragma once
// IWYU pragma private; include "GlobalNamespace/SafeOwnershipRequestsCallbacks.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SafeOwnershipRequestsCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__IRequestableOwnershipGuardCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuard_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SafeOwnershipRequestsCallbacks.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SafeOwnershipRequestsCallbacks::*)()>(&::GlobalNamespace::SafeOwnershipRequestsCallbacks::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58f9d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeOwnershipRequestsCallbacks.IRequestableOwnershipGuardCallbacks_OnOwnershipTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SafeOwnershipRequestsCallbacks::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SafeOwnershipRequestsCallbacks::IRequestableOwnershipGuardCallbacks_OnOwnershipTransferred)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f9d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"IRequestableOwnershipGuardCallbacks.OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeOwnershipRequestsCallbacks.IRequestableOwnershipGuardCallbacks_OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SafeOwnershipRequestsCallbacks::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SafeOwnershipRequestsCallbacks::IRequestableOwnershipGuardCallbacks_OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f9d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"IRequestableOwnershipGuardCallbacks.OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeOwnershipRequestsCallbacks.IRequestableOwnershipGuardCallbacks_OnMyOwnerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SafeOwnershipRequestsCallbacks::*)()>(&::GlobalNamespace::SafeOwnershipRequestsCallbacks::IRequestableOwnershipGuardCallbacks_OnMyOwnerLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f9d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"IRequestableOwnershipGuardCallbacks.OnMyOwnerLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeOwnershipRequestsCallbacks.IRequestableOwnershipGuardCallbacks_OnMasterClientAssistedTakeoverRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SafeOwnershipRequestsCallbacks::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SafeOwnershipRequestsCallbacks::IRequestableOwnershipGuardCallbacks_OnMasterClientAssistedTakeoverRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f9d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"IRequestableOwnershipGuardCallbacks.OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeOwnershipRequestsCallbacks.IRequestableOwnershipGuardCallbacks_OnMyCreatorLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SafeOwnershipRequestsCallbacks::*)()>(&::GlobalNamespace::SafeOwnershipRequestsCallbacks::IRequestableOwnershipGuardCallbacks_OnMyCreatorLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f9d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"IRequestableOwnershipGuardCallbacks.OnMyCreatorLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeOwnershipRequestsCallbacks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SafeOwnershipRequestsCallbacks::*)()>(&::GlobalNamespace::SafeOwnershipRequestsCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f9d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& GlobalNamespace::SafeOwnershipRequestsCallbacks::__cordl_internal_get__requestableOwnershipGuard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestableOwnershipGuard;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& GlobalNamespace::SafeOwnershipRequestsCallbacks::__cordl_internal_get__requestableOwnershipGuard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestableOwnershipGuard;
}
constexpr void GlobalNamespace::SafeOwnershipRequestsCallbacks::__cordl_internal_set__requestableOwnershipGuard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestableOwnershipGuard = value;
}
inline void GlobalNamespace::SafeOwnershipRequestsCallbacks::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SafeOwnershipRequestsCallbacks::IRequestableOwnershipGuardCallbacks_OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"IRequestableOwnershipGuardCallbacks.OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toPlayer, fromPlayer);
}
inline bool GlobalNamespace::SafeOwnershipRequestsCallbacks::IRequestableOwnershipGuardCallbacks_OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"IRequestableOwnershipGuardCallbacks.OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer);
}
inline void GlobalNamespace::SafeOwnershipRequestsCallbacks::IRequestableOwnershipGuardCallbacks_OnMyOwnerLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"IRequestableOwnershipGuardCallbacks.OnMyOwnerLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SafeOwnershipRequestsCallbacks::IRequestableOwnershipGuardCallbacks_OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"IRequestableOwnershipGuardCallbacks.OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer, toPlayer);
}
inline void GlobalNamespace::SafeOwnershipRequestsCallbacks::IRequestableOwnershipGuardCallbacks_OnMyCreatorLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {"IRequestableOwnershipGuardCallbacks.OnMyCreatorLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SafeOwnershipRequestsCallbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SafeOwnershipRequestsCallbacks* GlobalNamespace::SafeOwnershipRequestsCallbacks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SafeOwnershipRequestsCallbacks*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr  GlobalNamespace::SafeOwnershipRequestsCallbacks::operator ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* GlobalNamespace::SafeOwnershipRequestsCallbacks::i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SafeOwnershipRequestsCallbacks::SafeOwnershipRequestsCallbacks()   {
}

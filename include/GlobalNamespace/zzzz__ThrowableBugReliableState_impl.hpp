#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBugReliableState.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugReliableState_BugData_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugReliableState_def.hpp"
#include "GlobalNamespace/zzzz__IRequestableOwnershipGuardCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugReliableState_BugData_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ThrowableBugReliableState_BugData (::GlobalNamespace::ThrowableBugReliableState::*)()>(&::GlobalNamespace::ThrowableBugReliableState::get_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b34188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)(::GlobalNamespace::ThrowableBugReliableState_BugData)>(&::GlobalNamespace::ThrowableBugReliableState::set_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b341e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugReliableState_BugData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)()>(&::GlobalNamespace::ThrowableBugReliableState::WriteDataFusion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b34248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)()>(&::GlobalNamespace::ThrowableBugReliableState::ReadDataFusion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b342f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ThrowableBugReliableState::WriteDataPUN)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b34390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ThrowableBugReliableState::ReadDataPUN)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b34418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.OnOwnershipTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::ThrowableBugReliableState::OnOwnershipTransferred)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b345e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableBugReliableState::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::ThrowableBugReliableState::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b34618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.OnMyOwnerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)()>(&::GlobalNamespace::ThrowableBugReliableState::OnMyOwnerLeft)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b34650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.OnMasterClientAssistedTakeoverRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableBugReliableState::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::ThrowableBugReliableState::OnMasterClientAssistedTakeoverRequest)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b34688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.OnMyCreatorLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)()>(&::GlobalNamespace::ThrowableBugReliableState::OnMyCreatorLeft)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b346c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)()>(&::GlobalNamespace::ThrowableBugReliableState::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b346f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)(bool)>(&::GlobalNamespace::ThrowableBugReliableState::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b34758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState::*)()>(&::GlobalNamespace::ThrowableBugReliableState::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b3477c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::ThrowableBugReliableState::__cordl_internal_get_travelingDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___travelingDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ThrowableBugReliableState::__cordl_internal_get_travelingDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___travelingDirection;
}
constexpr void GlobalNamespace::ThrowableBugReliableState::__cordl_internal_set_travelingDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___travelingDirection = value;
}
constexpr ::GlobalNamespace::ThrowableBugReliableState_BugData& GlobalNamespace::ThrowableBugReliableState::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::ThrowableBugReliableState_BugData const& GlobalNamespace::ThrowableBugReliableState::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::ThrowableBugReliableState::__cordl_internal_set__Data(::GlobalNamespace::ThrowableBugReliableState_BugData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline ::GlobalNamespace::ThrowableBugReliableState_BugData GlobalNamespace::ThrowableBugReliableState::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ThrowableBugReliableState_BugData>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBugReliableState::set_Data(::GlobalNamespace::ThrowableBugReliableState_BugData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugReliableState_BugData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ThrowableBugReliableState::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBugReliableState::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBugReliableState::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::ThrowableBugReliableState::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::ThrowableBugReliableState::OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toPlayer, fromPlayer);
}
inline bool GlobalNamespace::ThrowableBugReliableState::OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer);
}
inline void GlobalNamespace::ThrowableBugReliableState::OnMyOwnerLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ThrowableBugReliableState::OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer, toPlayer);
}
inline void GlobalNamespace::ThrowableBugReliableState::OnMyCreatorLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBugReliableState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBugReliableState::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::ThrowableBugReliableState::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ThrowableBugReliableState* GlobalNamespace::ThrowableBugReliableState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ThrowableBugReliableState*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr  GlobalNamespace::ThrowableBugReliableState::operator ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* GlobalNamespace::ThrowableBugReliableState::i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThrowableBugReliableState::ThrowableBugReliableState()   {
}

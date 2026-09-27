#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceTappable.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceTappable_FunctionalState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceTappable_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderTappable_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceTappable_FunctionalState_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.CanTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderPieceTappable::*)()>(&::GorillaTagScripts::Builder::BuilderPieceTappable::CanTap)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c29e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)(float_t)>(&::GorillaTagScripts::Builder::BuilderPieceTappable::OnTapLocal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c29ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnTapLocal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.OnTapReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)()>(&::GorillaTagScripts::Builder::BuilderPieceTappable::OnTapReplicated)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c29f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)(int32_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceTappable::OnPieceCreate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c29f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)()>(&::GorillaTagScripts::Builder::BuilderPieceTappable::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c29f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)()>(&::GorillaTagScripts::Builder::BuilderPieceTappable::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c29f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)()>(&::GorillaTagScripts::Builder::BuilderPieceTappable::OnPieceActivate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c29fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)()>(&::GorillaTagScripts::Builder::BuilderPieceTappable::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c29fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceTappable::OnStateChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c2a094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceTappable::OnStateRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c2a11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderPieceTappable::*)(uint8_t)>(&::GorillaTagScripts::Builder::BuilderPieceTappable::IsStateValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c2a10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)()>(&::GorillaTagScripts::Builder::BuilderPieceTappable::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c2a228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceTappable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceTappable::*)()>(&::GorillaTagScripts::Builder::BuilderPieceTappable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c2a328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_tapCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapCooldown;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_tapCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapCooldown;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_set_tapCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapCooldown = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_isPieceActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPieceActive;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_isPieceActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPieceActive;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_set_isPieceActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPieceActive = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_lastTapTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTapTime;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_lastTapTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTapTime;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_set_lastTapTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTapTime = value;
}
constexpr ::GlobalNamespace::BuilderPieceTappable_FunctionalState& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::BuilderPieceTappable_FunctionalState const& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_set_currentState(::GlobalNamespace::BuilderPieceTappable_FunctionalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_OnTapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTapped;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_get_OnTapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTapped;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceTappable::__cordl_internal_set_OnTapped(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTapped = value;
}
inline bool GorillaTagScripts::Builder::BuilderPieceTappable::CanTap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::OnTapLocal(float_t  tapStrength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnTapLocal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::OnTapReplicated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GorillaTagScripts::Builder::BuilderPieceTappable::IsStateValid(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::FunctionalPieceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceTappable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceTappable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderPieceTappable* GorillaTagScripts::Builder::BuilderPieceTappable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderPieceTappable*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::Builder::BuilderPieceTappable::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::Builder::BuilderPieceTappable::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr  GorillaTagScripts::Builder::BuilderPieceTappable::operator ::GlobalNamespace::IBuilderPieceFunctional*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* GorillaTagScripts::Builder::BuilderPieceTappable::i___GlobalNamespace__IBuilderPieceFunctional() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderTappable"
constexpr  GorillaTagScripts::Builder::BuilderPieceTappable::operator ::GlobalNamespace::IBuilderTappable*() noexcept {
return static_cast<::GlobalNamespace::IBuilderTappable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderTappable"
constexpr ::GlobalNamespace::IBuilderTappable* GorillaTagScripts::Builder::BuilderPieceTappable::i___GlobalNamespace__IBuilderTappable() noexcept {
return static_cast<::GlobalNamespace::IBuilderTappable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderPieceTappable::BuilderPieceTappable()   {
}

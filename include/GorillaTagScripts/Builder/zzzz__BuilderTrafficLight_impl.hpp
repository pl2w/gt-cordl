#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderTrafficLight.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderTrafficLight_LightState_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderTrafficLight_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderTrafficLight_LightState_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderTrafficLight.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderTrafficLight::*)()>(&::GorillaTagScripts::Builder::BuilderTrafficLight::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c34644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderTrafficLight.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderTrafficLight::*)(::GlobalNamespace::BuilderTrafficLight_LightState)>(&::GorillaTagScripts::Builder::BuilderTrafficLight::SetState)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5c346a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::BuilderTrafficLight_LightState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderTrafficLight.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderTrafficLight::*)()>(&::GorillaTagScripts::Builder::BuilderTrafficLight::Update)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5c3489c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderTrafficLight.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderTrafficLight::*)(int32_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderTrafficLight::OnPieceCreate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c34a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderTrafficLight.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderTrafficLight::*)()>(&::GorillaTagScripts::Builder::BuilderTrafficLight::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c34a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderTrafficLight.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderTrafficLight::*)()>(&::GorillaTagScripts::Builder::BuilderTrafficLight::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c34a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderTrafficLight.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderTrafficLight::*)()>(&::GorillaTagScripts::Builder::BuilderTrafficLight::OnPieceActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c34a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderTrafficLight.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderTrafficLight::*)()>(&::GorillaTagScripts::Builder::BuilderTrafficLight::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c34a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderTrafficLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderTrafficLight::*)()>(&::GorillaTagScripts::Builder::BuilderTrafficLight::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c34a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_piece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_piece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piece;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___piece = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_redLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redLight;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_redLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redLight;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_redLight(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redLight = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_yellowLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yellowLight;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_yellowLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yellowLight;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_yellowLight(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yellowLight = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_greenLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenLight;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_greenLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenLight;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_greenLight(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenLight = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_cycleDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleDuration;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_cycleDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleDuration;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_cycleDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cycleDuration = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_startPercentageOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPercentageOffset;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_startPercentageOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPercentageOffset;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_startPercentageOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPercentageOffset = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_redOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redOn;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_redOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redOn;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_redOn(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redOn = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_redOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redOff;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_redOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redOff;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_redOff(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redOff = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_yellowOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yellowOn;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_yellowOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yellowOn;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_yellowOn(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yellowOn = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_yellowOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yellowOff;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_yellowOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yellowOff;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_yellowOff(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yellowOff = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_greenOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenOn;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_greenOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenOn;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_greenOn(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenOn = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_greenOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenOff;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_greenOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenOff;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_greenOff(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenOff = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_materialProps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialProps;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_materialProps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialProps;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_materialProps(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialProps = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_stateCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_stateCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateCurve;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_stateCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateCurve = value;
}
constexpr ::GlobalNamespace::BuilderTrafficLight_LightState& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_lightState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightState;
}
constexpr ::GlobalNamespace::BuilderTrafficLight_LightState const& GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_get_lightState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightState;
}
constexpr void GorillaTagScripts::Builder::BuilderTrafficLight::__cordl_internal_set_lightState(::GlobalNamespace::BuilderTrafficLight_LightState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightState = value;
}
inline void GorillaTagScripts::Builder::BuilderTrafficLight::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderTrafficLight::SetState(::GlobalNamespace::BuilderTrafficLight_LightState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::BuilderTrafficLight_LightState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderTrafficLight::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderTrafficLight::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::Builder::BuilderTrafficLight::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderTrafficLight::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderTrafficLight::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderTrafficLight::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderTrafficLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderTrafficLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderTrafficLight* GorillaTagScripts::Builder::BuilderTrafficLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderTrafficLight*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::Builder::BuilderTrafficLight::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::Builder::BuilderTrafficLight::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderTrafficLight::BuilderTrafficLight()   {
}

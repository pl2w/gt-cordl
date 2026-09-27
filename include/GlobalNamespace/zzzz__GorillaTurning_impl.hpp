#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTurning.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTurning_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__GorillaSnapTurn_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTurning.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTurning::*)()>(&::GlobalNamespace::GorillaTurning::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59470c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurning*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTurning._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTurning::*)()>(&::GlobalNamespace::GorillaTurning::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59470cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurning*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaTurning::__cordl_internal_get_redMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaTurning::__cordl_internal_get_redMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redMaterial;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_redMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaTurning::__cordl_internal_get_blueMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaTurning::__cordl_internal_get_blueMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueMaterial;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_blueMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaTurning::__cordl_internal_get_greenMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaTurning::__cordl_internal_get_greenMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenMaterial;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_greenMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaTurning::__cordl_internal_get_transparentBlueMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transparentBlueMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaTurning::__cordl_internal_get_transparentBlueMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transparentBlueMaterial;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_transparentBlueMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transparentBlueMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaTurning::__cordl_internal_get_transparentRedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transparentRedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaTurning::__cordl_internal_get_transparentRedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transparentRedMaterial;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_transparentRedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transparentRedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaTurning::__cordl_internal_get_transparentGreenMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transparentGreenMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaTurning::__cordl_internal_get_transparentGreenMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transparentGreenMaterial;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_transparentGreenMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transparentGreenMaterial = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GorillaTurning::__cordl_internal_get_smoothTurnBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothTurnBox;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GorillaTurning::__cordl_internal_get_smoothTurnBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothTurnBox;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_smoothTurnBox(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothTurnBox = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GorillaTurning::__cordl_internal_get_snapTurnBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurnBox;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GorillaTurning::__cordl_internal_get_snapTurnBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurnBox;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_snapTurnBox(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapTurnBox = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GorillaTurning::__cordl_internal_get_noTurnBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noTurnBox;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GorillaTurning::__cordl_internal_get_noTurnBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noTurnBox;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_noTurnBox(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noTurnBox = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>& GlobalNamespace::GorillaTurning::__cordl_internal_get_snapTurn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurn;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> const& GlobalNamespace::GorillaTurning::__cordl_internal_get_snapTurn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurn;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_snapTurn(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapTurn = value;
}
constexpr ::StringW& GlobalNamespace::GorillaTurning::__cordl_internal_get_currentChoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChoice;
}
constexpr ::StringW const& GlobalNamespace::GorillaTurning::__cordl_internal_get_currentChoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChoice;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_currentChoice(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentChoice = value;
}
constexpr float_t& GlobalNamespace::GorillaTurning::__cordl_internal_get_currentSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeed;
}
constexpr float_t const& GlobalNamespace::GorillaTurning::__cordl_internal_get_currentSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeed;
}
constexpr void GlobalNamespace::GorillaTurning::__cordl_internal_set_currentSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSpeed = value;
}
inline void GlobalNamespace::GorillaTurning::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurning*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTurning::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurning*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTurning* GlobalNamespace::GorillaTurning::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTurning*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTurning::GorillaTurning()   {
}

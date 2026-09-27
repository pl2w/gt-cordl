#pragma once
// IWYU pragma private; include "Pathfinding/Legacy/LegacyRVOController.hpp"
#include "Pathfinding/RVO/zzzz__RVOController_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "Pathfinding/Legacy/zzzz__LegacyRVOController_def.hpp"
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyRVOController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Legacy::LegacyRVOController::*)()>(&::Pathfinding::Legacy::LegacyRVOController::Update)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5ebe458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyRVOController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyRVOController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Legacy::LegacyRVOController::*)()>(&::Pathfinding::Legacy::LegacyRVOController::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ebe850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyRVOController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& Pathfinding::Legacy::LegacyRVOController::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::Legacy::LegacyRVOController::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void Pathfinding::Legacy::LegacyRVOController::__cordl_internal_set_mask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr bool& Pathfinding::Legacy::LegacyRVOController::__cordl_internal_get_enableRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableRotation;
}
constexpr bool const& Pathfinding::Legacy::LegacyRVOController::__cordl_internal_get_enableRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableRotation;
}
constexpr void Pathfinding::Legacy::LegacyRVOController::__cordl_internal_set_enableRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableRotation = value;
}
constexpr float_t& Pathfinding::Legacy::LegacyRVOController::__cordl_internal_get_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr float_t const& Pathfinding::Legacy::LegacyRVOController::__cordl_internal_get_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr void Pathfinding::Legacy::LegacyRVOController::__cordl_internal_set_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeed = value;
}
inline void Pathfinding::Legacy::LegacyRVOController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyRVOController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Legacy::LegacyRVOController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyRVOController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Legacy::LegacyRVOController* Pathfinding::Legacy::LegacyRVOController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Legacy::LegacyRVOController*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Legacy::LegacyRVOController::LegacyRVOController()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/MoveTowardsTargetProvider.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__MoveTowardsTargetProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovementProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTargetProvider.CreateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::MoveTowardsTargetProvider::*)()>(&::Oculus::Interaction::MoveTowardsTargetProvider::CreateMovement)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa474f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTargetProvider*>(),
                        {"CreateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTargetProvider.InjectAllMoveTowardsTargetProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveTowardsTargetProvider::*)(::Oculus::Interaction::PoseTravelData)>(&::Oculus::Interaction::MoveTowardsTargetProvider::InjectAllMoveTowardsTargetProvider)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa475028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTargetProvider*>(),
                        {"InjectAllMoveTowardsTargetProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTargetProvider.InjectTravellingData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveTowardsTargetProvider::*)(::Oculus::Interaction::PoseTravelData)>(&::Oculus::Interaction::MoveTowardsTargetProvider::InjectTravellingData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa47503c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTargetProvider*>(),
                        {"InjectTravellingData", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTargetProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveTowardsTargetProvider::*)()>(&::Oculus::Interaction::MoveTowardsTargetProvider::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa475050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTargetProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::PoseTravelData& Oculus::Interaction::MoveTowardsTargetProvider::__cordl_internal_get__travellingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____travellingData;
}
constexpr ::Oculus::Interaction::PoseTravelData const& Oculus::Interaction::MoveTowardsTargetProvider::__cordl_internal_get__travellingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____travellingData;
}
constexpr void Oculus::Interaction::MoveTowardsTargetProvider::__cordl_internal_set__travellingData(::Oculus::Interaction::PoseTravelData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____travellingData = value;
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::MoveTowardsTargetProvider::CreateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTargetProvider*>(),
                        {"CreateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method);
}
inline void Oculus::Interaction::MoveTowardsTargetProvider::InjectAllMoveTowardsTargetProvider(::Oculus::Interaction::PoseTravelData  travellingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTargetProvider*>(),
                        {"InjectAllMoveTowardsTargetProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, travellingData);
}
inline void Oculus::Interaction::MoveTowardsTargetProvider::InjectTravellingData(::Oculus::Interaction::PoseTravelData  travellingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTargetProvider*>(),
                        {"InjectTravellingData", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, travellingData);
}
inline void Oculus::Interaction::MoveTowardsTargetProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTargetProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::MoveTowardsTargetProvider* Oculus::Interaction::MoveTowardsTargetProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::MoveTowardsTargetProvider*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr  Oculus::Interaction::MoveTowardsTargetProvider::operator ::Oculus::Interaction::IMovementProvider*() noexcept {
return static_cast<::Oculus::Interaction::IMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* Oculus::Interaction::MoveTowardsTargetProvider::i___Oculus__Interaction__IMovementProvider() noexcept {
return static_cast<::Oculus::Interaction::IMovementProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::MoveTowardsTargetProvider::MoveTowardsTargetProvider()   {
}

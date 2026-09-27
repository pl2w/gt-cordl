#pragma once
// IWYU pragma private; include "GlobalNamespace/AbilityHelperFunctions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AbilityHelperFunctions_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AbilityHelperFunctions.EaseOutPower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::AbilityHelperFunctions::EaseOutPower)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5866118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHelperFunctions*>(),
                        {"EaseOutPower", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbilityHelperFunctions.RandomRangeUnique
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::AbilityHelperFunctions::RandomRangeUnique)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x586613c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHelperFunctions*>(),
                        {"RandomRangeUnique", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbilityHelperFunctions.GetNavMeshWalkableArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::AbilityHelperFunctions::GetNavMeshWalkableArea)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x586617c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHelperFunctions*>(),
                        {"GetNavMeshWalkableArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbilityHelperFunctions.GetLocationToInvestigate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (*)(::UnityEngine::Vector3, float_t, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::GlobalNamespace::AbilityHelperFunctions::GetLocationToInvestigate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5866240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHelperFunctions*>(),
                        {"GetLocationToInvestigate", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AbilityHelperFunctions::setStaticF_navMeshWalkableArea(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "navMeshWalkableArea", ::GlobalNamespace::AbilityHelperFunctions*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::AbilityHelperFunctions::getStaticF_navMeshWalkableArea()  {
return ::cordl_internals::getStaticField<int32_t, "navMeshWalkableArea", ::GlobalNamespace::AbilityHelperFunctions*>();
}
inline float_t GlobalNamespace::AbilityHelperFunctions::EaseOutPower(float_t  t, float_t  power)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHelperFunctions*>(),
                        {"EaseOutPower", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, t, power);
}
inline int32_t GlobalNamespace::AbilityHelperFunctions::RandomRangeUnique(int32_t  minInclusive, int32_t  maxExclusive, int32_t  lastValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHelperFunctions*>(),
                        {"RandomRangeUnique", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, minInclusive, maxExclusive, lastValue);
}
inline int32_t GlobalNamespace::AbilityHelperFunctions::GetNavMeshWalkableArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHelperFunctions*>(),
                        {"GetNavMeshWalkableArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::Vector3> GlobalNamespace::AbilityHelperFunctions::GetLocationToInvestigate(::UnityEngine::Vector3  listenerLocation, float_t  hearingRadius, ::System::Nullable_1<::UnityEngine::Vector3>  currentInvestigationLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHelperFunctions*>(),
                        {"GetLocationToInvestigate", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(nullptr, ___internal_method, listenerLocation, hearingRadius, currentInvestigationLocation);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AbilityHelperFunctions::AbilityHelperFunctions()   {
}

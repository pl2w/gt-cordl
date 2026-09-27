#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersPawn_CreatureUpdateData.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_CreatureState_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_CreatureUpdateData_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn_CreatureUpdateData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPawn_CreatureUpdateData::*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersPawn_CreatureUpdateData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56f2970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn_CreatureUpdateData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPawn_CreatureUpdateData.SameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersPawn_CreatureUpdateData::*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersPawn_CreatureUpdateData::SameData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56f2990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn_CreatureUpdateData>(),
                        {"SameData", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CrittersPawn_CreatureUpdateData::_ctor(::GlobalNamespace::CrittersPawn*  creature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn_CreatureUpdateData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, creature);
}
inline bool GlobalNamespace::CrittersPawn_CreatureUpdateData::SameData(::GlobalNamespace::CrittersPawn*  creature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPawn_CreatureUpdateData>(),
                        {"SameData", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, creature);
}
// Ctor Parameters [CppParam { name: "lastImpulseTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "state", ty: "::GlobalNamespace::CrittersPawn_CreatureState", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CrittersPawn_CreatureUpdateData::CrittersPawn_CreatureUpdateData(double_t  lastImpulseTime, ::GlobalNamespace::CrittersPawn_CreatureState  state) noexcept  {
this->lastImpulseTime = lastImpulseTime;
this->state = state;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersPawn_CreatureUpdateData::CrittersPawn_CreatureUpdateData()   {
}

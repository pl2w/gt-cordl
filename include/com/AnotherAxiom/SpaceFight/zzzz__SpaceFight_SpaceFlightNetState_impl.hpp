#pragma once
// IWYU pragma private; include "com/AnotherAxiom/SpaceFight/SpaceFight_SpaceFlightNetState.hpp"
#include "com/AnotherAxiom/SpaceFight/zzzz__SpaceFight_SpaceFlightNetState_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpaceFight_SpaceFlightNetState.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SpaceFight_SpaceFlightNetState::*)(::GlobalNamespace::SpaceFight_SpaceFlightNetState)>(&::GlobalNamespace::SpaceFight_SpaceFlightNetState::Equals)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5cd3630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpaceFight_SpaceFlightNetState>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::SpaceFight_SpaceFlightNetState>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SpaceFight_SpaceFlightNetState::Equals(::GlobalNamespace::SpaceFight_SpaceFlightNetState  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpaceFight_SpaceFlightNetState>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::SpaceFight_SpaceFlightNetState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SpaceFight_SpaceFlightNetState>"
constexpr  GlobalNamespace::SpaceFight_SpaceFlightNetState::operator ::System::IEquatable_1<::GlobalNamespace::SpaceFight_SpaceFlightNetState>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::SpaceFight_SpaceFlightNetState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SpaceFight_SpaceFlightNetState>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SpaceFight_SpaceFlightNetState>* GlobalNamespace::SpaceFight_SpaceFlightNetState::i___System__IEquatable_1___GlobalNamespace__SpaceFight_SpaceFlightNetState_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::SpaceFight_SpaceFlightNetState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "P1LocX", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P1LocY", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P1Rot", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P2LocX", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P2LocY", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P2Rot", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P1PrLocX", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P1PrLocY", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P2PrLocX", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P2PrLocY", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SpaceFight_SpaceFlightNetState::SpaceFight_SpaceFlightNetState(float_t  P1LocX, float_t  P1LocY, float_t  P1Rot, float_t  P2LocX, float_t  P2LocY, float_t  P2Rot, float_t  P1PrLocX, float_t  P1PrLocY, float_t  P2PrLocX, float_t  P2PrLocY) noexcept  {
this->P1LocX = P1LocX;
this->P1LocY = P1LocY;
this->P1Rot = P1Rot;
this->P2LocX = P2LocX;
this->P2LocY = P2LocY;
this->P2Rot = P2Rot;
this->P1PrLocX = P1PrLocX;
this->P1PrLocY = P1PrLocY;
this->P2PrLocX = P2PrLocX;
this->P2PrLocY = P2PrLocY;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpaceFight_SpaceFlightNetState::SpaceFight_SpaceFlightNetState()   {
}

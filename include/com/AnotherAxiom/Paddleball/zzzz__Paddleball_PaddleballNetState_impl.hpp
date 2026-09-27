#pragma once
// IWYU pragma private; include "com/AnotherAxiom/Paddleball/Paddleball_PaddleballNetState.hpp"
#include "com/AnotherAxiom/Paddleball/zzzz__Paddleball_PaddleballNetState_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Paddleball_PaddleballNetState.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Paddleball_PaddleballNetState::*)(::GlobalNamespace::Paddleball_PaddleballNetState)>(&::GlobalNamespace::Paddleball_PaddleballNetState::Equals)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5cd4db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Paddleball_PaddleballNetState>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Paddleball_PaddleballNetState>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::Paddleball_PaddleballNetState::Equals(::GlobalNamespace::Paddleball_PaddleballNetState  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Paddleball_PaddleballNetState>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Paddleball_PaddleballNetState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Paddleball_PaddleballNetState>"
constexpr  GlobalNamespace::Paddleball_PaddleballNetState::operator ::System::IEquatable_1<::GlobalNamespace::Paddleball_PaddleballNetState>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::Paddleball_PaddleballNetState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Paddleball_PaddleballNetState>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Paddleball_PaddleballNetState>* GlobalNamespace::Paddleball_PaddleballNetState::i___System__IEquatable_1___GlobalNamespace__Paddleball_PaddleballNetState_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::Paddleball_PaddleballNetState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "P0LocY", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P1LocY", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P2LocY", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "P3LocY", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BallLocX", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BallLocY", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BallTrajectoryX", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BallTrajectoryY", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BallSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScoreLeft", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScoreRight", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScreenMode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Paddleball_PaddleballNetState::Paddleball_PaddleballNetState(uint8_t  P0LocY, uint8_t  P1LocY, uint8_t  P2LocY, uint8_t  P3LocY, float_t  BallLocX, uint8_t  BallLocY, uint8_t  BallTrajectoryX, uint8_t  BallTrajectoryY, float_t  BallSpeed, int32_t  ScoreLeft, int32_t  ScoreRight, int32_t  ScreenMode) noexcept  {
this->P0LocY = P0LocY;
this->P1LocY = P1LocY;
this->P2LocY = P2LocY;
this->P3LocY = P3LocY;
this->BallLocX = BallLocX;
this->BallLocY = BallLocY;
this->BallTrajectoryX = BallTrajectoryX;
this->BallTrajectoryY = BallTrajectoryY;
this->BallSpeed = BallSpeed;
this->ScoreLeft = ScoreLeft;
this->ScoreRight = ScoreRight;
this->ScreenMode = ScreenMode;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Paddleball_PaddleballNetState::Paddleball_PaddleballNetState()   {
}

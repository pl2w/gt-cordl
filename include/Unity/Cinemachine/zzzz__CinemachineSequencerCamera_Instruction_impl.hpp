#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSequencerCamera_Instruction.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSequencerCamera_Instruction_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineSequencerCamera_Instruction.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineSequencerCamera_Instruction::*)()>(&::GlobalNamespace::CinemachineSequencerCamera_Instruction::Validate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae97304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSequencerCamera_Instruction>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CinemachineSequencerCamera_Instruction::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSequencerCamera_Instruction>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Camera", ty: "::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Blend", ty: "::Unity::Cinemachine::CinemachineBlendDefinition", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineSequencerCamera_Instruction::CinemachineSequencerCamera_Instruction(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  Camera, ::Unity::Cinemachine::CinemachineBlendDefinition  Blend, float_t  Hold) noexcept  {
this->Camera = Camera;
this->Blend = Blend;
this->Hold = Hold;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineSequencerCamera_Instruction::CinemachineSequencerCamera_Instruction()   {
}

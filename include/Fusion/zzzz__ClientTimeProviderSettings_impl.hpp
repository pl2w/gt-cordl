#pragma once
// IWYU pragma private; include "Fusion/ClientTimeProviderSettings.hpp"
#include "Fusion/zzzz__ClientTimeProviderSettings_def.hpp"
//  Writing Method size for method: ::Fusion::ClientTimeProviderSettings.Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::ClientTimeProviderSettings (*)()>(&::Fusion::ClientTimeProviderSettings::Default)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x600674c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProviderSettings>(),
                        {"Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::ClientTimeProviderSettings Fusion::ClientTimeProviderSettings::Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProviderSettings>(),
                        {"Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ClientTimeProviderSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "TimeScaleOffsetMax", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SampleWindowSeconds", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OutgoingQuantile", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IncomingQuantile", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OutgoingRedundancy", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IncomingRedundancy", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OutgoingSendRate", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IncomingSendRate", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OutgoingSendDelta", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IncomingSendDelta", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PredictionMax", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InputDelayMin", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InputDelayMax", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClientTickRate", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClientSimDeltaTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ServerTickRate", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ServerSimDeltaTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::ClientTimeProviderSettings::ClientTimeProviderSettings(double_t  TimeScaleOffsetMax, double_t  SampleWindowSeconds, double_t  OutgoingQuantile, double_t  IncomingQuantile, double_t  OutgoingRedundancy, double_t  IncomingRedundancy, int32_t  OutgoingSendRate, int32_t  IncomingSendRate, double_t  OutgoingSendDelta, double_t  IncomingSendDelta, double_t  PredictionMax, double_t  InputDelayMin, double_t  InputDelayMax, int32_t  ClientTickRate, double_t  ClientSimDeltaTime, int32_t  ServerTickRate, double_t  ServerSimDeltaTime) noexcept  {
this->TimeScaleOffsetMax = TimeScaleOffsetMax;
this->SampleWindowSeconds = SampleWindowSeconds;
this->OutgoingQuantile = OutgoingQuantile;
this->IncomingQuantile = IncomingQuantile;
this->OutgoingRedundancy = OutgoingRedundancy;
this->IncomingRedundancy = IncomingRedundancy;
this->OutgoingSendRate = OutgoingSendRate;
this->IncomingSendRate = IncomingSendRate;
this->OutgoingSendDelta = OutgoingSendDelta;
this->IncomingSendDelta = IncomingSendDelta;
this->PredictionMax = PredictionMax;
this->InputDelayMin = InputDelayMin;
this->InputDelayMax = InputDelayMax;
this->ClientTickRate = ClientTickRate;
this->ClientSimDeltaTime = ClientSimDeltaTime;
this->ServerTickRate = ServerTickRate;
this->ServerSimDeltaTime = ServerSimDeltaTime;
}
// Ctor Parameters []
constexpr ::Fusion::ClientTimeProviderSettings::ClientTimeProviderSettings()   {
}

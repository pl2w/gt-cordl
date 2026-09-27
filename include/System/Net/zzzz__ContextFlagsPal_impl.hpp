#pragma once
// IWYU pragma private; include "System/Net/ContextFlagsPal.hpp"
#include "System/Net/zzzz__ContextFlagsPal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::ContextFlagsPal::ContextFlagsPal(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::ContextFlagsPal::ContextFlagsPal()   {
}
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::Delegate{static_cast<int32_t>(0x1)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::MutualAuth{static_cast<int32_t>(0x2)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::ReplayDetect{static_cast<int32_t>(0x4)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::SequenceDetect{static_cast<int32_t>(0x8)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::Confidentiality{static_cast<int32_t>(0x10)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::UseSessionKey{static_cast<int32_t>(0x20)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::AllocateMemory{static_cast<int32_t>(0x100)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::Connection{static_cast<int32_t>(0x800)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::InitExtendedError{static_cast<int32_t>(0x4000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::AcceptExtendedError{static_cast<int32_t>(0x8000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::InitStream{static_cast<int32_t>(0x8000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::AcceptStream{static_cast<int32_t>(0x10000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::InitIntegrity{static_cast<int32_t>(0x10000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::AcceptIntegrity{static_cast<int32_t>(0x20000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::InitManualCredValidation{static_cast<int32_t>(0x80000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::InitUseSuppliedCreds{static_cast<int32_t>(0x80)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::InitIdentify{static_cast<int32_t>(0x20000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::AcceptIdentify{static_cast<int32_t>(0x80000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::ProxyBindings{static_cast<int32_t>(0x4000000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::AllowMissingBindings{static_cast<int32_t>(0x10000000)};
constexpr ::System::Net::ContextFlagsPal  System::Net::ContextFlagsPal::UnverifiedTargetName{static_cast<int32_t>(0x20000000)};

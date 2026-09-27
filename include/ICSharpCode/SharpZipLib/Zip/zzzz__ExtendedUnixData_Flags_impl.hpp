#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ExtendedUnixData_Flags.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ExtendedUnixData_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ExtendedUnixData_Flags::ExtendedUnixData_Flags(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExtendedUnixData_Flags::ExtendedUnixData_Flags()   {
}
constexpr ::GlobalNamespace::ExtendedUnixData_Flags  GlobalNamespace::ExtendedUnixData_Flags::ModificationTime{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::ExtendedUnixData_Flags  GlobalNamespace::ExtendedUnixData_Flags::AccessTime{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::ExtendedUnixData_Flags  GlobalNamespace::ExtendedUnixData_Flags::CreateTime{static_cast<uint8_t>(0x4u)};

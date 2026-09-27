#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEntryFactory_TimeSetting.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntryFactory_TimeSetting_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting::ZipEntryFactory_TimeSetting(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting::ZipEntryFactory_TimeSetting()   {
}
constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting  GlobalNamespace::ZipEntryFactory_TimeSetting::LastWriteTime{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting  GlobalNamespace::ZipEntryFactory_TimeSetting::LastWriteTimeUtc{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting  GlobalNamespace::ZipEntryFactory_TimeSetting::CreateTime{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting  GlobalNamespace::ZipEntryFactory_TimeSetting::CreateTimeUtc{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting  GlobalNamespace::ZipEntryFactory_TimeSetting::LastAccessTime{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting  GlobalNamespace::ZipEntryFactory_TimeSetting::LastAccessTimeUtc{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting  GlobalNamespace::ZipEntryFactory_TimeSetting::Fixed{static_cast<int32_t>(0x6)};

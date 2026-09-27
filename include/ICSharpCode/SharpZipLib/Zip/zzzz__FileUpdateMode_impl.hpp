#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/FileUpdateMode.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FileUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode::FileUpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode::FileUpdateMode()   {
}
constexpr ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  ICSharpCode::SharpZipLib::Zip::FileUpdateMode::Safe{static_cast<int32_t>(0x0)};
constexpr ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  ICSharpCode::SharpZipLib::Zip::FileUpdateMode::Direct{static_cast<int32_t>(0x1)};

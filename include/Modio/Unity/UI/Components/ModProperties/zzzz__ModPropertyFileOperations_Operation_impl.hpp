#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyFileOperations_Operation.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyFileOperations_Operation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation::ModPropertyFileOperations_Operation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation::ModPropertyFileOperations_Operation()   {
}
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation  GlobalNamespace::ModPropertyFileOperations_Operation::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation  GlobalNamespace::ModPropertyFileOperations_Operation::Queued{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation  GlobalNamespace::ModPropertyFileOperations_Operation::Downloading{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation  GlobalNamespace::ModPropertyFileOperations_Operation::Installing{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation  GlobalNamespace::ModPropertyFileOperations_Operation::Installed{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation  GlobalNamespace::ModPropertyFileOperations_Operation::Updating{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation  GlobalNamespace::ModPropertyFileOperations_Operation::Uninstalling{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation  GlobalNamespace::ModPropertyFileOperations_Operation::FileOperationFailed{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation  GlobalNamespace::ModPropertyFileOperations_Operation::InstalledByOtherUser{static_cast<int32_t>(0x80)};

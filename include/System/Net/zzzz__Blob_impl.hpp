#pragma once
// IWYU pragma private; include "System/Net/Blob.hpp"
#include "System/Net/zzzz__Blob_def.hpp"
// Ctor Parameters [CppParam { name: "cbSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pBlobData", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::Blob::Blob(int32_t  cbSize, int32_t  pBlobData) noexcept  {
this->cbSize = cbSize;
this->pBlobData = pBlobData;
}
// Ctor Parameters []
constexpr ::System::Net::Blob::Blob()   {
}

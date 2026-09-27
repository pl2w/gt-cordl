#pragma once
// IWYU pragma private; include "Fusion/RegionInfo.hpp"
#include "Fusion/zzzz__RegionInfo_def.hpp"
// Ctor Parameters [CppParam { name: "RegionCode", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RegionPing", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RegionInfo::RegionInfo(::StringW  RegionCode, int32_t  RegionPing) noexcept  {
this->RegionCode = RegionCode;
this->RegionPing = RegionPing;
}
// Ctor Parameters []
constexpr ::Fusion::RegionInfo::RegionInfo()   {
}

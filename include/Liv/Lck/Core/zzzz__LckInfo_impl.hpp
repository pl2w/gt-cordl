#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckInfo.hpp"
#include "Liv/Lck/Core/zzzz__LckInfo_def.hpp"
// Ctor Parameters [CppParam { name: "Version", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BuildNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::LckInfo::LckInfo(::StringW  Version, int32_t  BuildNumber) noexcept  {
this->Version = Version;
this->BuildNumber = BuildNumber;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckInfo::LckInfo()   {
}

#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticPartMirrorOption.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticPartMirrorAxis_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticPartMirrorOption_def.hpp"
// Ctor Parameters [CppParam { name: "axis", ty: "::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "negativeScale", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::CosmeticSystem::CosmeticPartMirrorOption::CosmeticPartMirrorOption(::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis  axis, bool  negativeScale) noexcept  {
this->axis = axis;
this->negativeScale = negativeScale;
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::CosmeticPartMirrorOption::CosmeticPartMirrorOption()   {
}

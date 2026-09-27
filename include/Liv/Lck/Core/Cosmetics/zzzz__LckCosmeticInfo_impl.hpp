#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/LckCosmeticInfo.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCosmeticInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "CosmeticId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CosmeticFilepath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CosmeticMetadata", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::Cosmetics::LckCosmeticInfo::LckCosmeticInfo(::StringW  CosmeticId, ::StringW  CosmeticFilepath, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  CosmeticMetadata) noexcept  {
this->CosmeticId = CosmeticId;
this->CosmeticFilepath = CosmeticFilepath;
this->CosmeticMetadata = CosmeticMetadata;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::Cosmetics::LckCosmeticInfo::LckCosmeticInfo()   {
}

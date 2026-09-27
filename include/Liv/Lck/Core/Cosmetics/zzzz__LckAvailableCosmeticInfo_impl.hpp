#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/LckAvailableCosmeticInfo.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCosmeticInfo_impl.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckAvailableCosmeticInfo_def.hpp"
// Ctor Parameters [CppParam { name: "CosmeticInfo", ty: "::Liv::Lck::Core::Cosmetics::LckCosmeticInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlayerIds", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo::LckAvailableCosmeticInfo(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo  CosmeticInfo, ::ArrayW<::StringW>  PlayerIds) noexcept  {
this->CosmeticInfo = CosmeticInfo;
this->PlayerIds = PlayerIds;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo::LckAvailableCosmeticInfo()   {
}

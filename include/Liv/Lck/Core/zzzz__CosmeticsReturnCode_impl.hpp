#pragma once
// IWYU pragma private; include "Liv/Lck/Core/CosmeticsReturnCode.hpp"
#include "Liv/Lck/Core/zzzz__CosmeticsReturnCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::CosmeticsReturnCode::CosmeticsReturnCode(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::CosmeticsReturnCode::CosmeticsReturnCode()   {
}
constexpr ::Liv::Lck::Core::CosmeticsReturnCode  Liv::Lck::Core::CosmeticsReturnCode::Ok{static_cast<uint32_t>(0x0u)};
constexpr ::Liv::Lck::Core::CosmeticsReturnCode  Liv::Lck::Core::CosmeticsReturnCode::Panic{static_cast<uint32_t>(0x1u)};
constexpr ::Liv::Lck::Core::CosmeticsReturnCode  Liv::Lck::Core::CosmeticsReturnCode::FailedToRetrieveState{static_cast<uint32_t>(0x2u)};
constexpr ::Liv::Lck::Core::CosmeticsReturnCode  Liv::Lck::Core::CosmeticsReturnCode::InvalidArgument{static_cast<uint32_t>(0x3u)};
constexpr ::Liv::Lck::Core::CosmeticsReturnCode  Liv::Lck::Core::CosmeticsReturnCode::BackendError{static_cast<uint32_t>(0x4u)};
constexpr ::Liv::Lck::Core::CosmeticsReturnCode  Liv::Lck::Core::CosmeticsReturnCode::FailedToCacheCosmetics{static_cast<uint32_t>(0x5u)};
constexpr ::Liv::Lck::Core::CosmeticsReturnCode  Liv::Lck::Core::CosmeticsReturnCode::FailedToNotifyOnCosmeticAvailable{static_cast<uint32_t>(0x6u)};
constexpr ::Liv::Lck::Core::CosmeticsReturnCode  Liv::Lck::Core::CosmeticsReturnCode::MutexLockError{static_cast<uint32_t>(0x7u)};
constexpr ::Liv::Lck::Core::CosmeticsReturnCode  Liv::Lck::Core::CosmeticsReturnCode::Unauthorized{static_cast<uint32_t>(0x8u)};

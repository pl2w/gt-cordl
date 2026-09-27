#pragma once
// IWYU pragma private; include "System/Net/ThreadKinds.hpp"
#include "System/Net/zzzz__ThreadKinds_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::ThreadKinds::ThreadKinds(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::ThreadKinds::ThreadKinds()   {
}
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::User{static_cast<int32_t>(0x1)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::System{static_cast<int32_t>(0x2)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::Sync{static_cast<int32_t>(0x4)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::Async{static_cast<int32_t>(0x8)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::Timer{static_cast<int32_t>(0x10)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::CompletionPort{static_cast<int32_t>(0x20)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::Worker{static_cast<int32_t>(0x40)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::Finalization{static_cast<int32_t>(0x80)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::Other{static_cast<int32_t>(0x100)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::OwnerMask{static_cast<int32_t>(0x3)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::SyncMask{static_cast<int32_t>(0xc)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::SourceMask{static_cast<int32_t>(0x1f0)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::SafeSources{static_cast<int32_t>(0x160)};
constexpr ::System::Net::ThreadKinds  System::Net::ThreadKinds::ThreadPool{static_cast<int32_t>(0x60)};

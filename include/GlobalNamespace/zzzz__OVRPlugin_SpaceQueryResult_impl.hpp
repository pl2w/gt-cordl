#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceQueryResult.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryResult_def.hpp"
// Ctor Parameters [CppParam { name: "space", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryResult::OVRPlugin_SpaceQueryResult(uint64_t  space, ::System::Guid  uuid) noexcept  {
this->space = space;
this->uuid = uuid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryResult::OVRPlugin_SpaceQueryResult()   {
}

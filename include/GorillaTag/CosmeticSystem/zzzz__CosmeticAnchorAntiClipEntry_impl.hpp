#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticAnchorAntiClipEntry.hpp"
#include "GorillaTag/zzzz__XformOffset_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAnchorAntiClipEntry_def.hpp"
inline void GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry::setStaticF_Identity(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  value)  {
::cordl_internals::setStaticField<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry, "Identity", ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>(std::forward<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>(value));
}
inline ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry::getStaticF_Identity()  {
return ::cordl_internals::getStaticField<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry, "Identity", ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>();
}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "::GorillaTag::XformOffset", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry::CosmeticAnchorAntiClipEntry(bool  enabled, ::GorillaTag::XformOffset  offset) noexcept  {
this->enabled = enabled;
this->offset = offset;
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry::CosmeticAnchorAntiClipEntry()   {
}

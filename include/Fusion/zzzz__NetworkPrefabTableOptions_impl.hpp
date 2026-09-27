#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabTableOptions.hpp"
#include "Fusion/zzzz__NetworkPrefabTableOptions_def.hpp"
inline void Fusion::NetworkPrefabTableOptions::setStaticF_Default(::Fusion::NetworkPrefabTableOptions  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkPrefabTableOptions, "Default", ::Fusion::NetworkPrefabTableOptions>(std::forward<::Fusion::NetworkPrefabTableOptions>(value));
}
inline ::Fusion::NetworkPrefabTableOptions Fusion::NetworkPrefabTableOptions::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkPrefabTableOptions, "Default", ::Fusion::NetworkPrefabTableOptions>();
}
// Ctor Parameters [CppParam { name: "UnloadPrefabOnReleasingLastInstance", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UnloadUnusedPrefabsOnShutdown", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkPrefabTableOptions::NetworkPrefabTableOptions(bool  UnloadPrefabOnReleasingLastInstance, bool  UnloadUnusedPrefabsOnShutdown) noexcept  {
this->UnloadPrefabOnReleasingLastInstance = UnloadPrefabOnReleasingLastInstance;
this->UnloadUnusedPrefabsOnShutdown = UnloadUnusedPrefabsOnShutdown;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabTableOptions::NetworkPrefabTableOptions()   {
}

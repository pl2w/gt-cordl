#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/ContentCatalogData_ResourceLocator_Header.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_ResourceLocator_Header_def.hpp"
// Ctor Parameters [CppParam { name: "magic", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "keysOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "idOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceProvider", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sceneProvider", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "initObjectsArray", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buildResultHash", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ResourceLocator_ContentCatalogData_Header::ResourceLocator_ContentCatalogData_Header(int32_t  magic, int32_t  version, uint32_t  keysOffset, uint32_t  idOffset, uint32_t  instanceProvider, uint32_t  sceneProvider, uint32_t  initObjectsArray, uint32_t  buildResultHash) noexcept  {
this->magic = magic;
this->version = version;
this->keysOffset = keysOffset;
this->idOffset = idOffset;
this->instanceProvider = instanceProvider;
this->sceneProvider = sceneProvider;
this->initObjectsArray = initObjectsArray;
this->buildResultHash = buildResultHash;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResourceLocator_ContentCatalogData_Header::ResourceLocator_ContentCatalogData_Header()   {
}

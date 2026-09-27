#pragma once
// IWYU pragma private; include "Liv/Lck/Core/GameInfo.hpp"
#include "Liv/Lck/Core/zzzz__GameInfo_def.hpp"
// Ctor Parameters [CppParam { name: "GameName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameVersion", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ProjectName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CompanyName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EngineVersion", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RenderPipeline", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GraphicsAPI", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Platform", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PersistentDataPath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InteractionSystems", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::GameInfo::GameInfo(::StringW  GameName, ::StringW  GameVersion, ::StringW  ProjectName, ::StringW  CompanyName, ::StringW  EngineVersion, ::StringW  RenderPipeline, ::StringW  GraphicsAPI, ::StringW  Platform, ::StringW  PersistentDataPath, ::StringW  InteractionSystems) noexcept  {
this->GameName = GameName;
this->GameVersion = GameVersion;
this->ProjectName = ProjectName;
this->CompanyName = CompanyName;
this->EngineVersion = EngineVersion;
this->RenderPipeline = RenderPipeline;
this->GraphicsAPI = GraphicsAPI;
this->Platform = Platform;
this->PersistentDataPath = PersistentDataPath;
this->InteractionSystems = InteractionSystems;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::GameInfo::GameInfo()   {
}

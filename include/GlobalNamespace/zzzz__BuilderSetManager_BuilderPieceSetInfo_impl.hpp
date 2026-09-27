#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderSetManager_BuilderPieceSetInfo.hpp"
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderPieceSetInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "pieceType", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialType", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "setIds", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo::BuilderSetManager_BuilderPieceSetInfo(int32_t  pieceType, int32_t  materialType, ::System::Collections::Generic::List_1<int32_t>*  setIds) noexcept  {
this->pieceType = pieceType;
this->materialType = materialType;
this->setIds = setIds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo::BuilderSetManager_BuilderPieceSetInfo()   {
}

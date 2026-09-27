#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPieceData.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_State_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPieceData_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceData::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderPieceData::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ba9da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::BuilderPieceData::_ctor(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, piece);
}
// Ctor Parameters [CppParam { name: "pieceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pieceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentPieceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestedParentPieceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "heldByActorNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "preventSnapUntilMoved", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isBuiltIntoTable", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "state", ty: "::GlobalNamespace::BuilderPiece_State", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "privatePlotIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isArmPiece", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::BuilderPieceData::BuilderPieceData(int32_t  pieceId, int32_t  pieceIndex, int32_t  parentPieceIndex, int32_t  requestedParentPieceIndex, int32_t  heldByActorNumber, int32_t  preventSnapUntilMoved, bool  isBuiltIntoTable, ::GlobalNamespace::BuilderPiece_State  state, int32_t  privatePlotIndex, bool  isArmPiece) noexcept  {
this->pieceId = pieceId;
this->pieceIndex = pieceIndex;
this->parentPieceIndex = parentPieceIndex;
this->requestedParentPieceIndex = requestedParentPieceIndex;
this->heldByActorNumber = heldByActorNumber;
this->preventSnapUntilMoved = preventSnapUntilMoved;
this->isBuiltIntoTable = isBuiltIntoTable;
this->state = state;
this->privatePlotIndex = privatePlotIndex;
this->isArmPiece = isArmPiece;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderPieceData::BuilderPieceData()   {
}

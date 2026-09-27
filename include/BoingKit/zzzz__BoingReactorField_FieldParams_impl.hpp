#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorField_FieldParams.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__BoingReactorField_FieldParams_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoingReactorField_FieldParams.SuppressWarnings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingReactorField_FieldParams::*)()>(&::GlobalNamespace::BoingReactorField_FieldParams::SuppressWarnings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e20c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingReactorField_FieldParams>(),
                        {"SuppressWarnings", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BoingReactorField_FieldParams::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::GlobalNamespace::BoingReactorField_FieldParams>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BoingReactorField_FieldParams::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::GlobalNamespace::BoingReactorField_FieldParams>();
}
inline void GlobalNamespace::BoingReactorField_FieldParams::SuppressWarnings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingReactorField_FieldParams>(),
                        {"SuppressWarnings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "CellsX", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CellsY", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CellsZ", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NumEffectors", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "iCellBaseX", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "iCellBaseY", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "iCellBaseZ", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding0", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FalloffMode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FalloffDimensions", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PropagationDepth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GridCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding3", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UpWs", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding2", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FieldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding4", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FalloffRatio", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CellSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DeltaTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding5", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoingReactorField_FieldParams::BoingReactorField_FieldParams(int32_t  CellsX, int32_t  CellsY, int32_t  CellsZ, int32_t  NumEffectors, int32_t  iCellBaseX, int32_t  iCellBaseY, int32_t  iCellBaseZ, int32_t  m_padding0, int32_t  FalloffMode, int32_t  FalloffDimensions, int32_t  PropagationDepth, int32_t  m_padding1, ::UnityEngine::Vector3  GridCenter, float_t  m_padding3, ::UnityEngine::Vector3  UpWs, float_t  m_padding2, ::UnityEngine::Vector3  FieldPosition, float_t  m_padding4, float_t  FalloffRatio, float_t  CellSize, float_t  DeltaTime, float_t  m_padding5) noexcept  {
this->CellsX = CellsX;
this->CellsY = CellsY;
this->CellsZ = CellsZ;
this->NumEffectors = NumEffectors;
this->iCellBaseX = iCellBaseX;
this->iCellBaseY = iCellBaseY;
this->iCellBaseZ = iCellBaseZ;
this->m_padding0 = m_padding0;
this->FalloffMode = FalloffMode;
this->FalloffDimensions = FalloffDimensions;
this->PropagationDepth = PropagationDepth;
this->m_padding1 = m_padding1;
this->GridCenter = GridCenter;
this->m_padding3 = m_padding3;
this->UpWs = UpWs;
this->m_padding2 = m_padding2;
this->FieldPosition = FieldPosition;
this->m_padding4 = m_padding4;
this->FalloffRatio = FalloffRatio;
this->CellSize = CellSize;
this->DeltaTime = DeltaTime;
this->m_padding5 = m_padding5;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoingReactorField_FieldParams::BoingReactorField_FieldParams()   {
}

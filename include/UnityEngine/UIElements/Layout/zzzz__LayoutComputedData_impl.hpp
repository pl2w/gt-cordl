#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutComputedData.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__Border_e__FixedBuffer_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__Dimensions_e__FixedBuffer_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__Margin_e__FixedBuffer_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__MeasuredDimensions_e__FixedBuffer_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__Padding_e__FixedBuffer_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__Position_e__FixedBuffer_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDirection_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__Border_e__FixedBuffer_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__Dimensions_e__FixedBuffer_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__Margin_e__FixedBuffer_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__MeasuredDimensions_e__FixedBuffer_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__Padding_e__FixedBuffer_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData__Position_e__FixedBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutComputedData.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutComputedData (*)()>(&::UnityEngine::UIElements::Layout::LayoutComputedData::get_Default)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb7fdcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutComputedData>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutComputedData.get_MarginBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t* (::UnityEngine::UIElements::Layout::LayoutComputedData::*)()>(&::UnityEngine::UIElements::Layout::LayoutComputedData::get_MarginBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb801554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutComputedData>(),
                        {"get_MarginBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutComputedData.get_BorderBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t* (::UnityEngine::UIElements::Layout::LayoutComputedData::*)()>(&::UnityEngine::UIElements::Layout::LayoutComputedData::get_BorderBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb80155c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutComputedData>(),
                        {"get_BorderBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutComputedData.get_PaddingBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t* (::UnityEngine::UIElements::Layout::LayoutComputedData::*)()>(&::UnityEngine::UIElements::Layout::LayoutComputedData::get_PaddingBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb801564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutComputedData>(),
                        {"get_PaddingBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Layout::LayoutComputedData UnityEngine::UIElements::Layout::LayoutComputedData::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutComputedData>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutComputedData>(nullptr, ___internal_method);
}
inline float_t* UnityEngine::UIElements::Layout::LayoutComputedData::get_MarginBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutComputedData>(),
                        {"get_MarginBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t*>(*this, ___internal_method);
}
inline float_t* UnityEngine::UIElements::Layout::LayoutComputedData::get_BorderBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutComputedData>(),
                        {"get_BorderBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t*>(*this, ___internal_method);
}
inline float_t* UnityEngine::UIElements::Layout::LayoutComputedData::get_PaddingBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutComputedData>(),
                        {"get_PaddingBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Position", ty: "::GlobalNamespace::LayoutComputedData__Position_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Dimensions", ty: "::GlobalNamespace::LayoutComputedData__Dimensions_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Margin", ty: "::GlobalNamespace::LayoutComputedData__Margin_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Border", ty: "::GlobalNamespace::LayoutComputedData__Border_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Padding", ty: "::GlobalNamespace::LayoutComputedData__Padding_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Direction", ty: "::UnityEngine::UIElements::Layout::LayoutDirection", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComputedFlexBasisGeneration", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComputedFlexBasis", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HadOverflow", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GenerationCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LastParentDirection", ty: "::UnityEngine::UIElements::Layout::LayoutDirection", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LastPointScaleFactor", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MeasuredDimensions", ty: "::GlobalNamespace::LayoutComputedData__MeasuredDimensions_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::Layout::LayoutComputedData::LayoutComputedData(::GlobalNamespace::LayoutComputedData__Position_e__FixedBuffer  Position, ::GlobalNamespace::LayoutComputedData__Dimensions_e__FixedBuffer  Dimensions, ::GlobalNamespace::LayoutComputedData__Margin_e__FixedBuffer  Margin, ::GlobalNamespace::LayoutComputedData__Border_e__FixedBuffer  Border, ::GlobalNamespace::LayoutComputedData__Padding_e__FixedBuffer  Padding, ::UnityEngine::UIElements::Layout::LayoutDirection  Direction, uint32_t  ComputedFlexBasisGeneration, float_t  ComputedFlexBasis, bool  HadOverflow, uint32_t  GenerationCount, ::UnityEngine::UIElements::Layout::LayoutDirection  LastParentDirection, float_t  LastPointScaleFactor, ::GlobalNamespace::LayoutComputedData__MeasuredDimensions_e__FixedBuffer  MeasuredDimensions) noexcept  {
this->Position = Position;
this->Dimensions = Dimensions;
this->Margin = Margin;
this->Border = Border;
this->Padding = Padding;
this->Direction = Direction;
this->ComputedFlexBasisGeneration = ComputedFlexBasisGeneration;
this->ComputedFlexBasis = ComputedFlexBasis;
this->HadOverflow = HadOverflow;
this->GenerationCount = GenerationCount;
this->LastParentDirection = LastParentDirection;
this->LastPointScaleFactor = LastPointScaleFactor;
this->MeasuredDimensions = MeasuredDimensions;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutComputedData::LayoutComputedData()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/PolylineRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Oculus/Interaction/zzzz__PolylineRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.get_Copies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PolylineRenderer::*)()>(&::Oculus::Interaction::PolylineRenderer::get_Copies)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa478cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"get_Copies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PolylineRenderer::*)()>(&::Oculus::Interaction::PolylineRenderer::get_BufferSize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa478cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.get_LineScaleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PolylineRenderer::*)()>(&::Oculus::Interaction::PolylineRenderer::get_LineScaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa478ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"get_LineScaleFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.set_LineScaleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)(float_t)>(&::Oculus::Interaction::PolylineRenderer::set_LineScaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa478cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"set_LineScaleFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)(::UnityEngine::Material*, bool)>(&::Oculus::Interaction::PolylineRenderer::_ctor)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xa476340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)()>(&::Oculus::Interaction::PolylineRenderer::Cleanup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa476860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.SetLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::Color)>(&::Oculus::Interaction::PolylineRenderer::SetLines)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa478cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetLines", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.SetLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*, int32_t)>(&::Oculus::Interaction::PolylineRenderer::SetLines)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa47697c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetLines", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.SetPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::Oculus::Interaction::PolylineRenderer::SetPositions)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xa478d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetPositions", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.SetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(&::Oculus::Interaction::PolylineRenderer::SetColors)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa4791f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetColors", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)(int32_t, ::UnityEngine::Color)>(&::Oculus::Interaction::PolylineRenderer::SetColor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa479120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.SetDrawCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)(int32_t)>(&::Oculus::Interaction::PolylineRenderer::SetDrawCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4790dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetDrawCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.PrepareColorBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)(int32_t)>(&::Oculus::Interaction::PolylineRenderer::PrepareColorBuffer)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa479310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"PrepareColorBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.RenderLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)()>(&::Oculus::Interaction::PolylineRenderer::RenderLines)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa476a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"RenderLines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PolylineRenderer.SetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PolylineRenderer::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::PolylineRenderer::SetTransform)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa479434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector4>& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__positions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positions;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__positions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positions;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positions = value;
}
constexpr bool& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__positionsNeedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionsNeedUpdate;
}
constexpr bool const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__positionsNeedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionsNeedUpdate;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__positionsNeedUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionsNeedUpdate = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colors = value;
}
constexpr bool& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__colorsNeedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorsNeedUpdate;
}
constexpr bool const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__colorsNeedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorsNeedUpdate;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__colorsNeedUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorsNeedUpdate = value;
}
constexpr ::UnityEngine::Bounds& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bounds;
}
constexpr ::UnityEngine::Bounds const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bounds;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bounds = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__baseMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__baseMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseMesh;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__baseMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material = value;
}
constexpr bool& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__renderSinglePass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderSinglePass;
}
constexpr bool const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__renderSinglePass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderSinglePass;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__renderSinglePass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderSinglePass = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__positionBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__positionBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionBuffer;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__positionBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__colorBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__colorBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorBuffer;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__colorBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__argsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____argsBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__argsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____argsBuffer;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__argsBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____argsBuffer = value;
}
constexpr ::ArrayW<uint32_t>& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__argsData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____argsData;
}
constexpr ::ArrayW<uint32_t> const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__argsData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____argsData;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__argsData(::ArrayW<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____argsData = value;
}
constexpr int32_t& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__positionBufferShaderID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionBufferShaderID;
}
constexpr int32_t const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__positionBufferShaderID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionBufferShaderID;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__positionBufferShaderID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionBufferShaderID = value;
}
constexpr int32_t& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__colorBufferShaderID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorBufferShaderID;
}
constexpr int32_t const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__colorBufferShaderID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorBufferShaderID;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__colorBufferShaderID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorBufferShaderID = value;
}
constexpr int32_t& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__localToWorldShaderID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localToWorldShaderID;
}
constexpr int32_t const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__localToWorldShaderID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localToWorldShaderID;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__localToWorldShaderID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localToWorldShaderID = value;
}
constexpr int32_t& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__scaleShaderID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleShaderID;
}
constexpr int32_t const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__scaleShaderID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleShaderID;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__scaleShaderID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleShaderID = value;
}
constexpr int32_t& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__maxLineCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxLineCount;
}
constexpr int32_t const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__maxLineCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxLineCount;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__maxLineCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxLineCount = value;
}
constexpr ::UnityEngine::Matrix4x4& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__matrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__matrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matrix;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__matrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matrix = value;
}
constexpr float_t& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__lineScaleFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineScaleFactor;
}
constexpr float_t const& Oculus::Interaction::PolylineRenderer::__cordl_internal_get__lineScaleFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineScaleFactor;
}
constexpr void Oculus::Interaction::PolylineRenderer::__cordl_internal_set__lineScaleFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineScaleFactor = value;
}
inline int32_t Oculus::Interaction::PolylineRenderer::get_Copies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"get_Copies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::PolylineRenderer::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PolylineRenderer::get_LineScaleFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"get_LineScaleFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PolylineRenderer::set_LineScaleFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"set_LineScaleFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PolylineRenderer::_ctor(::UnityEngine::Material*  material, bool  renderSinglePass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, renderSinglePass);
}
inline void Oculus::Interaction::PolylineRenderer::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PolylineRenderer::SetLines(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  positions, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetLines", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions, color);
}
inline void Oculus::Interaction::PolylineRenderer::SetLines(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  positions, ::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors, int32_t  maxCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetLines", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions, colors, maxCount);
}
inline void Oculus::Interaction::PolylineRenderer::SetPositions(int32_t  count, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetPositions", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, positions);
}
inline void Oculus::Interaction::PolylineRenderer::SetColors(int32_t  count, ::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetColors", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, colors);
}
inline void Oculus::Interaction::PolylineRenderer::SetColor(int32_t  count, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, color);
}
inline void Oculus::Interaction::PolylineRenderer::SetDrawCount(int32_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetDrawCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Oculus::Interaction::PolylineRenderer::PrepareColorBuffer(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"PrepareColorBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void Oculus::Interaction::PolylineRenderer::RenderLines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"RenderLines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PolylineRenderer::SetTransform(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PolylineRenderer*>(),
                        {"SetTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline ::Oculus::Interaction::PolylineRenderer* Oculus::Interaction::PolylineRenderer::New_ctor(::UnityEngine::Material*  material, bool  renderSinglePass)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PolylineRenderer*>(material, renderSinglePass));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PolylineRenderer::PolylineRenderer()   {
}

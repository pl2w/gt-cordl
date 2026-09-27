#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextElement_GlyphsEnumerable.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_GlyphsEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ATGMeshInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextElement_GlyphsEnumerable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextElement_GlyphsEnumerable::*)(::UnityEngine::UIElements::TextElement*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*)>(&::GlobalNamespace::TextElement_GlyphsEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb7a1e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextElement_GlyphsEnumerable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextElement_GlyphsEnumerable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextElement_GlyphsEnumerable::*)(::UnityEngine::UIElements::TextElement*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*, ::ArrayW<::UnityEngine::TextCore::Text::ATGMeshInfo>)>(&::GlobalNamespace::TextElement_GlyphsEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb7a1f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextElement_GlyphsEnumerable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::Text::ATGMeshInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextElement_GlyphsEnumerable.ComputeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*)>(&::GlobalNamespace::TextElement_GlyphsEnumerable::ComputeCount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb7a1e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextElement_GlyphsEnumerable>(),
                        {"ComputeCount", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TextElement_GlyphsEnumerable::_ctor(::UnityEngine::UIElements::TextElement*  te, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextElement_GlyphsEnumerable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, te, vertices);
}
inline void GlobalNamespace::TextElement_GlyphsEnumerable::_ctor(::UnityEngine::UIElements::TextElement*  te, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  vertices, ::ArrayW<::UnityEngine::TextCore::Text::ATGMeshInfo>  meshInfos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextElement_GlyphsEnumerable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::Text::ATGMeshInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, te, vertices, meshInfos);
}
inline int32_t GlobalNamespace::TextElement_GlyphsEnumerable::ComputeCount(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextElement_GlyphsEnumerable>(),
                        {"ComputeCount", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, verts);
}
// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Vertices", ty: "::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TextElement", ty: "::UnityEngine::UIElements::TextElement*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TextElement_GlyphsEnumerable::TextElement_GlyphsEnumerable(int32_t  Count, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  m_Vertices, ::UnityEngine::UIElements::TextElement*  m_TextElement) noexcept  {
this->Count = Count;
this->m_Vertices = m_Vertices;
this->m_TextElement = m_TextElement;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextElement_GlyphsEnumerable::TextElement_GlyphsEnumerable()   {
}

#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_TexturePackerRegular.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_NodeType_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePackerRegular_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePackerRegular_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_NodeType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular.printTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*, ::StringW)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::printTree)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x9dc1884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"printTree", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular.flattenTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::flattenTree)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9dc1ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"flattenTree", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular.drawGizmosNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::drawGizmosNode)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9dc1bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"drawGizmosNode", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::DrawGizmos)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9dc1da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"DrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular.ProbeSingleAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>, int32_t, int32_t, float_t, int32_t, int32_t, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeSingleAtlas)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x9dc1e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"ProbeSingleAtlas", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular.ProbeMultiAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>, int32_t, int32_t, float_t, int32_t, int32_t, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeMultiAtlas)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x9dc299c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"ProbeMultiAtlas", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular.GetExtent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetExtent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9dc288c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"GetExtent", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular.StepWidthHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(int32_t, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::StepWidthHeight)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9dc2dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"StepWidthHeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular.GetRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, int32_t, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetRects)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9dc2de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular.GetRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int32_t, int32_t, bool)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetRects)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x9dc2f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular._GetRectsSingleAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::AtlasPackingResult* (::DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::_GetRectsSingleAtlas)> {
  constexpr static std::size_t size = 0x1930;
  constexpr static std::size_t addrs = 0x9dc4348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"_GetRectsSingleAtlas", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular._GetRectsMultiAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::_GetRectsMultiAtlas)> {
  constexpr static std::size_t size = 0x123c;
  constexpr static std::size_t addrs = 0x9dc310c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"_GetRectsMultiAtlas", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9dc5cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*& DigitalOpus::MB::Core::MB2_TexturePackerRegular::__cordl_internal_get_bestRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestRoot;
}
constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult* const& DigitalOpus::MB::Core::MB2_TexturePackerRegular::__cordl_internal_get_bestRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestRoot;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular::__cordl_internal_set_bestRoot(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestRoot = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePackerRegular::__cordl_internal_get_atlasY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasY;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePackerRegular::__cordl_internal_get_atlasY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasY;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular::__cordl_internal_set_atlasY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasY = value;
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerRegular::printTree(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  r, ::StringW  spc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"printTree", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r, spc);
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerRegular::flattenTree(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  r, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*  putHere)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"flattenTree", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r, putHere);
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerRegular::drawGizmosNode(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"drawGizmosNode", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r);
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerRegular::DrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"DrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeSingleAtlas(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>  imgsToAdd, int32_t  idealAtlasW, int32_t  idealAtlasH, float_t  imgArea, int32_t  maxAtlasDimX, int32_t  maxAtlasDimY, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  pr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"ProbeSingleAtlas", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, imgsToAdd, idealAtlasW, idealAtlasH, imgArea, maxAtlasDimX, maxAtlasDimY, pr);
}
inline bool DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeMultiAtlas(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>  imgsToAdd, int32_t  idealAtlasW, int32_t  idealAtlasH, float_t  imgArea, int32_t  maxAtlasDimX, int32_t  maxAtlasDimY, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  pr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"ProbeMultiAtlas", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, imgsToAdd, idealAtlasW, idealAtlasH, imgArea, maxAtlasDimX, maxAtlasDimY, pr);
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetExtent(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  r, ::by_ref<int32_t>  x, ::by_ref<int32_t>  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"GetExtent", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, x, y);
}
inline int32_t DigitalOpus::MB::Core::MB2_TexturePackerRegular::StepWidthHeight(int32_t  oldVal, int32_t  step, int32_t  maxDim)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"StepWidthHeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, oldVal, step, maxDim);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, int32_t  maxDimensionX, int32_t  maxDimensionY, int32_t  atPadding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, imgWidthHeights, maxDimensionX, maxDimensionY, atPadding);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionX, int32_t  maxDimensionY, bool  doMultiAtlas)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, doMultiAtlas);
}
inline ::DigitalOpus::MB::Core::AtlasPackingResult* DigitalOpus::MB::Core::MB2_TexturePackerRegular::_GetRectsSingleAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionX, int32_t  maxDimensionY, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY, int32_t  recursionDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"_GetRectsSingleAtlas", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::AtlasPackingResult*>(this, ___internal_method, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY, recursionDepth);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB2_TexturePackerRegular::_GetRectsMultiAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionPassedX, int32_t  maxDimensionPassedY, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {"_GetRectsMultiAtlas", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, imgWidthHeights, paddings, maxDimensionPassedX, maxDimensionPassedY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY);
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerRegular::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePackerRegular* DigitalOpus::MB::Core::MB2_TexturePackerRegular::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePackerRegular*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::MB2_TexturePackerRegular()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::*)(::GlobalNamespace::MB2_TexturePacker_NodeType)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9dc241c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MB2_TexturePacker_NodeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node.isLeaf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::isLeaf)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9dc5d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(),
                        {"isLeaf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* (::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::*)(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*, bool)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::Insert)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x9dc2494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(),
                        {"Insert", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MB2_TexturePacker_NodeType& DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_get_isFullAtlas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFullAtlas;
}
constexpr ::GlobalNamespace::MB2_TexturePacker_NodeType const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_get_isFullAtlas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFullAtlas;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_set_isFullAtlas(::GlobalNamespace::MB2_TexturePacker_NodeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFullAtlas = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>& DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_get_child()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___child;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*> const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_get_child() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___child;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_set_child(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___child = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*& DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_get_r()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r;
}
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect* const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_get_r() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_set_r(::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___r = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*& DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_get_img()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___img;
}
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_Image* const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_get_img() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___img;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_set_img(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___img = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*& DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_get_bestRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestRoot;
}
constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult* const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_get_bestRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestRoot;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::__cordl_internal_set_bestRoot(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestRoot = value;
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::_ctor(::GlobalNamespace::MB2_TexturePacker_NodeType  rootType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MB2_TexturePacker_NodeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootType);
}
inline bool DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::isLeaf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(),
                        {"isLeaf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::Insert(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  im, bool  handed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(),
                        {"Insert", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(this, ___internal_method, im, handed);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::New_ctor(::GlobalNamespace::MB2_TexturePacker_NodeType  rootType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(rootType));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node::MB2_TexturePackerRegular_Node()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::*)(int32_t, int32_t, int32_t, int32_t, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*, bool, float_t, float_t)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::Set)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9dc2950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult.GetScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::*)(bool)>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::GetScore)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dc5c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>(),
                        {"GetScore", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult.PrintTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::PrintTree)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9dc5cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>(),
                        {"PrintTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc5c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_w()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_w() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_set_w(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___w = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_h()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___h;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_h() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___h;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_set_h(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___h = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_outW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outW;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_outW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outW;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_set_outW(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outW = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_outH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outH;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_outH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outH;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_set_outH(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outH = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_set_root(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___root = value;
}
constexpr bool& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_largerOrEqualToMaxDim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___largerOrEqualToMaxDim;
}
constexpr bool const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_largerOrEqualToMaxDim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___largerOrEqualToMaxDim;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_set_largerOrEqualToMaxDim(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___largerOrEqualToMaxDim = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_efficiency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___efficiency;
}
constexpr float_t const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_efficiency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___efficiency;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_set_efficiency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___efficiency = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_squareness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squareness;
}
constexpr float_t const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_squareness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squareness;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_set_squareness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squareness = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_totalAtlasArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalAtlasArea;
}
constexpr float_t const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_totalAtlasArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalAtlasArea;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_set_totalAtlasArea(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalAtlasArea = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_numAtlases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numAtlases;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_get_numAtlases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numAtlases;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::__cordl_internal_set_numAtlases(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numAtlases = value;
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::Set(int32_t  ww, int32_t  hh, int32_t  outw, int32_t  outh, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  r, bool  fits, float_t  e, float_t  sq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ww, hh, outw, outh, r, fits, e, sq);
}
inline float_t DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::GetScore(bool  doPowerOfTwoScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>(),
                        {"GetScore", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, doPowerOfTwoScore);
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::PrintTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>(),
                        {"PrintTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult* DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult::MB2_TexturePackerRegular_ProbeResult()   {
}

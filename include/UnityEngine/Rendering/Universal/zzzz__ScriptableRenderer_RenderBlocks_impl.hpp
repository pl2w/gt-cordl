#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderer_RenderBlocks.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_RenderBlocks_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_RenderBlocks_BlockRange_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScriptableRenderer_RenderBlocks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScriptableRenderer_RenderBlocks::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*)>(&::GlobalNamespace::ScriptableRenderer_RenderBlocks::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb24e808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderBlocks>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScriptableRenderer_RenderBlocks.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScriptableRenderer_RenderBlocks::*)()>(&::GlobalNamespace::ScriptableRenderer_RenderBlocks::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb24eabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderBlocks>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScriptableRenderer_RenderBlocks.FillBlockRanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScriptableRenderer_RenderBlocks::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*)>(&::GlobalNamespace::ScriptableRenderer_RenderBlocks::FillBlockRanges)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb24e9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderBlocks>(),
                        {"FillBlockRanges", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScriptableRenderer_RenderBlocks.GetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScriptableRenderer_RenderBlocks::*)(int32_t)>(&::GlobalNamespace::ScriptableRenderer_RenderBlocks::GetLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb24eb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderBlocks>(),
                        {"GetLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScriptableRenderer_RenderBlocks.GetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange (::GlobalNamespace::ScriptableRenderer_RenderBlocks::*)(int32_t)>(&::GlobalNamespace::ScriptableRenderer_RenderBlocks::GetRange)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb24eb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderBlocks>(),
                        {"GetRange", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ScriptableRenderer_RenderBlocks::_ctor(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  activeRenderPassQueue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderBlocks>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, activeRenderPassQueue);
}
inline void GlobalNamespace::ScriptableRenderer_RenderBlocks::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderBlocks>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ScriptableRenderer_RenderBlocks::FillBlockRanges(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  activeRenderPassQueue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderBlocks>(),
                        {"FillBlockRanges", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, activeRenderPassQueue);
}
inline int32_t GlobalNamespace::ScriptableRenderer_RenderBlocks::GetLength(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderBlocks>(),
                        {"GetLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
inline ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange GlobalNamespace::ScriptableRenderer_RenderBlocks::GetRange(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderBlocks>(),
                        {"GetRange", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ScriptableRenderer_RenderBlocks::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ScriptableRenderer_RenderBlocks::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BlockEventLimits", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BlockRanges", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BlockRangeLengths", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScriptableRenderer_RenderBlocks::ScriptableRenderer_RenderBlocks(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent>  m_BlockEventLimits, ::Unity::Collections::NativeArray_1<int32_t>  m_BlockRanges, ::Unity::Collections::NativeArray_1<int32_t>  m_BlockRangeLengths) noexcept  {
this->m_BlockEventLimits = m_BlockEventLimits;
this->m_BlockRanges = m_BlockRanges;
this->m_BlockRangeLengths = m_BlockRangeLengths;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScriptableRenderer_RenderBlocks::ScriptableRenderer_RenderBlocks()   {
}

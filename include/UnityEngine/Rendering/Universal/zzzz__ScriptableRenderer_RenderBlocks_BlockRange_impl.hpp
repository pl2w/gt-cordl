#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderer_RenderBlocks_BlockRange.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_RenderBlocks_BlockRange_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::*)(int32_t, int32_t)>(&::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb24eb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange (::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::*)()>(&::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24eb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::*)()>(&::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb24eb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::*)()>(&::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24eb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::*)()>(&::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb24eb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::_ctor(int32_t  begin, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, end);
}
inline ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(*this, ___internal_method);
}
inline bool GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::RenderBlocks_ScriptableRenderer_BlockRange(int32_t  m_Current, int32_t  m_End) noexcept  {
this->m_Current = m_Current;
this->m_End = m_End;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange::RenderBlocks_ScriptableRenderer_BlockRange()   {
}

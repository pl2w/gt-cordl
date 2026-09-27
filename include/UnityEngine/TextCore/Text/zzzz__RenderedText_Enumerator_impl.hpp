#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/RenderedText_Enumerator.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_Enumerator_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RenderedText_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::GlobalNamespace::RenderedText_Enumerator::*)()>(&::GlobalNamespace::RenderedText_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb6ec288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderedText_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderedText_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RenderedText_Enumerator::*)(::by_ref<::UnityEngine::TextCore::Text::RenderedText>)>(&::GlobalNamespace::RenderedText_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb6ebf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderedText_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderedText_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RenderedText_Enumerator::*)()>(&::GlobalNamespace::RenderedText_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb6ebf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderedText_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline char16_t GlobalNamespace::RenderedText_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderedText_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
inline void GlobalNamespace::RenderedText_Enumerator::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::TextCore::Text::RenderedText>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderedText_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source);
}
inline bool GlobalNamespace::RenderedText_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderedText_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Source", ty: "::UnityEngine::TextCore::Text::RenderedText", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Stage", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StageIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Current", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RenderedText_Enumerator::RenderedText_Enumerator(::UnityEngine::TextCore::Text::RenderedText  m_Source, int32_t  m_Stage, int32_t  m_StageIndex, char16_t  m_Current) noexcept  {
this->m_Source = m_Source;
this->m_Stage = m_Stage;
this->m_StageIndex = m_StageIndex;
this->m_Current = m_Current;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderedText_Enumerator::RenderedText_Enumerator()   {
}

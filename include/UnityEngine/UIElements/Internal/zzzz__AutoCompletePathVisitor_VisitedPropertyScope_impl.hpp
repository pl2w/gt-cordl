#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/AutoCompletePathVisitor_VisitedPropertyScope.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__AutoCompletePathVisitor_VisitedPropertyScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__AutoCompletePathVisitor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::*)(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*, ::Unity::Properties::IProperty*)>(&::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xb837b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), ::i2c::type_of<::Unity::Properties::IProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::*)(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*, int32_t, ::System::Type*)>(&::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb8377c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::*)()>(&::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb837d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::_ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  context, ::Unity::Properties::IProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), ::i2c::type_of<::Unity::Properties::IProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, property);
}
inline void GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::_ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  context, int32_t  index, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, index, type);
}
inline void GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_VisitContext", ty: "::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::AutoCompletePathVisitor_VisitedPropertyScope(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  m_VisitContext) noexcept  {
this->m_VisitContext = m_VisitContext;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope::AutoCompletePathVisitor_VisitedPropertyScope()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/AutoCompletePathVisitor_InspectedTypeScope_1.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__AutoCompletePathVisitor_InspectedTypeScope_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__AutoCompletePathVisitor_def.hpp"
template<typename TContainer>
inline void GlobalNamespace::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::_ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context);
}
template<typename TContainer>
inline void GlobalNamespace::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TContainer>
constexpr  GlobalNamespace::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TContainer>
constexpr ::System::IDisposable* GlobalNamespace::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_VisitContext", ty: "::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TContainer>
constexpr ::GlobalNamespace::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::AutoCompletePathVisitor_InspectedTypeScope_1(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  m_VisitContext) noexcept  {
this->m_VisitContext = m_VisitContext;
}
// Ctor Parameters []
template<typename TContainer>
constexpr ::GlobalNamespace::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::AutoCompletePathVisitor_InspectedTypeScope_1()   {
}

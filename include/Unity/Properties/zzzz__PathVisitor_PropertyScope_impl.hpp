#pragma once
// IWYU pragma private; include "Unity/Properties/PathVisitor_PropertyScope.hpp"
#include "Unity/Properties/zzzz__PathVisitor_PropertyScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
#include "Unity/Properties/zzzz__PathVisitor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PathVisitor_PropertyScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PathVisitor_PropertyScope::*)(::Unity::Properties::PathVisitor*, ::Unity::Properties::IProperty*)>(&::GlobalNamespace::PathVisitor_PropertyScope::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb698514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PathVisitor_PropertyScope>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Properties::PathVisitor*>(), ::i2c::type_of<::Unity::Properties::IProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathVisitor_PropertyScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PathVisitor_PropertyScope::*)()>(&::GlobalNamespace::PathVisitor_PropertyScope::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb698564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PathVisitor_PropertyScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PathVisitor_PropertyScope::_ctor(::Unity::Properties::PathVisitor*  visitor, ::Unity::Properties::IProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PathVisitor_PropertyScope>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Properties::PathVisitor*>(), ::i2c::type_of<::Unity::Properties::IProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, visitor, property);
}
inline void GlobalNamespace::PathVisitor_PropertyScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PathVisitor_PropertyScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PathVisitor_PropertyScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PathVisitor_PropertyScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Visitor", ty: "::Unity::Properties::PathVisitor*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Property", ty: "::Unity::Properties::IProperty*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PathVisitor_PropertyScope::PathVisitor_PropertyScope(::Unity::Properties::PathVisitor*  m_Visitor, ::Unity::Properties::IProperty*  m_Property) noexcept  {
this->m_Visitor = m_Visitor;
this->m_Property = m_Property;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PathVisitor_PropertyScope::PathVisitor_PropertyScope()   {
}

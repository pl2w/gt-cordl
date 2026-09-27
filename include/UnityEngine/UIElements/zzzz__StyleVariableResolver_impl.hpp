#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariableResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_ResolveContext_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxParser_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValueMatcher_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_ResolveContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_Result_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_currentSheet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::StyleSheet> (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::get_currentSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb792e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"get_currentSheet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_currentHandles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleValueHandle> (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::get_currentHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb792ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"get_currentHandles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_resolvedValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::get_resolvedValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb792ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"get_resolvedValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_variableContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleVariableContext* (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::get_variableContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb792eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"get_variableContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.set_variableContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(::UnityEngine::UIElements::StyleVariableContext*)>(&::UnityEngine::UIElements::StyleVariableResolver::set_variableContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb792eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"set_variableContext", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleVariableContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(::UnityEngine::UIElements::StyleProperty*, ::UnityEngine::UIElements::StyleSheet*, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>)>(&::UnityEngine::UIElements::StyleVariableResolver::Init)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb792ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleProperty*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.PushContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(::UnityEngine::UIElements::StyleSheet*, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>)>(&::UnityEngine::UIElements::StyleVariableResolver::PushContext)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb792f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"PushContext", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.PopContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::PopContext)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb793024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"PopContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.AddValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleVariableResolver::AddValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb7930b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"AddValue", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveVarFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleVariableResolver::*)(::by_ref<int32_t>)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb79317c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ResolveVarFunction", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveVarFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StyleVariableResolver_Result (::UnityEngine::UIElements::StyleVariableResolver::*)(::by_ref<int32_t>, int32_t, ::StringW)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb793300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ResolveVarFunction", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ValidateResolvedValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::ValidateResolvedValues)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb79392c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ValidateResolvedValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveVariable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StyleVariableResolver_Result (::UnityEngine::UIElements::StyleVariableResolver::*)(::StringW)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveVariable)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xb793460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ResolveVariable", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StyleVariableResolver_Result (::UnityEngine::UIElements::StyleVariableResolver::*)(::by_ref<int32_t>, bool)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveFallback)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xb7936dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ResolveFallback", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ParseVarFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::StyleSheet*, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::StringW>)>(&::UnityEngine::UIElements::StyleVariableResolver::ParseVarFunction)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb793248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ParseVarFunction", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb793a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_Matcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Matcher;
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* const& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_Matcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Matcher;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_set_m_Matcher(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Matcher = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_ResolvedValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResolvedValues;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* const& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_ResolvedValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResolvedValues;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_set_m_ResolvedValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResolvedValues = value;
}
constexpr ::System::Collections::Generic::Stack_1<::StringW>*& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_ResolvedVarStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResolvedVarStack;
}
constexpr ::System::Collections::Generic::Stack_1<::StringW>* const& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_ResolvedVarStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResolvedVarStack;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_set_m_ResolvedVarStack(::System::Collections::Generic::Stack_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResolvedVarStack = value;
}
constexpr ::UnityEngine::UIElements::StyleProperty*& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_Property()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Property;
}
constexpr ::UnityEngine::UIElements::StyleProperty* const& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_Property() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Property;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_set_m_Property(::UnityEngine::UIElements::StyleProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Property = value;
}
constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::StyleVariableResolver_ResolveContext>*& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_ContextStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContextStack;
}
constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::StyleVariableResolver_ResolveContext>* const& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_ContextStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContextStack;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_set_m_ContextStack(::System::Collections::Generic::Stack_1<::GlobalNamespace::StyleVariableResolver_ResolveContext>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ContextStack = value;
}
constexpr ::GlobalNamespace::StyleVariableResolver_ResolveContext& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_CurrentContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentContext;
}
constexpr ::GlobalNamespace::StyleVariableResolver_ResolveContext const& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get_m_CurrentContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentContext;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_set_m_CurrentContext(::GlobalNamespace::StyleVariableResolver_ResolveContext  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentContext = value;
}
constexpr ::UnityEngine::UIElements::StyleVariableContext*& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get__variableContext_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____variableContext_k__BackingField;
}
constexpr ::UnityEngine::UIElements::StyleVariableContext* const& UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_get__variableContext_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____variableContext_k__BackingField;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__cordl_internal_set__variableContext_k__BackingField(::UnityEngine::UIElements::StyleVariableContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____variableContext_k__BackingField = value;
}
inline void UnityEngine::UIElements::StyleVariableResolver::setStaticF_s_SyntaxParser(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*, "s_SyntaxParser", ::UnityEngine::UIElements::StyleVariableResolver*>(std::forward<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(value));
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* UnityEngine::UIElements::StyleVariableResolver::getStaticF_s_SyntaxParser()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*, "s_SyntaxParser", ::UnityEngine::UIElements::StyleVariableResolver*>();
}
inline ::UnityW<::UnityEngine::UIElements::StyleSheet> UnityEngine::UIElements::StyleVariableResolver::get_currentSheet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"get_currentSheet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::StyleSheet>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> UnityEngine::UIElements::StyleVariableResolver::get_currentHandles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"get_currentHandles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* UnityEngine::UIElements::StyleVariableResolver::get_resolvedValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"get_resolvedValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleVariableContext* UnityEngine::UIElements::StyleVariableResolver::get_variableContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"get_variableContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleVariableContext*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleVariableResolver::set_variableContext(::UnityEngine::UIElements::StyleVariableContext*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"set_variableContext", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleVariableContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleVariableResolver::Init(::UnityEngine::UIElements::StyleProperty*  property, ::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  handles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleProperty*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, sheet, handles);
}
inline void UnityEngine::UIElements::StyleVariableResolver::PushContext(::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  handles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"PushContext", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sheet, handles);
}
inline void UnityEngine::UIElements::StyleVariableResolver::PopContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"PopContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleVariableResolver::AddValue(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"AddValue", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ResolveVarFunction", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline ::GlobalNamespace::StyleVariableResolver_Result UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction(::by_ref<int32_t>  index, int32_t  argc, ::StringW  varName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ResolveVarFunction", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StyleVariableResolver_Result>(this, ___internal_method, index, argc, varName);
}
inline bool UnityEngine::UIElements::StyleVariableResolver::ValidateResolvedValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ValidateResolvedValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::StyleVariableResolver_Result UnityEngine::UIElements::StyleVariableResolver::ResolveVariable(::StringW  variableName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ResolveVariable", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StyleVariableResolver_Result>(this, ___internal_method, variableName);
}
inline ::GlobalNamespace::StyleVariableResolver_Result UnityEngine::UIElements::StyleVariableResolver::ResolveFallback(::by_ref<int32_t>  index, bool  appendValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ResolveFallback", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StyleVariableResolver_Result>(this, ___internal_method, index, appendValues);
}
inline void UnityEngine::UIElements::StyleVariableResolver::ParseVarFunction(::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  handles, ::by_ref<int32_t>  index, ::by_ref<int32_t>  argCount, ::by_ref<::StringW>  variableName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {"ParseVarFunction", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sheet, handles, index, argCount, variableName);
}
inline void UnityEngine::UIElements::StyleVariableResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleVariableResolver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleVariableResolver* UnityEngine::UIElements::StyleVariableResolver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleVariableResolver*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleVariableResolver::StyleVariableResolver()   {
}

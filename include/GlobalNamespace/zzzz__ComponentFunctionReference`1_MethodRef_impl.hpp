#pragma once
// IWYU pragma private; include "GlobalNamespace/ComponentFunctionReference`1_MethodRef.hpp"
#include "GlobalNamespace/zzzz__ComponentFunctionReference`1_MethodRef_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename TResult>
inline void GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>::_ctor(::UnityEngine::Object*  obj, ::System::Reflection::MethodInfo*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj, m);
}
// Ctor Parameters [CppParam { name: "component", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "methodName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TResult>
constexpr ::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>::ComponentFunctionReference_1_MethodRef(::UnityW<::UnityEngine::Object>  component, ::StringW  methodName) noexcept  {
this->component = component;
this->methodName = methodName;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>::ComponentFunctionReference_1_MethodRef()   {
}

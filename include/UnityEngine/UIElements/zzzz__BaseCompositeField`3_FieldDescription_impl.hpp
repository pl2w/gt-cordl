#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseCompositeField`3_FieldDescription.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField`3_FieldDescription_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
template<typename TValueType,typename TField,typename TFieldValue>
inline void GlobalNamespace::BaseCompositeField_3_FieldDescription<TValueType,TField,TFieldValue>::_ctor(::StringW  name, ::StringW  ussName, ::System::Func_2<TValueType,TFieldValue>*  read, ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType,TField,TFieldValue>*  write)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseCompositeField_3_FieldDescription<TValueType,TField,TFieldValue>>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_2<TValueType,TFieldValue>*>(), ::i2c::type_of<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType,TField,TFieldValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, ussName, read, write);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ussName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "read", ty: "::System::Func_2<TValueType,TFieldValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "write", ty: "::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType,TField,TFieldValue>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TValueType,typename TField,typename TFieldValue>
constexpr ::GlobalNamespace::BaseCompositeField_3_FieldDescription<TValueType,TField,TFieldValue>::BaseCompositeField_3_FieldDescription(::StringW  name, ::StringW  ussName, ::System::Func_2<TValueType,TFieldValue>*  read, ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType,TField,TFieldValue>*  write) noexcept  {
this->name = name;
this->ussName = ussName;
this->read = read;
this->write = write;
}
// Ctor Parameters []
template<typename TValueType,typename TField,typename TFieldValue>
constexpr ::GlobalNamespace::BaseCompositeField_3_FieldDescription<TValueType,TField,TFieldValue>::BaseCompositeField_3_FieldDescription()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseCompositeField`3_FieldDescription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BaseCompositeField`3_FieldDescription)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements {
template<typename TValueType,typename TField,typename TFieldValue>
class FieldDescription_BaseCompositeField_3_WriteDelegate;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TValueType,typename TField,typename TFieldValue>
struct BaseCompositeField_3_FieldDescription;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::BaseCompositeField_3_FieldDescription);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::BaseCompositeField_3_FieldDescription, "UnityEngine.UIElements", "BaseCompositeField`3/FieldDescription");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TValueType,typename TField,typename TFieldValue>
// Is value type: true
// CS Name: UnityEngine.UIElements.BaseCompositeField`3/FieldDescription<TValueType,TField,TFieldValue>
struct CORDL_TYPE BaseCompositeField_3_FieldDescription {
public:
// Declarations
using WriteDelegate = ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType, TField, TFieldValue>;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  ussName, ::System::Func_2<TValueType,TFieldValue>*  read, ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType,TField,TFieldValue>*  write) ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseCompositeField_3_FieldDescription() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ussName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "read", ty: "::System::Func_2<TValueType,TFieldValue>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "write", ty: "::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType,TField,TFieldValue>*", modifiers: "", def_value: None, comment: None }]
constexpr BaseCompositeField_3_FieldDescription(::StringW  name, ::StringW  ussName, ::System::Func_2<TValueType,TFieldValue>*  read, ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType,TField,TFieldValue>*  write) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7265};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field ussName, offset: 0x8, size: 0x8, def value: None
 ::StringW  ussName;

/// @brief Field read, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<TValueType,TFieldValue>*  read;

/// @brief Field write, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<TValueType,TField,TFieldValue>*  write;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

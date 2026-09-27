#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CustomBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
CORDL_MODULE_EXPORT(CustomBinding)
namespace UnityEngine::UIElements {
struct BindingContext;
}
namespace UnityEngine::UIElements {
struct BindingResult;
}
namespace UnityEngine::UIElements {
class CustomBinding_UxmlSerializedData;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CustomBinding;
}
namespace UnityEngine::UIElements {
class CustomBinding_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::CustomBinding*);
MARK_REF_T(::UnityEngine::UIElements::CustomBinding_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::CustomBinding*, "UnityEngine.UIElements", "CustomBinding");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::CustomBinding_UxmlSerializedData*, "UnityEngine.UIElements", "CustomBinding/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.UIElements.Binding
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CustomBinding
class CORDL_TYPE CustomBinding : public ::UnityEngine::UIElements::Binding {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::UIElements::CustomBinding_UxmlSerializedData;

static inline ::UnityEngine::UIElements::CustomBinding* New_ctor() ;

/// @brief Method Update, addr 0xb724a1c, size 0x2c, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::BindingResult Update(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context) ;

/// @brief Method .ctor, addr 0xb7249f4, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomBinding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomBinding(CustomBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomBinding(CustomBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::CustomBinding) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [ExcludeFromDocs]
// Dependencies UnityEngine.UIElements.Binding::UxmlSerializedData
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CustomBinding/UxmlSerializedData
class CORDL_TYPE CustomBinding_UxmlSerializedData : public ::UnityEngine::UIElements::Binding_UxmlSerializedData {
public:
// Declarations
static inline ::UnityEngine::UIElements::CustomBinding_UxmlSerializedData* New_ctor() ;

/// @brief Method .ctor, addr 0xb724a48, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomBinding_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomBinding_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomBinding_UxmlSerializedData(CustomBinding_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomBinding_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomBinding_UxmlSerializedData(CustomBinding_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7193};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::CustomBinding_UxmlSerializedData) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

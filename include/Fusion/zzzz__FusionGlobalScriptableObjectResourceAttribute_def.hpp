#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectResourceAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__FusionGlobalScriptableObjectSourceAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FusionGlobalScriptableObjectResourceAttribute)
namespace Fusion {
struct FusionGlobalScriptableObjectLoadResult;
}
namespace Fusion {
class FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0;
}
namespace Fusion {
class FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1;
}
namespace Fusion {
class FusionGlobalScriptableObject;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Fusion {
class FusionGlobalScriptableObjectResourceAttribute;
}
namespace Fusion {
class FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0;
}
namespace Fusion {
class FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1;
}
// Write type traits
MARK_REF_T(::Fusion::FusionGlobalScriptableObjectResourceAttribute*);
MARK_REF_T(::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0*);
MARK_REF_T(::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObjectResourceAttribute*, "Fusion", "FusionGlobalScriptableObjectResourceAttribute");
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0*, "Fusion", "FusionGlobalScriptableObjectResourceAttribute/<>c__DisplayClass8_0");
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1*, "Fusion", "FusionGlobalScriptableObjectResourceAttribute/<>c__DisplayClass8_1");
// [Preserve]
// Dependencies Fusion.FusionGlobalScriptableObjectSourceAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObjectResourceAttribute
class CORDL_TYPE FusionGlobalScriptableObjectResourceAttribute : public ::Fusion::FusionGlobalScriptableObjectSourceAttribute {
public:
// Declarations
using __c__DisplayClass8_0 = ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0;

using __c__DisplayClass8_1 = ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1;

 __declspec(property(get=get_InstantiateIfLoadedInEditor, put=set_InstantiateIfLoadedInEditor)) bool  InstantiateIfLoadedInEditor;

 __declspec(property(get=get_ResourcePath)) ::StringW  ResourcePath;

/// @brief Field <InstantiateIfLoadedInEditor>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__InstantiateIfLoadedInEditor_k__BackingField, put=__cordl_internal_set__InstantiateIfLoadedInEditor_k__BackingField)) bool  _InstantiateIfLoadedInEditor_k__BackingField;

/// @brief Field <ResourcePath>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResourcePath_k__BackingField, put=__cordl_internal_set__ResourcePath_k__BackingField)) ::StringW  _ResourcePath_k__BackingField;

/// @brief Method Load, addr 0x60e05cc, size 0x3a4, virtual true, abstract: false, final false
inline ::Fusion::FusionGlobalScriptableObjectLoadResult Load(::System::Type*  type) ;

static inline ::Fusion::FusionGlobalScriptableObjectResourceAttribute* New_ctor(::System::Type*  objectType, ::StringW  resourcePath) ;

constexpr bool const& __cordl_internal_get__InstantiateIfLoadedInEditor_k__BackingField() const;

constexpr bool& __cordl_internal_get__InstantiateIfLoadedInEditor_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ResourcePath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ResourcePath_k__BackingField() ;

constexpr void __cordl_internal_set__InstantiateIfLoadedInEditor_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ResourcePath_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x60e057c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  objectType, ::StringW  resourcePath) ;

/// [CompilerGenerated]
/// @brief Method get_InstantiateIfLoadedInEditor, addr 0x60e05bc, size 0x8, virtual false, abstract: false, final false
inline bool get_InstantiateIfLoadedInEditor() ;

/// [CompilerGenerated]
/// @brief Method get_ResourcePath, addr 0x60e05b4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ResourcePath() ;

/// [CompilerGenerated]
/// @brief Method set_InstantiateIfLoadedInEditor, addr 0x60e05c4, size 0x8, virtual false, abstract: false, final false
inline void set_InstantiateIfLoadedInEditor(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObjectResourceAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectResourceAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObjectResourceAttribute(FusionGlobalScriptableObjectResourceAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectResourceAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObjectResourceAttribute(FusionGlobalScriptableObjectResourceAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23421};

/// [CompilerGenerated]
/// @brief Field <ResourcePath>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____ResourcePath_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InstantiateIfLoadedInEditor>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____InstantiateIfLoadedInEditor_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectResourceAttribute, ____ResourcePath_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectResourceAttribute, ____InstantiateIfLoadedInEditor_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionGlobalScriptableObjectResourceAttribute) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObjectResourceAttribute/<>c__DisplayClass8_1
class CORDL_TYPE FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1 : public ::System::Object {
public:
// Declarations
/// @brief Field clone, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_clone, put=__cordl_internal_set_clone)) ::UnityW<::UnityEngine::Object>  clone;

static inline ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1* New_ctor() ;

/// @brief Method <Load>b__1, addr 0x60e098c, size 0x5c, virtual false, abstract: false, final false
inline void _Load_b__1(::Fusion::FusionGlobalScriptableObject*  x) ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_clone() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_clone() ;

constexpr void __cordl_internal_set_clone(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x60e0978, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1(FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1(FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23420};

/// @brief Field clone, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___clone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1, ___clone) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1) == 0x18, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObjectResourceAttribute/<>c__DisplayClass8_0
class CORDL_TYPE FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field instance, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_instance, put=__cordl_internal_set_instance)) ::UnityW<::UnityEngine::Object>  instance;

static inline ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <Load>b__0, addr 0x60e0980, size 0xc, virtual false, abstract: false, final false
inline void _Load_b__0(::Fusion::FusionGlobalScriptableObject*  x) ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_instance() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_instance() ;

constexpr void __cordl_internal_set_instance(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x60e0970, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0(FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0(FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23419};

/// @brief Field instance, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___instance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0, ___instance) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0) == 0x18, "Size mismatch!");

} // namespace end def Fusion

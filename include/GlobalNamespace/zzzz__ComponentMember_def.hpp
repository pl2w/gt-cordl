#pragma once
// IWYU pragma private; include "GlobalNamespace/ComponentMember.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ComponentMember)
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ComponentMember;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ComponentMember*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ComponentMember*, "", "ComponentMember");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ComponentMember
class CORDL_TYPE ComponentMember : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Color)) ::StringW  Color;

 __declspec(property(get=get_IsStarred)) bool  IsStarred;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Field <Color>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Color_k__BackingField, put=__cordl_internal_set__Color_k__BackingField)) ::StringW  _Color_k__BackingField;

/// @brief Field <IsStarred>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsStarred_k__BackingField, put=__cordl_internal_set__IsStarred_k__BackingField)) bool  _IsStarred_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field computedPrefix, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_computedPrefix, put=__cordl_internal_set_computedPrefix)) ::StringW  computedPrefix;

/// @brief Field computedSuffix, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_computedSuffix, put=__cordl_internal_set_computedSuffix)) ::StringW  computedSuffix;

/// @brief Field getValue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_getValue, put=__cordl_internal_set_getValue)) ::System::Func_1<::StringW>*  getValue;

static inline ::GlobalNamespace::ComponentMember* New_ctor(::StringW  name, ::System::Func_1<::StringW>*  getValue, bool  isStarred, ::StringW  color) ;

constexpr ::StringW const& __cordl_internal_get__Color_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Color_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsStarred_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsStarred_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_computedPrefix() const;

constexpr ::StringW& __cordl_internal_get_computedPrefix() ;

constexpr ::StringW const& __cordl_internal_get_computedSuffix() const;

constexpr ::StringW& __cordl_internal_get_computedSuffix() ;

constexpr ::System::Func_1<::StringW>* const& __cordl_internal_get_getValue() const;

constexpr ::System::Func_1<::StringW>*& __cordl_internal_get_getValue() ;

constexpr void __cordl_internal_set__Color_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__IsStarred_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_computedPrefix(::StringW  value) ;

constexpr void __cordl_internal_set_computedSuffix(::StringW  value) ;

constexpr void __cordl_internal_set_getValue(::System::Func_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x566f88c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Func_1<::StringW>*  getValue, bool  isStarred, ::StringW  color) ;

/// [CompilerGenerated]
/// @brief Method get_Color, addr 0x566f884, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Color() ;

/// [CompilerGenerated]
/// @brief Method get_IsStarred, addr 0x566f87c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStarred() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x566f854, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Value, addr 0x566f85c, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentMember() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentMember", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentMember(ComponentMember && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentMember", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentMember(ComponentMember const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{810};

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsStarred>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____IsStarred_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Color>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Color_k__BackingField;

/// @brief Field getValue, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<::StringW>*  ___getValue;

/// @brief Field computedPrefix, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___computedPrefix;

/// @brief Field computedSuffix, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___computedSuffix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ComponentMember, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComponentMember, ____IsStarred_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComponentMember, ____Color_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComponentMember, ___getValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComponentMember, ___computedPrefix) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComponentMember, ___computedSuffix) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ComponentMember) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

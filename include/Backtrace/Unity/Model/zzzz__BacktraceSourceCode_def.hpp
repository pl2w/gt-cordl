#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceSourceCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BacktraceSourceCode)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceSourceCode;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceSourceCode*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceSourceCode*, "Backtrace.Unity.Model", "BacktraceSourceCode");
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceSourceCode
class CORDL_TYPE BacktraceSourceCode : public ::System::Object {
public:
// Declarations
/// @brief Field SOURCE_CODE_PROPERTY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SOURCE_CODE_PROPERTY, put=setStaticF_SOURCE_CODE_PROPERTY)) ::StringW  SOURCE_CODE_PROPERTY;

 __declspec(property(get=get_Text, put=set_Text)) ::StringW  Text;

/// @brief Field Title, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Title, put=__cordl_internal_set_Title)) ::StringW  Title;

/// @brief Field Type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::StringW  Type;

/// @brief Field <Text>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Text_k__BackingField, put=__cordl_internal_set__Text_k__BackingField)) ::StringW  _Text_k__BackingField;

static inline ::Backtrace::Unity::Model::BacktraceSourceCode* New_ctor() ;

/// @brief Method ToJson, addr 0x5f10d00, size 0x1f8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ToJson() ;

constexpr ::StringW const& __cordl_internal_get_Title() const;

constexpr ::StringW& __cordl_internal_get_Title() ;

constexpr ::StringW const& __cordl_internal_get_Type() const;

constexpr ::StringW& __cordl_internal_get_Type() ;

constexpr ::StringW const& __cordl_internal_get__Text_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Text_k__BackingField() ;

constexpr void __cordl_internal_set_Title(::StringW  value) ;

constexpr void __cordl_internal_set_Type(::StringW  value) ;

constexpr void __cordl_internal_set__Text_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f12430, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_SOURCE_CODE_PROPERTY() ;

/// [CompilerGenerated]
/// @brief Method get_Text, addr 0x5f126d8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

static inline void setStaticF_SOURCE_CODE_PROPERTY(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Text, addr 0x5f126e0, size 0x8, virtual false, abstract: false, final false
inline void set_Text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceSourceCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceSourceCode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceSourceCode(BacktraceSourceCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceSourceCode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceSourceCode(BacktraceSourceCode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27602};

/// @brief Field Type, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Type;

/// @brief Field Title, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Title;

/// [CompilerGenerated]
/// @brief Field <Text>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Text_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceSourceCode, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceSourceCode, ___Title) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceSourceCode, ____Text_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceSourceCode) == 0x28, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model

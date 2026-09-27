#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/TypeHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TypeHelper)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Backtrace::Unity::Common {
class TypeHelper;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Common::TypeHelper*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Common::TypeHelper*, "Backtrace.Unity.Common", "TypeHelper");
// Dependencies System.Object
namespace Backtrace::Unity::Common {
// Is value type: false
// CS Name: Backtrace.Unity.Common.TypeHelper
class CORDL_TYPE TypeHelper : public ::System::Object {
public:
// Declarations
/// @brief Field NumericTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NumericTypes, put=setStaticF_NumericTypes)) ::System::Collections::Generic::HashSet_1<::System::Type*>*  NumericTypes;

/// @brief Method IsNumeric, addr 0x5f271dc, size 0x94, virtual false, abstract: false, final false
static inline bool IsNumeric(::System::Type*  myType) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Type*>* getStaticF_NumericTypes() ;

static inline void setStaticF_NumericTypes(::System::Collections::Generic::HashSet_1<::System::Type*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeHelper(TypeHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeHelper(TypeHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27678};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Common::TypeHelper) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Common

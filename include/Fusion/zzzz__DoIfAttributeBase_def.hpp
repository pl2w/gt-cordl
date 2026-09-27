#pragma once
// IWYU pragma private; include "Fusion/DoIfAttributeBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__CompareOperator_def.hpp"
#include "Fusion/zzzz__DecoratingPropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DoIfAttributeBase)
namespace Fusion {
struct CompareOperator;
}
// Forward declare root types
namespace Fusion {
class DoIfAttributeBase;
}
// Write type traits
MARK_REF_T(::Fusion::DoIfAttributeBase*);
DEFINE_IL2CPP_CLASS(::Fusion::DoIfAttributeBase*, "Fusion", "DoIfAttributeBase");
// Dependencies Fusion.CompareOperator, Fusion.DecoratingPropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DoIfAttributeBase
class CORDL_TYPE DoIfAttributeBase : public ::Fusion::DecoratingPropertyAttribute {
public:
// Declarations
/// @brief Field Compare, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Compare, put=__cordl_internal_set_Compare)) ::Fusion::CompareOperator  Compare;

/// @brief Field ConditionMember, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConditionMember, put=__cordl_internal_set_ConditionMember)) ::StringW  ConditionMember;

/// @brief Field ErrorOnConditionMemberNotFound, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_ErrorOnConditionMemberNotFound, put=__cordl_internal_set_ErrorOnConditionMemberNotFound)) bool  ErrorOnConditionMemberNotFound;

/// @brief Field _isDouble, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDouble, put=__cordl_internal_set__isDouble)) bool  _isDouble;

/// @brief Field _longValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__longValue, put=__cordl_internal_set__longValue)) int64_t  _longValue;

static inline ::Fusion::DoIfAttributeBase* New_ctor(::StringW  conditionMember, bool  compareToValue, ::Fusion::CompareOperator  compare) ;

static inline ::Fusion::DoIfAttributeBase* New_ctor(::StringW  conditionMember, int64_t  compareToValue, ::Fusion::CompareOperator  compare) ;

constexpr ::Fusion::CompareOperator const& __cordl_internal_get_Compare() const;

constexpr ::Fusion::CompareOperator& __cordl_internal_get_Compare() ;

constexpr ::StringW const& __cordl_internal_get_ConditionMember() const;

constexpr ::StringW& __cordl_internal_get_ConditionMember() ;

constexpr bool const& __cordl_internal_get_ErrorOnConditionMemberNotFound() const;

constexpr bool& __cordl_internal_get_ErrorOnConditionMemberNotFound() ;

constexpr bool const& __cordl_internal_get__isDouble() const;

constexpr bool& __cordl_internal_get__isDouble() ;

constexpr int64_t const& __cordl_internal_get__longValue() const;

constexpr int64_t& __cordl_internal_get__longValue() ;

constexpr void __cordl_internal_set_Compare(::Fusion::CompareOperator  value) ;

constexpr void __cordl_internal_set_ConditionMember(::StringW  value) ;

constexpr void __cordl_internal_set_ErrorOnConditionMemberNotFound(bool  value) ;

constexpr void __cordl_internal_set__isDouble(bool  value) ;

constexpr void __cordl_internal_set__longValue(int64_t  value) ;

/// @brief Method .ctor, addr 0x5f3d470, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::StringW  conditionMember, bool  compareToValue, ::Fusion::CompareOperator  compare) ;

/// @brief Method .ctor, addr 0x5f3d410, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  conditionMember, int64_t  compareToValue, ::Fusion::CompareOperator  compare) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoIfAttributeBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoIfAttributeBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DoIfAttributeBase(DoIfAttributeBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoIfAttributeBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoIfAttributeBase(DoIfAttributeBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31267};

/// @brief Field _isDouble, offset: 0x15, size: 0x1, def value: None
 bool  ____isDouble;

/// @brief Field _longValue, offset: 0x18, size: 0x8, def value: None
 int64_t  ____longValue;

/// @brief Field Compare, offset: 0x20, size: 0x4, def value: None
 ::Fusion::CompareOperator  ___Compare;

/// @brief Field ConditionMember, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ConditionMember;

/// @brief Field ErrorOnConditionMemberNotFound, offset: 0x30, size: 0x1, def value: None
 bool  ___ErrorOnConditionMemberNotFound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::DoIfAttributeBase, ____isDouble) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Fusion::DoIfAttributeBase, ____longValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::DoIfAttributeBase, ___Compare) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::DoIfAttributeBase, ___ConditionMember) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::DoIfAttributeBase, ___ErrorOnConditionMemberNotFound) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::DoIfAttributeBase) == 0x38, "Size mismatch!");

} // namespace end def Fusion

#pragma once
// IWYU pragma private; include "Fusion/ErrorIfAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DoIfAttributeBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorIfAttribute)
namespace Fusion {
struct CompareOperator;
}
// Forward declare root types
namespace Fusion {
class ErrorIfAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::ErrorIfAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::ErrorIfAttribute*, "Fusion", "ErrorIfAttribute");
// [AttributeUsage((System.AttributeTargets)256, AllowMultiple = true)]
// Dependencies Fusion.DoIfAttributeBase
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ErrorIfAttribute
class CORDL_TYPE ErrorIfAttribute : public ::Fusion::DoIfAttributeBase {
public:
// Declarations
/// @brief Field Message, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

static inline ::Fusion::ErrorIfAttribute* New_ctor(::StringW  conditionMember, int64_t  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare) ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f3d6d0, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  conditionMember, int64_t  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorIfAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorIfAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorIfAttribute(ErrorIfAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorIfAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorIfAttribute(ErrorIfAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31274};

/// @brief Field Message, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ErrorIfAttribute, ___Message) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::ErrorIfAttribute) == 0x40, "Size mismatch!");

} // namespace end def Fusion

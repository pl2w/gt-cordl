#pragma once
// IWYU pragma private; include "Fusion/WarnIfAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DoIfAttributeBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WarnIfAttribute)
namespace Fusion {
struct CompareOperator;
}
// Forward declare root types
namespace Fusion {
class WarnIfAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::WarnIfAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::WarnIfAttribute*, "Fusion", "WarnIfAttribute");
// [AttributeUsage((System.AttributeTargets)448, AllowMultiple = true)]
// Dependencies Fusion.DoIfAttributeBase
namespace Fusion {
// Is value type: false
// CS Name: Fusion.WarnIfAttribute
class CORDL_TYPE WarnIfAttribute : public ::Fusion::DoIfAttributeBase {
public:
// Declarations
/// @brief Field Message, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

static inline ::Fusion::WarnIfAttribute* New_ctor(::StringW  conditionMember, bool  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare) ;

static inline ::Fusion::WarnIfAttribute* New_ctor(::StringW  conditionMember, int64_t  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare) ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f3d8a4, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  conditionMember, bool  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare) ;

/// @brief Method .ctor, addr 0x5f3d924, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  conditionMember, int64_t  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WarnIfAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WarnIfAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WarnIfAttribute(WarnIfAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WarnIfAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WarnIfAttribute(WarnIfAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31289};

/// @brief Field Message, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::WarnIfAttribute, ___Message) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::WarnIfAttribute) == 0x40, "Size mismatch!");

} // namespace end def Fusion

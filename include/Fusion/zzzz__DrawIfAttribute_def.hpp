#pragma once
// IWYU pragma private; include "Fusion/DrawIfAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DoIfAttributeBase_def.hpp"
#include "Fusion/zzzz__DrawIfMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DrawIfAttribute)
namespace Fusion {
struct CompareOperator;
}
namespace Fusion {
struct DrawIfMode;
}
// Forward declare root types
namespace Fusion {
class DrawIfAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::DrawIfAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::DrawIfAttribute*, "Fusion", "DrawIfAttribute");
// [AttributeUsage((System.AttributeTargets)320, AllowMultiple = true)]
// Dependencies Fusion.DoIfAttributeBase, Fusion.DrawIfMode
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DrawIfAttribute
class CORDL_TYPE DrawIfAttribute : public ::Fusion::DoIfAttributeBase {
public:
// Declarations
 __declspec(property(put=set_Hide)) bool  Hide;

/// @brief Field Mode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Mode, put=__cordl_internal_set_Mode)) ::Fusion::DrawIfMode  Mode;

static inline ::Fusion::DrawIfAttribute* New_ctor(::StringW  conditionMember) ;

static inline ::Fusion::DrawIfAttribute* New_ctor(::StringW  conditionMember, bool  compareToValue, ::Fusion::CompareOperator  compare, ::Fusion::DrawIfMode  mode) ;

static inline ::Fusion::DrawIfAttribute* New_ctor(::StringW  conditionMember, int64_t  compareToValue, ::Fusion::CompareOperator  compare, ::Fusion::DrawIfMode  mode) ;

constexpr ::Fusion::DrawIfMode const& __cordl_internal_get_Mode() const;

constexpr ::Fusion::DrawIfMode& __cordl_internal_get_Mode() ;

constexpr void __cordl_internal_set_Mode(::Fusion::DrawIfMode  value) ;

/// @brief Method .ctor, addr 0x5f3d5d0, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::StringW  conditionMember) ;

/// @brief Method .ctor, addr 0x5f3d4ec, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  conditionMember, bool  compareToValue, ::Fusion::CompareOperator  compare, ::Fusion::DrawIfMode  mode) ;

/// @brief Method .ctor, addr 0x5f3d560, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  conditionMember, int64_t  compareToValue, ::Fusion::CompareOperator  compare, ::Fusion::DrawIfMode  mode) ;

/// @brief Method set_Hide, addr 0x5f3d4d4, size 0x18, virtual false, abstract: false, final false
inline void set_Hide(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawIfAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawIfAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawIfAttribute(DrawIfAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawIfAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawIfAttribute(DrawIfAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31270};

/// @brief Field Mode, offset: 0x34, size: 0x4, def value: None
 ::Fusion::DrawIfMode  ___Mode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::DrawIfAttribute, ___Mode) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Fusion::DrawIfAttribute) == 0x38, "Size mismatch!");

} // namespace end def Fusion

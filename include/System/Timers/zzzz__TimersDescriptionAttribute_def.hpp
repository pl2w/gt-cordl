#pragma once
// IWYU pragma private; include "System/Timers/TimersDescriptionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__DescriptionAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TimersDescriptionAttribute)
// Forward declare root types
namespace System::Timers {
class TimersDescriptionAttribute;
}
// Write type traits
MARK_REF_T(::System::Timers::TimersDescriptionAttribute*);
DEFINE_IL2CPP_CLASS(::System::Timers::TimersDescriptionAttribute*, "System.Timers", "TimersDescriptionAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.ComponentModel.DescriptionAttribute
namespace System::Timers {
// Is value type: false
// CS Name: System.Timers.TimersDescriptionAttribute
class CORDL_TYPE TimersDescriptionAttribute : public ::System::ComponentModel::DescriptionAttribute {
public:
// Declarations
 __declspec(property(get=get_Description)) ::StringW  Description;

/// @brief Field replaced, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_replaced, put=__cordl_internal_set_replaced)) bool  replaced;

static inline ::System::Timers::TimersDescriptionAttribute* New_ctor(::StringW  description) ;

constexpr bool const& __cordl_internal_get_replaced() const;

constexpr bool& __cordl_internal_get_replaced() ;

constexpr void __cordl_internal_set_replaced(bool  value) ;

/// @brief Method .ctor, addr 0xad09390, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  description) ;

/// @brief Method get_Description, addr 0xad093f8, size 0x4c, virtual true, abstract: false, final false
inline ::StringW get_Description() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimersDescriptionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimersDescriptionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimersDescriptionAttribute(TimersDescriptionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimersDescriptionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimersDescriptionAttribute(TimersDescriptionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9961};

/// @brief Field replaced, offset: 0x18, size: 0x1, def value: None
 bool  ___replaced;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Timers::TimersDescriptionAttribute, ___replaced) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Timers::TimersDescriptionAttribute) == 0x20, "Size mismatch!");

} // namespace end def System::Timers

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/EnabledPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__FoldoutWithEnabledButtonAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnabledPropertyAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class EnabledPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::EnabledPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::EnabledPropertyAttribute*, "Unity.Cinemachine", "EnabledPropertyAttribute");
// Dependencies Unity.Cinemachine.FoldoutWithEnabledButtonAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.EnabledPropertyAttribute
class CORDL_TYPE EnabledPropertyAttribute : public ::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute {
public:
// Declarations
/// @brief Field ToggleDisabledText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToggleDisabledText, put=__cordl_internal_set_ToggleDisabledText)) ::StringW  ToggleDisabledText;

static inline ::Unity::Cinemachine::EnabledPropertyAttribute* New_ctor(::StringW  enabledProperty, ::StringW  toggleText) ;

constexpr ::StringW const& __cordl_internal_get_ToggleDisabledText() const;

constexpr ::StringW& __cordl_internal_get_ToggleDisabledText() ;

constexpr void __cordl_internal_set_ToggleDisabledText(::StringW  value) ;

/// @brief Method .ctor, addr 0xaeb3648, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  enabledProperty, ::StringW  toggleText) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnabledPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnabledPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnabledPropertyAttribute(EnabledPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnabledPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnabledPropertyAttribute(EnabledPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22293};

/// @brief Field ToggleDisabledText, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ToggleDisabledText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::EnabledPropertyAttribute, ___ToggleDisabledText) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::EnabledPropertyAttribute) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine

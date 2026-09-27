#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GUI/EnumDisplayAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumDisplayAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::GUI {
class EnumDisplayAttribute;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute*, "Unity.XR.CoreUtils.GUI", "EnumDisplayAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::XR::CoreUtils::GUI {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.GUI.EnumDisplayAttribute
class CORDL_TYPE EnumDisplayAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field Names, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Names, put=__cordl_internal_set_Names)) ::ArrayW<::StringW>  Names;

/// @brief Field Values, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Values, put=__cordl_internal_set_Values)) ::ArrayW<int32_t>  Values;

static inline ::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute* New_ctor(/* [ParamArray] */ ::ArrayW<::System::Object*>  enumValues) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_Names() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_Names() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_Values() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_Values() ;

constexpr void __cordl_internal_set_Names(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_Values(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0xb3fde28, size 0x220, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<::System::Object*>  enumValues) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumDisplayAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumDisplayAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumDisplayAttribute(EnumDisplayAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumDisplayAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumDisplayAttribute(EnumDisplayAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30470};

/// @brief Field Names, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___Names;

/// @brief Field Values, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___Values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute, ___Names) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute, ___Values) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute) == 0x28, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::GUI

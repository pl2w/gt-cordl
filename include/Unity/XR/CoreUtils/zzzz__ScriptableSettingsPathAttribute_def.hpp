#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ScriptableSettingsPathAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScriptableSettingsPathAttribute)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ScriptableSettingsPathAttribute;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*, "Unity.XR.CoreUtils", "ScriptableSettingsPathAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.ScriptableSettingsPathAttribute
class CORDL_TYPE ScriptableSettingsPathAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Path)) ::StringW  Path;

/// @brief Field m_Path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Path, put=__cordl_internal_set_m_Path)) ::StringW  m_Path;

static inline ::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute* New_ctor(::StringW  path) ;

constexpr ::StringW const& __cordl_internal_get_m_Path() const;

constexpr ::StringW& __cordl_internal_get_m_Path() ;

constexpr void __cordl_internal_set_m_Path(::StringW  value) ;

/// @brief Method .ctor, addr 0xb3eddd8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

/// @brief Method get_Path, addr 0xb3eddd0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableSettingsPathAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableSettingsPathAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableSettingsPathAttribute(ScriptableSettingsPathAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableSettingsPathAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableSettingsPathAttribute(ScriptableSettingsPathAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30378};

/// @brief Field m_Path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute, ___m_Path) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils

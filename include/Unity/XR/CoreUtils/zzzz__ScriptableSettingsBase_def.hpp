#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ScriptableSettingsBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScriptableSettingsBase)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ScriptableSettingsBase;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::ScriptableSettingsBase*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::ScriptableSettingsBase*, "Unity.XR.CoreUtils", "ScriptableSettingsBase");
// Dependencies UnityEngine.ScriptableObject
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.ScriptableSettingsBase
class CORDL_TYPE ScriptableSettingsBase : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field k_InvalidCharacters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InvalidCharacters, put=setStaticF_k_InvalidCharacters)) ::ArrayW<char16_t>  k_InvalidCharacters;

/// @brief Field k_InvalidStrings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InvalidStrings, put=setStaticF_k_InvalidStrings)) ::ArrayW<::StringW>  k_InvalidStrings;

/// @brief Field k_PathTrimChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_PathTrimChars, put=setStaticF_k_PathTrimChars)) ::ArrayW<char16_t>  k_PathTrimChars;

/// @brief Method Awake, addr 0xb3f9f50, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetInstanceByType, addr 0xb3f9e90, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityW<::Unity::XR::CoreUtils::ScriptableSettingsBase> GetInstanceByType(::System::Type*  settingsType) ;

static inline ::Unity::XR::CoreUtils::ScriptableSettingsBase* New_ctor() ;

/// @brief Method OnEnable, addr 0xb3f9f54, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLoaded, addr 0xb3f9f60, size 0x4, virtual true, abstract: false, final false
inline void OnLoaded() ;

/// @brief Method ValidatePath, addr 0xb3f9f64, size 0x4d8, virtual false, abstract: false, final false
static inline bool ValidatePath(::StringW  path, ::by_ref<::StringW>  cleanedPath) ;

/// @brief Method .ctor, addr 0xb3fa43c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<char16_t> getStaticF_k_InvalidCharacters() ;

static inline ::ArrayW<::StringW> getStaticF_k_InvalidStrings() ;

static inline ::ArrayW<char16_t> getStaticF_k_PathTrimChars() ;

static inline void setStaticF_k_InvalidCharacters(::ArrayW<char16_t>  value) ;

static inline void setStaticF_k_InvalidStrings(::ArrayW<::StringW>  value) ;

static inline void setStaticF_k_PathTrimChars(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableSettingsBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableSettingsBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableSettingsBase(ScriptableSettingsBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableSettingsBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableSettingsBase(ScriptableSettingsBase const& ) = delete;

/// @brief Field NullPathMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  NullPathMessage{u"Path cannot be null"};

/// @brief Field PathExceptionMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  PathExceptionMessage{u"Exception caught trying to create path."};

/// @brief Field PathWithInvalidCharacterMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  PathWithInvalidCharacterMessage{u"Paths on Windows cannot contain the following characters: \':\', \'*\', \'?\', \'\"\', \'<\', \'>\', \'|\'"};

/// @brief Field PathWithPeriodMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  PathWithPeriodMessage{u"Path cannot contain the character \'.\' before or after a directory separator"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30427};

/// @brief Field k_AbsolutePathMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  k_AbsolutePathMessage{u"Path cannot be absolute"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::ScriptableSettingsBase) == 0x18, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils

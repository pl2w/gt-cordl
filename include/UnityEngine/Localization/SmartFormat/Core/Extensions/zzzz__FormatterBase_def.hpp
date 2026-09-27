#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Extensions/FormatterBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FormatterBase)
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormatter;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class FormatterBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*, "UnityEngine.Localization.SmartFormat.Core.Extensions", "FormatterBase");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase
class CORDL_TYPE FormatterBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

 __declspec(property(get=get_Names, put=set_Names)) ::ArrayW<::StringW>  Names;

/// @brief Field m_Names, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Names, put=__cordl_internal_set_m_Names)) ::ArrayW<::StringW>  m_Names;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb0493cc, size 0x54, virtual true, abstract: false, final false
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb049420, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method TryEvaluateFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_Names() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_Names() ;

constexpr void __cordl_internal_set_m_Names(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xb049424, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultNames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

/// @brief Method get_Names, addr 0xb0493bc, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<::StringW> get_Names() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter* i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatter() noexcept;

/// @brief Method set_Names, addr 0xb0493c4, size 0x8, virtual true, abstract: false, final true
inline void set_Names(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatterBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatterBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatterBase(FormatterBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatterBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatterBase(FormatterBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25239};

/// [SerializeField]
/// @brief Field m_Names, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_Names;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase, ___m_Names) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Extensions

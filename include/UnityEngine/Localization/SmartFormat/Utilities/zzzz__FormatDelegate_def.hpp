#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/FormatDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FormatDelegate)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Utilities {
class FormatDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate*, "UnityEngine.Localization.SmartFormat.Utilities", "FormatDelegate");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.FormatDelegate
class CORDL_TYPE FormatDelegate : public ::System::Object {
public:
// Declarations
/// @brief Field getFormat1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_getFormat1, put=__cordl_internal_set_getFormat1)) ::System::Func_2<::StringW,::StringW>*  getFormat1;

/// @brief Field getFormat2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_getFormat2, put=__cordl_internal_set_getFormat2)) ::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*  getFormat2;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate* New_ctor(::System::Func_2<::StringW,::StringW>*  getFormat) ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate* New_ctor(::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*  getFormat) ;

/// @brief Method ToString, addr 0xb02febc, size 0x38, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

constexpr ::System::Func_2<::StringW,::StringW>* const& __cordl_internal_get_getFormat1() const;

constexpr ::System::Func_2<::StringW,::StringW>*& __cordl_internal_get_getFormat1() ;

constexpr ::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>* const& __cordl_internal_get_getFormat2() const;

constexpr ::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*& __cordl_internal_get_getFormat2() ;

constexpr void __cordl_internal_set_getFormat1(::System::Func_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_getFormat2(::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xb02fe5c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Func_2<::StringW,::StringW>*  getFormat) ;

/// @brief Method .ctor, addr 0xb02fe8c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*  getFormat) ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatDelegate(FormatDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatDelegate(FormatDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25157};

/// @brief Field getFormat1, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<::StringW,::StringW>*  ___getFormat1;

/// @brief Field getFormat2, offset: 0x18, size: 0x8, def value: None
 ::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*  ___getFormat2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate, ___getFormat1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate, ___getFormat2) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
